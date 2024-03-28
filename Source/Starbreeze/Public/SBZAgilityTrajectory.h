#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityType.h"
#include "SBZAgilityTrajectoryPoint.h"
#include "Templates/SubclassOf.h"
#include "SBZAgilityTrajectory.generated.h"

class UAnimMontage;
class UNavAreaBase;

USTRUCT(BlueprintType)
struct FSBZAgilityTrajectory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityType AgilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgilityTrajectoryPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ForcedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeEndUsingAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> AreaClass;
    
public:
    STARBREEZE_API FSBZAgilityTrajectory();
};

