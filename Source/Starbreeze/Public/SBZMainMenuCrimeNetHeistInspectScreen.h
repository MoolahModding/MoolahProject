#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuCrimeNetHeistInspectScreen.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetHeistInspectScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPD3HeistDataAsset* HeistData;
    
public:
    USBZMainMenuCrimeNetHeistInspectScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchmakingStarted();
    
protected:
    UFUNCTION()
    void HandleMatchmakingStarted();
    
};

