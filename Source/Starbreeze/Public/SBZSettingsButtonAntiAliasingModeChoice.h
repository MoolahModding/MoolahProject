#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonAntiAliasingModeChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonAntiAliasingModeChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> OptionAntiAliasingModes;
    
public:
    USBZSettingsButtonAntiAliasingModeChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionAntiAliasingModes(const TArray<int64>& InOptionAntiAliasingModes);
    
};

