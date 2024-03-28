#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerReadyInfo.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZJobOverviewBaseWidget.generated.h"

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
    UFUNCTION()
    void OnPlayerReadyStatusUpdated(const TArray<FSBZPlayerReadyInfo>& PlayerReadyStatus);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void IntroSequenceStarted();
    
private:
    UFUNCTION()
    void HandleIntroSequenceStarted();
    
};

