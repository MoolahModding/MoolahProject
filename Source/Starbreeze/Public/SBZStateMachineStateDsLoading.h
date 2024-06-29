#pragma once
#include "CoreMinimal.h"
#include "SBZDsStateMachineState.h"
#include "SBZStateMachineStateDsLoading.generated.h"

class USBZDSChallengeManager;
class USBZMetaDataLoader;
class UWorld;

UCLASS(Blueprintable, Config=Engine)
class STARBREEZE_API USBZStateMachineStateDsLoading : public USBZDsStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutAck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDSChallengeManager* DSChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMetaDataLoader* MetaDataLoader;
    
public:
    USBZStateMachineStateDsLoading();

protected:
    UFUNCTION(BlueprintCallable)
    void DestinationMapLoaded(UWorld* NewWorld);
    
};

