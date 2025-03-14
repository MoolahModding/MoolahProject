#pragma once
#include "CoreMinimal.h"
#include "ESBZLoadProgressionStep.generated.h"

UENUM(BlueprintType)
enum class ESBZLoadProgressionStep : uint8 {
    AsyncLoadAssetDatabaseDone,
    LoadCharacterDone,
    IncPlayerLoginDone,
    SetCurrentServerTimeDone,
    GetItemsDone,
    GetOwningIdsForAllItemsDone,
    IncPlayerItemRewardLoginDone,
    GetPlayerStatisticsDone,
    ProgressionSaveGameLoaded,
    QueryAchivementsDone,
    LoadProgressionSaveChallengesDone,
    GetWalletBalanceDone,
    SyncDLCsDone,
    GetRealMoneyItemsDone,
    GetWeaponPartAttachmentsDone,
    GetUserEntitlementsDone,
    RetrieveClientConfigurationDone,
    RetrieveClientGameRecordDone,
    ClientRetrieveFeatureToggleDataDone,
    ClientRetrieveMatchmakingDataDone,
    ClientRetrieveTitleDataDone,
    ReceivingInfamyTranslationTableDone,
    ClientRetrieveMetaEventsDataDone,
    ClientRetrieveTimeBasedPlayerContentDone,
    ClientRetrieveDLCRewardsDone,
    RetrieveSecurityFirmRotationDataReceivedDone,
    ClientFetchChallengeRecommendationsDone,
    FetchChallengeDailiesDone,
    ClientFetchChallengesDone,
};

