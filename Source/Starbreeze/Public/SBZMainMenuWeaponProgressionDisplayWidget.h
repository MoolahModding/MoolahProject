#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZDamageDistance.h"
#include "SBZEquippableConfig.h"
#include "SBZModularSlotPart.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuWeaponProgressionDisplayWidget.generated.h"

class USBZBaseWeaponData;
class USBZEquippablePartDataAsset;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponProgressionDisplayWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxWeaponLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentWeaponXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponXPAtNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponLevelProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* BaseItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxModifierSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularSlotPart> WeaponSlotPartArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartDataAsset*> WeaponPartArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageDistance> WeaponStatDamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig EquippableConfig;
    
public:
    USBZMainMenuWeaponProgressionDisplayWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponVisuals(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBaseWeaponVisuals(const USBZBaseWeaponData* InBaseWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewWeaponData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBaseData();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitilizeWithBaseInventoryData(const USBZInventoryBaseData* InBaseData);
    
};

