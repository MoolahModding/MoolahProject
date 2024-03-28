#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUE4StatsProfiler.generated.h"

class USBZUE4StatsProfiler;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUE4StatsProfiler : public UObject {
    GENERATED_BODY()
public:
    USBZUE4StatsProfiler();
private:
    UFUNCTION()
    void OnExitedActionPhase();
    
    UFUNCTION()
    void OnEnteredActionPhase();
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZUE4StatsProfiler* GetUE4StatsProfiler(const UObject* WorldContextObject);
    
};

