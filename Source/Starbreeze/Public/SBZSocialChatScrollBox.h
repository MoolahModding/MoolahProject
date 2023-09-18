#pragma once
#include "CoreMinimal.h"
#include "SBZScrollBox.h"
#include "SBZSocialChatScrollBox.generated.h"

class USBZSocialChatBaseWidget;

UCLASS(Blueprintable)
class USBZSocialChatScrollBox : public USBZScrollBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSocialChatBaseWidget* SocialChatWidget;
    
public:
    USBZSocialChatScrollBox();

    UFUNCTION(BlueprintCallable)
    void Initialize(USBZSocialChatBaseWidget* InSocialChatWidget);
    
};

