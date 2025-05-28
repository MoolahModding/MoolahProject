#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "SBZInsightTraceActor.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZInsightTraceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartAndStopTrace;
    
public:
    ASBZInsightTraceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTrace();
    
    UFUNCTION(BlueprintCallable)
    void StopAndExitLevel();
    
    UFUNCTION(BlueprintCallable)
    void StartTrace();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCameraCut(UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
public:
    UFUNCTION(BlueprintCallable)
    void BookmarkTrace(const FString& BookmarkName);
    
};

