#pragma once
#include "CoreMinimal.h"
#include "SBZPartyManager.h"
#include "SBZPartyManagerAB.generated.h"

UCLASS(Blueprintable)
class USBZPartyManagerAB : public USBZPartyManager {
    GENERATED_BODY()
public:
    USBZPartyManagerAB();
    UFUNCTION(BlueprintCallable)
    void OnPartyLeaderStoppedMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyLeaderStartedMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyLeaderMatchJoin();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyLeaderMatchFound();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredGameStart();
    
    UFUNCTION(BlueprintCallable)
    void JoinPartyAfterLeave(const FString& Code);
    
    UFUNCTION(BlueprintCallable)
    void InvitePopUpCallback(FName ActionName);
    
};

