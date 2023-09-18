#pragma once
#include "CoreMinimal.h"
#include "OnControlsReferenceActionPressedDelegate.h"
#include "SBZActionControlReference.h"
#include "SBZWidgetBase.h"
#include "SBZControlsReferenceActionWidget.generated.h"

class UClass;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZControlsReferenceActionWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ActionInputLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActionInputsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ActionInputWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnControlsReferenceActionPressed ControlsReferenceActionPressedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference InputRegisteredControlsReferenceAction;
    
public:
    USBZControlsReferenceActionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PressControlsReferenceAction();
    
    UFUNCTION(BlueprintCallable)
    void OnInputAction(const FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DisplayControlsReferenceWithEvent(const FSBZActionControlReference& InControlsReferenceAction, FOnControlsReferenceActionPressed InControlsReferenceActionPressedEvent);
    
    UFUNCTION(BlueprintCallable)
    void ClearControlReference();
    
};

