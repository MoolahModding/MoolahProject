#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButtonMultipleChoice.h"
#include "SBZSettingsButtonLagReductionChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonLagReductionChoice : public USBZSettingsButtonMultipleChoice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OptionLagReductionSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndices;
    
public:
    USBZSettingsButtonLagReductionChoice();

    UFUNCTION(BlueprintCallable)
    void SetOptionLagReductionSystems(int32 InLagReductionSystems);
    
};

