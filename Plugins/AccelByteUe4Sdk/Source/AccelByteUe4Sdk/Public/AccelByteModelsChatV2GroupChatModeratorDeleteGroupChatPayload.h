#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsChatV2GroupChatModeratorDeleteGroupChatPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatV2GroupChatModeratorDeleteGroupChatPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModeratorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChatId;
    
    FAccelByteModelsChatV2GroupChatModeratorDeleteGroupChatPayload();
};

