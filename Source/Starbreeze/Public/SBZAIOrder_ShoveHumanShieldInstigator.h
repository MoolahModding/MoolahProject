#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_ShoveHumanShieldInstigator.generated.h"

class ASBZAICharacter;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_ShoveHumanShieldInstigator : public USBZAIOrder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* HumanShieldHostage;
    
public:
    USBZAIOrder_ShoveHumanShieldInstigator();

};

