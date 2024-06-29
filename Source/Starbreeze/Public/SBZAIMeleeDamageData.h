#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeDamageData.h"
#include "SBZAIMeleeDamageData.generated.h"

UCLASS(Blueprintable)
class USBZAIMeleeDamageData : public USBZMeleeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthDamage[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCooldown;
    
    USBZAIMeleeDamageData();

};

