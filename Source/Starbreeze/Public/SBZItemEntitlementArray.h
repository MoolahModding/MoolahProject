#pragma once
#include "CoreMinimal.h"
#include "SBZItemEntitlementArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemEntitlementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerItemSkuArray;
    
    STARBREEZE_API FSBZItemEntitlementArray();
};

