#pragma once
#include "CoreMinimal.h"
#include "SBZNewsPlatformLink.h"
#include "SBZNewsFeedEntry.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsFeedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNewsPlatformLink> NewsPlatformLinkArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventId;
    
    STARBREEZE_API FSBZNewsFeedEntry();
};

