#pragma once
#include "CoreMinimal.h"
#include "SBZAIEscortStateData.generated.h"

class UBehaviorTree;
class UClass;

USTRUCT(BlueprintType)
struct FSBZAIEscortStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EscortStateBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NavQueryFilterOverride;
    
    STARBREEZE_API FSBZAIEscortStateData();
};

