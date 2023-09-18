#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3HeistState.h"
#include "SBZNegotiationManager.generated.h"

class APawn;
class USBZNegotiationSettings;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZNegotiationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EndNegotiationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNegotiationSettings* Settings;
    
public:
    USBZNegotiationManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnKilledDuringNegotiation(APawn* DeadPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

