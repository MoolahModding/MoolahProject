#pragma once
#include "CoreMinimal.h"
#include "SBZStoreItemUIGroup.h"
#include "SBZBlackMarketUIVendorData.generated.h"

class USBZVendorData;

USTRUCT(BlueprintType)
struct FSBZBlackMarketUIVendorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVendorData* VendorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStoreItemUIGroup> UIStoreItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFetchedStoreData;
    
    STARBREEZE_API FSBZBlackMarketUIVendorData();
};

