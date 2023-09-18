#pragma once
#include "CoreMinimal.h"
#include "SBZAIWeaponFireData.h"
#include "SBZSentryGunFireData.generated.h"

class UClass;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSentryGunFireData : public USBZAIWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OverheatEffectClass;
    
    USBZSentryGunFireData();

};

