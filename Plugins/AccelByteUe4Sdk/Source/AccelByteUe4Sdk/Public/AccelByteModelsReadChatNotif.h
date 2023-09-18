#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatReadChatData.h"
#include "AccelByteModelsReadChatNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsReadChatNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsChatReadChatData> ReadChat;
    
    FAccelByteModelsReadChatNotif();
};

