#pragma once
#include "CoreMinimal.h"
#include "SBZInfamyPointPayout.generated.h"

USTRUCT(BlueprintType)
struct FSBZInfamyPointPayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Completion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StealthBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllBagsBonus;
    
    STARBREEZE_API FSBZInfamyPointPayout();
};

