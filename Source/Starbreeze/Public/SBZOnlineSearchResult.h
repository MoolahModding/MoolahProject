#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineSessionParams.h"
#include "SBZOnlineSearchResult.generated.h"

USTRUCT(BlueprintType)
struct FSBZOnlineSearchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineSessionParams Parameters;
    
    STARBREEZE_API FSBZOnlineSearchResult();
};

