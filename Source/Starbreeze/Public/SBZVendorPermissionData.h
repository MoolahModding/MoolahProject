#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryBaseData.h"
#include "SBZVendorPermissionData.generated.h"

UCLASS(Blueprintable)
class USBZVendorPermissionData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VendorItemSku;
    
    USBZVendorPermissionData();

};

