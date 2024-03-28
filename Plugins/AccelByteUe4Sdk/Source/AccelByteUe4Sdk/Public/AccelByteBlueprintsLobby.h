#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccelByteModelsAcceptFriendsNotif.h"
#include "AccelByteModelsAcceptFriendsResponse.h"
#include "AccelByteModelsCancelFriendsResponse.h"
#include "AccelByteModelsCreatePartyResponse.h"
#include "AccelByteModelsDsNotice.h"
#include "AccelByteModelsGetFriendshipStatusResponse.h"
#include "AccelByteModelsGetOnlineUsersResponse.h"
#include "AccelByteModelsGotKickedFromPartyNotice.h"
#include "AccelByteModelsInfoPartyResponse.h"
#include "AccelByteModelsInvitationNotice.h"
#include "AccelByteModelsKickPartyMemberResponse.h"
#include "AccelByteModelsLeavePartyNotice.h"
#include "AccelByteModelsLeavePartyResponse.h"
#include "AccelByteModelsListIncomingFriendsResponse.h"
#include "AccelByteModelsListOutgoingFriendsResponse.h"
#include "AccelByteModelsLoadFriendListResponse.h"
#include "AccelByteModelsMatchmakingNotice.h"
#include "AccelByteModelsMatchmakingResponse.h"
#include "AccelByteModelsNotificationMessage.h"
#include "AccelByteModelsPartyGetInvitedNotice.h"
#include "AccelByteModelsPartyInviteResponse.h"
#include "AccelByteModelsPartyJoinNotice.h"
#include "AccelByteModelsPartyJoinResponse.h"
#include "AccelByteModelsPartyMemberConnectionNotice.h"
#include "AccelByteModelsPartyMessageNotice.h"
#include "AccelByteModelsPartyMessageResponse.h"
#include "AccelByteModelsPersonalMessageNotice.h"
#include "AccelByteModelsPersonalMessageResponse.h"
#include "AccelByteModelsReadyConsentNotice.h"
#include "AccelByteModelsReadyConsentRequest.h"
#include "AccelByteModelsRejectConsentNotice.h"
#include "AccelByteModelsRejectConsentRequest.h"
#include "AccelByteModelsRejectFriendsResponse.h"
#include "AccelByteModelsRematchmakingNotice.h"
#include "AccelByteModelsRequestFriendsNotif.h"
#include "AccelByteModelsRequestFriendsResponse.h"
#include "AccelByteModelsSetOnlineUsersResponse.h"
#include "AccelByteModelsUnfriendResponse.h"
#include "AccelByteModelsUsersPresenceNotice.h"
#include "EAvailability.h"
#include "AccelByteBlueprintsLobby.generated.h"

