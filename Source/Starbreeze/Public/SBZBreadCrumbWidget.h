#pragma once
#include "CoreMinimal.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZBreadCrumbWidget.generated.h"

class UPanelWidget;
class USBZBreadCrumbButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZBreadCrumbWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> StackValueToNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBreadCrumbButtonWidget> BreadCrumbButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ButtonContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBreadCrumbButtonWidget*> WidgetPool;
    
public:
    USBZBreadCrumbWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
};

