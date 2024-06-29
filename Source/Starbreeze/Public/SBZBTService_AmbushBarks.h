#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ESBZVoicePriority.h"
#include "SBZBTService_AmbushBarks.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTService_AmbushBarks : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* AmbushComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
public:
    USBZBTService_AmbushBarks();

};

