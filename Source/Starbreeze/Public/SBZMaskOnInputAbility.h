#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZMaskOnInputAbility.generated.h"

UCLASS(Blueprintable)
class USBZMaskOnInputAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOnDuration;
    
public:
    USBZMaskOnInputAbility();

};

