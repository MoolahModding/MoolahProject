#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZHUDNotificationData.h"
#include "SBZGameplayAbility_CharacterCrouch.generated.h"

UCLASS(Blueprintable)
class USBZGameplayAbility_CharacterCrouch : public USBZGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDNotificationData UncrouchNotification;
    
    USBZGameplayAbility_CharacterCrouch();
};

