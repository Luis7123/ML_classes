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
/// \file EDPrimaryGeneratorAction.cc
/// \brief Implementation of the EDPrimaryGeneratorAction class

#include "EDPrimaryGeneratorAction.hh"

#include "G4Event.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4PrimaryParticle.hh"
#include "G4PrimaryVertex.hh"
#include "G4SystemOfUnits.hh"
#include "G4ios.hh"

#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "Randomize.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

EDPrimaryGeneratorAction::EDPrimaryGeneratorAction()
: G4VUserPrimaryGeneratorAction()
{
G4int nofParticles = 1;
  fParticleGun = new G4ParticleGun(nofParticles);

  // default particle kinematic

  G4ParticleDefinition* particleDefinition
    = G4ParticleTable::GetParticleTable()->FindParticle("proton");

  fParticleGun->SetParticleDefinition(particleDefinition);
  fParticleGun->SetParticleEnergy(3.0*GeV);



  double theta = G4UniformRand()  * 10; 
  double phi = G4UniformRand() * 25;

  double thetaRad = theta * (3.14159 / 180.0);
  double phiRad = phi * (3.14159 / 180.0);

  double x = sin(thetaRad) * sin(phiRad);
  double y = sin(thetaRad) * cos(phiRad);
  double z = cos(thetaRad);

  G4ThreeVector randomDirection(x, y, z);
  fParticleGun->SetParticleMomentumDirection(randomDirection);

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

EDPrimaryGeneratorAction::~EDPrimaryGeneratorAction()
{
  delete fParticleGun;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void EDPrimaryGeneratorAction::GeneratePrimaries(G4Event* event)
{
  //this function is called at the begining of ecah event
  //

  // Define particle properties
  G4String particleName = "proton";
  //G4String particleName = "geantino";
  G4ThreeVector position(0, 0, -9.*m);   
  G4ThreeVector momentum(0, 0, 1.*GeV);
  G4double time = 0;
  
  // Get particle definition from G4ParticleTable
  G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
  G4ParticleDefinition* particleDefinition 
    = particleTable->FindParticle(particleName);
  if ( ! particleDefinition ) {
    G4cerr << "Error: " << particleName << " not found in G4ParticleTable" << G4endl;
    exit(1);
  }  
    
  // Create primary particle
  G4PrimaryParticle* primaryParticle = new G4PrimaryParticle(particleDefinition);
  primaryParticle->SetMomentum(momentum.x(), momentum.y(), momentum.z());
  primaryParticle->SetMass(particleDefinition->GetPDGMass());
  primaryParticle->SetCharge( particleDefinition->GetPDGCharge());

  // Create vertex 
  G4PrimaryVertex* vertex = new G4PrimaryVertex(position, time);
  vertex->SetPrimary(primaryParticle);
  event->AddPrimaryVertex(vertex);

  
  fParticleGun->SetParticlePosition(G4ThreeVector(0., 0., 2.*km));

  fParticleGun->GeneratePrimaryVertex(event);

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


