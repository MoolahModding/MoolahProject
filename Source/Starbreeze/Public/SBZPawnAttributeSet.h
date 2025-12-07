#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "SBZPawnAttributeSet.generated.h"

class APawn;
class USBZDamageType;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPawnAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData OverHealDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData IncomingArmorPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Armor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorHurtReactionWeightReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData OverHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData OverHealMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OutgoingDamageMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData OutgoingDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IncomingDamageMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData IncomingDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ArmorDamageReduction, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorDamageReductionMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDamageType* LastDamageTypeCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* LastInstigatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FlashedVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* FlashedByAllyVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* HitByFragVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IncomingDamageIncrease, meta=(AllowPrivateAccess=true))
    float ArmorBrickBusterIncomingDamageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IncomingDamageIncrease, meta=(AllowPrivateAccess=true))
    float ElectricTenderizerIncomingDamageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IncomingDamageIncrease, meta=(AllowPrivateAccess=true))
    float FragTenderizeIncomingDamageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IncomingDamageIncrease, meta=(AllowPrivateAccess=true))
    float FlashbangMasterIncomingDamageIncrease;
    
public:
    USBZPawnAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverHeal(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutgoingDamageMultiplier(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IncomingDamageMultiplier(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IncomingDamageIncrease();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorDamageReduction(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Armor(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetOverHeal(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetOutgoingDamageMultiplier(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetIncomingDamageMultiplier(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHealth(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetArmorDamageReduction(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetArmor(float NewCurrentValue);
    
};

