#pragma once
#include "CoreMinimal.h"
#include "SBZHeistLevelWithOwnership.h"
#include "SBZHeistCollectionWithOwnership.generated.h"

USTRUCT(BlueprintType)
struct FSBZHeistCollectionWithOwnership {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText HeistCollectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZHeistLevelWithOwnership> LevelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bContainsStoryModeContent;
    
    STARBREEZE_API FSBZHeistCollectionWithOwnership();
};

