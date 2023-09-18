#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserRecentPlayerData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserRecentPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Other_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Other_display_name;
    
    FAccelByteModelsSessionBrowserRecentPlayerData();
};

