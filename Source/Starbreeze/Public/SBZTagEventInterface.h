#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SBZTagEventInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZTagEventInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZTagEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTagActive(const FGameplayTag& EventTag, bool bActive);
    
};

