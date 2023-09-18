#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartProgressionData.generated.h"

class USBZWeaponPartDataAsset;

USTRUCT(BlueprintType)
struct FSBZWeaponPartProgressionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartDataAsset* WeaponPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachmentItemSku;
    
    STARBREEZE_API FSBZWeaponPartProgressionData();
};

