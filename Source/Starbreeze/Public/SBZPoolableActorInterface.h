#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZPoolableActorInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZPoolableActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZPoolableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnUnpooled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPooled();
    
};

