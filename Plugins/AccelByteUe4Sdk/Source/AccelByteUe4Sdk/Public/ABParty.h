#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DInfoPartyResponseDelegate.h"
#include "DLeavePartyResponseDelegate.h"
#include "DPartyCreateResponseDelegate.h"
#include "DPartyDataUpdateNotifDelegate.h"
#include "DPartyDeleteCodeResponseDelegate.h"
#include "DPartyGenerateCodeResponseDelegate.h"
#include "DPartyGetCodeResponseDelegate.h"
#include "DPartyGetDataResponseDelegate.h"
#include "DPartyGetInvitedNotifDelegate.h"
#include "DPartyGetStorageResponseDelegate.h"
#include "DPartyInviteNotifDelegate.h"
#include "DPartyInviteResponseDelegate.h"
#include "DPartyJoinNotifDelegate.h"
#include "DPartyJoinResponseDelegate.h"
#include "DPartyJoinViaCodeResponseDelegate.h"
#include "DPartyKickNotifDelegate.h"
#include "DPartyKickResponseDelegate.h"
#include "DPartyLeaveNotifDelegate.h"
#include "DPartyMemberConnectNotifDelegate.h"
#include "DPartyMemberDisconnectNotifDelegate.h"
#include "DPartyMemberLeaveNotifDelegate.h"
#include "DPartyPromoteLeaderResponseDelegate.h"
#include "DPartyRejectNotifDelegate.h"
#include "DPartyRejectResponseDelegate.h"
#include "DPartyUpdateNotifDelegate.h"
#include "DPartyWriteDataResponseDelegate.h"
#include "GetPartyDataRequest.h"
#include "GetPartyStorageRequest.h"
#include "PartyInviteRequest.h"
#include "PartyJoinRequest.h"
#include "PartyJoinViaCodeRequest.h"
#include "PartyKickRequest.h"
#include "PartyPromoteLeaderRequest.h"
#include "PartyRejectRequest.h"
#include "WritePartyStorageRequest.h"
#include "ABParty.generated.h"

UCLASS(Blueprintable)
class UABParty : public UObject {
    GENERATED_BODY()
public:
    UABParty();
    UFUNCTION(BlueprintCallable)
    void WritePartyStorage(const FWritePartyStorageRequest& Request, FDPartyWriteDataResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetPartySizeLimit(const FString& PartyId, const int32 Limit, const FDHandler& OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyUpdate(FDPartyUpdateNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyReject(FDPartyRejectNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyMemberLeave(FDPartyMemberLeaveNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyMemberDisconnect(FDPartyMemberDisconnectNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyMemberConnect(FDPartyMemberConnectNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyLeave(FDPartyLeaveNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyKick(FDPartyKickNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyJoin(FDPartyJoinNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyInvite(FDPartyInviteNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyGetInvited(FDPartyGetInvitedNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyDataUpdateNotifDelegate(FDPartyDataUpdateNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyDataUpdate(FDPartyDataUpdateNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void PartyReject(FPartyRejectRequest Request, FDPartyRejectResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyPromoteLeader(const FPartyPromoteLeaderRequest& Request, FDPartyPromoteLeaderResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyLeave(FDLeavePartyResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyKick(const FPartyKickRequest& Request, FDPartyKickResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyJoinViaCode(const FPartyJoinViaCodeRequest& Request, FDPartyJoinViaCodeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyJoin(const FPartyJoinRequest& Request, FDPartyJoinResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyInvite(FPartyInviteRequest Request, FDPartyInviteResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyInfo(FDInfoPartyResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyGetCode(FDPartyGetCodeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyGenerateCode(FDPartyGenerateCodeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void PartyDeleteCode(FDPartyDeleteCodeResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyStorage(const FGetPartyStorageRequest& Request, FDPartyGetStorageResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyData(const FGetPartyDataRequest& Request, FDPartyGetDataResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateParty(FDPartyCreateResponse OnResponse, FDErrorHandler OnError);
    
};

