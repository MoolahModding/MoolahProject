#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLootCounterData.h"
#include "SBZTickingLootDifficultySettings.h"
#include "SBZTickingLootFloatDelegateDelegate.h"
#include "SBZTickingLootTypeDelegateDelegate.h"
#include "SBZTickingLootManager.generated.h"

class ASBZSabotagePoint;

UCLASS(Blueprintable)
class ASBZTickingLootManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootFloatDelegate OnCounterValueReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootFloatDelegate OnDesiredValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootTypeDelegate OnCounterTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootFloatDelegate OnIncreaseTickingSpeedReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootFloatDelegate OnDecreaseTickingSpeedReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LootCounterData, meta=(AllowPrivateAccess=true))
    FSBZLootCounterData LootCounterData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickingLootDifficultySettings DifficultySettingsArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSabotagePoint*> SabotagePointArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 SabotagableStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TickValuesToBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseTickingSpeedToBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseTickingSpeedToBroadcast;
    
public:
    ASBZTickingLootManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCounter();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnSabotaged(bool bIsSabotaged);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootCounterData();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopCounter(float CurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDesiredLootCount(float DesiredLootCount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseCounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DecreaseCounter();
    
};

