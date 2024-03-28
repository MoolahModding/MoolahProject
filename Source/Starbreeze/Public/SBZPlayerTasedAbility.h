#pragma once
#include "CoreMinimal.h"
#include "SBZTasedAbility.h"
#include "SBZPlayerTasedAbility.generated.h"

class ASBZPlayerCameraManager;
class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZPlayerTasedAbility : public USBZTasedAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCameraManager* SBZPlayerCameraManager;
    
public:
    USBZPlayerTasedAbility();
};

