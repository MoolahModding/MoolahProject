#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonKeyboardBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonKeyboardBinding : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord PrimaryBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord SecondaryBinding;
    
public:
    USBZSettingsButtonKeyboardBinding();

    UFUNCTION(BlueprintCallable)
    void SetSecondaryBinding(FInputChord InBinding);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryBinding(FInputChord InBinding);
    
};

