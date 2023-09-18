#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChatChannelJoinDelegateDelegate.h"
#include "ESBZOnlineJoinType.h"
#include "PartyInfoUpdateDelegateDelegate.h"
#include "PartyInvitationReceivedDelegateDelegate.h"
#include "PartyInvitesUpdateDelegateDelegate.h"
#include "PartyMessageReceivedDelegateDelegate.h"
#include "PartyMessageSendStatusDelegateDelegate.h"
#include "PartyPlayerJoinDelegateDelegate.h"
#include "PartyPlayerKickDelegateDelegate.h"
#include "PartyPlayerLeaveDelegateDelegate.h"
#include "PrivateMessageReceivedDelegateDelegate.h"
#include "PrivateMessageSendStatusDelegateDelegate.h"
#include "PublicMessageReceivedDelegateDelegate.h"
#include "PublicMessageSendStatusDelegateDelegate.h"
#include "SBZPartyInvitation.h"
#include "SBZPartyMember.h"
#include "SBZPartyManager.generated.h"

class USBZPartyManager;

UCLASS(Blueprintable)
class USBZPartyManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPartyMember> PartyMembers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatChannelJoinDelegate OnChatChannelJoinEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMessageSendStatusDelegate OnPrivateMessageSentStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMessageReceivedDelegate OnPrivateMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublicMessageSendStatusDelegate OnPublicMessageSentStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublicMessageReceivedDelegate OnPublicMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMessageSendStatusDelegate OnPartyMessageSentStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMessageReceivedDelegate OnPartyMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyInvitationReceivedDelegate OnPartyInvitiationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyPlayerJoinDelegate PartyPlayerJoinEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyPlayerLeaveDelegate PartyPlayerLeaveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyPlayerKickDelegate PartyPlayerKickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyInfoUpdateDelegate PartyInfoUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyInvitesUpdateDelegate PartyInvitesUpdateEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PartyCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPartyInvitation> InvitesReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPartyInvitation> InvitesSent;
    
public:
    USBZPartyManager();

    UFUNCTION(BlueprintCallable)
    void SetLobbyType(ESBZOnlineJoinType InLobbyType);
    
    UFUNCTION(BlueprintCallable)
    FString SendPublicMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    bool SendPrivateMessage(const FString& PlayerId, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    bool SendPartyMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    FString SendJoinPublicChatChannel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingRequestedByPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyPlayersNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPartyManager* GetPartyManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZPartyMember GetPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZOnlineJoinType GetLobbyType() const;
    
};

