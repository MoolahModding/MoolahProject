#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZEquippableConfig.h"
#include "Templates/SubclassOf.h"
#include "SBZStandaloneWeaponDisplay.generated.h"

class ASBZWeapon;
class USBZBaseWeaponData;
class USBZEquippablePartConfig;
class USBZEquippablePartDataAsset;
class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStandaloneWeaponDisplay : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig WeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeWeaponMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* SpawnedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PivotPointToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceWithoutPivotPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedPivotPoint;
    
public:
    ASBZStandaloneWeaponDisplay();
    UFUNCTION(BlueprintCallable)
    void SetupWeaponData(const USBZBaseWeaponData* InWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponConfig(const FSBZEquippableConfig& InWeaponConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* PartAsset, USBZEquippablePartConfig* PartConfig);
    
    UFUNCTION(BlueprintCallable)
    void RemovePart(const USBZModularPartSlotBase* Slot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponSpawned();
    
};

