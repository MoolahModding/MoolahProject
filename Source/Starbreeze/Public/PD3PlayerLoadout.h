#pragma once
#include "CoreMinimal.h"
#include "PD3ModifiableLoadoutData.h"
#include "SBZEquippableConfig.h"
#include "SBZMaskConfig.h"
#include "SBZSuitConfig.h"
#include "SBZThrowableConfig.h"
#include "PD3PlayerLoadout.generated.h"

class USBZArmorData;
class USBZGloveData;
class USBZMaskData;
class USBZPlayerAbilityData;
class USBZPlayerCharacterData;
class USBZSkillData;
class USBZSuitData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FPD3PlayerLoadout {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> PreferredCharacterDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableConfig> EquippableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig OverkillWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZThrowableConfig> ThrowableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* MaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitData* SuitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGloveData* GloveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSuitConfig SuitConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* ArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> SkillArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3ModifiableLoadoutData> ModifiableLoadoutDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilityData* AbilityData;
    
public:
    FPD3PlayerLoadout();
};

