#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DChannelChatNotifDelegate.h"
#include "DChannelChatResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DJoinDefaultChannelChatResponseDelegate.h"
#include "DMessageNotifDelegate.h"
#include "DPartyChatNotifDelegate.h"
#include "DPartyChatResponseDelegate.h"
#include "DPersonalChatNotifDelegate.h"
#include "DPersonalChatResponseDelegate.h"
#include "SendChannelMessageRequest.h"
#include "SendPartyMessageRequest.h"
#include "SendPrivateMessageRequest.h"
#include "ABMessage.generated.h"

UCLASS(Blueprintable)
class UABMessage : public UObject {
    GENERATED_BODY()
public:
    UABMessage();
    UFUNCTION(BlueprintCallable)
    void SetPrivateMessageNotifDelegate(FDPersonalChatNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetOnPartyChatNotification(FDPartyChatNotif OnPartyChatNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageNotifDelegate(FDMessageNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    void SetChannelMessageNotifDelegate(FDChannelChatNotif OnNotif);
    
    UFUNCTION(BlueprintCallable)
    FString SendPrivateMessage(const FSendPrivateMessageRequest& Request, FDPersonalChatResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SendPing();
    
    UFUNCTION(BlueprintCallable)
    FString SendPartyMessage(const FSendPartyMessageRequest& Request, FDPartyChatResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    FString SendJoinDefaultChannelChatRequest(FDJoinDefaultChannelChatResponse OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    FString SendChannelMessage(const FSendChannelMessageRequest& Request, FDChannelChatResponse OnResponse, FDErrorHandler OnError);
    
};

