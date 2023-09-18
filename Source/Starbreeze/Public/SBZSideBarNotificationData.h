#pragma once
#include "CoreMinimal.h"
#include "SBZSideBarNotificationData.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZSideBarNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryItem;
    
    STARBREEZE_API FSBZSideBarNotificationData();
};

