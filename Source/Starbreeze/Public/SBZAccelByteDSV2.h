#pragma once
#include "CoreMinimal.h"
#include "SBZAccelByteDS.h"
#include "SBZAccelByteDSV2.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZAccelByteDSV2 : public USBZAccelByteDS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxServerLoginAttempts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PollPlayerCountInterval;
    
public:
    USBZAccelByteDSV2();
};

