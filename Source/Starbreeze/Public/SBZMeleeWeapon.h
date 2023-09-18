#pragma once
#include "CoreMinimal.h"
#include "SBZWeapon.h"
#include "SBZMeleeWeapon.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable)
class ASBZMeleeWeapon : public ASBZWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MeleeHitEvent;
    
public:
    ASBZMeleeWeapon(const FObjectInitializer& ObjectInitializer);

};

