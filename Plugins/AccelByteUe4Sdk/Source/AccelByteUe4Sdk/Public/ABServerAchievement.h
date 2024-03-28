#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "ABServerAchievement.generated.h"

UCLASS(Blueprintable)
class UABServerAchievement : public UObject {
    GENERATED_BODY()
public:
    UABServerAchievement();
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const FString& UserId, const FString& AchievementCode, FDHandler OnSuccess, FDErrorHandler OnError);
    
};

