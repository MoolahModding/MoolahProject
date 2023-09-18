#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_ObjectiveInteractionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class USBZBTTask_ObjectiveInteractionBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetObjectiveBBKey;
    
public:
    USBZBTTask_ObjectiveInteractionBase();

};

