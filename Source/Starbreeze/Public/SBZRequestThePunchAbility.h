#pragma once
#include "CoreMinimal.h"
#include "SBZRequestOverkillBaseAbility.h"
#include "SBZRequestThePunchAbility.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZRequestThePunchAbility : public USBZRequestOverkillBaseAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ThePunchEquippedComment;
    
public:
    USBZRequestThePunchAbility();

};

