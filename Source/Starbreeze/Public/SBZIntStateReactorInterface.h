#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZIntStateReactorInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZIntStateReactorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZIntStateReactorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged(int32 OldState, int32 NewState, bool bDoCosmetics);
    
};

