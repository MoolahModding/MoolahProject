#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformType.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EOnlineSessionInfo.h"
#include "ESBZDifficulty.h"
#include "ESBZFirstPartyPlatform.h"
#include "ESBZOnlineJoinType.h"
#include "ESBZPlatform.h"
#include "ESBZSecurityCompany.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZLoginFieldInfo.h"
#include "SBZMissionInfo.h"
#include "SBZOnlineMatchmakingParams.h"
#include "SBZOnlineSearchResult.h"
#include "SBZPartyData.h"
#include "SBZRegistrationFieldInfo.h"
#include "SBZOnlineFunctionLibrary.generated.h"

class UObject;
class USBZOnlineSession;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOnlineFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZOnlineFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnmutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMatchmakingRegion(const UObject* WorldContextObject, const FString& MatchmakingRegion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLocalClientReady(UObject* WorldContextObject, bool bIsClientReady);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestVoteRestartLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestSteamLogin(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestRestartLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestLoginWithDeviceID(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestLogin(UObject* WorldContextObject, const FSBZLoginFieldInfo& LoginFieldInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestDirectJoin(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestCreateAccount(UObject* WorldContextObject, const FSBZRegistrationFieldInfo& RegistrationFieldInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MutePlayer(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSoftObjectPath LevelIdxToPath(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsWinGDKActive();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUserOnline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTitleOnline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsSteamActive();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSoloGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsServerAcceptingSlots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsSecurityCompaniesProvided();
    
    UFUNCTION(BlueprintPure)
    static bool IsSameUniqueId(FUniqueNetIdRepl UniqueNetIdA, FUniqueNetIdRepl UniqueNetIdB);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRequestInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsProductOwned(int32 ProductId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerPartyOwner(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerMuted(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerInParty(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyOwner(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOwnUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure)
    static bool IsNoSteam();
    
    UFUNCTION(BlueprintPure)
    static bool IsNoHud();
    
    UFUNCTION(BlueprintPure)
    static bool IsNoChallenges();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerInDropInLobby(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalClientReady(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbyHost(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbyClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInParty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsForceLocalProgressionSaveFile();
    
    UFUNCTION(BlueprintPure)
    static bool IsEOSActive();
    
    UFUNCTION(BlueprintPure)
    static bool IsDifficultyArgumentProvided();
    
    UFUNCTION(BlueprintPure)
    static bool IsDebugRandomSeedProvided();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActionPhaseClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsAccelByteV2SessionsEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsAccelByteMatchmakingDisabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideSessionFromJoin(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetUiLobbyInfo(UObject* WorldContextObject, TArray<FSBZLobbyCharacterInfoUi>& OutInfo);
    
    UFUNCTION(BlueprintPure)
    static FString GetSingleNameToShow(const FString& PlatformName, const FString& NebulaName, const ESBZPlatform Platform);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EOnlineSessionInfo GetSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ESBZSecurityCompany> GetSecurityCompanyListForDifficulty(const UObject* WorldContextObject, const FString& LevelName, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintPure)
    static TArray<ESBZSecurityCompany> GetSecurityCompaniesArgument();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineSession* GetSBZOnline(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayersCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerDisplayNameByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlayerAvatarByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlayerAvatar(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static ESBZPlatform GetPlatformFromAccelbytePlatformId(const FString& AccelbytePlatformId);
    
    UFUNCTION(BlueprintPure)
    static ESBZPlatform GetPlatform();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSoftObjectPath GetPathNameFromLevelIdx(const UObject* WorldContextObject, int32 LevelIdx);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPartyMembersCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPartyMemberAvatar(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZOnlineJoinType GetPartyJoinType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartyData(UObject* WorldContextObject, FSBZPartyData& OutPartyData);
    
    UFUNCTION(BlueprintPure)
    static FString GetOverrideLevelName();
    
    UFUNCTION(BlueprintPure)
    static FString GetOverrideAccelbyteGameMode();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetMaxPlayersForSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetMaxPlayersArgument(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZOnlineMatchmakingParams GetMatchmakingParameters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetLastMatchID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetFoundPlayersCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ESBZFirstPartyPlatform GetFirstPartyPlatform();
    
    UFUNCTION(BlueprintPure)
    static uint8 GetDifficultyIdxArgument();
    
    UFUNCTION(BlueprintPure)
    static int32 GetDebugRandomSeed();
    
    UFUNCTION(BlueprintPure)
    static int32 GetDebugMatchmakingGroup();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSBZLoginFieldInfo GetDebugLoginAndPassword(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetConnectionsCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBeaconMissionInfo(UObject* WorldContextObject, FSBZMissionInfo& OutInfo);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayersUniqueNetIds(UObject* WorldContextObject, TArray<FUniqueNetIdRepl>& OutParam);
    
    UFUNCTION(BlueprintPure)
    static EAccelBytePlatformType GetAccelbytePlatformTypeFromFirstPartyPlatformType(ESBZFirstPartyPlatform FirstPartyPlatform);
    
    UFUNCTION(BlueprintPure)
    static EAccelBytePlatformType GetAccelBytePlatformType();
    
    UFUNCTION(BlueprintPure)
    static FString GetAccelByteLinkedAccountsUrl();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugJoinByInvite(UObject* WorldContextObject, const FSBZOnlineSearchResult& InSessionToJoin);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DebugGetSessionParameters(const UObject* WorldContextObject, FName SessionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateSessionInviteOverlay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateProfileOverlay(UObject* WorldContextObject, FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivatePartyInviteOverlay(UObject* WorldContextObject);
    
};

