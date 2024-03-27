#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZTimeEventManager.generated.h"

class USBZTimeEventManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZTimeEventManager : public UObject {
    GENERATED_BODY()
public:
    USBZTimeEventManager();
    UFUNCTION()
    void RequestTimeEventCheck();
    
    UFUNCTION(BlueprintPure)
    float GetNextResetTime();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZTimeEventManager* Get(const UObject* WorldContextObject);
    
};

