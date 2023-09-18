#pragma once
#include "CoreMinimal.h"
#include "SBZCoverPointVisibilityCheckData.generated.h"

class AActor;
class ASBZCoverPoint;

USTRUCT(BlueprintType)
struct FSBZCoverPointVisibilityCheckData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCoverPoint* CoverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Enemies;
    
    STARBREEZE_API FSBZCoverPointVisibilityCheckData();
};

