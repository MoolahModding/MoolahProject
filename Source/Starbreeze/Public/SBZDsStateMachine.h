#pragma once
#include "CoreMinimal.h"
#include "ESBZDsStateMachineState.h"
#include "SBZCommonStateMachine.h"
#include "SBZDsStateMachine.generated.h"

class USBZAccelByteDS;
class USBZAccelByteServerLifeCycle;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDsStateMachine : public USBZCommonStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TEnumAsByte<ESBZDsStateMachineState>> StateEnums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteDS* AccelByteDS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteServerLifeCycle* AccelByteServerLifeCycle;
    
public:
    USBZDsStateMachine();

};

