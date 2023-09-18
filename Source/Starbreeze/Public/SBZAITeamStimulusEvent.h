#pragma once
#include "CoreMinimal.h"
#include "SBZAITeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZAITeamStimulusEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Broadcaster;
    
    STARBREEZE_API FSBZAITeamStimulusEvent();
};

