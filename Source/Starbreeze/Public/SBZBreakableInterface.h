#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESBZOnBreakableBrokenAction.h"
#include "SBZBreakableInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZBreakableInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZBreakableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBroken(ESBZOnBreakableBrokenAction InBreakableBrokenAction);
    
};

