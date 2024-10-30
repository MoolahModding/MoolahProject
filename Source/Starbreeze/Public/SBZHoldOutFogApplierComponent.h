#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZHoldOutDroneFogSettings.h"
#include "SBZHoldOutFogTargetValueChangedDelegate.h"
#include "SBZHoldOutFogApplierComponent.generated.h"

class AExponentialHeightFog;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHoldOutFogApplierComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutFogTargetValueChanged OnFogTargetValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDroneFogSettings LocalFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FogSettings, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDroneFogSettings ReplicatedFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDroneFogSettings DefaultFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* FogActor;
    
public:
    USBZHoldOutFogApplierComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FogSettings();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCast_ReplicateFogSettings(const FSBZHoldOutDroneFogSettings& FogSettings);
    
};

