#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_Revive.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Revive : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* CivilianBehavior;
    
public:
    USBZAIOrder_Revive();

};

