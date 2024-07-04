#pragma once
#include "CoreMinimal.h"
#include "SBZActionControlReference.h"
#include "SBZControlsReference.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZViewTargetContainerWidget.generated.h"

class ASBZPlayerController;
class ISBZViewTargetCollectionInterface;
class USBZViewTargetCollectionInterface;
class UPanelWidget;
class USBZViewTargetWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZViewTargetContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZViewTargetWidget> ViewTargetWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ViewTargetWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference HackerAcedControlReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference HackerRoutedPingControlReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionControlReference HackerSecureLoopControlReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZViewTargetCollectionInterface> TargetCollectionInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZViewTargetWidget*> WidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentControlsReferenceID;
    
public:
    USBZViewTargetContainerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnViewTargetChanged(ASBZPlayerController* InPlayerController, const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsSecurityCamera(bool bIsSecurityCamera);
    
};

