#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerReadyInfo.h"
#include "SBZWidgetBase.h"
#include "SBZJobOverviewPlayerStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZJobOverviewPlayerStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZJobOverviewPlayerStatusWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerInfo(const FSBZPlayerReadyInfo& InPlayerReadyInfo);
    
};

