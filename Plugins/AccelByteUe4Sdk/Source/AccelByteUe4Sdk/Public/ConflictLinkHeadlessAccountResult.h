#pragma once
#include "CoreMinimal.h"
#include "HeadlessAccount.h"
#include "ConflictLinkHeadlessAccountResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FConflictLinkHeadlessAccountResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadlessAccount CurrentAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadlessAccount HeadlessAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatformAlreadyLinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatformLinkConflict;
    
    FConflictLinkHeadlessAccountResult();
};

