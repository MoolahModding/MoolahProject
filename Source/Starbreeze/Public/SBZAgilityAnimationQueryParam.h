#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAgilityAnimationQueryFilter.h"
#include "SBZAgilityMontage.h"
#include "Templates/SubclassOf.h"
#include "SBZAgilityAnimationQueryParam.generated.h"

class UNavAreaBase;

USTRUCT(BlueprintType)
struct FSBZAgilityAnimationQueryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval EntrySpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval EntryRotationDiff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AlignmentAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgilityAnimationQueryFilter> AnimationFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgilityMontage> AgilityMontages;
    
    STARBREEZE_API FSBZAgilityAnimationQueryParam();
};

