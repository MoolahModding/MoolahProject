#pragma once
#include "CoreMinimal.h"
#include "SBZServerBrowserHeistLevel.h"
#include "SBZServerBrowserHeistCollection.generated.h"

USTRUCT(BlueprintType)
struct FSBZServerBrowserHeistCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeistCollectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZServerBrowserHeistLevel> LevelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainsStoryModeContent;
    
    STARBREEZE_API FSBZServerBrowserHeistCollection();
};

