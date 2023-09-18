#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZMaskConfig.h"
#include "SBZCustomizationManager.generated.h"

class ASBZCustomizationManager;
class ASBZMainMenuPlayerCharacter;
class ASBZMask;
class ASBZStandaloneWeaponDisplay;
class UClass;
class UObject;
class USBZMaskData;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCustomizationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* StartMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MaskRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetForCameraFromMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MannequinToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuitCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SuitRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetForCameraFromMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponCustomizationCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetForCameraFromWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator StartRotationForWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZStandaloneWeaponDisplay* StandaloneWeaponDisplay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMask* GlobalMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMainMenuPlayerCharacter* Mannequin;
    
public:
    ASBZCustomizationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGlobalMaskWithConfig(const FSBZMaskConfig& MaskConfig);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGlobalMask(const USBZMaskData* MaskData);
    
    UFUNCTION(BlueprintCallable)
    void ShowMainMenuMannequin();
    
    UFUNCTION(BlueprintCallable)
    void ShowGlobalMask();
    
    UFUNCTION(BlueprintCallable)
    void ShowCustomizableWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ShowCustomizableMannequin();
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuMannequinRotationEnabled(bool bEnabled);
    
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

