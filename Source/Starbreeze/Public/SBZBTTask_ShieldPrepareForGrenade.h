#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZBTTask_ShieldPrepareForGrenade.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTTask_ShieldPrepareForGrenade : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComments[6];
    
public:
    USBZBTTask_ShieldPrepareForGrenade();

};

