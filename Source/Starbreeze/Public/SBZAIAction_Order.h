#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZAIAction.h"
#include "SBZAIAction_Order.generated.h"

class APawn;
class USBZAIOrder;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_Order : public USBZAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIOrder* ActionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIOrder* OrderInstance;
    
public:
    USBZAIAction_Order();
    UFUNCTION()
    void OnOrderStopped(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result);
    
    UFUNCTION()
    void OnOrderStarted(USBZAIOrder* Order, APawn* OrderPawn);
    
    UFUNCTION()
    void OnOrderCompleted(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result);
    
};

