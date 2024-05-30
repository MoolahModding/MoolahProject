#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerReadyInfo.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZJobOverviewBaseWidget.generated.h"

class ASBZPlayerState;
class UPanelWidget;
class USBZJobOverviewPlayerStatusWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZJobOverviewBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZJobOverviewPlayerStatusWidget> PlayerStatusWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyWidgetContainer;
    
public:
    USBZJobOverviewBaseWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyStatusUpdated(const TArray<FSBZPlayerReadyInfo>& PlayerReadyStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerStateSkipIntroSequenceChanged(ASBZPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerStateCountChanged(ASBZPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIntroSequenceChanged(bool bIsStarted);
    
};

