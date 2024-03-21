#pragma once
#include "CoreMinimal.h"
#include "SBZAccelByteDS.h"
#include "SBZAccelByteDSV1.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZAccelByteDSV1 : public USBZAccelByteDS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckPlayerArraySessionInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCountingInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxServerLoginAttempts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PollMatchmakingSessionInterval;
    
public:
    USBZAccelByteDSV1();
};

