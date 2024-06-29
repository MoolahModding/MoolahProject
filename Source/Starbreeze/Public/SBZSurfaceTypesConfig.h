#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESBZImpactConfigType.h"
#include "SBZSurfaceImpactConfig.h"
#include "SBZSurfaceSoundEvents.h"
#include "SBZSurfaceType.h"
#include "SBZSurfaceTypesConfig.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZSurfaceTypesConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BloodSplatterDecalAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodSplatterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodSplatterDecalFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSurfaceSoundEvents SoundEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FSBZSurfaceType> SurfaceTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZImpactConfigType, FSBZSurfaceImpactConfig> SurfaceImpactConfigMap;
    
public:
    USBZSurfaceTypesConfig();

};

