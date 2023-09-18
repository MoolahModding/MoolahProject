#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlatformValidateDetails.h"
#include "AccelByteModelsPlatformValidateUserItemPurchaseResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlatformValidateUserItemPurchaseResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Purchasable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPlatformValidateDetails> ValidateDetails;
    
    FAccelByteModelsPlatformValidateUserItemPurchaseResponse();
};

