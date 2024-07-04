#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonUpscalingModeChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonUpscalingModeChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionUpscalingModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndices;
    
public:
    USBZSettingsButtonUpscalingModeChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionUpscalingModes(int32 InOptionUpscalingModes);
    
};

