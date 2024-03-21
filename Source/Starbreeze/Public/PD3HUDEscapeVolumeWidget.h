#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerInEscapeChangedEvent.h"
#include "SBZWidgetBase.h"
#include "PD3HUDEscapeVolumeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDEscapeVolumeWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPD3HUDEscapeVolumeWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayersInEscapeChangedEvent(const FSBZPlayerInEscapeChangedEvent& PlayerInEscapeChangedEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayersEnteredVolume(int32 PlayersInVolumeOnEntered, int32 TotalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPlayerCountChanged(int32 PlayersInVolumeOnChanged, int32 TotalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEscapeTimerChanged(int32 NewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAllPlayersLeftVolume(int32 PlayersInVolumeOnLeft, int32 TotalPlayers);
    
};

