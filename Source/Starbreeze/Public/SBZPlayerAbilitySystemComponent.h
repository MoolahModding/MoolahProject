#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZPlayerAbilityBuffType.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZPlayerAbilitySystemComponent.generated.h"

class ASBZAIBaseCharacter;
class USBZCharacterEffectDataAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerAbilitySystemComponent : public USBZAbilitySystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggeredTargetDamageIncrease;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_BuffTimeArray, meta=(AllowPrivateAccess=true))
    float BuffTimeArray[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerBuffTimeArray[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDurationArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffMovementSpeedIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDamageIncrease;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 PredictingBuffBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BuffTickCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffBlockCountArray[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* BuffGUIEffectDataArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* TankLastManStandingImmuneGUIEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* TankLastManStandingBlockingGUIEffectData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 BuffGUIEffectHandleArray[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 TankLastManStandingImmuneGUIEffectHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 TankLastManStandingBlockingGUIEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSkillTankLastManStandingImmuneTimeChanged, meta=(AllowPrivateAccess=true))
    float SkillTankLastManStandingImmuneTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSkillTankLastManStandingBlockingChanged, meta=(AllowPrivateAccess=true))
    bool bIsSkillTankLastManStandingBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SkillCooldownSecondsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAmmoSpecialistHighGrainSkillActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTriggerCoupDeGraceSkill;
    
public:
    USBZPlayerAbilitySystemComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSpeedBuffTime(const FGameplayTag& SkillTag, float Time);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMitigationBuffTime(const FGameplayTag& SkillTag, float Time);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDamageBuffTime(const FGameplayTag& SkillTag, float Time);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetSpeedBuffTime();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetMitigationBuffTime();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetDamageBuffTime();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DeactivateAmmoSpecialistHighGrainSkill();
    
    UFUNCTION(BlueprintCallable)
    void OnSkillTankLastManStandingImmuneTimeChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnSkillTankLastManStandingBlockingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffTimeArray();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UnblockSkillTankLastManStanding();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSpeedBuffTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSkillTankLastManStandingImmuneTime(float ImmuneTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMitigationBuffTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDamageBuffTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetSpeedBuffTime();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetMitigationBuffTime();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetDamageBuffTime();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MarkedForDeath(const TArray<ASBZAIBaseCharacter*>& AICharacters);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DeactivateAmmoSpecialistHighGrainSkill();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ActivateAmmoSpecialistHighGrainSkill();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RejectBuffTime(ESBZPlayerAbilityBuffType Type);
    
};

