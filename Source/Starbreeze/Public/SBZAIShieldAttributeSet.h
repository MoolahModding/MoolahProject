#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAICharacterAttributeSet.h"
#include "SBZAIShieldAttributeSet.generated.h"

class USBZAIShield;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class USBZAIShieldAttributeSet : public USBZAICharacterAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisorArmor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData VisorArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData VisorHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ShieldHardness;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIShield* Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShieldVisor;
    
public:
    USBZAIShieldAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisorArmor(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetVisorArmor(float NewCurrentValue);
    
};

