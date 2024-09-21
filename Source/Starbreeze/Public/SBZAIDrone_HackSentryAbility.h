#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "SBZAIDrone_HackSentryAbility.generated.h"

class ASBZAIDrone;
class ASBZSentryGun;
class UGameplayEffect;

UCLASS(Blueprintable)
class USBZAIDrone_HackSentryAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DroneSentryHackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSentryGun* TargetSentry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIDrone* DroneOwner;
    
public:
    USBZAIDrone_HackSentryAbility();

};

