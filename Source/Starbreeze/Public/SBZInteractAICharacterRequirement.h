#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZBaseInteractRequirement.h"
#include "SBZInteractAICharacterRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZInteractAICharacterRequirement : public USBZBaseInteractRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockHumanShieldTagContainer;
    
public:
    USBZInteractAICharacterRequirement();

};

