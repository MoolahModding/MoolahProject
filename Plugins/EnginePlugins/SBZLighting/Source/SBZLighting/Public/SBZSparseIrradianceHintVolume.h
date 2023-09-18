#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "ESBZSparseIrradianceHintVolumeAction.h"
#include "SBZSparseIrradianceHintVolume.generated.h"

UCLASS(Blueprintable)
class SBZLIGHTING_API ASBZSparseIrradianceHintVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESBZSparseIrradianceHintVolumeAction::Type> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionDistance;
    
    ASBZSparseIrradianceHintVolume(const FObjectInitializer& ObjectInitializer);

};

