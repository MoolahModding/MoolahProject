#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "ESBZFireType.h"
#include "SBZEquippableConfig.h"
#include "SBZWeaponStats.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuWeaponStatsWidget.generated.h"

class USBZEquippableData;
class USBZEquippablePartDataAsset;
class USBZModularPartSlotBase;
class USBZUIWeaponStatsAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponStatsWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig BaseEquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponStats BaseWeaponStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BaseAmmoLoadedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BaseAmmoInventoryMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZFireType BaseFireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig CompareEquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponStats CompareWeaponStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CompareAmmoLoadedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CompareAmmoInventoryMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZFireType CompareFireType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIWeaponStatsAsset* UIWeaponStats;
    
public:
    USBZMainMenuWeaponStatsWidget();

    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetBaseFromSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseFromEquippableData(const USBZEquippableData* InEquippableData);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseFromEquippableConfig(const FSBZEquippableConfig& InEquippableConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompare() const;
    
    UFUNCTION(BlueprintCallable)
    void CompareWithWeaponPart(const USBZModularPartSlotBase* InPartSlot, const USBZEquippablePartDataAsset* InWeaponPart);
    
    UFUNCTION(BlueprintCallable)
    void CompareWithSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void CompareWithNothing();
    
    UFUNCTION(BlueprintCallable)
    void CompareWithEquippableData(const USBZEquippableData* InEquippableData);
    
    UFUNCTION(BlueprintCallable)
    void CompareWithEquippableConfig(const FSBZEquippableConfig& InEquippableConfig);
    
};