UCLASS(Blueprintable)
class UAccelByteBlueprintsLobby : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUserPresenceNotice, const FAccelByteModelsUsersPresenceNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUnfriendResponseDelegate, const FAccelByteModelsUnfriendResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FSetUserPresenceResponse, const FAccelByteModelsSetOnlineUsersResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRequestFriendsResponseDelegate, const FAccelByteModelsRequestFriendsResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRematchmakingNotice, const FAccelByteModelsRematchmakingNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectFriendsResponseDelegate, const FAccelByteModelsRejectFriendsResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectConsentResponse, const FAccelByteModelsRejectConsentRequest&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRejectConsentNotice, const FAccelByteModelsRejectConsentNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FReadyConsentResponse, const FAccelByteModelsReadyConsentRequest&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FReadyConsentNotice, const FAccelByteModelsReadyConsentNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPrivateMessageResponse, const FAccelByteModelsPersonalMessageResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPrivateMessageNotice, const FAccelByteModelsPersonalMessageNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPartyMessageResponse, const FAccelByteModelsPartyMessageResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPartyMessageNotice, const FAccelByteModelsPartyMessageNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPartyMemberDisconnectNotice, const FAccelByteModelsPartyMemberConnectionNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FPartyMemberConnectNotice, const FAccelByteModelsPartyMemberConnectionNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FNotificationMessage, const FAccelByteModelsNotificationMessage&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingResponse, const FAccelByteModelsMatchmakingResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingNotice, const FAccelByteModelsMatchmakingNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLoadFriendListResponseDelegate, const FAccelByteModelsLoadFriendListResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FListOutgoingFriendsResponseDelegate, const FAccelByteModelsListOutgoingFriendsResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FListIncomingFriendsResponseDelegate, const FAccelByteModelsListIncomingFriendsResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLeavePartyResponse, const FAccelByteModelsLeavePartyResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLeavePartyNotice, const FAccelByteModelsLeavePartyNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyResponse, const FAccelByteModelsPartyInviteResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyKickMemberResponse, const FAccelByteModelsKickPartyMemberResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyKickedNotice, const FAccelByteModelsGotKickedFromPartyNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyJoinResponse, const FAccelByteModelsPartyJoinResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyJoinNotice, const FAccelByteModelsPartyJoinNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyInvitationNotice, const FAccelByteModelsInvitationNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInvitePartyGetInvitedNotice, const FAccelByteModelsPartyGetInvitedNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FInfoPartyResponse, const FAccelByteModelsInfoPartyResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FIncomingFriendNotif, const FAccelByteModelsRequestFriendsNotif&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetFriendshipStatusResponseDelegate, const FAccelByteModelsGetFriendshipStatusResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FGetAllFriendsStatusResponse, const FAccelByteModelsGetOnlineUsersResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FFriendAcceptFriendRequestNotif, const FAccelByteModelsAcceptFriendsNotif&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDsNotice, const FAccelByteModelsDsNotice&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCreatePartyResponse, const FAccelByteModelsCreatePartyResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE(FConnectSuccess);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FConnectionClosed, int32, StatusCode, const FString&, Reason, bool, WasClean);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCancelFriendsResponseDelegate, const FAccelByteModelsCancelFriendsResponse&, Result);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBlueprintErrorHandler, int32, ErrorCode, const FString&, ErrorMessage);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAcceptFriendsResponseDelegate, const FAccelByteModelsAcceptFriendsResponse&, Result);
    
    UAccelByteBlueprintsLobby();
    UFUNCTION(BlueprintCallable)
    static void Unfriend(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindDelegates();
    
    UFUNCTION(BlueprintCallable)
    static void SetUserPresenceResponseDelegate(UAccelByteBlueprintsLobby::FSetUserPresenceResponse OnUserPresenceResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetUnfriendResponseDelegate(UAccelByteBlueprintsLobby::FUnfriendResponseDelegate OnUnfriendResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartMatchmakingResponseDelegate(UAccelByteBlueprintsLobby::FMatchmakingResponse OnMatchmakingStart);
    
    UFUNCTION(BlueprintCallable)
    static void SetRequestFriendResponseDelegate(UAccelByteBlueprintsLobby::FRequestFriendsResponseDelegate OnRequestFriendsResponseDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetRematchmakingNotifDelegate(UAccelByteBlueprintsLobby::FRematchmakingNotice OnRematchmakingNotice);
    
    UFUNCTION(BlueprintCallable)
    static void SetRejectFriendResponseDelegate(UAccelByteBlueprintsLobby::FRejectFriendsResponseDelegate OnRejectFriendsResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetRejectConsentResponseDelegate(UAccelByteBlueprintsLobby::FRejectConsentResponse OnRejectConsentResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetRejectConsentNotifDelegate(UAccelByteBlueprintsLobby::FRejectConsentNotice OnRejectConsentNotice);
    
    UFUNCTION(BlueprintCallable)
    static void SetReadyConsentResponseDelegate(UAccelByteBlueprintsLobby::FReadyConsentResponse OnReadyConsentResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetReadyConsentNotifDelegate(UAccelByteBlueprintsLobby::FReadyConsentNotice OnReadyConsentNotice);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivateMessageResponseDelegate(UAccelByteBlueprintsLobby::FPrivateMessageResponse OnPrivateMessageResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetPresenceStatus(EAvailability State, const FString& Activity);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyMessageResponseDelegate(UAccelByteBlueprintsLobby::FPartyMessageResponse OnPartyMessageResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetMatchmakingNotifDelegate(UAccelByteBlueprintsLobby::FMatchmakingNotice OnMatchmakingNotice);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadFriendsListResponseDelegate(UAccelByteBlueprintsLobby::FLoadFriendListResponseDelegate OnLoadFriendListResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetListOutgoingFriendsResponseDelegate(UAccelByteBlueprintsLobby::FListOutgoingFriendsResponseDelegate OnListOutgoingFriendsResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetListIncomingFriendsResponseDelegate(UAccelByteBlueprintsLobby::FListIncomingFriendsResponseDelegate OnListIncomingFriendsResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetLeavePartyResponseDelegate(UAccelByteBlueprintsLobby::FLeavePartyResponse OnLeavePartyResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetInvitePartyResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyResponse OnInvitePartyResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetInvitePartyKickMemberResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyKickMemberResponse OnInvitePartyKickMemberResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetInvitePartyJoinResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyJoinResponse OnInvitePartyJoinResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetInfoPartyResponseDelegate(UAccelByteBlueprintsLobby::FInfoPartyResponse OnInfoPartyResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetGetFriendshipStatusResponseDelegate(UAccelByteBlueprintsLobby::FGetFriendshipStatusResponseDelegate OnGetFriendshipStatusResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetGetAllUserPresenceResponseDelegate(UAccelByteBlueprintsLobby::FGetAllFriendsStatusResponse OnGetAllUserPresenceResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetDsNotifDelegate(UAccelByteBlueprintsLobby::FDsNotice OnDsNotice);
    
    UFUNCTION(BlueprintCallable)
    static void SetCreatePartyResponseDelegate(UAccelByteBlueprintsLobby::FCreatePartyResponse OnCreatePartyResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetCancelMatchmakingResponseDelegate(UAccelByteBlueprintsLobby::FMatchmakingResponse OnMatchmakingCancel);
    
    UFUNCTION(BlueprintCallable)
    static void SetCancelFriendRequestResponseDelegate(UAccelByteBlueprintsLobby::FCancelFriendsResponseDelegate OnCancelFriendsResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SetAcceptFriendResponseDelegate(UAccelByteBlueprintsLobby::FAcceptFriendsResponseDelegate OnAcceptFriendsResponse);
    
    UFUNCTION(BlueprintCallable)
    static void SendStartMatchmaking(const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    static void SendRejectConsentRequest(const FString& MatchId);
    
    UFUNCTION(BlueprintCallable)
    static void SendReadyConsentRequest(const FString& MatchId);
    
    UFUNCTION(BlueprintCallable)
    static void SendPrivateMessage(const FString& UserId, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void SendPing();
    
    UFUNCTION(BlueprintCallable)
    static void SendPartyMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void SendLeavePartyRequest();
    
    UFUNCTION(BlueprintCallable)
    static void SendKickPartyMemberRequest(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void SendInviteToPartyRequest(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void SendInfoPartyRequest();
    
    UFUNCTION(BlueprintCallable)
    static void SendGetOnlineUsersRequest();
    
    UFUNCTION(BlueprintCallable)
    static void SendCreatePartyRequest();
    
    UFUNCTION(BlueprintCallable)
    static void SendCancelMatchmaking(const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    static void SendAcceptInvitationRequest(const FString& PartyId, const FString& InvitationToken);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFriend(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void RejectFriend(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void LoadFriendsList();
    
    UFUNCTION(BlueprintCallable)
    static void ListOutgoingFriends();
    
    UFUNCTION(BlueprintCallable)
    static void ListIncomingFriends();
    
    UFUNCTION(BlueprintCallable)
    static bool IsConnected();
    
    UFUNCTION(BlueprintCallable)
    static void GetFriendshipStatus(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAsyncNotification();
    
    UFUNCTION(BlueprintCallable)
    static void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    static void Connect();
    
    UFUNCTION(BlueprintCallable)
    static void CancelFriendRequest(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static void BindEvent(const UAccelByteBlueprintsLobby::FConnectSuccess& OnConnectSuccess, const UAccelByteBlueprintsLobby::FBlueprintErrorHandler& OnConnectError, const UAccelByteBlueprintsLobby::FConnectionClosed& OnConnectionClosed, const UAccelByteBlueprintsLobby::FLeavePartyNotice& OnLeavePartyNotice, const UAccelByteBlueprintsLobby::FInvitePartyInvitationNotice& OnInvitePartyInvitationNotice, const UAccelByteBlueprintsLobby::FInvitePartyGetInvitedNotice& OnInvitePartyGetInvitedNotice, const UAccelByteBlueprintsLobby::FInvitePartyJoinNotice& OnInvitePartyJoinNotice, const UAccelByteBlueprintsLobby::FInvitePartyKickedNotice& OnInvitePartyKickedNotice, const UAccelByteBlueprintsLobby::FPartyMemberConnectNotice& OnPartyConnectNotice, const UAccelByteBlueprintsLobby::FPartyMemberDisconnectNotice& OnPartyDisconnectNotice, const UAccelByteBlueprintsLobby::FPrivateMessageNotice& OnPrivateMessageNotice, const UAccelByteBlueprintsLobby::FPartyMessageNotice& OnPartyMessageNotice, const UAccelByteBlueprintsLobby::FUserPresenceNotice& OnUserPresenceNotice, const UAccelByteBlueprintsLobby::FNotificationMessage& OnNotificationMessage, const UAccelByteBlueprintsLobby::FMatchmakingNotice& OnMatchmakingNotice, const UAccelByteBlueprintsLobby::FReadyConsentNotice& OnReadyConsentNotice, const UAccelByteBlueprintsLobby::FRematchmakingNotice& OnRematchmakingNotice, const UAccelByteBlueprintsLobby::FDsNotice& OnDsNotice, const UAccelByteBlueprintsLobby::FFriendAcceptFriendRequestNotif& OnAcceptFriendsNotifDelegate, const UAccelByteBlueprintsLobby::FIncomingFriendNotif& OnRequestFriendsNotifDelegate, const UAccelByteBlueprintsLobby::FBlueprintErrorHandler& OnParsingError);
    
    UFUNCTION(BlueprintCallable)
    static void AcceptFriend(const FString& UserId);
    
};

