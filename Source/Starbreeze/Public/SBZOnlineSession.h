#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineSession.h"
#include "ESBZOnlineSessionRequestType.h"
#include "ESBZServiceStatus.h"
#include "OnInviteProcessingBeginDelegateDelegate.h"
#include "OnLobbySlotLoadoutChangeEventDelegateDelegate.h"
#include "OnNetworkDisconnectDelegateDelegate.h"
#include "OnNetworkReconnectDelegateDelegate.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "OnOnlineUiEventDelegateDelegate.h"
#include "OnPartyCreatedDelegate.h"
#include "OnPlayerMutedDelegate.h"
#include "OnSlotReservationCompleteDelegate.h"
#include "OnlinePartyJoinTypeUpdatedDelegateDelegate.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZMissionInfo.h"
#include "SBZOnlineEventDelegateDelegate.h"
#include "SBZOnlineSession.generated.h"

class ASBZJobOverviewSync;
class USBZAvatarCache;
class USBZBlockedPlayerManager;
class USBZChat;
class USBZFriendManager;
class USBZGameRecordsManager;
class USBZGlobalLobby;
class USBZInvites;
class USBZKickingManager;
class USBZLobby;
class USBZLobbyLocalState;
class USBZMatchmaking;
class USBZOnlineSessionRequestHandler;
class USBZOnlineSessionSearch;
class USBZOnlineSessionSettingsManager;
class USBZOnlineSessionUtils;
class USBZOnlineSlotsClient;
class USBZOnlineSlotsHost;
class USBZOnlineVoip;
class USBZP2PSession;
class USBZParty;
class USBZPartyManager;
class USBZVotingManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate OnMissionEndReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkDisconnectDelegate OnNetworkDisconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkReconnectDelegate OnNetworkReconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnBecamePartyHost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnBecamePartyClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLeftParty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlinePartyJoinTypeUpdatedDelegate OnLocalPartyJoinTypeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInviteProcessingBeginDelegate OnInviteProcessingBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnInviteProcessingFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchOutdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchRestartRejected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnMatchmAcceptUnlock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnLobbyWaitPlayersCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnLobbyWaitGameCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnWaitActionPhaseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineUiEventDelegate OnWaitOtherPlayersStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnMatchmakingStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLobbyComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLocalClientReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnNetworkError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnLobbyStateUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMuted OnPlayerMuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbySlotLoadoutChangeEventDelegate OnLobbySlotLoadoutChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotReservationComplete OnSlotReservationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyCreated OnPartyCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZParty* Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPartyManager* PartyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionSettingsManager* OnlineSessionSettingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLobby* Lobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChat* Chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInvites* Invites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZKickingManager* KickingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMatchmaking* Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionUtils* OnlineSessionUtils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionRequestHandler* OnlineSessionRequestHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionSearch* OnlineSessionSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZP2PSession* P2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGlobalLobby* GlobalLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFriendManager* FriendManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZJobOverviewSync* JobOverviewSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSlotsClient* OnlineSlotsClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSlotsHost* OnlineSlotsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineVoip* Voip;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostPartyByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameRecordsManager* GameRecordsManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBlockedPlayerManager* BlockedPlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAvatarCache* AvatarCache;
    
public:
    USBZOnlineSession();

    UFUNCTION(BlueprintCallable)
    void SetLocalClientReady(bool bIsClientReady);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkStatus(ESBZServiceStatus ServiceStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalClientReady() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleOnlinePlatformError(ESBZOnlineSessionRequestType RequestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZLobbyCharacterInfoUi> GetUiLobbyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyMembersCount();
    
    UFUNCTION(BlueprintCallable)
    void GetMenuEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMatchmakingRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZLobbyLocalState* GetLobbyState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoundPlayersCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZMissionInfo GetBeaconMissionInfo();
    
};

