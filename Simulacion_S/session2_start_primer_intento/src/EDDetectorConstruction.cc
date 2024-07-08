//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id$
//
/// \file EDDetectorConstruction.cc
/// \brief Implementation of the EDDetectorConstruction class

#include "EDDetectorConstruction.hh"

#include "G4NistManager.hh"
#include "G4Material.hh"
#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"


// coloring
#include "G4VisAttributes.hh"
#include "G4Color.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

EDDetectorConstruction::EDDetectorConstruction()
: G4VUserDetectorConstruction()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

EDDetectorConstruction::~EDDetectorConstruction()
{ }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4VPhysicalVolume* EDDetectorConstruction::Construct()
{  
  // Get nist material manager
  G4NistManager* nistManager = G4NistManager::Instance();

  // Build materials
  G4Material* galactic = nistManager->FindOrBuildMaterial("G4_Galactic");
  G4Material* air = nistManager->FindOrBuildMaterial("G4_AIR");
  G4Material* CsI = nistManager->FindOrBuildMaterial("G4_CESIUM_IODIDE");
  G4Material* argon = nistManager->FindOrBuildMaterial("G4_Ar");
  G4Material* copper = nistManager->FindOrBuildMaterial("G4_cu");
      
       // There is no need to test if materials were built/found
       // as G4NistManager would issue an error otherwise
       // Try the code with "XYZ".  
       
  // Print all materials
  G4cout << *(G4Material::GetMaterialTable()) << G4endl;         
  
  // Option to switch on/off checking of volumes overlaps
  G4bool checkOverlaps = true;

  //     
  // World
  //
  G4double hx = 10*m;
  G4double hy = 3.*m;
  G4double hz = 10*m;
  
  // world volume
  G4Box* worldS = new G4Box("World", hx, hy, hz); 
      
  G4LogicalVolume* worldLV                         
    = new G4LogicalVolume(worldS, galactic, "World");
                                   
  G4VPhysicalVolume* worldPV
    = new G4PVPlacement(0,                     //no rotation
                      G4ThreeVector(),       //at (0,0,0)
                      worldLV,               //its logical volume
                      "World",               //its name
                      0,                     //its mother  volume
                      false,                 //no boolean operation
                      0,                     //copy number
                      checkOverlaps);        //overlaps checking

  //
  // Tube
  //
  G4double rmin = 0.;
  G4double rmax = 1.*m;
  hz = 1.*m;
  G4double phimin = 0.;
  G4double dphi = 360.*deg;
  
  // tube volume
  G4VSolid* tubeS = new G4Tubs("Tube", rmin, rmax, hz, phimin, dphi);
  
  G4LogicalVolume* tubeLV
    = new G4LogicalVolume(tubeS, galactic, "Tube");
 
  new G4PVPlacement(0, 
                    G4ThreeVector(),       //at (0,0,0)
                    tubeLV,                //its logical volume
                    "Tube",                //its name
                    worldLV,               //its mother  volume
                    false,                 //no boolean operation
                    0,                     //copy number
                    checkOverlaps);        //overlaps checking

  // First arm
  hx = 1.5*m;
  hy = 1.*m;
  hz = 3.*m;
  G4VSolid* firstArmS = new G4Box("FirstArmS", hx, hy, hz);
  G4LogicalVolume* firstArmLV
    = new G4LogicalVolume(firstArmS, air, "FirstArm");
    
  G4double zpos = -5.*m;   
  new G4PVPlacement(0, 
                    G4ThreeVector(0, 0, zpos), 
                    firstArmLV,            //its logical volume
                    "FirstArm",            //its name
                    worldLV,               //its mother  volume
                    false,                 //no boolean operation
                    1,                     //copy number
                    checkOverlaps);        //overlaps checking

  // Drift chambers in First arm
  hx = 1.*m;
  hy = 30.*cm;
  hz = 1.*cm;
  G4VSolid* chamber1S = new G4Box("Chamber1S", hx, hy, hz);
  G4LogicalVolume* chamber1LV
    = new G4LogicalVolume(chamber1S, galactic, "Chamber1");

  G4double dz = 0.5*m;
  for (G4int i=0; i<5; ++i) {
    G4double zposi = (i-2)*dz;  
    new G4PVPlacement(0, 
                    G4ThreeVector(0, 0, zposi),
                    chamber1LV,            //its logical volume
                    "Chamber1",            //its name
                    firstArmLV,            //its mother  volume
                    false,                 //no boolean operation
                    i,                     //copy number
                    checkOverlaps);        //overlaps checking
  }
  
  // green color creation
  G4Color green(0.0, 1.0, 0.0);

  // creating visual
  G4VisAttributes* wireVisAtt = new G4VisAttributes(green);
  
  // Wire plane in drift chambers in First arm
  hx = 1.*m;
  hy = 30.*cm;
  hz = 0.1*mm;
  G4VSolid* wirePlane1S = new G4Box("WirePlane1S", hx, hy, hz);
  G4LogicalVolume* wirePlane1LV
    = new G4LogicalVolume(wirePlane1S, galactic, "WirePlane1");
  new G4PVPlacement(0, 
                    G4ThreeVector(),       //at (0,0,0)
                    wirePlane1LV,          //its logical volume
                    "WirePlane1",          //its name
                    chamber1LV,               //its mother  volume
                    false,                 //no boolean operation
                    0,                     //copy number
                    checkOverlaps);        //overlaps checking

  wirePlane1LV->SetVisAttributes(wireVisAtt);
  //sECOND ARM

  hx = 1.5*m;
  hy = 1.*m;
  hz = 3.*m;
  G4VSolid* secondArmS = new G4Box("SecondArmS", hx, hy, hz);
  G4LogicalVolume* secondArmLV
    = new G4LogicalVolume(secondArmS, air, "SecondArm");

  G4double z2pos = 5.*m;
  new G4PVPlacement(0,
                    G4ThreeVector(0, 0, z2pos),
                    secondArmLV,            //its logical volume
                    "SecondArm",            //its name
                    worldLV,               //its mother  volume
                    false,                 //no boolean operation
                    1,                     //copy number
                    checkOverlaps);        //overlaps checking

  // Drift chambers in Second Arm
  hx = 1.5*m;
  hy = 30.*cm;
  hz = 1.*cm;
  G4VSolid* chamber2S = new G4Box("Chamber2S", hx, hy, hz);
  G4LogicalVolume* chamber2LV
    = new G4LogicalVolume(chamber2S,argon, "Chamber2");

  G4double dz2 = 0.5*m;
  for (G4int i=0; i<5; ++i) {
    G4double zposi = (i-2)*dz2;
    new G4PVPlacement(0,
                    G4ThreeVector(0, 0, zposi),
                    chamber2LV,            //its logical volume
                    "Chamber2",            //its name
                    secondArmLV,            //its mother  volume
                    false,                 //no boolean operation
                    i,                     //copy number
                    checkOverlaps);        //overlaps checking
  }

  // Wire plane in drift chambers in First arm
  hx = 1.5*m;
  hy = 30.*cm;
  hz = 0.1*mm;
  G4VSolid* wirePlane2S = new G4Box("WirePlane2S", hx, hy, hz);
  G4LogicalVolume* wirePlane2LV
    = new G4LogicalVolume(wirePlane2S, copper, "WirePlane2");
  new G4PVPlacement(0,
                    G4ThreeVector(),       //at (0,0,0)
                    wirePlane2LV,          //its logical volume
                    "WirePlane2",          //its name
                    chamber2LV,               //its mother  volume
                    false,                 //no boolean operation
                    1,                     //copy number
                    checkOverlaps);        //overlaps checking


  wirePlane2LV->SetVisAttributes(wireVisAtt);
  

  // Calorimeter
  G4Color yellow(1.0, 1.0, 0.0);

  // creating visual aesthetics
  G4VisAttributes* calorimeterVisAtt = new G4VisAttributes(yellow);
   

  
  hx = 1.5*m;
  hy = 30.*cm;
  hz = 15.*cm;
  G4VSolid* calorimeterS = new G4Box("CalorimeterS", hx, hy, hz);
  G4LogicalVolume* calorimeterLV
    = new G4LogicalVolume(calorimeterS,CsI, "Calorimeter");

  G4double dx = 0.1*cm;
  for (G4int i=0; i<15; ++i) {
    G4double xposi = -(i)*dx;
    new G4PVPlacement(0,
                    G4ThreeVector(xposi, 0, 2.*m),
                    calorimeterLV,            //its logical volume
                    "Calorimeter",            //its name
                    secondArmLV,            //its mother  volume
                    false,                 //no boolean operation
                    i,                     //copy number
                    checkOverlaps);        //overlaps checking
  
  calorimeterLV->SetVisAttributes(calorimeterVisAtt);  
  }
  
  //always return the physical World
  //
  return worldPV;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
