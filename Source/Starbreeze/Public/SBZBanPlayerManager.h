#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBanPlayerManager.generated.h"

class USBZBanPlayerManager;

UCLASS(Blueprintable)
class USBZBanPlayerManager : public UObject {
    GENERATED_BODY()
public:
    USBZBanPlayerManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZBanPlayerManager* GetBanPlayerManager(const UObject* WorldContextObject);
    
};

