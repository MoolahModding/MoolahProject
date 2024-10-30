#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateEventDelegateDelegate.h"
#include "FiniteStateMachineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TIMEENHANCEMENTS_API UFiniteStateMachineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEventDelegate StateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FName State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocalState;
    
public:
    UFiniteStateMachineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(FName NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(FName NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
};

