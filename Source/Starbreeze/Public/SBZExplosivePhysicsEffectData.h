#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZExplosivePhysicsEffectData.generated.h"

USTRUCT(BlueprintType)
struct FSBZExplosivePhysicsEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpwardImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpwardImpulseAsVel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval TorqueStrength;
    
    STARBREEZE_API FSBZExplosivePhysicsEffectData();
};

