#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonGamepadBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonGamepadBinding : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord PrimaryBinding;
    
public:
    USBZSettingsButtonGamepadBinding();

    UFUNCTION(BlueprintCallable)
    void SetPrimaryBinding(FInputChord InBinding);
    
};

