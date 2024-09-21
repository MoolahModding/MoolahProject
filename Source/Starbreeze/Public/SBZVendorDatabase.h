#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZVendorDatabase.generated.h"

class USBZVendorData;

UCLASS(Blueprintable)
class USBZVendorDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZVendorData*> VendorArray;
    
    USBZVendorDatabase();

};

