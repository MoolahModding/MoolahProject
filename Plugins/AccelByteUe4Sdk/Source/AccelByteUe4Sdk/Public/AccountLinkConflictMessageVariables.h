#pragma once
#include "CoreMinimal.h"
#include "AccountLinkPublisherAccount.h"
#include "AccountLinkConflictMessageVariables.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountLinkConflictMessageVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccountLinkPublisherAccount> PublisherAccounts;
    
    FAccountLinkConflictMessageVariables();
};

