#pragma once
#include "CoreMinimal.h"
#include "OnMenuMouseButtonSelectedDelegate.h"
#include "OnMenuMouseButtonStateChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZMenuMouseButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuMouseButton : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuMouseButtonStateChanged OnButtonHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuMouseButtonSelected OnButtonSelected;
    
    USBZMenuMouseButton();

    UFUNCTION(BlueprintCallable)
    void SelectButton();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonHoveredChanged(bool bInIsHovered);
    
};

