#pragma once
#include "CoreMinimal.h"
#include "SBZMergePlayerData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMergePlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMergePartySelecter;
    
    STARBREEZE_API FSBZMergePlayerData();
};

