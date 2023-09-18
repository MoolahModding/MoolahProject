#pragma once
#include "CoreMinimal.h"
#include "PD3PlayerLoadout.h"
#include "SBZGloveConfigInventorySaveData.h"
#include "SBZInfamySaveData.h"
#include "SBZItemConfigInventorySaveData.h"
#include "SBZMaskConfigInventorySaveData.h"
#include "SBZPlayerCosmeticsConfig.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZSuitConfigInventorySaveData.h"
#include "SBZProgressionSaveGameData.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerLoadoutConfig> PlayerLoadoutConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerCosmeticsConfig PlayerCosmeticsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> PlayerPreferredCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZItemConfigInventorySaveData ItemConfigInventorySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfigInventorySaveData MaskConfigInventorySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSuitConfigInventorySaveData SuitConfigInventorySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGloveConfigInventorySaveData GloveConfigInventorySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResearchMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> CurrentRequestedPriceProgressionLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastTimeEventCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfamySaveData InfamySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryProgression;
    
    FSBZProgressionSaveGameData();
};

