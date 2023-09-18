#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZItemEntitlementArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemEntitlementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PlayerItemEntitlementsIds;
    
    STARBREEZE_API FSBZItemEntitlementArray();
};

