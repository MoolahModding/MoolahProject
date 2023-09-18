#pragma once
#include "CoreMinimal.h"
#include "SBZGameEventStructBase.h"
#include "SBZReviveEvent.generated.h"

class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct FSBZReviveEvent : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* Reviver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* CharacterBeingRevived;
    
    STARBREEZE_API FSBZReviveEvent();
};

