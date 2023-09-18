#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZModularPartApplier.generated.h"

class UClass;
class USBZModularPartConfig;
class USBZModularPartDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USBZModularPartApplier : public UObject {
    GENERATED_BODY()
public:
    USBZModularPartApplier();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UClass*> GetExpectedParts(const USBZModularPartDataAsset* PartAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesConfigNeedParts() const;
    
    UFUNCTION(BlueprintCallable)
    USBZModularPartConfig* CreateNewConfig();
    
};

