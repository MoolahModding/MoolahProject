#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACCharacterEquippableSlots.h"
#include "SBZMenuACEquippablePerCharacterSlot.generated.h"

class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct FSBZMenuACEquippablePerCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZPlayerCharacter>, FSBZMenuACCharacterEquippableSlots> Slots;
    
    STARBREEZE_API FSBZMenuACEquippablePerCharacterSlot();
};

