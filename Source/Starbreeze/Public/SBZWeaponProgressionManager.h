#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWeaponProgressionManager.generated.h"

class USBZWeaponProgressionManager;

UCLASS(Blueprintable)
class USBZWeaponProgressionManager : public UObject {
    GENERATED_BODY()
public:
    USBZWeaponProgressionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWeaponProgressionManager* GetWeaponProgressionManager(const UObject* WorldContextObject);
    
};

