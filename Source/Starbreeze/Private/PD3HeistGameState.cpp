#include "PD3HeistGameState.h"
#include "Net/UnrealNetwork.h"
#include "PD3Dispatcher.h"
#include "PD3GameIntensityAnalyzer.h"
#include "SBZRoomPathFinder.h"

APD3HeistGameState::APD3HeistGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSuspenseValue = 0;
    this->CurrentThreatLevel = 0.00f;
    this->CurrentHeistState = EPD3HeistState::Stealth;
    this->GameIntensityAnalyzer = CreateDefaultSubobject<UPD3GameIntensityAnalyzer>(TEXT("GameIntensityAnalyzer"));
    this->Dispatcher = CreateDefaultSubobject<UPD3Dispatcher>(TEXT("PD3Dispatcher"));
    this->RoomPathFinder = CreateDefaultSubobject<USBZRoomPathFinder>(TEXT("SBZRoomPathFinder"));
    this->MissionFailedTimeoutSeconds = 5.00f;
    this->NegotiationEndTime = -1.00f;
    this->NrHostagesDemand = 0;
    this->AnswerPagerCount = 0;
    this->DefaultWeaponBoxClass = NULL;
    this->DefaultWeaponBoxClass = NULL;
    this->MaxCrewCount = 4;
    this->GlobalMaterialParameterCollection = NULL;
    this->GlobalNiagaraParameterCollection = NULL;
    this->AlarmThreatLevel = 0.10f;
    this->NegotiationThreatLevel = 0.20f;
    this->AssaultThreatLevel = 0.50f;
    this->AssaultThreatLevelIncrease = 0.10f;
    this->PlayerPositionUpdateFrequency = 1.00f;
    this->GlobalMaterialCollectionInstance = NULL;
    this->GlobalNiagaraCollectionInstance = NULL;
    this->bIsAICrewSpawned = true;
    this->bEscalated = false;
    this->SavedCustodyTime = 0.00f;
    this->NegotiationTradeType = ESBZNegotiationTradeType::None;
    this->JammerTimeSeconds = 15.00f;
    this->ECMJammerRadioBasePercentageIncrease = 0.20f;
    this->ECMJammerCameraBasePercentageIncrease = 0.20f;
    this->ECMJammerPagerBasePercentageIncrease = 0.20f;
    this->ECMJammerAdditionalIncreasePercentagePerJammer = 0.10f;
}

EPD3HeistState APD3HeistGameState::StealthBranch(UObject* WorldContextObject, ESBZStealthBranch& OutputPins) {
    return EPD3HeistState::Stealth;
}

void APD3HeistGameState::SetHeistState(EPD3HeistState HeistState) {
}

void APD3HeistGameState::OnStateMachineStateLeft(FName StateName) {
}

void APD3HeistGameState::OnRep_SpawnedCarryDataArray() {
}

void APD3HeistGameState::OnRep_NrHostagesDemand(uint8 OldDemand) {
}

void APD3HeistGameState::OnRep_NegotiationTradeType(ESBZNegotiationTradeType OldType) {
}

void APD3HeistGameState::OnRep_NegotiationEndTime(float OldEndTime) {
}

void APD3HeistGameState::OnRep_ECMCountData(const FSBZECMCountData& OldCountData) {
}

void APD3HeistGameState::OnRep_CurrentHeistState(EPD3HeistState OldHeistState) {
}

void APD3HeistGameState::Multicast_SuspenseValueChanged_Implementation(uint8 NewSuspenseValue) {
}

void APD3HeistGameState::Multicast_SetPagerEnabled_Implementation(uint32 NetID, bool bIsEnabled, bool bIsTimedOut) {
}

void APD3HeistGameState::Multicast_SetNegotiationTradeType_Implementation(ESBZNegotiationTradeType Type) {
}

void APD3HeistGameState::Multicast_SetNegotiationEndTime_Implementation(float EndTime) {
}

void APD3HeistGameState::Multicast_SetHostagesDemand_Implementation(uint8 Count) {
}

void APD3HeistGameState::Multicast_SetHeistState_Implementation(EPD3HeistState HeistState) {
}

void APD3HeistGameState::Multicast_SetCurrentECMJammerCount_Implementation(const FSBZECMCountData& InCountData) {
}

void APD3HeistGameState::Multicast_ProcessTrafficControls_Implementation(const TArray<FSBZTrafficControl>& TrafficControlArray) {
}

bool APD3HeistGameState::IsAssaultActive() const {
    return false;
}

bool APD3HeistGameState::IsActiveAssaultState(const EPD3HeistState State) const {
    return false;
}

void APD3HeistGameState::IncreaseSuspense(UObject* WorldContextObject) {
}

void APD3HeistGameState::HeistStateBranch(UObject* WorldContextObject, EPD3HeistState& OutputPins) {
}

ESBZNegotiationTradeType APD3HeistGameState::GetNegotiationTradeType() const {
    return ESBZNegotiationTradeType::None;
}

float APD3HeistGameState::GetNegotiationEndTime() const {
    return 0.0f;
}

uint8 APD3HeistGameState::GetHostageDemand() const {
    return 0;
}

EPD3HeistState APD3HeistGameState::GetCurrentHeistState() const {
    return EPD3HeistState::Stealth;
}

void APD3HeistGameState::DifficultyBranch(UObject* WorldContextObject, ESBZDifficulty& OutputPins) {
}

void APD3HeistGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APD3HeistGameState, CurrentSuspenseValue);
    DOREPLIFETIME(APD3HeistGameState, CurrentThreatLevel);
    DOREPLIFETIME(APD3HeistGameState, CurrentHeistState);
    DOREPLIFETIME(APD3HeistGameState, SpawnedCarryDataArray);
    DOREPLIFETIME(APD3HeistGameState, NegotiationEndTime);
    DOREPLIFETIME(APD3HeistGameState, NrHostagesDemand);
    DOREPLIFETIME(APD3HeistGameState, AnswerPagerCount);
    DOREPLIFETIME(APD3HeistGameState, NegotiationTradeType);
    DOREPLIFETIME(APD3HeistGameState, ECMCountData);
}


