#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3HUDKeyItemWidget.generated.h"

class UImage;
class USBZKeyItemData;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDKeyItemWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZKeyItemData* KeyItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_KeyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyItemCount;
    
public:
    UPD3HUDKeyItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyItemPickedUp(USBZKeyItemData* InKeyItemData, int32 InitialCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyItemDataCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyItemCountChanged(int32 InKeyItemCount);
    
};

