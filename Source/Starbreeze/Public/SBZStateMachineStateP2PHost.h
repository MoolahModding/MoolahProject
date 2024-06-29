#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateP2PHost.generated.h"

class USBZAccelByteDS;
class USBZStateMachineDataMatchmaking;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateP2PHost : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataMatchmaking* MatchmakingData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteDS* AccelByteDS;
    
public:
    USBZStateMachineStateP2PHost();

protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadMap(UWorld* NewWorld);
    
};

