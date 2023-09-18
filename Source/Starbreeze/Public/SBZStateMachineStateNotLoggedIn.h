#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateNotLoggedIn.generated.h"

class USBZAccelByteAdminHelper;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateNotLoggedIn : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAccelByteAdminHelper* AccelByteAdminHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoginBadRequestErrorCount;
    
public:
    USBZStateMachineStateNotLoggedIn();

};

