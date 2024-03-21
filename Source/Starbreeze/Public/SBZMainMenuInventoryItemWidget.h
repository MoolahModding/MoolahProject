#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuInventoryItemWidget.generated.h"

class USBZInventoryBaseData;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuInventoryItemWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ItemName;
    
public:
    USBZMainMenuInventoryItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeItem(const USBZInventoryBaseData* InInventoryItemData);
    
};

