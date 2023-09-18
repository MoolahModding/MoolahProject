#pragma once
#include "CoreMinimal.h"
#include "SBZLocalPlayerFeedbackInfo.generated.h"

class USBZLocalPlayerFeedback;

USTRUCT(BlueprintType)
struct FSBZLocalPlayerFeedbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLocalPlayerFeedback* PlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    STARBREEZE_API FSBZLocalPlayerFeedbackInfo();
};

