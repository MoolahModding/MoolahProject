#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableConfig.h"
#include "SBZMaskConfig.h"
#include "SBZSuitConfig.h"
#include "PD3PlayerLoadoutMinimalForRootMenu.generated.h"

class USBZGloveData;
class USBZMaskData;
class USBZPlayerCharacterData;
class USBZSuitData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FPD3PlayerLoadoutMinimalForRootMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> PreferredCharacterDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableConfig> EquippableConfigArray;
    
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
    
    FPD3PlayerLoadoutMinimalForRootMenu();
};

