#pragma once
#include "CoreMinimal.h"
#include "SBZUIPopupData.h"
#include "SBZShownPopupInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZShownPopupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIPopupData PopupData;
    
    STARBREEZE_API FSBZShownPopupInfo();
};

