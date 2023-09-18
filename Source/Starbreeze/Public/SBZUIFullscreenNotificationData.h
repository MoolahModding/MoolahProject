#pragma once
#include "CoreMinimal.h"
#include "ESBZNotificationType.h"
#include "SBZUIFullscreenNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIFullscreenNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNotificationType NotificationType;
    
    STARBREEZE_API FSBZUIFullscreenNotificationData();
};

