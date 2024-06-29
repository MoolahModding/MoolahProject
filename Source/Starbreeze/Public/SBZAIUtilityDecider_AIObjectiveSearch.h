#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityDecider_AIObjectiveBase.h"
#include "SBZAIUtilityDecider_AIObjectiveSearch.generated.h"

class ASBZRoomVolume;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityDecider_AIObjectiveSearch : public USBZAIUtilityDecider_AIObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZRoomVolume> CurrentRoomToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetRoomBBKey;
    
public:
    USBZAIUtilityDecider_AIObjectiveSearch();

};

