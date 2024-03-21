#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZArmMicroCameraAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZArmMicroCameraAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
public:
    USBZArmMicroCameraAbility();
};

