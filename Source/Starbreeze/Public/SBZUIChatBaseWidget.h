#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ChatDisabledSettingChangedEventDelegate.h"
#include "SBZChatMessage.h"
#include "SBZWidgetBase.h"
#include "SBZUIChatBaseWidget.generated.h"

class USBZChat;
class USBZGameUserSettings;

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=StarbreezeUI)
class STARBREEZE_API USBZUIChatBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatDisabledSettingChangedEvent OnChatDisableSettingChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility DisabledChatVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility EnabledChatVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLobbyChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChatDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOnWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString UserDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameUserSettings* GameUserSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChat* Chat;
    
public:
    USBZUIChatBaseWidget();

    UFUNCTION(BlueprintCallable)
    void SendMessage(const FSBZChatMessage& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnNewMessageReceived(const FSBZChatMessage& InChatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageReceivedEvent(const FSBZChatMessage& ChatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CreateTimestamp() const;
    
};

