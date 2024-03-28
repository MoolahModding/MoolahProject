#pragma once
#include "CoreMinimal.h"
#include "SBZAsyncLoadingProgress.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuMatchmakingStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuMatchmakingStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuMatchmakingStatusWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTravelToGameStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerReady();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitedMatchmaking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnteredMatchmaking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingProgress(const FSBZAsyncLoadingProgress& Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingCancel();
    
};

