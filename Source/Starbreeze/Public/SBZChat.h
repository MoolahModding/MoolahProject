#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatNotif.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ChatMessageReceivedDelegate.h"
#include "SBZChatMessage.h"
#include "SBZWhisperInfo.h"
#include "SBZChat.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class STARBREEZE_API USBZChat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZChatMessage> OnlineChatHistory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMessageReceived OnMessageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> MutedPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZWhisperInfo> WhisperOptions;
    
public:
    USBZChat();

    UFUNCTION(BlueprintCallable)
    void SendSessionMessage(const FSBZChatMessage& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMessageReceived(const FAccelByteModelsChatNotif& Result);
    
};

