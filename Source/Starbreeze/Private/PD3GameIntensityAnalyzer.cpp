#include "PD3GameIntensityAnalyzer.h"

UPD3GameIntensityAnalyzer::UPD3GameIntensityAnalyzer() {
    this->SystemStates[0] = NULL;
    this->SystemStates[1] = NULL;
    this->SystemStates[2] = NULL;
    this->SystemStates[3] = NULL;
    this->SystemStates[4] = NULL;
    this->SystemStates[5] = NULL;
    this->SystemStates[6] = NULL;
    this->SystemStates[7] = NULL;
    this->SystemStates[8] = NULL;
    this->MusicSwitches[0] = NULL;
    this->MusicSwitches[1] = NULL;
    this->MusicSwitches[2] = NULL;
    this->MusicSwitches[3] = NULL;
    this->MusicSwitches[4] = NULL;
    this->MusicSwitches[5] = NULL;
    this->MusicSwitches[6] = NULL;
    this->MusicSwitches[7] = NULL;
    this->MusicSwitches[8] = NULL;
    this->SuspenseSwitches.AddDefaulted(5);
    this->AnticipationDialog = NULL;
    this->AssaultDialog = NULL;
    this->ControlDialog = NULL;
    this->PointOfNoReturnDialog = NULL;
    this->PointOfNoReturnReminderDialog = NULL;
    this->HUDGlitchMaterial = NULL;
    this->GlitchTickInterval = 0.50f;
    this->GlitchStrengthModifier = 1.00f;
    this->GlitchMinimumDotModifier = 0.10f;
    this->GlitchStrengthParameterName = TEXT("OffsetDistortion_1");
    this->GlitchTextureParameterName = TEXT("UIGlitch");
    this->GlitchActiveParameterName = TEXT("Active");
    this->HUDGlitchDynamicMaterialInstance = NULL;
}

void UPD3GameIntensityAnalyzer::RemoveGlitchEffectSourceActor(AActor* Actor) {
}

void UPD3GameIntensityAnalyzer::OnExitedActionPhase() {
}

void UPD3GameIntensityAnalyzer::HandleSuspenseValueChanged(uint8 NewValue) {
}

void UPD3GameIntensityAnalyzer::HandleProgressionIndexChanged() {
}

void UPD3GameIntensityAnalyzer::HandleGameStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void UPD3GameIntensityAnalyzer::HandleBagSecured(const FSBZBagHandle& BagHandle, int32 SecuredCount, int32 TotalLeftToSecure) {
}

UPD3GameIntensityAnalyzer* UPD3GameIntensityAnalyzer::GetGameIntensityAnalyzer(UObject* WorldContextObject) {
    return NULL;
}

void UPD3GameIntensityAnalyzer::AddGlitchRetainerBox(URetainerBox* RetainerBox) {
}

void UPD3GameIntensityAnalyzer::AddGlitchEffectSourceActor(AActor* Actor, float Range) {
}


