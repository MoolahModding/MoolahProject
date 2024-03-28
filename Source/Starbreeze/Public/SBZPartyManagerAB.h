#pragma once
#include "CoreMinimal.h"
#include "SBZPartyManager.h"
#include "SBZPartyManagerAB.generated.h"

UCLASS(Blueprintable)
class USBZPartyManagerAB : public USBZPartyManager {
    GENERATED_BODY()
public:
    USBZPartyManagerAB();
    UFUNCTION()
    void OnPartyLeaderStoppedMatchmaking();
    
    UFUNCTION()
    void OnPartyLeaderStartedMatchmaking();
    
    UFUNCTION()
    void OnPartyLeaderMatchJoin();
    
    UFUNCTION()
    void OnPartyLeaderMatchFound();
    
    UFUNCTION()
    void OnEnteredGameStart();
    
    UFUNCTION()
    void JoinPartyAfterLeave(const FString& Code);
    
    UFUNCTION()
    void InvitePopUpCallback(FName ActionName);
    
};

