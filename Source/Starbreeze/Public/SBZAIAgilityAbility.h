#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAIAgilityAbility.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIAgilityAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingMontage;
    
public:
    USBZAIAgilityAbility();
};

