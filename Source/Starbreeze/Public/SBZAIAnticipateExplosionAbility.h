#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAIAnticipateExplosionAbility.generated.h"

class ASBZGrenade;
class UAnimMontage;
class USBZGrenadeDetectionSettings;

UCLASS(Blueprintable)
class USBZAIAnticipateExplosionAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGrenadeDetectionSettings* DetectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZGrenade* ObservedGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayedMontage;
    
public:
    USBZAIAnticipateExplosionAbility();

};

