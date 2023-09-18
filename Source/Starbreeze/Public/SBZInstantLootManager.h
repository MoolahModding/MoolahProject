#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZInstantLootManager.generated.h"

class USBZInstantLootManager;

UCLASS(Blueprintable)
class USBZInstantLootManager : public UObject {
    GENERATED_BODY()
public:
    USBZInstantLootManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZInstantLootManager* GetInstantLootManager(UObject* WorldContextObject);
    
};

