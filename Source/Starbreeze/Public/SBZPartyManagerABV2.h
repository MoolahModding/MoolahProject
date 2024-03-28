#pragma once
#include "CoreMinimal.h"
#include "SBZPartyManagerAB.h"
#include "SBZPartyManagerABV2.generated.h"

UCLASS(Blueprintable)
class USBZPartyManagerABV2 : public USBZPartyManagerAB {
    GENERATED_BODY()
public:
    USBZPartyManagerABV2();
private:
    UFUNCTION()
    void OnConfirmPartyLeaderLeft(FName ClosingActionName);
    
public:
    UFUNCTION()
    void InvitePopUpCallbackV2(FName ActionName);
    
protected:
    UFUNCTION()
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
    UFUNCTION()
    void HandleNotLoggedInEntered();
    
};

