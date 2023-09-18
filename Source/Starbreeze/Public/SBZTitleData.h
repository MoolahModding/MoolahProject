#pragma once
#include "CoreMinimal.h"
#include "SBZTitleData.generated.h"

USTRUCT(BlueprintType)
struct FSBZTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleData;
    
    STARBREEZE_API FSBZTitleData();
};

