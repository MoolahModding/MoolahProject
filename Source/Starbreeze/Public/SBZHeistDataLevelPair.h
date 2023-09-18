#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHeistDataLevelPair.generated.h"

class UPD3HeistDataAsset;

USTRUCT(BlueprintType)
struct FSBZHeistDataLevelPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3HeistDataAsset* HeistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelPath;
    
    STARBREEZE_API FSBZHeistDataLevelPair();
};

