#pragma once
#include "CoreMinimal.h"
#include "PD3PlayerLoadout.h"
#include "SBZGloveConfigInventorySaveData.h"
#include "SBZInfamySaveData.h"
#include "SBZItemConfigInventorySaveData.h"
#include "SBZMaskConfigInventorySaveData.h"
#include "SBZPlayerCosmeticsConfig.h"
#include "SBZPlayerLoadoutConfigArray.h"
#include "SBZPreferredPlayerCharacterArray.h"
#include "SBZRecommendedChallengeBlock.h"
#include "SBZSkipIntroSequenceData.h"
#include "SBZSuitConfigInventorySaveData.h"
#include "SBZWeaponPartAttachmentData.h"
#include "SBZProgressionSaveGameData.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveLoadoutIndexPlatformArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerLoadoutConfigArray PlayerLoadoutConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerLoadoutConfigArray> PlayerLoadoutConfigPerPlatformArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerCosmeticsConfig PlayerCosmeticsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerCosmeticsConfig> PlayerCosmeticsConfigPerPlatformArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPreferredPlayerCharacterArray> PreferredPlayerCharacterPerPlatformArray;
    
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
    TArray<int32> StoryProgressionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSkipIntroSequenceData> SkipIntroSequenceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartAttachmentData WeaponPartAttachmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZRecommendedChallengeBlock> RecommendedChallengeBlockMap;
    
    FSBZProgressionSaveGameData();
};

