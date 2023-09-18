#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACSlots.h"
#include "SBZMenuACCharacterEquippableSlots.generated.h"

USTRUCT(BlueprintType)
struct FSBZMenuACCharacterEquippableSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMenuACSlots CharacterSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMenuACSlots EquippableSlots;
    
    STARBREEZE_API FSBZMenuACCharacterEquippableSlots();
};

