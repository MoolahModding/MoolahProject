#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZCharacterAttributeSet.h"
#include "SBZPlayerAttributeSet.generated.h"

class USBZArmorData;
class USBZPlayerAbilityData;

UCLASS(Blueprintable)
class USBZPlayerAttributeSet : public USBZCharacterAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryEquippableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryEquippableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryEquippableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryEquippableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryEquippableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryEquippableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryEquippableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryEquippableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryEquippableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryEquippableAmmoLoaded, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryEquippableAmmoLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryEquippableAmmoLoadedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryEquippableAmmoLoaded, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryEquippableAmmoLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryEquippableAmmoLoadedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryEquippableAmmoLoaded, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryEquippableAmmoLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryEquippableAmmoLoadedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryThrowableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryThrowableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryThrowableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryThrowableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryThrowableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryThrowableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryThrowableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryThrowableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryThrowableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryToolPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryToolPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryToolPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryToolPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryToolPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryToolPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryToolPlaceableAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryToolPlaceableAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryToolPlaceableAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryToolAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryToolAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryToolAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryToolAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryToolAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryToolAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TertiaryToolAmmoInventory, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TertiaryToolAmmoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TertiaryToolAmmoInventoryServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Stamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownedCount, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxDownedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReviveHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownedToCuffedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DefeatDownedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DefeatCuffedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Dodge, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Dodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DodgeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DodgeReplenishDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DodgeReplenishSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CriticalHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CriticalHealthDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorChunkCount, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorChunkCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorReplenishDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmorTrauma, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorTrauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ArmorTraumaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LoadoutWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeaponLoadoutWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeightTierOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxRuntimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnArmorChunkCountPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnDownedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnWeaponMagazineCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnThrowableAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MinRespawnEquippableAmmo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZArmorData* ArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilityData* AbilityData;
    
public:
    USBZPlayerAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryToolAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryThrowableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TertiaryEquippableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryToolAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryThrowableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryEquippableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryToolAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryThrowableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryEquippableAmmoInventory(const FGameplayAttributeData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DownedCount(const FGameplayAttributeData& OldDownedCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Dodge(const FGameplayAttributeData& OldDodge);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorTrauma(const FGameplayAttributeData& OldArmorTrauma);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmorChunkCount(const FGameplayAttributeData& OldArmorChunkCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryToolPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryToolAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryThrowableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryEquippableAmmoLoaded(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTertiaryEquippableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryToolPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryToolAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryThrowableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryEquippableAmmoLoaded(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetSecondaryEquippableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryToolPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryToolAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryThrowableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryPlaceableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryEquippableAmmoLoaded(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPrimaryEquippableAmmoInventory(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDownedCount(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDodge(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetArmorTrauma(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetArmorChunkCount(float NewCurrentValue);
    
};

