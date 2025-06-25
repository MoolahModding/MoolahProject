#pragma once
#include "CoreMinimal.h"
#include "SBZInternalItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    STARBREEZE_API FSBZInternalItemDetails();
};

