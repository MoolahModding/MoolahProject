#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZOverloadMicroCameraAbility.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZOverloadMicroCameraAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
public:
    USBZOverloadMicroCameraAbility();
};

