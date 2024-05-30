#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SBZLocalPlayerFeedbackInfo.h"
#include "SBZLocalPlayerFeedbackParameters.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCameraFeedbackComponent.generated.h"

class ASBZPlayerCameraManager;
class UObject;
class USBZLocalPlayerFeedback;
class USBZPlayerCameraFeedbackComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=SBZPlayerCameraManager, meta=(BlueprintSpawnableComponent))
class USBZPlayerCameraFeedbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLocalPlayerFeedbackInfo> CurrentFeedbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCameraManager* PlayerCameraOwner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USBZLocalPlayerFeedback>, FTimerHandle> FeedbackFirstPlayCooldowns;
    
public:
    USBZPlayerCameraFeedbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetFeedbackIntensity(int32 FeedbackID, float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFeedback(int32 RemoveID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPlayerCameraFeedbackComponent* GetLocalCameraFeedbackComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool FadeOutFeedback(int32 RemoveID, bool bIsAutoRemoved);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CooldownTimerDelegate(TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 AddFeedback(UPARAM(Ref) FSBZLocalPlayerFeedbackParameters& Parameters);
    
};

