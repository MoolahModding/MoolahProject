#pragma once
#include "CoreMinimal.h"
#include "ESBZChatChannelType.h"
#include "ESBZChatMessageStatus.h"
#include "SBZChatMessageInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZChatMessageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatChannelType Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatMessageStatus Status;
    
    STARBREEZE_API FSBZChatMessageInfo();
};

