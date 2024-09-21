#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTTask_CompleteAIObjective.generated.h"

class USBZAIOrder;

UCLASS(Blueprintable)
class USBZBTTask_CompleteAIObjective : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder* InteractOrders[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetObjectiveBBKey;
    
public:
    USBZBTTask_CompleteAIObjective();

};

