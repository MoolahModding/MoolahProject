#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ESBZVoicePriority.h"
#include "SBZBTService_WarnNeighbours.generated.h"

class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZBTService_WarnNeighbours : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoicePriority VoicePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange NoiseDelay;
    
public:
    USBZBTService_WarnNeighbours();

};

