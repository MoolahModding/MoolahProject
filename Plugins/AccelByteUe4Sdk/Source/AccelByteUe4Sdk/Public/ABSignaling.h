#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DSignalingP2PNotifDelegate.h"
#include "SendSignalingMessageRequest.h"
#include "ABSignaling.generated.h"

UCLASS(Blueprintable)
class UABSignaling : public UObject {
    GENERATED_BODY()
public:
    UABSignaling();
    UFUNCTION(BlueprintCallable)
    void SetSignalingP2PNotif(FDSignalingP2PNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    FString SendSignalingMessage(const FSendSignalingMessageRequest& Request);
    
};

