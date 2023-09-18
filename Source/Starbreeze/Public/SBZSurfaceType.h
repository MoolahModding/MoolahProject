#pragma once
#include "CoreMinimal.h"
#include "ESBZAISoundSurfaceTypes.h"
#include "SBZSurfaceType.generated.h"

class USBZBagItemImpactConfig;
class USBZBloodSplatterImpactConfig;
class USBZDebrisImpactConfig;
class USBZExplosionImpactConfig;
class USBZFootstepImpactConfig;
class USBZMantlingImpactConfig;
class USBZMeleeImpactConfig;
class USBZObjectImpactConfig;
class USBZProjectileImpactConfig;
class USBZSlidingImpactConfig;
class USBZStepUpImpactConfig;
class USBZThrowableImpactConfig;
class USBZThrowableProjectileImpactConfig;

USTRUCT(BlueprintType)
struct FSBZSurfaceType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAISoundSurfaceTypes AISoundSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZProjectileImpactConfig* ProjectileImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrowableProjectileImpactConfig* ThrowableProjectileImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeImpactConfig* MeleeImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZExplosionImpactConfig* ExplosionImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZFootstepImpactConfig* FootstepImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSlidingImpactConfig* SlidingImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMantlingImpactConfig* MantlingImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStepUpImpactConfig* StepUpImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectImpactConfig* ObjectImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDebrisImpactConfig* DebrisImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrowableImpactConfig* ThrowableImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagItemImpactConfig* BagItemImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBloodSplatterImpactConfig* BloodSplatterImpactConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialSoundSwitchState;
    
    STARBREEZE_API FSBZSurfaceType();
};

