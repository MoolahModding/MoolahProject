#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZWidgetBase.h"
#include "SBZControlsReferenceWidget.generated.h"

class UClass;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZControlsReferenceWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActionsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ControlsReferenceActionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ControlsReferenceAxisWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ActionLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_AxisLists;
    
public:
    USBZControlsReferenceWidget();

private:
    UFUNCTION(BlueprintCallable)
    void NativeDisplayControlsReference(const FSBZControlsReference& InControlsReference);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideControlsReference();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideActiveControlsReference();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayControlsReference(const FSBZControlsReference& InControlsReference);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayActiveControlsReference(const FSBZControlsReference& InControlsReference);
    
};

