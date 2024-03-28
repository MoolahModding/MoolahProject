#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZMiniGameAbility.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable)
class USBZMiniGameAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* WinningParticipant;
    
public:
    USBZMiniGameAbility();
};

