#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZTagStanceMapping.h"
#include "SBZAILifeActionAbility.generated.h"

UCLASS(Blueprintable)
class USBZAILifeActionAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTagStanceMapping> TagsToPropagateOnEndAbility;
    
public:
    USBZAILifeActionAbility();

};

