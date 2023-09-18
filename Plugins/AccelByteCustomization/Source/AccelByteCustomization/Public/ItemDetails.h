#pragma once
#include "CoreMinimal.h"
#include "ItemDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FItemDetails();
};

