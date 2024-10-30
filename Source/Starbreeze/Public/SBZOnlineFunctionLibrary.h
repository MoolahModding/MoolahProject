#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformType.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EOnlineSessionInfo.h"
#include "ESBZDifficulty.h"
#include "ESBZFirstPartyPlatform.h"
#include "ESBZHostingProvider.h"
#include "ESBZMatchmakingProvider.h"
#include "ESBZOnlineJoinType.h"
#include "ESBZPlatform.h"
#include "ESBZSecurityCompany.h"
#include "ESBZUserPrivilegesProxy.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZLoginFieldInfo.h"
#include "SBZMergePlayerData.h"
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
    static void SetSoloGameEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSoloGameDisabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMatchmakingRegion(const UObject* WorldContextObject, const FString& MatchmakingRegion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLocalClientReady(UObject* WorldContextObject, bool bIsClientReady);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestVoteRestartLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestVoteKickPlayer(UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerTargeted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestSteamLogin(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestRestartLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestMergeParty(UObject* WorldContextObject, bool bIsSelected);
    
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
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KickPlayerFromGameSession(UObject* WorldContextObject, const FString& InPlayerToKickId, const FString& InPlayerToKickPlatformId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinMatchmakingSessionByID(const UObject* WorldContextObject, const FString& SessionID, int32 LevelIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWinGDKActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUserOnline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTitleOnline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSoloGameEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSoloGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSessionHosted(const UObject* WorldContextObject, FString& OutHostId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsServerBrowserEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsServerAcceptingSlots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSecurityCompaniesProvided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameUniqueId(FUniqueNetIdRepl UniqueNetIdA, FUniqueNetIdRepl UniqueNetIdB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRequestInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProductOwned(int32 ProductId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerPartyOwner(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerMuted(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerInParty(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyOwner(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyHost(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOwnUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoSteam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoHud();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoChallenges();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerSessionHost(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerInDropInLobby(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalClientReady(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbyHost(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbyClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInParty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsForceLocalProgressionSaveFile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEOSActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDifficultyArgumentProvided(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugRandomSeedProvided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActionPhaseClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccelByteV2SessionsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccelByteMatchmakingDisabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HostRequestRestartLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideSessionFromJoin(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasPrivilege(const UObject* WorldContextObject, ESBZUserPrivilegesProxy Privilege);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetUiLobbyInfo(UObject* WorldContextObject, TArray<FSBZLobbyCharacterInfoUi>& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSingleNameToShow(const FString& PlatformName, const FString& NebulaName, const ESBZPlatform Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EOnlineSessionInfo GetSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ESBZSecurityCompany> GetSecurityCompanyListForDifficulty(const UObject* WorldContextObject, const FString& LevelName, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ESBZSecurityCompany> GetSecurityCompaniesArgument();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineSession* GetSBZOnline(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayersCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerDisplayNameByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlayerAvatarByUniqueId(UObject* WorldContextObject, FUniqueNetIdRepl UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPlayerAvatar(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZPlatform GetPlatformFromFirstPartyPlatformType(ESBZFirstPartyPlatform FirstPartyPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZPlatform GetPlatformFromAccelbytePlatformId(const FString& AccelbytePlatformId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZPlatform GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSoftObjectPath GetPathNameFromLevelIdx(const UObject* WorldContextObject, int32 LevelIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPartyMembersCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetPartyMemberAvatar(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZOnlineJoinType GetPartyJoinType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartyData(UObject* WorldContextObject, FSBZPartyData& OutPartyData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetOverrideLevelName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetOverrideAccelbyteGameMode();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FSBZMergePlayerData> GetMergePartyInformation(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetMaxPlayersForSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetMaxPlayersArgument(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZMatchmakingProvider GetMatchmakingProvider(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZOnlineMatchmakingParams GetMatchmakingParameters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetLastMatchID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZHostingProvider GetHostingProvider(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetFoundPlayersCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZFirstPartyPlatform GetFirstPartyPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetDifficultyIdxArgument(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugRandomSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugMatchmakingGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSBZLoginFieldInfo GetDebugLoginAndPassword(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetConnectionsCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBeaconMissionInfo(UObject* WorldContextObject, FSBZMissionInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayersUniqueNetIds(UObject* WorldContextObject, TArray<FUniqueNetIdRepl>& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAccelBytePlatformType GetAccelbytePlatformTypeFromFirstPartyPlatformType(ESBZFirstPartyPlatform FirstPartyPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAccelBytePlatformType GetAccelBytePlatformType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccelByteLinkedAccountsUrl();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugJoinByInvite(UObject* WorldContextObject, const FSBZOnlineSearchResult& InSessionToJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DebugGetSessionParameters(const UObject* WorldContextObject, FName SessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanVoteForStayInParty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateSessionInviteOverlay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateProfileOverlay(UObject* WorldContextObject, FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivatePartyInviteOverlay(UObject* WorldContextObject);
    
};

