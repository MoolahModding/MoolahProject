#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SBZAICrewChatEvent.h"
#include "SBZAICrewDefeatStateChangedData.h"
#include "SBZDelegateHandle.h"
#include "SBZHUDWidgetBase.h"
#include "SBZKeyItemCountChangedEvent.h"
#include "SBZPlayerCallEvent.h"
#include "SBZPlayerChatEvent.h"
#include "SBZPlayerDefeatStateChangedData.h"
#include "SBZPlayerPingEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZSystemChatEvent.h"
#include "SBZVotingChatEvent.h"
#include "SBZHUDChatWidget.generated.h"

class ASBZPlayerState;
class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDChatWidget : public USBZHUDWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChatStackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* Text_InputText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortenTextMaxLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChatInputActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChatDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerDefeatStateChangedData> QueuedPlayerDefeatStateChangedDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZPlayerState*, FSBZDelegateHandle> PlayerNameChangedHandleMap;
    
public:
    USBZHUDChatWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VotingMessageReceived(const FSBZVotingChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SystemMessageReceived(const FSBZSystemChatEvent& ChatEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetChatActive(bool bSetActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerMessageReceived(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PingReceived(const FSBZPlayerPingEvent& PingEventData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateRemoved(const FSBZPlayerStateRemovedEvent& PlayerStateRemovedData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoinedTheHeist(const FText& JoinedPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChangedInternal(const FSBZPlayerDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPingReceived(const FSBZPlayerPingEvent& PingEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageReceived(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseChatReceived();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChatFocusChanged(bool bHasFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChatDisabledChanged(bool bIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KeyItemCountChanged(const FSBZKeyItemCountChangedEvent& KeyItemCountChangedEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortenText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrewAIMessageReceived(const FSBZAICrewChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallReceived(const FSBZPlayerCallEvent& CallEventData);
    
};

