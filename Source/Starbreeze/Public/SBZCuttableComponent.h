#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZCuttableState.h"
#include "ESBZCuttableType.h"
#include "ESBZCuttingMaterialTier.h"
#include "SBZCutProgressData.h"
#include "SBZOnCutCompleteServerDelegate.h"
#include "SBZCuttableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCuttableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FuelCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCuttableType CuttableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CuttableState, meta=(AllowPrivateAccess=true))
    ESBZCuttableState CuttableState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCutCompleteServer OnCutCompleteServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalCutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CutProgressData, meta=(AllowPrivateAccess=true))
    FSBZCutProgressData CutProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCuttingMaterialTier CuttableTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialCutAngle, meta=(AllowPrivateAccess=true))
    float InitialCutAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraEffectVisibilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCuttingBlocked;
    
public:
    USBZCuttableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialCutAngle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CuttableState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CutProgressData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutCompleted();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCuttingBlocked(bool bInIsBlocked);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetCuttableState(ESBZCuttableState NewCuttableState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CreateLineCut(FSBZCutProgressData NewCutProgressData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CreateInitialCutAngle(float InCutAngle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CreateInitialCut(FSBZCutProgressData NewCutProgressData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CreateCut(FSBZCutProgressData NewCutProgressData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZCuttableType GetCuttableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZCuttableState GetCuttableState() const;
    
};

