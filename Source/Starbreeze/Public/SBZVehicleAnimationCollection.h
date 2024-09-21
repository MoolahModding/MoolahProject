#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZVehicleDoorState.h"
#include "SBZVehicleDoorAnimationContainer.h"
#include "SBZVehicleAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZVehicleAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZVehicleDoorState, FSBZVehicleDoorAnimationContainer> DoorAnimationContainers;
    
public:
    USBZVehicleAnimationCollection();

};

