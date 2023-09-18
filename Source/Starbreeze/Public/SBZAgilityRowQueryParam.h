#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityType.h"
#include "SBZAgilityAnimationQueryParam.h"
#include "SBZAgilityRowQueryParam.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgilityRowQueryParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgilityTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityType AgilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAgilityAnimationQueryParam> AnimationQueryParams;
    
    STARBREEZE_API FSBZAgilityRowQueryParam();
};

