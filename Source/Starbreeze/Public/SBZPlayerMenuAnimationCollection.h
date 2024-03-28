#pragma once
#include "CoreMinimal.h"
#include "ESBZMainMenuAnimationName.h"
#include "SBZBaseMenuAnimationCollection.h"
#include "SBZMenuACPerCharacterSlot.h"
#include "SBZPlayerMenuAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZPlayerMenuAnimationCollection : public USBZBaseMenuAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMainMenuAnimationName, FSBZMenuACPerCharacterSlot> PerCharacterSlots;
    
    USBZPlayerMenuAnimationCollection();
};

