#pragma once
#include "CoreMinimal.h"
#include "SBZMatchmakingAndHostingData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMatchmakingAndHostingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakingProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostingProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakerURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakerToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeaconsKey;
    
    STARBREEZE_API FSBZMatchmakingAndHostingData();
};

