#pragma once
#include "CoreMinimal.h"
#include "SBZHUDNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    STARBREEZE_API FSBZHUDNotificationData();
};

