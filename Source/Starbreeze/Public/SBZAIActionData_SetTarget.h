#pragma once
#include "CoreMinimal.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_SetTarget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIActionData_SetTarget : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    USBZAIActionData_SetTarget();

};

