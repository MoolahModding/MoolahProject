#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZPlayerAbilityBuffType.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZPlayerAbilitySystemComponent.generated.h"

class APawn;
class ASBZAIBaseCharacter;
class USBZCharacterEffectDataAsset;
class USBZSkillData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerAbilitySystemComponent : public USBZAbilitySystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggeredTargetDamageIncrease;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnBuffTimeArrayChanged, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 BuffCooldownTickCount;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnBuffBlockCountArrayChanged, meta=(AllowPrivateAccess=true))
    uint8 BuffBlockCountArray[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* BuffGUIEffectDataArray[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* BlockedBuffGUIEffectDataArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* TankLastManStandingImmuneGUIEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCharacterEffectDataAsset* AmmoSpecialistHighGrainGUIEffectData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 BuffGUIEffectHandleArray[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 BlockedBuffGUIEffectHandleArray[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 TankLastManStandingImmuneGUIEffectHandle;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 AmmoSpecialistHighGrainGUIEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSkillTankLastManStandingBlockingChanged, meta=(AllowPrivateAccess=true))
    bool bIsSkillTankLastManStandingBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnSkillTankLastManStandingImmuneTimeChanged, meta=(AllowPrivateAccess=true))
    float SkillTankLastManStandingImmuneTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SkillCooldownSecondsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTriggerCoupDeGraceSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAmmoSpecialistHighGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AmmoSpecialistHighGrainDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AmmoSpecialistHighGrainArmorPenetrationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverHealDegradationTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverHealDamagePauseTimer;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnBuffBlockCooldownTimeArrayChanged, meta=(AllowPrivateAccess=true))
    float BuffBlockCooldownTimeArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSkillData* LastManStandingSkillData;
    
public:
    USBZPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable)
    void OnSkillTankLastManStandingImmuneTimeChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnSkillTankLastManStandingBlockingChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnBuffTimeArrayChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnBuffBlockCountArrayChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnBuffBlockCooldownTimeArrayChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UnblockSkillTankLastManStanding();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTacticalDroneBuffBlockCooldown(float Cooldown);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSpeedBuffTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMitigationBuffTime(float Time);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetEncumbered();
    
private:
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
    void Multicast_RemoveEncumbered();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MarkTarget(APawn* MarkedPawn, float InDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MarkedForDeath(const TArray<ASBZAIBaseCharacter*>& AICharacters);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BlockSkillTankLastManStanding(float ImmuneTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RejectBuffTime(ESBZPlayerAbilityBuffType Type);
    
};

