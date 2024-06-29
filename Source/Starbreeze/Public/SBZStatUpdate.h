#pragma once
#include "CoreMinimal.h"
#include "SBZStatUpdate.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZStatUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSBZStatUpdate();
};

