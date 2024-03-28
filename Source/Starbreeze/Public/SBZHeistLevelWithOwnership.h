#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHeistLevelWithOwnership.generated.h"

USTRUCT(BlueprintType)
struct FSBZHeistLevelWithOwnership {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOwned;
    
    STARBREEZE_API FSBZHeistLevelWithOwnership();
};

