#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAITacticianCrowdControlAbility.generated.h"

class AController;
class ASBZAICharacter;

UCLASS(Blueprintable)
class USBZAITacticianCrowdControlAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
public:
    USBZAITacticianCrowdControlAbility();

};

