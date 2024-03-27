#include "AccelByteBlueprintsLobby.h"

void UAccelByteBlueprintsLobby::Unfriend(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::UnbindDelegates() {
}

void UAccelByteBlueprintsLobby::SetUserPresenceResponseDelegate(UAccelByteBlueprintsLobby::FSetUserPresenceResponse OnUserPresenceResponse) {
}

void UAccelByteBlueprintsLobby::SetUnfriendResponseDelegate(UAccelByteBlueprintsLobby::FUnfriendResponseDelegate OnUnfriendResponse) {
}

void UAccelByteBlueprintsLobby::SetStartMatchmakingResponseDelegate(UAccelByteBlueprintsLobby::FMatchmakingResponse OnMatchmakingStart) {
}

void UAccelByteBlueprintsLobby::SetRequestFriendResponseDelegate(UAccelByteBlueprintsLobby::FRequestFriendsResponseDelegate OnRequestFriendsResponseDelegate) {
}

void UAccelByteBlueprintsLobby::SetRematchmakingNotifDelegate(UAccelByteBlueprintsLobby::FRematchmakingNotice OnRematchmakingNotice) {
}

void UAccelByteBlueprintsLobby::SetRejectFriendResponseDelegate(UAccelByteBlueprintsLobby::FRejectFriendsResponseDelegate OnRejectFriendsResponse) {
}

void UAccelByteBlueprintsLobby::SetRejectConsentResponseDelegate(UAccelByteBlueprintsLobby::FRejectConsentResponse OnRejectConsentResponse) {
}

void UAccelByteBlueprintsLobby::SetRejectConsentNotifDelegate(UAccelByteBlueprintsLobby::FRejectConsentNotice OnRejectConsentNotice) {
}

void UAccelByteBlueprintsLobby::SetReadyConsentResponseDelegate(UAccelByteBlueprintsLobby::FReadyConsentResponse OnReadyConsentResponse) {
}

void UAccelByteBlueprintsLobby::SetReadyConsentNotifDelegate(UAccelByteBlueprintsLobby::FReadyConsentNotice OnReadyConsentNotice) {
}

void UAccelByteBlueprintsLobby::SetPrivateMessageResponseDelegate(UAccelByteBlueprintsLobby::FPrivateMessageResponse OnPrivateMessageResponse) {
}

void UAccelByteBlueprintsLobby::SetPresenceStatus(EAvailability State, const FString& Activity) {
}

void UAccelByteBlueprintsLobby::SetPartyMessageResponseDelegate(UAccelByteBlueprintsLobby::FPartyMessageResponse OnPartyMessageResponse) {
}

void UAccelByteBlueprintsLobby::SetMatchmakingNotifDelegate(UAccelByteBlueprintsLobby::FMatchmakingNotice OnMatchmakingNotice) {
}

void UAccelByteBlueprintsLobby::SetLoadFriendsListResponseDelegate(UAccelByteBlueprintsLobby::FLoadFriendListResponseDelegate OnLoadFriendListResponse) {
}

void UAccelByteBlueprintsLobby::SetListOutgoingFriendsResponseDelegate(UAccelByteBlueprintsLobby::FListOutgoingFriendsResponseDelegate OnListOutgoingFriendsResponse) {
}

void UAccelByteBlueprintsLobby::SetListIncomingFriendsResponseDelegate(UAccelByteBlueprintsLobby::FListIncomingFriendsResponseDelegate OnListIncomingFriendsResponse) {
}

void UAccelByteBlueprintsLobby::SetLeavePartyResponseDelegate(UAccelByteBlueprintsLobby::FLeavePartyResponse OnLeavePartyResponse) {
}

void UAccelByteBlueprintsLobby::SetInvitePartyResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyResponse OnInvitePartyResponse) {
}

void UAccelByteBlueprintsLobby::SetInvitePartyKickMemberResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyKickMemberResponse OnInvitePartyKickMemberResponse) {
}

void UAccelByteBlueprintsLobby::SetInvitePartyJoinResponseDelegate(UAccelByteBlueprintsLobby::FInvitePartyJoinResponse OnInvitePartyJoinResponse) {
}

void UAccelByteBlueprintsLobby::SetInfoPartyResponseDelegate(UAccelByteBlueprintsLobby::FInfoPartyResponse OnInfoPartyResponse) {
}

void UAccelByteBlueprintsLobby::SetGetFriendshipStatusResponseDelegate(UAccelByteBlueprintsLobby::FGetFriendshipStatusResponseDelegate OnGetFriendshipStatusResponse) {
}

void UAccelByteBlueprintsLobby::SetGetAllUserPresenceResponseDelegate(UAccelByteBlueprintsLobby::FGetAllFriendsStatusResponse OnGetAllUserPresenceResponse) {
}

void UAccelByteBlueprintsLobby::SetDsNotifDelegate(UAccelByteBlueprintsLobby::FDsNotice OnDsNotice) {
}

void UAccelByteBlueprintsLobby::SetCreatePartyResponseDelegate(UAccelByteBlueprintsLobby::FCreatePartyResponse OnCreatePartyResponse) {
}

