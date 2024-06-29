#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "SBZAITeamStimulusEvent.h"
#include "SBZAISense_Team.generated.h"

UCLASS(Blueprintable)
class USBZAISense_Team : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange DelayRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAITeamStimulusEvent> RegisteredEvents;
    
public:
    USBZAISense_Team();

};

