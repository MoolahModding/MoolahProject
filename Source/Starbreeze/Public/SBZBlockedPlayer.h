#pragma once
#include "CoreMinimal.h"
#include "SBZBlockedPlayer.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZBlockedPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccelbyteUserId;
    
    FSBZBlockedPlayer();
};

