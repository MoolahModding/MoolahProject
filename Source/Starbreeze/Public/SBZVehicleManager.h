#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZVehicleInfo.h"
#include "SBZVehicleManager.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZVehicleManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleInfo> VehicleInfos;
    
public:
    USBZVehicleManager();
private:
    UFUNCTION()
    void OnExitedActionPhase();
    
    UFUNCTION()
    void OnEnteredActionPhase(UWorld* World);
    
};

