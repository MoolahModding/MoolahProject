#pragma once
#include "CoreMinimal.h"
#include "SBZMenuACCharacterEquippableSlots.h"
#include "SBZMenuACEquippablePerCharacterSlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZMenuACEquippablePerCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZMenuACCharacterEquippableSlots> SlotsMap;
    
    STARBREEZE_API FSBZMenuACEquippablePerCharacterSlot();
};

