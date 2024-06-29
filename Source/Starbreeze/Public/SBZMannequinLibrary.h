#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZInventoryEquipmentType.h"
#include "SBZEquippableConfig.h"
#include "SBZMannequinLibrary.generated.h"

class ASBZMainMenuPlayerCharacter;
class UAnimSequenceBase;
class UObject;

UCLASS(Blueprintable)
class USBZMannequinLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMannequinLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinPose(const UObject* WorldContextObject, UAnimSequenceBase* Pose);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinLoadout(const UObject* WorldContextObject, const FSBZEquippableConfig& EquippableConfig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinEquipment(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshMainMenuMannequin(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZMainMenuPlayerCharacter* GetMultiplayerMannequin(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZMainMenuPlayerCharacter* GetMainMenuMannequin(const UObject* WorldContextObject);
    
};

