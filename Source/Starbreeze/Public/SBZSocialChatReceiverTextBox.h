#pragma once
#include "CoreMinimal.h"
#include "PagedPublicUsersInfo.h"
#include "Components/EditableTextBox.h"
#include "SBZSocialChatReceiverTextBox.generated.h"

class USBZSocialChatBaseWidget;
class USBZSocialChatChannelTextBox;
class USBZSocialChatTextBox;

UCLASS(Blueprintable)
class USBZSocialChatReceiverTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatBaseWidget* SocialChatWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatChannelTextBox* ChannelTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatTextBox* ChatTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPagedPublicUsersInfo> SearchedUsers;
    
public:
    USBZSocialChatReceiverTextBox();

    UFUNCTION(BlueprintCallable)
    void Initialize(USBZSocialChatBaseWidget* InSocialChatWidget, USBZSocialChatChannelTextBox* InChannelTextBox, USBZSocialChatTextBox* InChatTextBox);
    
};

