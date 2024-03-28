#include "SBZPlayerEventReactor.h"
#include "Net/UnrealNetwork.h"

void ASBZPlayerEventReactor::SetState(ESBZEventReactorState NewState) {
}

void ASBZPlayerEventReactor::OnRep_CurrentState() {
}

void ASBZPlayerEventReactor::OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& DefeatStateData) {
}

void ASBZPlayerEventReactor::OnECMJammerCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZPlayerEventReactor::Multicast_SetState_Implementation(ESBZEventReactorState NewState) {
}

void ASBZPlayerEventReactor::Multicast_PlayAudioReaction_Implementation(const int32 AudioScreenIndex, ESBZReactionType ReactionType) {
}

void ASBZPlayerEventReactor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerEventReactor, CurrentState);
}

ASBZPlayerEventReactor::ASBZPlayerEventReactor() {
    this->EventCooldown = 10.00f;
    this->LastPlayedTime = 0.00f;
    this->ReactorStateArray[0] = NULL;
    this->ReactorStateArray[1] = NULL;
    this->ReactorStateArray[2] = NULL;
    this->ReactorStateArray[3] = NULL;
    this->ReactorStateArray[4] = NULL;
    this->PlayerCommentDelay = 60.00f;
    this->CurrentState = ESBZEventReactorState::Inactive;
}

