#pragma once
#include "CoreMinimal.h"
#include "SBZReplayEventInfo.h"
#include "SBZReplayInfo.h"
#include "SBZWidgetBase.h"
#include "SBZReplayBaseWidget.generated.h"

class ASBZReplayPlayerController;
class USBZGameInstance;
class USBZReplayFilePlayer;

UCLASS(Blueprintable, EditInlineNew)
class USBZReplayBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZReplayPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReplaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZReplayInfo ReplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZReplayEventInfo> ReplayEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayFilePlayer* ReplayFilePlayer;
    
public:
    USBZReplayBaseWidget();
    UFUNCTION(BlueprintCallable)
    bool StopReplay();
    
    UFUNCTION(BlueprintCallable)
    bool StartReplay();
    
    UFUNCTION(BlueprintCallable)
    void SetElapasedTimeSeconds(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void ScrubForward();
    
    UFUNCTION(BlueprintCallable)
    void ScrubBackward();
    
    UFUNCTION(BlueprintCallable)
    bool ResumeReplay();
    
    UFUNCTION(BlueprintCallable)
    void Quit();
    
    UFUNCTION(BlueprintCallable)
    bool PauseReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayUpdate(const FString& ReplayLength, const FString& ReplayElapased, float ReplayElapsedPercent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReplayTimerUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReplayStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnReplayStarted(FSBZReplayInfo InReplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseReplaySpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplayLengthSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseReplaySpeed();
    
    UFUNCTION(BlueprintCallable)
    void CycleNextPlayerView();
    
    UFUNCTION(BlueprintCallable)
    void CycleNextCameraView();
    
};

