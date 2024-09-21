#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_AirMoveTo.h"
#include "SBZBTTask_DroneDespawn.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_DroneDespawn : public USBZBTTask_AirMoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnSplineMaxDist;
    
public:
    USBZBTTask_DroneDespawn();

};

