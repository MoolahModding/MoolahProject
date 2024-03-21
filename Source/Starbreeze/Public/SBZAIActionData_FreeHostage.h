#pragma once
#include "CoreMinimal.h"
#include "ESBZAIOrderMode.h"
#include "SBZAIActionData.h"
#include "SBZAIActionData_FreeHostage.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZAIActionData_FreeHostage : public USBZAIActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZAIOrderMode Mode;
    
    USBZAIActionData_FreeHostage();
};

