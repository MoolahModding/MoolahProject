#pragma once
#include "CoreMinimal.h"
#include "SBZInfamySaveData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZInfamySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    FSBZInfamySaveData();
};

