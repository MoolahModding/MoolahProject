#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStatisticsManager.h"
#include "SBZExperienceManager.generated.h"

class UObject;
class USBZExperienceManager;

UCLASS(Blueprintable)
class USBZExperienceManager : public USBZPlayerStatisticsManager {
    GENERATED_BODY()
public:
    USBZExperienceManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZExperienceManager* GetExperienceManager(const UObject* WorldContextObject);
    
};

