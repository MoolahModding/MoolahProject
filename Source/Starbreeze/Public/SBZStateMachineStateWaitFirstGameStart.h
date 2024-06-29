#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitFirstGameStart.generated.h"

class USBZMetaDataLoader;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitFirstGameStart : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMetaDataLoader* MetaDataLoader;
    
public:
    USBZStateMachineStateWaitFirstGameStart();

};

