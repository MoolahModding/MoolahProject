#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZSettingHelperPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZSettingHelperPanel : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PanelName;
    
public:
    USBZSettingHelperPanel();
    UFUNCTION(BlueprintCallable)
    void SetSettingCategoryName(const FName& InSettingCategoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPanelState();
    
};

