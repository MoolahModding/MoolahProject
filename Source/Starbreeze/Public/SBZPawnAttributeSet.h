#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "SBZPawnAttributeSet.generated.h"

class APawn;
class USBZDamageType;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZPawnAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Armor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorHurtReactionWeightReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DealtDamageMultiplier;
    
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
    
public:
    USBZPawnAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(const FGameplayAttributeData& OldHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Armor(const FGameplayAttributeData& OldArmor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHealth(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetArmor(float NewCurrentValue);
    
};

