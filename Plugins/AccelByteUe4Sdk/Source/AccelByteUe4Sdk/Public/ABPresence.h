#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelBytePresenceStatus.h"
#include "BulkGetUserPresenceRequest.h"
#include "DBulkGetUserPresenceDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DFriendStatusNotifDelegate.h"
#include "DGetAllFriendsStatusResponseDelegate.h"
#include "DOnSetUserPresenceDelegate.h"
#include "ABPresence.generated.h"

UCLASS(Blueprintable)
class UABPresence : public UObject {
    GENERATED_BODY()
public:
    UABPresence();

    UFUNCTION(BlueprintCallable)
    void SetPresenceStatus(const FAccelBytePresenceStatus& Request, FDOnSetUserPresence OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetOnFriendStatusNotif(FDFriendStatusNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void GetAllFriendsStatus(FDGetAllFriendsStatusResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserPresence(const FBulkGetUserPresenceRequest& Request, FDBulkGetUserPresence OnResponse, FDErrorHandler OnError);
    
};

