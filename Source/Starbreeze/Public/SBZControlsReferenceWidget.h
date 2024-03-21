#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZControlsReferenceWidget.generated.h"

class UPanelWidget;
class USBZControlsReferenceActionWidget;
class USBZControlsReferenceAxisWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZControlsReferenceWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActionsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZControlsReferenceActionWidget> ControlsReferenceActionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZControlsReferenceAxisWidget> ControlsReferenceAxisWidgetClass;
    
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

