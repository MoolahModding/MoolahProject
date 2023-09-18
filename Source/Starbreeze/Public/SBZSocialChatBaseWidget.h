#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "ESBZChatChannelType.h"
#include "ESBZChatWidgetDisplayType.h"
#include "SBZChatMessageInfo.h"
#include "SBZWidgetBase.h"
#include "SBZSocialChatBaseWidget.generated.h"

class UAkAudioEvent;
class UBorder;
class USBZSocialChatChannelTextBox;
class USBZSocialChatReceiverTextBox;
class USBZSocialChatScrollBox;
class USBZSocialChatTextBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialChatBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PublicChannelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PartyChannelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PrivateChannelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePartyMessageNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePrivateMessageNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePublicMessageNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatWidgetDisplayType DisplayOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatChannelType Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChatMessageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatChannelTextBox* ChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatReceiverTextBox* ChatReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatTextBox* ChatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatScrollBox* PublicChannelChatScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatScrollBox* PrivateChannelChatScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSocialChatScrollBox* PartyChannelChatScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChatBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChannelsChatMessageBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChannelsBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChatInputBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ChatButtonBorder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChatDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PartySentMessageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PrivateSentMessageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PublicSentMessageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bJoinedPublicChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString UserDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString UserId;
    
public:
    USBZSocialChatBaseWidget();

    UFUNCTION(BlueprintCallable)
    ESBZChatChannelType ToggleChannel();
    
    UFUNCTION(BlueprintCallable)
    void SetChannelFocus(ESBZChatChannelType InChannel);
    
    UFUNCTION(BlueprintCallable)
    void SendPublicMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SendPrivateMessage(const FString& NewUserId, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SendPartyMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisiblityChanged(bool bChatVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPublicMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnPublicMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnPrivateMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnPrivateMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyMessageSentStatus(bool bResult, const FString& Message, const FString& NewUserId, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyInfoUpdateEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageReceived(FSBZChatMessageInfo MessageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageDelivered(bool bResult, FSBZChatMessageInfo MessageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClosePressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChatDisabledChanged(bool bIsDisabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChatChannelJoinEvent(const FString& ChannelSlug);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChannelChanged(ESBZChatChannelType NewChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChannelColor(ESBZChatChannelType InChannel, FSlateColor& Color) const;
    
};

