#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "ESBZOnlineTacticType.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuPrePlanningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlanningWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
    USBZMainMenuPrePlanningWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyPlayerReadyStatusUpdatedEvent(bool bInReadyStatus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnPlayerReadyStatusChanged(bool bInReadyStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAsyncLoadingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineTacticType GetTacticTypeFromGameSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetDifficulty() const;
    
};

