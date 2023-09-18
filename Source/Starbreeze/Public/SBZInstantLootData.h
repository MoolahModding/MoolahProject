#pragma once
#include "CoreMinimal.h"
#include "SBZInstantLootData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInstantLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Counter;
    
    STARBREEZE_API FSBZInstantLootData();
};

