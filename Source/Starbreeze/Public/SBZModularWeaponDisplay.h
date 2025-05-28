#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZEquippableConfig.h"
#include "SBZEquippablePartConfigGroup.h"
#include "SBZModularWeaponDisplay.generated.h"

class UMeshComponent;
class USBZBaseWeaponData;
class USBZEquippablePartDataAsset;
class USBZModularMeshComponent;
class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class ASBZModularWeaponDisplay : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZModularMeshComponent* ModularMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZEquippablePartConfigGroup> WeaponModMap;
    
public:
    ASBZModularWeaponDisplay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwapModPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* EquippablePart);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponModMap(FSBZEquippableConfig InWeaponModMap, bool bBuildNow);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponData(USBZBaseWeaponData* InWeaponData, bool bBuildNow);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlot(const USBZModularPartSlotBase* Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ModuleMeshLoadingDone();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZEquippableConfig GetWeaponModMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseWeaponData* GetWeaponData() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildWeapon();
    
};

