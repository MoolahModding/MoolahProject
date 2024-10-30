#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZMainMenuAnimationName.h"
#include "PD3PlayerLoadout.h"
#include "SBZEquippableConfig.h"
#include "SBZMaskConfig.h"
#include "SBZMainMenuPlayerCharacter.generated.h"

class ASBZEquippable;
class ASBZMainMenuPlayerCharacter;
class UObject;
class USBZCharacterComponent;
class USBZMaskData;
class USBZModularCharacterComponent;
class USBZPlayerCharacterData;
class UWidgetComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMainMenuPlayerCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZModularCharacterComponent* Mesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZEquippable* Equippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MaskEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfigEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMaskData* MaskDataEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterComponent* CharacterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCharacterData* PlayerCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig AsyncEquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedWeaponObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedLoadoutObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout CachedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZMainMenuPlayerCharacter*> DuplicateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMainMenuAnimationName StartMontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredEquippableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* NameplateWidgetComponent;
    
public:
    ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DestroyEquippable();
    
};

