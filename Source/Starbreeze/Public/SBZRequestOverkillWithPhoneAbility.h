#pragma once
#include "CoreMinimal.h"
#include "SBZRequestOverkillBaseAbility.h"
#include "SBZRequestOverkillWithPhoneAbility.generated.h"

class ASBZPlayerCharacter;
class USBZDialogDataAsset;

UCLASS(Blueprintable)
class USBZRequestOverkillWithPhoneAbility : public USBZRequestOverkillBaseAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* OverkillSuccessDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* OverkillFailedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* OverkillStealthDialog;
    
public:
    USBZRequestOverkillWithPhoneAbility();

};

