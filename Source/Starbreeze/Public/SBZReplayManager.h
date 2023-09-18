#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZReplayManager.generated.h"

class USBZGameInstance;
class USBZReplayFilePlayer;
class USBZReplayFileRecorder;
class USBZReplayManager;

UCLASS(Blueprintable, Transient)
class STARBREEZE_API USBZReplayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayFilePlayer* ReplayFilePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplayFileRecorder* ReplayFileRecorder;
    
public:
    USBZReplayManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZReplayManager* GetReplayManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FindReplays();
    
    UFUNCTION(BlueprintCallable)
    void DeleteReplay(const FString& ReplayName);
    
};

