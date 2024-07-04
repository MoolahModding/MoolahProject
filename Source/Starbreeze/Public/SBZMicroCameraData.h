#pragma once
#include "CoreMinimal.h"
#include "SBZToolData.h"
#include "SBZMicroCameraData.generated.h"

class USBZOutlineAsset;

UCLASS(Blueprintable)
class USBZMicroCameraData : public USBZToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundRangeOverloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAutoMarkedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* MarkedOutline;
    
    USBZMicroCameraData();

};

