#pragma once
#include "CoreMinimal.h"
#include "AccountLinkedPlatform.h"
#include "AccountLinkPublisherAccount.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountLinkPublisherAccount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccountLinkedPlatform> LinkedPlatforms;
    
    FAccountLinkPublisherAccount();
};

