#pragma once
#include "CoreMinimal.h"
#include "SBZPartyMessageAB.generated.h"

USTRUCT(BlueprintType)
struct FSBZPartyMessageAB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Topic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Payload;
    
    STARBREEZE_API FSBZPartyMessageAB();
};

