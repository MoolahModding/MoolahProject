#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_ReserveCoverPoint.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_ReserveCoverPoint : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetCoverPointBBKey;
    
    USBZBTDecorator_ReserveCoverPoint();

};

