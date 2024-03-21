#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_Sabotage.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_Sabotage : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SabotageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSabotageTargetOnFail;
    
public:
    USBZAIOrder_Sabotage();
};

