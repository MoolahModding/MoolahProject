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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenChatActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* Text_InputText;
    
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
    UFUNCTION(BlueprintImplementableEvent)
    void VotingMessageReceived(const FSBZVotingChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SystemMessageReceived(const FSBZSystemChatEvent& ChatEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetChatActive(bool bSetActive);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerMessageReceived(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PingReceived(const FSBZPlayerPingEvent& PingEventData);
    
private:
    UFUNCTION()
    void OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerStateRemoved(const FSBZPlayerStateRemovedEvent& PlayerStateRemovedData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerJoinedTheHeist(const FText& JoinedPlayerName);
    
    UFUNCTION()
    void OnPlayerDefeatStateChangedInternal(const FSBZPlayerDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerDefeatStateChanged(const FSBZPlayerDefeatStateChangedData& InData);
    
private:
    UFUNCTION()
    void OnMessageReceived(const FSBZPlayerChatEvent& ChatEventData);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChatFocusChanged(bool bHasFocus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChatDisabledChanged(bool bIsDisabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAICrewDefeatStateChanged(const FSBZAICrewDefeatStateChangedData& InData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void KeyItemCountChanged(const FSBZKeyItemCountChangedEvent& KeyItemCountChangedEventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CrewAIMessageReceived(const FSBZAICrewChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CallReceived(const FSBZPlayerCallEvent& CallEventData);
    
};

