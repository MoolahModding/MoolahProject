#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "SBZSocialChatChannelTextBox.generated.h"

class USBZSocialChatBaseWidget;

UCLASS(Blueprintable)
class USBZSocialChatChannelTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatBaseWidget* SocialChatWidget;
    
public:
    USBZSocialChatChannelTextBox();

    UFUNCTION(BlueprintCallable)
    void Initialize(USBZSocialChatBaseWidget* InSocialChatWidget);
    
};

