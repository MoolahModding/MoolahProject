#pragma once
#include "CoreMinimal.h"
#include "SBZKeyItemCountChangedEvent.h"
#include "SBZOnKeyItemCountChangedDelegateDelegate.h"
#include "SBZPlayerStateWidgetBase.h"
#include "SBZSharedKeyItemTagChangedEvent.h"
#include "Templates/SubclassOf.h"
#include "PD3KeyItemContainer.generated.h"

class UPD3HUDKeyItemWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3KeyItemContainer : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_KeyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayedKeyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPD3HUDKeyItemWidget> KeyItemWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnKeyItemCountChangedDelegate OnKeyItemCountChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPD3HUDKeyItemWidget*> KeyItemWidgets;
    
public:
    UPD3KeyItemContainer();

private:
    UFUNCTION(BlueprintCallable)
    void OnSharedKeyItemCountChanged(const FSBZSharedKeyItemTagChangedEvent& SharedKeyItemTagChangedEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyItemCountChanged(const FSBZKeyItemCountChangedEvent& KeyItemCountChangedEventData);
    
};

