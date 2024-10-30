#pragma once
#include "CoreMinimal.h"
#include "ESBZAntiAliasingMode.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonAntiAliasingModeChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonAntiAliasingModeChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZAntiAliasingMode> OptionAntiAliasingModes;
    
public:
    USBZSettingsButtonAntiAliasingModeChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionAntiAliasingModes(const TArray<ESBZAntiAliasingMode>& InOptionAntiAliasingModes);
    
};

