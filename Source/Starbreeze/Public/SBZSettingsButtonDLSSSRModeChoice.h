#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonDLSSSRModeChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonDLSSSRModeChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> OptionDLSSSRModes;
    
public:
    USBZSettingsButtonDLSSSRModeChoice();
    UFUNCTION(BlueprintCallable)
    void SetOptionDLSSSRModes(const TArray<int64>& InOptionDLSSSRModes);
    
};

