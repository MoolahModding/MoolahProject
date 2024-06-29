#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "SBZGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    USBZGameEngine();

private:
    UFUNCTION(BlueprintCallable)
    void OnResumingGamePopupClosed(FName ActionName);
    
};

