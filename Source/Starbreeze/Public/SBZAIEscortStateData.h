#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZAIEscortStateData.generated.h"

class UBehaviorTree;
class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FSBZAIEscortStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EscortStateBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavQueryFilterOverride;
    
    STARBREEZE_API FSBZAIEscortStateData();
};

