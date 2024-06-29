#pragma once
#include "CoreMinimal.h"
#include "SBZGameModeBase.h"
#include "ESBZMainMenuState.h"
#include "SBZGameModeMainMenu.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ASBZGameModeMainMenu : public ASBZGameModeBase {
    GENERATED_BODY()
public:
    ASBZGameModeMainMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMainMenuState(ESBZMainMenuState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZMainMenuState GetMainMenuState() const;
    
};

