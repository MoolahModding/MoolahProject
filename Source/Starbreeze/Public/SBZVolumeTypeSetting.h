#pragma once
#include "CoreMinimal.h"
#include "SBZVolumeTypeSetting.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct FSBZVolumeTypeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    STARBREEZE_API FSBZVolumeTypeSetting();
};

