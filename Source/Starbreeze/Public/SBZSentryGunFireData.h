#pragma once
#include "CoreMinimal.h"
#include "SBZAIWeaponFireData.h"
#include "Templates/SubclassOf.h"
#include "SBZSentryGunFireData.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSentryGunFireData : public USBZAIWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OverheatEffectClass;
    
    USBZSentryGunFireData();
};

