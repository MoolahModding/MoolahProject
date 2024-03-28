#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuPrePlanningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlanningWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
    USBZMainMenuPrePlanningWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnLobbyPlayerReadyStatusUpdatedEvent(bool bInReadyStatus);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
private:
    UFUNCTION()
    void NativeOnPlayerReadyStatusChanged(bool bInReadyStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAsyncLoadingDone();
    
    UFUNCTION(BlueprintPure)
    ESBZDifficulty GetDifficulty() const;
    
};

