#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlockPlayerRequest.h"
#include "DBlockPlayerNotifDelegate.h"
#include "DBlockPlayerResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DListOfBlockedUserResponseDelegate.h"
#include "DListOfBlockersResponseDelegate.h"
#include "DUnblockPlayerNotifDelegate.h"
#include "DUnblockPlayerResponseDelegate.h"
#include "UnblockPlayerRequest.h"
#include "ABBlock.generated.h"

UCLASS(Blueprintable)
class UABBlock : public UObject {
    GENERATED_BODY()
public:
    UABBlock();

    UFUNCTION(BlueprintCallable)
    void UnblockPlayer(const FUnblockPlayerRequest& Request, FDUnblockPlayerResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetUnblockPlayerNotifDelegate(FDUnblockPlayerNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockPlayerNotifDelegate(FDBlockPlayerNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void GetListOfBlockers(FDListOfBlockersResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetListOfBlockedUsers(FDListOfBlockedUserResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayer(const FBlockPlayerRequest& Request, FDBlockPlayerResponse OnResponse, FDErrorHandler OnError);
    
};