void UAccelByteBlueprintsLobby::SetCancelMatchmakingResponseDelegate(UAccelByteBlueprintsLobby::FMatchmakingResponse OnMatchmakingCancel) {
}

void UAccelByteBlueprintsLobby::SetCancelFriendRequestResponseDelegate(UAccelByteBlueprintsLobby::FCancelFriendsResponseDelegate OnCancelFriendsResponse) {
}

void UAccelByteBlueprintsLobby::SetAcceptFriendResponseDelegate(UAccelByteBlueprintsLobby::FAcceptFriendsResponseDelegate OnAcceptFriendsResponse) {
}

void UAccelByteBlueprintsLobby::SendStartMatchmaking(const FString& GameMode) {
}

void UAccelByteBlueprintsLobby::SendRejectConsentRequest(const FString& MatchId) {
}

void UAccelByteBlueprintsLobby::SendReadyConsentRequest(const FString& MatchId) {
}

void UAccelByteBlueprintsLobby::SendPrivateMessage(const FString& UserId, const FString& Message) {
}

void UAccelByteBlueprintsLobby::SendPing() {
}

void UAccelByteBlueprintsLobby::SendPartyMessage(const FString& Message) {
}

void UAccelByteBlueprintsLobby::SendLeavePartyRequest() {
}

void UAccelByteBlueprintsLobby::SendKickPartyMemberRequest(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::SendInviteToPartyRequest(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::SendInfoPartyRequest() {
}

void UAccelByteBlueprintsLobby::SendGetOnlineUsersRequest() {
}

void UAccelByteBlueprintsLobby::SendCreatePartyRequest() {
}

void UAccelByteBlueprintsLobby::SendCancelMatchmaking(const FString& GameMode) {
}

void UAccelByteBlueprintsLobby::SendAcceptInvitationRequest(const FString& PartyId, const FString& InvitationToken) {
}

void UAccelByteBlueprintsLobby::RequestFriend(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::RejectFriend(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::LoadFriendsList() {
}

void UAccelByteBlueprintsLobby::ListOutgoingFriends() {
}

void UAccelByteBlueprintsLobby::ListIncomingFriends() {
}

bool UAccelByteBlueprintsLobby::IsConnected() {
    return false;
}

void UAccelByteBlueprintsLobby::GetFriendshipStatus(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::GetAllAsyncNotification() {
}

void UAccelByteBlueprintsLobby::Disconnect() {
}

void UAccelByteBlueprintsLobby::Connect() {
}

void UAccelByteBlueprintsLobby::CancelFriendRequest(const FString& UserId) {
}

void UAccelByteBlueprintsLobby::BindEvent(const UAccelByteBlueprintsLobby::FConnectSuccess& OnConnectSuccess, const UAccelByteBlueprintsLobby::FBlueprintErrorHandler& OnConnectError, const UAccelByteBlueprintsLobby::FConnectionClosed& OnConnectionClosed, const UAccelByteBlueprintsLobby::FLeavePartyNotice& OnLeavePartyNotice, const UAccelByteBlueprintsLobby::FInvitePartyInvitationNotice& OnInvitePartyInvitationNotice, const UAccelByteBlueprintsLobby::FInvitePartyGetInvitedNotice& OnInvitePartyGetInvitedNotice, const UAccelByteBlueprintsLobby::FInvitePartyJoinNotice& OnInvitePartyJoinNotice, const UAccelByteBlueprintsLobby::FInvitePartyKickedNotice& OnInvitePartyKickedNotice, const UAccelByteBlueprintsLobby::FPartyMemberConnectNotice& OnPartyConnectNotice, const UAccelByteBlueprintsLobby::FPartyMemberDisconnectNotice& OnPartyDisconnectNotice, const UAccelByteBlueprintsLobby::FPrivateMessageNotice& OnPrivateMessageNotice, const UAccelByteBlueprintsLobby::FPartyMessageNotice& OnPartyMessageNotice, const UAccelByteBlueprintsLobby::FUserPresenceNotice& OnUserPresenceNotice, const UAccelByteBlueprintsLobby::FNotificationMessage& OnNotificationMessage, const UAccelByteBlueprintsLobby::FMatchmakingNotice& OnMatchmakingNotice, const UAccelByteBlueprintsLobby::FReadyConsentNotice& OnReadyConsentNotice, const UAccelByteBlueprintsLobby::FRematchmakingNotice& OnRematchmakingNotice, const UAccelByteBlueprintsLobby::FDsNotice& OnDsNotice, const UAccelByteBlueprintsLobby::FFriendAcceptFriendRequestNotif& OnAcceptFriendsNotifDelegate, const UAccelByteBlueprintsLobby::FIncomingFriendNotif& OnRequestFriendsNotifDelegate, const UAccelByteBlueprintsLobby::FBlueprintErrorHandler& OnParsingError) {
}

void UAccelByteBlueprintsLobby::AcceptFriend(const FString& UserId) {
}

UAccelByteBlueprintsLobby::UAccelByteBlueprintsLobby() {
}

