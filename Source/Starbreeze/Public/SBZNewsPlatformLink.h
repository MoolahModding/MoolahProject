#pragma once
#include "CoreMinimal.h"
#include "ESBZFirstPartyPlatform.h"
#include "SBZNewsPlatformLink.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsPlatformLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFirstPartyPlatform FirstPartyPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Link;
    
    STARBREEZE_API FSBZNewsPlatformLink();
};

