#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZGrenadeDetectionSettings.generated.h"

UCLASS(Blueprintable)
class USBZGrenadeDetectionSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayBeforeExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrenadeTypeFlags;
    
    USBZGrenadeDetectionSettings();

};

