#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerVolume.h"
#include "SBZPhysicsCorrectorVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASBZPhysicsCorrectorVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NonCorrectedActorsInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VolumeEnabled, meta=(AllowPrivateAccess=true))
    bool bIsVolumeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartVolumeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox BoundingBox;
    
public:
    ASBZPhysicsCorrectorVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetVolumeEnabledLocally(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVolumeEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VolumeEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetVolumeEnabled(bool bEnabled);
    
};

