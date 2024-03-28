#pragma once
#include "CoreMinimal.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_Revive.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZAIActionData_Revive : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Target;
    
    USBZAIActionData_Revive();
};

