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
/// \file EDEmCalorimeterHit.hh
/// \brief Definition of the EDEmCalorimeterHit class
//

#ifndef EDEmCalorimeterHit_h
#define EDEmCalorimeterHit_h 1

#include "G4VHit.hh"
#include "G4THitsCollection.hh"
#include "G4Allocator.hh"
#include "G4ThreeVector.hh"
#include "G4Threading.hh"


class EDEmCalorimeterHit : public G4VHit
{
  public:
    EDEmCalorimeterHit();
    virtual ~EDEmCalorimeterHit();
    EDEmCalorimeterHit(const EDEmCalorimeterHit& right);
    const EDEmCalorimeterHit& operator=(const EDEmCalorimeterHit& right);
    int operator==(const EDEmCalorimeterHit& right) const;

    inline void* operator new(size_t);
    inline void  operator delete(void* hit);

    // add setter/getter methods
    void Draw() override{}
    void Print() override;

    void Add(G4double de, G4double dl);

    G4double GetEdep() const;
    G4double GetTrackLength() const;

  private:
    // add data members
    G4double fEdep = 0.;
    G4double fTrackLength = 0.;
};

typedef G4THitsCollection<EDEmCalorimeterHit> EDEmCalorimeterHitsCollection;

extern G4Allocator<EDEmCalorimeterHit>* EDEmCalorimeterHitAllocator;

inline void* EDEmCalorimeterHit::operator new(size_t)
{
  if (! EDEmCalorimeterHitAllocator)
        EDEmCalorimeterHitAllocator = new G4Allocator<EDEmCalorimeterHit>;
  return (void*)EDEmCalorimeterHitAllocator->MallocSingle();
}

inline void EDEmCalorimeterHit::operator delete(void* hit)
{
  EDEmCalorimeterHitAllocator->FreeSingle((EDEmCalorimeterHit*) hit);
}

inline void EDEmCalorimeterHit::Add(G4double de, G4double dl){
    fEdep += de;
    fTrackLength += dl;
}

inline G4double EDEmCalorimeterHit::GetEdep() const {
    return fEdep;
}

inline G4double EDEmCalorimeterHit::GetTrackLength() const {
    return fTrackLength;
}


#endif


