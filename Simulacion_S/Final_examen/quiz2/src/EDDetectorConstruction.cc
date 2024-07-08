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
#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4SystemOfUnits.hh"
#include "G4Sphere.hh"


#include "G4Material.hh"
#include "G4PVReplica.hh"
#include "G4GlobalMagFieldMessenger.hh"
#include "G4AutoDelete.hh"

#include "G4GeometryManager.hh"
#include "G4PhysicalVolumeStore.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4SolidStore.hh"
#include "G4PhysicalConstants.hh"

#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4PVReplica.hh"
#include "G4GlobalMagFieldMessenger.hh"
#include "G4AutoDelete.hh"

#include "G4GeometryManager.hh"
#include "G4PhysicalVolumeStore.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4SolidStore.hh"

#include "G4VisAttributes.hh"
#include "G4Colour.hh"

#include "G4PhysicalConstants.hh"
#include "G4SystemOfUnits.hh"


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
  G4Material* argon = nistManager->FindOrBuildMaterial("G4_lAr");
     // There is no need to test if materials were built/found
       // as G4NistManager would issue an error otherwise
       // Try the code with "XYZ".      
  
  // Option to switch on/off checking of volumes overlaps
   G4bool checkOverlaps = true;

  //     
  // World
  //
  G4double r1 = 0.*km;
  G4double r2 = 30.*km;

  // world volume

  G4Sphere* worldS = new G4Sphere("World", r1, r2, 0,360.*deg,0,360.*deg); 
      
  G4LogicalVolume* worldLV                         
    = new G4LogicalVolume(worldS, air, "World");
                                   
  G4VPhysicalVolume* worldPV
    = new G4PVPlacement(0,                     //no rotation
                      G4ThreeVector(),       //at (0,0,0)
                      worldLV,               //its logical volume
                      "World",               //its name
                      0,                     //its mother  volume
                      false,                 //no boolean operation
                      0,                     //copy number
                      checkOverlaps);        //overlaps checking
 

 //second sphere
  
  G4double rr1 = 0.*km;
  G4double rr2 = 5.*km;

  // world volume

  G4Sphere* sphere1 = new G4Sphere("sphere1", 0, rr2, 0,360.*deg,0,360.*deg); 

  G4LogicalVolume* sphere1LV
    = new G4LogicalVolume(sphere1, argon, "sphere1");

  G4VPhysicalVolume* sphere1PV
    = new G4PVPlacement(0,                     //no rotation
                      G4ThreeVector(),       //at (0,0,0)
                      sphere1LV,               //its logical volume
                      "sphere1",               //its name
                      worldLV,                     //its mother  volume
                      false,                 //no boolean operation
                      0,                     //copy number
                      checkOverlaps);        //overlaps checking


  //always return the physical World
  //

  
  return worldPV;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void EDDetectorConstruction::ConstructSDandField()
{
  // Create global magnetic field messenger.
  // Uniform magnetic field is then created automatically if
  // the field value is not zero.
  G4ThreeVector fieldValue;
  fMagFieldMessenger = new G4GlobalMagFieldMessenger(fieldValue);
  fMagFieldMessenger->SetVerboseLevel(1);

  // Register the field messenger for deleting
  G4AutoDelete::Register(fMagFieldMessenger);
}
