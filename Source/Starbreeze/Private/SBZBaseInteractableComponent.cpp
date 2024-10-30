#include "SBZBaseInteractableComponent.h"

USBZBaseInteractableComponent::USBZBaseInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NormalDistance = 200.00f;
    this->PitchDistance = 200.00f;
    this->bIgnoreDistanceValidation = false;
    this->Requirement = NULL;
    this->NativeRequirement = NULL;
    this->Priority = 0;
    this->Duration = 1.00f;
    this->Text = FText::FromString(TEXT("Interact"));
    this->bIsInputConsumed = true;
    this->bIsScreenInteract = false;
    this->bIsSignalInteract = false;
    this->bOverrideScreenInteractDistance = false;
    this->bOverrideScreenInteractAngle = false;
    this->bOverrideScreenInteractPendingDelay = false;
    this->bIsRequirementsCheckedEveryTick = false;
    this->ScreenInteractDistance = 1000.00f;
    this->MinScreenInteractDegrees = 30.00f;
    this->MinScreenInteractDot = 0.87f;
    this->PendingOnScreenDelay = 0.00f;
    this->OnStart2DAudioEvent = NULL;
    this->OnStart3DAudioEvent = NULL;
    this->OnFinish2DAudioEvent = NULL;
    this->OnFinish3DAudioEvent = NULL;
    this->OnCancel2DAudioEvent = NULL;
    this->OnCancel3DAudioEvent = NULL;
    this->StartComment = NULL;
    this->CompletedComment = NULL;
    this->CancelComment = NULL;
    this->ModeIndex = 0;
    this->AnimationName = TEXT("Interact_Equipped_Montage");
    this->AnimatedInteractionData = NULL;
    this->bIsScramblerAffected = false;
}

void USBZBaseInteractableComponent::SetGameplayEffectsOnInteract(const TArray<FSBZGameplayEffectData> GameplayEffects) {
}

void USBZBaseInteractableComponent::OnFocusChanged_Implementation(bool bInNewFocusState) {
}

bool USBZBaseInteractableComponent::IsInteractionIllegal(int32 InModeIndex) const {
    return false;
}

void USBZBaseInteractableComponent::GetGameplayEffectsOnInteract(TArray<FSBZGameplayEffectData>& GameplayEffects) const {
}

int32 USBZBaseInteractableComponent::GetCurrentModeIndex() const {
    return 0;
}


