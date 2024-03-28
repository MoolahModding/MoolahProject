#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsBulkFriendsRequest.h"
#include "DAcceptFriendsNotifDelegate.h"
#include "DAcceptFriendsResponseDelegate.h"
#include "DCancelFriendsNotifDelegate.h"
#include "DCancelFriendsResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DGetFriendshipStatusResponseDelegate.h"
#include "DHandlerDelegate.h"
#include "DListIncomingFriendsResponseDelegate.h"
#include "DListOutgoingFriendsResponseDelegate.h"
#include "DLoadFriendListResponseDelegate.h"
#include "DRejectFriendsNotifDelegate.h"
#include "DRejectFriendsResponseDelegate.h"
#include "DRequestFriendsNotifDelegate.h"
#include "DRequestFriendsResponseDelegate.h"
#include "DUnfriendNotifDelegate.h"
#include "DUnfriendResponseDelegate.h"
#include "ABFriends.generated.h"

UCLASS(Blueprintable)
class UABFriends : public UObject {
    GENERATED_BODY()
public:
    UABFriends();
    UFUNCTION(BlueprintCallable)
    void Unfriend(const FString& UserId, FDUnfriendResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetOnUnfriendNotifDelegate(FDUnfriendNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnRejectFriendsNotifDelegate(FDRejectFriendsNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnIncomingRequestFriendsNotifDelegate(FDRequestFriendsNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnFriendRequestAcceptedNotifDelegate(FDAcceptFriendsNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnCancelFriendsNotifDelegate(FDCancelFriendsNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriend(const FString& UserId, FDRequestFriendsResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void RejectFriend(const FString& UserId, FDRejectFriendsResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoadFriendsList(FDLoadFriendListResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ListOutgoingFriends(FDListOutgoingFriendsResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ListIncomingFriends(FDListIncomingFriendsResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetFriendshipStatus(const FString& UserId, FDGetFriendshipStatusResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void CancelFriendRequest(const FString& UserId, FDCancelFriendsResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkFriendRequest(FAccelByteModelsBulkFriendsRequest UserIds, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void AcceptFriend(const FString& UserId, FDAcceptFriendsResponse OnResponse, FDErrorHandler OnError);
    
};

