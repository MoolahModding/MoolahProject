#pragma once
#include "CoreMinimal.h"
#include "SBZPurchasedWeaponPartAttachment.h"
#include "SBZWeaponPartAttachmentData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponPartAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPurchasedWeaponPartAttachment> PurchasedWeaponPartAttachmentArray;
    
    FSBZWeaponPartAttachmentData();
};

