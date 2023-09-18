#pragma once
#include "CoreMinimal.h"
#include "SBZNewsFeedEntry.h"
#include "SBZNewsFeedList.generated.h"

USTRUCT(BlueprintType)
struct FSBZNewsFeedList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNewsFeedEntry> NewsList;
    
    STARBREEZE_API FSBZNewsFeedList();
};

