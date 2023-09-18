#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZRequestOverkillWeaponAbility.generated.h"

class ASBZPlayerCharacter;
class USBZDialogDataAsset;

UCLASS(Blueprintable)
class USBZRequestOverkillWeaponAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* OverkillSuccessDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* OverkillFailedDialog;
    
public:
    USBZRequestOverkillWeaponAbility();

};

