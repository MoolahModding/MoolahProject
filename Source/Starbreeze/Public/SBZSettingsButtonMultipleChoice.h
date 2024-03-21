#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsButton.h"
#include "SBZSettingsButtonMultipleChoice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingsButtonMultipleChoice : public USBZSettingsButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> OptionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceIndex;
    
public:
    USBZSettingsButtonMultipleChoice();
    UFUNCTION(BlueprintCallable)
    void SetOptionNames(const TArray<FText>& InOptionNames);
    
    UFUNCTION(BlueprintCallable)
    void SetChoiceIndex(int32 InChoiceIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OptionNamesChanged();
    
};

