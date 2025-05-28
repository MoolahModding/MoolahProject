#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZArmorConfig.h"
#include "SBZMaskConfig.h"
#include "Templates/SubclassOf.h"
#include "SBZCustomizationManager.generated.h"

class ASBZCustomizationManager;
class ASBZMainMenuPlayerCharacter;
class ASBZMask;
class ASBZMenuArmor;
class ASBZStandaloneWeaponDisplay;
class UObject;
class USBZCustomizationRotateComponent;
class USBZMaskData;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCustomizationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCustomizationRotateComponent> WeaponRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetForCameraFromWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZStandaloneWeaponDisplay* StandaloneWeaponDisplay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* StartMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCustomizationRotateComponent> MaskRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenteredSpawnOffsetForCameraFromMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CenteredStartRotationForMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightSidedSpawnOffsetForCameraFromMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RightSidedStartRotationForMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MannequinToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuitCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCustomizationRotateComponent> SuitRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetForCameraFromMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InspectArmorCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InspectArmorCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InspectArmorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomizeArmorCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomizeArmorCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CustomizeArmorRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMask* GlobalMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMenuArmor* GlobalArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMainMenuPlayerCharacter* Mannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorConfig ArmorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorVariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmorVariationChunkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmorChunkTypeCPD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArmorChunkMaterialNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorChunkTypeVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorChunkTypeCPDIndex;
    
public:
    ASBZCustomizationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGlobalMaskWithConfig(const FSBZMaskConfig& InMaskConfig);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGlobalMask(const USBZMaskData* MaskData);
    
    UFUNCTION(BlueprintCallable)
    void ShowMainMenuMannequin();
    
    UFUNCTION(BlueprintCallable)
    void ShowGlobalMask(bool InCentered);
    
    UFUNCTION(BlueprintCallable)
    void ShowCustomizableMannequin();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponInspect(bool bInIsInspect);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuMannequinRotationEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorVariationIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorInspect(bool bIsInspect);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorConfig(const FSBZArmorConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    void HideMainMenuMannequin();
    
    UFUNCTION(BlueprintCallable)
    void HideGlobalMask();
    
    UFUNCTION(BlueprintCallable)
    void HideCustomizableMannequin();
    
    UFUNCTION(BlueprintCallable)
    bool GetMainMenuMannequinVisibility();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZCustomizationManager* GetCustomizationManager(const UObject* WorldContextObject);
    
};

