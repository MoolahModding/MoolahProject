#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_OccupyVantagePoint.generated.h"

UCLASS(Blueprintable)
class USBZBTTask_OccupyVantagePoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector VantagePointBBKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetFocalPoint;
    
public:
    USBZBTTask_OccupyVantagePoint();

};

