#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonUpscalerChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonUpscalerChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionUpscalers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndices;
    
public:
    USBZSettingsButtonUpscalerChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionUpscalers(int32 InOptionUpscalers);
    
};

