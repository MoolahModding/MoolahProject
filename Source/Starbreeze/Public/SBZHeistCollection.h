#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHeistCollection.generated.h"

USTRUCT(BlueprintType)
struct FSBZHeistCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeistCollectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LevelPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainsStoryModeContent;
    
    STARBREEZE_API FSBZHeistCollection();
};

