#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZChallengeData.h"
#include "SBZAnalyticsManager.generated.h"

class USBZAnalyticsProvider;
class USBZInfamyManager;

UCLASS(Blueprintable)
class USBZAnalyticsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAnalyticsProvider* AnalyticsProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime GameLaunchedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastScreenUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* HeartbeatWorldContextObject;
    
public:
    USBZAnalyticsManager();

    UFUNCTION(BlueprintCallable)
    void SendInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience);
    
    UFUNCTION(BlueprintCallable)
    void SendChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
};

