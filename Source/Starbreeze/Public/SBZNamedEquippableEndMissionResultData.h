#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableEndMissionResultData.h"
#include "SBZNamedEquippableEndMissionResultData.generated.h"

USTRUCT(BlueprintType)
struct FSBZNamedEquippableEndMissionResultData : public FSBZEquippableEndMissionResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Name;
    
    STARBREEZE_API FSBZNamedEquippableEndMissionResultData();
};

