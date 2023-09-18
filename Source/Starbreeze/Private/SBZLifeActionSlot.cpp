#include "SBZLifeActionSlot.h"

USBZLifeActionSlot::USBZLifeActionSlot() {
    this->bMustBeOccupied = true;
    this->bNeedOtherSlotsReadyToBeReserved = false;
    this->bOpenForRandomReservation = true;
    this->bUseAcceptableRadius = true;
    this->AcceptableRadius = 0.00f;
    this->bUseAcceptableAngle = true;
    this->AcceptableAngle = 0.00f;
    this->AngleOffset = 0.00f;
    this->bUseCoolDown = false;
    this->CoolDown = 0.00f;
    this->bUseRandomDuration = false;
    this->DesiredDuration = -1.00f;
    this->DialogPlayer = NULL;
    this->bUseEnterAnimation = false;
    this->bSnapEnterPointToGround = false;
    this->bUseExitAnimation = false;
    this->bSnapExitPointToGround = false;
    this->bExitOnlyIfActionAnimationIsPlaying = false;
    this->PlayingActionMontage = NULL;
    this->PlayingEnterMontage = NULL;
    this->PlayingExitMontage = NULL;
    this->Character = NULL;
    this->bIsReady = false;
    this->State = ESBZLifeActionState::Stopped;
    this->CurrentReservationID = -1;
    this->CurrentMontageIndex = -1;
    this->OwningLifeActionInstance = NULL;
}

void USBZLifeActionSlot::SwitchMontageSection(const FName& SectionName) {
}

void USBZLifeActionSlot::SwitchMontageNextSection(const FName& SectionName) {
}

void USBZLifeActionSlot::StopDialog(bool bReset) {
}

void USBZLifeActionSlot::StartDialog() {
}

void USBZLifeActionSlot::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void USBZLifeActionSlot::OnMontageBlendOut(UAnimMontage* Montage, bool bInterrupted) {
}

void USBZLifeActionSlot::OnEnterAnimationShouldEnd() {
}

void USBZLifeActionSlot::OnDesiredDurationReached() {
}

void USBZLifeActionSlot::OnCharacterAnimEvent(const FGameplayTag& EventTag, bool bActive) {
}

bool USBZLifeActionSlot::MustBeOccupied() const {
    return false;
}

void USBZLifeActionSlot::Multicast_OnSlotStart_Implementation(ASBZCharacter* InCharacter) {
}

void USBZLifeActionSlot::Multicast_OnSlotFreed_Implementation(ASBZCharacter* InCharacter) {
}

bool USBZLifeActionSlot::IsUsingAnExitAnimation() const {
    return false;
}

bool USBZLifeActionSlot::IsUsingAnEnterAnimation() const {
    return false;
}

bool USBZLifeActionSlot::IsReservedBy(const ASBZCharacter* InCharacter) const {
    return false;
}

bool USBZLifeActionSlot::IsReadyToStart() const {
    return false;
}

bool USBZLifeActionSlot::IsPlayingExitMontage(const ASBZCharacter* InCharacter) const {
    return false;
}

bool USBZLifeActionSlot::IsPlayingEnterMontage(const ASBZCharacter* InCharacter) const {
    return false;
}

bool USBZLifeActionSlot::IsPlayingActionMontage(const ASBZCharacter* InCharacter) const {
    return false;
}

bool USBZLifeActionSlot::IsFree() const {
    return false;
}

FGameplayTag USBZLifeActionSlot::GetTag() const {
    return FGameplayTag{};
}

ESBZLifeActionState USBZLifeActionSlot::GetState() const {
    return ESBZLifeActionState::Stopped;
}

UAnimMontage* USBZLifeActionSlot::GetPlayingActionMontage() const {
    return NULL;
}

FTransform USBZLifeActionSlot::GetMoveToTransform() const {
    return FTransform{};
}

FRotator USBZLifeActionSlot::GetMoveToRotation() const {
    return FRotator{};
}

FVector USBZLifeActionSlot::GetMoveToLocation() const {
    return FVector{};
}

int32 USBZLifeActionSlot::GetCurrentReservationID() const {
    return 0;
}

UAnimMontage* USBZLifeActionSlot::GetCurrentExitMontage(const ASBZCharacter* InCharacter) const {
    return NULL;
}

UAnimMontage* USBZLifeActionSlot::GetCurrentEnterMontage(const ASBZCharacter* InCharacter) const {
    return NULL;
}

UAnimMontage* USBZLifeActionSlot::GetCurrentActionMontage(const ASBZCharacter* InCharacter) const {
    return NULL;
}

ASBZCharacter* USBZLifeActionSlot::GetCharacter() const {
    return NULL;
}

float USBZLifeActionSlot::GetAcceptableRadius() const {
    return 0.0f;
}

float USBZLifeActionSlot::GetAcceptableAngle() const {
    return 0.0f;
}

bool USBZLifeActionSlot::CanBeReservedBy(const ASBZCharacter* InCharacter, const FSBZLifeActionRequest& Request, bool bLogErrors) const {
    return false;
}


