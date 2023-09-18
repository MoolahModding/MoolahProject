#pragma once
#include "CoreMinimal.h"
#include "SBZNewsFeedEntry.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsFeedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageUrl;
    
    STARBREEZE_API FSBZNewsFeedEntry();
};

