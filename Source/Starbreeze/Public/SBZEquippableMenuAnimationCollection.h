#pragma once
#include "CoreMinimal.h"
#include "ESBZMainMenuAnimationName.h"
#include "SBZBaseMenuAnimationCollection.h"
#include "SBZMenuACEquippablePerCharacterSlot.h"
#include "SBZEquippableMenuAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZEquippableMenuAnimationCollection : public USBZBaseMenuAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMainMenuAnimationName, FSBZMenuACEquippablePerCharacterSlot> EquippablePerCharacterSlots;
    
    USBZEquippableMenuAnimationCollection();

};

