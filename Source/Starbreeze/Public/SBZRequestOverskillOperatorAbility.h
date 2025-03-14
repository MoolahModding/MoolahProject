#pragma once
#include "CoreMinimal.h"
#include "SBZRequestOverkillWithPhoneAbility.h"
#include "SBZRequestOverskillOperatorAbility.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZRequestOverskillOperatorAbility : public USBZRequestOverkillWithPhoneAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* OperatorActivatedComment;
    
public:
    USBZRequestOverskillOperatorAbility();

};

