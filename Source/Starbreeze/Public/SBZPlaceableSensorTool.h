#pragma once
#include "CoreMinimal.h"
#include "SBZOnSensorAmmoDepletedDelegate.h"
#include "SBZPlaceableToolBase.h"
#include "SBZPlaceableSensorTool.generated.h"

class UBoxComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ASBZPlaceableSensorTool : public ASBZPlaceableToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoMarkTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMarkableAICount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSensorAmmoDepleted OnSensorAmmoDepleted;
    
public:
    ASBZPlaceableSensorTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SensorAmmoDepleted();
    
};

