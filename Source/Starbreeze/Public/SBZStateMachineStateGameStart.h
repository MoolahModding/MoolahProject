#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateGameStart.generated.h"

class USBZLoadingScreen;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateGameStart : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
public:
    USBZStateMachineStateGameStart();

protected:
    UFUNCTION(BlueprintCallable)
    void SessionJoinStarted();
    
    UFUNCTION(BlueprintCallable)
    void SessionJoined(UWorld* InWorld);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPopUpKickedFromHeistClosed(FName CloseActionName);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
};

