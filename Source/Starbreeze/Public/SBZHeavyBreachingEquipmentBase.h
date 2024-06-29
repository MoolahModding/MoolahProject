#pragma once
#include "CoreMinimal.h"
#include "SBZBreachingEquipmentBase.h"
#include "SBZBreachingEquipmentTimes.h"
#include "SBZComponentSelector.h"
#include "SBZHeavyBreachingEquipmentBase.generated.h"

class UAkAudioEvent;
class UMeshComponent;

UCLASS(Blueprintable)
class ASBZHeavyBreachingEquipmentBase : public ASBZBreachingEquipmentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZComponentSelector> EquipmentParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBreachingEquipmentTimes EquipmentTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatupTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartsAdded, meta=(AllowPrivateAccess=true))
    uint8 NumberOfPartsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EstimatedFuelEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> EquipmentPartMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PartAddedEvent;
    
    ASBZHeavyBreachingEquipmentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PartsAdded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEstimatedFuelEndTime(float InEstimatedFuelEndTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPartAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PartAdded(int32 Amount);
    
};

