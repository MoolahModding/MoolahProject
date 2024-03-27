#include "ABFriends.h"

void UABFriends::Unfriend(const FString& UserId, FDUnfriendResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::SetOnUnfriendNotifDelegate(FDUnfriendNotif OnNotif) {
}

void UABFriends::SetOnRejectFriendsNotifDelegate(FDRejectFriendsNotif OnNotif) {
}

void UABFriends::SetOnIncomingRequestFriendsNotifDelegate(FDRequestFriendsNotif OnNotif) {
}

void UABFriends::SetOnFriendRequestAcceptedNotifDelegate(FDAcceptFriendsNotif OnNotif) {
}

void UABFriends::SetOnCancelFriendsNotifDelegate(FDCancelFriendsNotif OnNotif) {
}

void UABFriends::RequestFriend(const FString& UserId, FDRequestFriendsResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::RejectFriend(const FString& UserId, FDRejectFriendsResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::LoadFriendsList(FDLoadFriendListResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::ListOutgoingFriends(FDListOutgoingFriendsResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::ListIncomingFriends(FDListIncomingFriendsResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::GetFriendshipStatus(const FString& UserId, FDGetFriendshipStatusResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::CancelFriendRequest(const FString& UserId, FDCancelFriendsResponse OnResponse, FDErrorHandler OnError) {
}

void UABFriends::BulkFriendRequest(FAccelByteModelsBulkFriendsRequest UserIds, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABFriends::AcceptFriend(const FString& UserId, FDAcceptFriendsResponse OnResponse, FDErrorHandler OnError) {
}

UABFriends::UABFriends() {
}

