#pragma once
#include "CoreMinimal.h"
#include "SBZHeistLevelWithOwnership.h"
#include "SBZJoinableHeistData.h"
#include "SBZServerBrowserHeistLevel.generated.h"

USTRUCT(BlueprintType)
struct FSBZServerBrowserHeistLevel : public FSBZHeistLevelWithOwnership {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZJoinableHeistData JoinableHeistData;
    
    STARBREEZE_API FSBZServerBrowserHeistLevel();
};

