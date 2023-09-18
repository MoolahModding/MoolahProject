#pragma once
#include "CoreMinimal.h"
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

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendSystemChatMessage(UObject* WorldContextObject, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(FSBZChatMessage ChatMessage);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSBZWhisperInfo> GetWhisperOptions();
    
    UFUNCTION(BlueprintCallable)
    bool GetNextWhisperOption(const FUniqueNetIdRepl& CurrentWhisper, FUniqueNetIdRepl& OutNextWhisper, FString& OutNextWhisperName, bool& bOutNoWhisperOptions);
    
};

