#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSetStateRequest.h"
#include "OnStateEnteredDelegateDelegate.h"
#include "OnStateLeftDelegateDelegate.h"
#include "SBZStateMachine.generated.h"

class USBZStateMachineState;
class USBZStateMachineData;

DECLARE_LOG_CATEGORY_EXTERN(LogStateMachine, Log, All);

UCLASS(Blueprintable)
class SBZSTATEMACHINEBASE_API USBZStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineState* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSetStateRequest> SetStateQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USBZStateMachineState*> States;
    
public:
    USBZStateMachine();

    virtual void Init() PURE_VIRTUAL(Init);
    virtual void Start() PURE_VIRTUAL(Start);
    virtual void HandleStateEntered(FName StateName) PURE_VIRTUAL(HandleStateEntered);

    virtual void AddState(FName StateName, USBZStateMachineState* State);
    void SetState(FName StateName, USBZStateMachineData* InData);
    FName GetCurrentStateName();

    FOnStateEnteredDelegate OnStateEntered;
    FOnStateLeftDelegate OnStateLeft;
};

