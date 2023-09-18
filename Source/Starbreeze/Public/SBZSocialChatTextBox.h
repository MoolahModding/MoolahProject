#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "SBZSocialChatTextBox.generated.h"

class USBZSocialChatBaseWidget;
class USBZSocialChatChannelTextBox;
class USBZSocialChatReceiverTextBox;

UCLASS(Blueprintable)
class USBZSocialChatTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatBaseWidget* SocialChatWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatChannelTextBox* ChannelTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatReceiverTextBox* ReceiverTextBox;
    
public:
    USBZSocialChatTextBox();

    UFUNCTION(BlueprintCallable)
    void Initialize(USBZSocialChatBaseWidget* InSocialChatWidget, USBZSocialChatChannelTextBox* InChannelTextBox, USBZSocialChatReceiverTextBox* InReceiverTextBox);
    
};

