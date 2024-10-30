#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonFrameInterpolatorChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonFrameInterpolatorChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionFrameInterpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndices;
    
public:
    USBZSettingsButtonFrameInterpolatorChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionFrameInterpolators(int32 InOptionFrameInterpolator);
    
};

