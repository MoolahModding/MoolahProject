#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZLoadProgressionManager.generated.h"

class USBZLoadProgressionManager;

UCLASS(Blueprintable)
class USBZLoadProgressionManager : public UObject {
    GENERATED_BODY()
public:
    USBZLoadProgressionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZLoadProgressionManager* GetLoadProgressionManager(const UObject* WorldContextObject);
    
};

