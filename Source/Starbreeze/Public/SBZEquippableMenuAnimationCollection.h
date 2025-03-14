#pragma once
#include "CoreMinimal.h"
#include "ESBZMainMenuAnimationName.h"
#include "SBZBaseCharacterMenuAnimationCollection.h"
#include "SBZMenuACEquippablePerCharacterSlot.h"
#include "SBZEquippableMenuAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZEquippableMenuAnimationCollection : public USBZBaseCharacterMenuAnimationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMainMenuAnimationName, FSBZMenuACEquippablePerCharacterSlot> EquippablePerCharacterSlots;
    
public:
    USBZEquippableMenuAnimationCollection();

};

