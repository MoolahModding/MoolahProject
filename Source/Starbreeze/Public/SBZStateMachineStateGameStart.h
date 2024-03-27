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
    UFUNCTION()
    void SessionJoinStarted();
    
    UFUNCTION()
    void SessionJoined(UWorld* InWorld);
    
private:
    UFUNCTION()
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
};

