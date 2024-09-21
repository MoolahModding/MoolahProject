#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZVendorPermissionDatabase.generated.h"

class USBZVendorPermissionData;

UCLASS(Blueprintable)
class USBZVendorPermissionDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZVendorPermissionData*> VendorPermissionArray;
    
    USBZVendorPermissionDatabase();

};

