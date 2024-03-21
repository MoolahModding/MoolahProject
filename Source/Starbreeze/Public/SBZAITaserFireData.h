#pragma once
#include "CoreMinimal.h"
#include "SBZAIWeaponFireData.h"
#include "SBZAITaserFireData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAITaserFireData : public USBZAIWeaponFireData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInterval[4];
    
public:
    USBZAITaserFireData();
};

