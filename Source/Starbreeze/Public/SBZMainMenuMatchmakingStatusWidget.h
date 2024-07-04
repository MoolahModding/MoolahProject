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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTravelToGameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingProgress(const FSBZAsyncLoadingProgress& Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingCancel();
    
};

