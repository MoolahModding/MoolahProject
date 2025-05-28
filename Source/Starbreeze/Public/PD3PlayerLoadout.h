#pragma once
#include "CoreMinimal.h"
#include "PD3ModifiableLoadoutData.h"
#include "SBZArmorConfig.h"
#include "SBZEquippableConfig.h"
#include "SBZMaskConfig.h"
#include "SBZOverskillLoadoutConfig.h"
#include "SBZOverskillProgressData.h"
#include "SBZSuitConfig.h"
#include "SBZThrowableConfig.h"
#include "PD3PlayerLoadout.generated.h"

class USBZGloveData;
class USBZPlayerAbilityData;
class USBZPlayerCharacterData;
class USBZSkillData;

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
    FSBZOverskillLoadoutConfig OverskillLoadoutConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZThrowableConfig> ThrowableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGloveData* GloveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSuitConfig SuitConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZArmorConfig ArmorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> SkillArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> RemovedOverskillSkillArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZOverskillProgressData> OverskillProgressDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3ModifiableLoadoutData> ModifiableLoadoutDataArray;
    
    UPROPERTY(EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 PendingValidationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSkillArrayValidated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOverskillArrayValidated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAbilityData* AbilityData;
    
public:
    FPD3PlayerLoadout();
};

