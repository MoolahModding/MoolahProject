#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZBreadCrumbButtonWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZBreadCrumbButtonWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Stack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackValue;
    
public:
    USBZBreadCrumbButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetStackValue(const FName& InStackValue, const FText& InTextValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBreadCrumbForStackValue(const FName& InStackValue);
    
};

