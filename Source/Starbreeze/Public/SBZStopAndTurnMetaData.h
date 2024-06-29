#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "SBZStopAndTurnMetaData.generated.h"

class USBZStopAndTurnSelectionData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZStopAndTurnMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStopAndTurnSelectionData* SelectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionAngleThreshold;
    
    USBZStopAndTurnMetaData();

};

