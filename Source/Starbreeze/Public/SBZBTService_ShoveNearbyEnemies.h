#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SBZBTService_ShoveNearbyEnemies.generated.h"

UCLASS(Blueprintable)
class USBZBTService_ShoveNearbyEnemies : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationRootMovementAdjustment;
    
public:
    USBZBTService_ShoveNearbyEnemies();

};

