#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonLagReductionModeChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonLagReductionModeChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionLagReductionModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndices;
    
public:
    USBZSettingsButtonLagReductionModeChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionLagReductionModes(int32 InOptionLagReductionModes);
    
};

