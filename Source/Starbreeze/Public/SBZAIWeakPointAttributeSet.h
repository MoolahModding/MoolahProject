#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAICharacterAttributeSet.h"
#include "SBZAIWeakPointAttributeSet.generated.h"

class AActor;
class USBZAIWeakPoint;

UCLASS(Blueprintable)
class USBZAIWeakPointAttributeSet : public USBZAICharacterAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeakPointHealth, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeakPointHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIWeakPoint* WeakPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
public:
    USBZAIWeakPointAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeakPointHealth(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetWeakPointHealth(float NewCurrentValue);
    
};

