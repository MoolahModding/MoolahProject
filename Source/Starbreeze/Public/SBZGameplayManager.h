#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZGameplayManager.generated.h"

class USBZGameplayManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GameplaySystems;
    
public:
    USBZGameplayManager();
private:
    UFUNCTION()
    void OnRestartLevelStarted();
    
    UFUNCTION()
    void OnPlayableLevelInitialized(UWorld* World);
    
    UFUNCTION()
    void OnOutroSequenceStarted(const int32 OutroVariation);
    
    UFUNCTION()
    void OnIntroSequenceStarted();
    
    UFUNCTION()
    void OnBlackScreenStarted();
    
    UFUNCTION()
    void OnActionPhaseStarted();
    
    UFUNCTION()
    void OnActionPhaseExited();
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameplayManager* Get(const UObject* WorldContextObject);
    
};

