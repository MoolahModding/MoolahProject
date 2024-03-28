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
    USBZCuttableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_InitialCutAngle();
    
    UFUNCTION()
    void OnRep_CuttableState();
    
    UFUNCTION()
    void OnRep_CutProgressData();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCutCompleted();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCuttingBlocked(bool bInIsBlocked);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCuttableState(ESBZCuttableState NewCuttableState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CreateLineCut(FSBZCutProgressData NewCutProgressData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CreateInitialCutAngle(float InCutAngle);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CreateInitialCut(FSBZCutProgressData NewCutProgressData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_CreateCut(FSBZCutProgressData NewCutProgressData);
    
public:
    UFUNCTION(BlueprintPure)
    ESBZCuttableType GetCuttableType() const;
    
    UFUNCTION(BlueprintPure)
    ESBZCuttableState GetCuttableState() const;
    
};

