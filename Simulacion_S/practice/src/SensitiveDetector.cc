#include "SensitiveDetector.hh"
#include "G4AnalysisManager.hh"
#include "G4HCofThisEvent.hh"
#include "G4SDManager.hh"
#include "G4TouchableHistory.hh"
#include "G4Step.hh"
#include "G4ios.hh"
#include "G4RootAnalysisManager.hh"

namespace med_linac {

SensitiveDetector::SensitiveDetector(const G4String& name)
    : G4VSensitiveDetector(name) {}

SensitiveDetector::~SensitiveDetector() {}

void SensitiveDetector::Initialize(G4HCofThisEvent* hce) {
    // Initialization logic for the hits collection
}

G4bool SensitiveDetector::ProcessHits(G4Step* step, G4TouchableHistory* history) {
    G4double edep = step->GetTotalEnergyDeposit();

    G4Track* track = step->GetTrack();
    G4double trackLength = track->GetTrackLength();

    G4RootAnalysisManager* analysisManager = G4RootAnalysisManager::Instance();
    analysisManager->FillH1(0, edep);
    analysisManager->FillH1(1, trackLength);

    return true;
}

void SensitiveDetector::EndOfEvent(G4HCofThisEvent* hce) {
    // Finalization logic at the end of the event
}

}  // namespace med_linac

