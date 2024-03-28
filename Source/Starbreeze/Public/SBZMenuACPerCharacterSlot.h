#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACSlots.h"
#include "SBZMenuACPerCharacterSlot.generated.h"

class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct FSBZMenuACPerCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZPlayerCharacter>, FSBZMenuACSlots> Slots;
    
    STARBREEZE_API FSBZMenuACPerCharacterSlot();
};

