#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "ESBZDifficulty.h"
#include "ESBZNegotiationTradeType.h"
#include "ESBZStealthBranch.h"
#include "PD3AnswerPagerValueChangedDelegate.h"
#include "PD3ECMCountChangedDelegateDelegate.h"
#include "PD3HeistStateChangedDelegateDelegate.h"
#include "PD3HostageDemandChangedDelegate.h"
#include "PD3NegotiationEndTimeChangedDelegate.h"
#include "PD3NegotiationTradeTypeChangedDelegate.h"
#include "PD3PagerHeistData.h"
#include "PD3SuspenseValueChangedDelegate.h"
#include "SBZECMCountData.h"
#include "SBZMissionState.h"
#include "SBZPendingUsingSpawnedCarryData.h"
#include "SBZSpawnedCarryData.h"
#include "SBZTrafficControl.h"
#include "Templates/SubclassOf.h"
#include "PD3HeistGameState.generated.h"

class AActor;
class ASBZAICrewCharacter;
class ASBZPlaceableCharges;
class ASBZPlaceableWeapon;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UObject;
class UPD3Dispatcher;
class UPD3GameIntensityAnalyzer;
class USBZRoomPathFinder;

UCLASS(Blueprintable)
class STARBREEZE_API APD3HeistGameState : public ASBZMissionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3HeistStateChangedDelegate OnHeistStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3NegotiationEndTimeChanged OnNegotiationEndTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3HostageDemandChanged OnHostagesDemandChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3NegotiationTradeTypeChanged OnNegotiationTradeTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3SuspenseValueChanged OnSuspenseValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3AnswerPagerValueChanged OnAnswerPagerValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3ECMCountChangedDelegate OnECMCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurrentSuspenseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMaskOnOverridden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHeistState, meta=(AllowPrivateAccess=true))
    EPD3HeistState CurrentHeistState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3GameIntensityAnalyzer* GameIntensityAnalyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3Dispatcher* Dispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZRoomPathFinder* RoomPathFinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionFailedTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnedCarryDataArray, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnedCarryData> SpawnedCarryDataArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSBZPendingUsingSpawnedCarryData> PendingUsingCarryMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, AActor*> SpawnedCarryActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NegotiationEndTime, meta=(AllowPrivateAccess=true))
    float NegotiationEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NrHostagesDemand, meta=(AllowPrivateAccess=true))
    uint8 NrHostagesDemand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 AnswerPagerCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PagerHeistData PagerHeistDataArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZPlaceableWeapon> DefaultWeaponBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCrewCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ASBZAICrewCharacter>> AICrewCharacterClassSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* GlobalNiagaraParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlarmThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegotiationThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultThreatLevelIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerPositionUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* GlobalMaterialCollectionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollectionInstance* GlobalNiagaraCollectionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAICrewSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAssaultStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SavedCustodyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HostageDemandReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NegotiationTradeType, meta=(AllowPrivateAccess=true))
    ESBZNegotiationTradeType NegotiationTradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZPlaceableCharges>> TradeHostagePickupAssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ECMCountData, meta=(AllowPrivateAccess=true))
    FSBZECMCountData ECMCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JammerTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ECMJammerRadioBasePercentageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ECMJammerCameraBasePercentageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ECMJammerPagerBasePercentageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ECMJammerAdditionalIncreasePercentagePerJammer;
    
public:
    APD3HeistGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EPD3HeistState StealthBranch(UObject* WorldContextObject, ESBZStealthBranch& OutputPins);
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetMaskOnOverride(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHeistState(EPD3HeistState HeistState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateMachineStateLeft(FName StateName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedCarryDataArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NrHostagesDemand(uint8 OldDemand);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NegotiationTradeType(ESBZNegotiationTradeType OldType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NegotiationEndTime(float OldEndTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ECMCountData(const FSBZECMCountData& OldCountData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHeistState(EPD3HeistState OldHeistState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SuspenseValueChanged(uint8 NewSuspenseValue);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetPagerEnabled(uint32 NetID, bool bIsEnabled, bool bIsTimedOut);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetNegotiationTradeType(ESBZNegotiationTradeType Type);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetNegotiationEndTime(float EndTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMaskOnOverride();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHostagesDemand(uint8 Count);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHeistState(EPD3HeistState HeistState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCurrentECMJammerCount(const FSBZECMCountData& InCountData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ProcessTrafficControls(const TArray<FSBZTrafficControl>& TrafficControlArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssaultActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveAssaultState(const EPD3HeistState State) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncreaseSuspense(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HeistStateBranch(UObject* WorldContextObject, EPD3HeistState& OutputPins);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZNegotiationTradeType GetNegotiationTradeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNegotiationEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetHostageDemand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPD3HeistState GetCurrentHeistState() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DifficultyBranch(UObject* WorldContextObject, ESBZDifficulty& OutputPins);
    
};

