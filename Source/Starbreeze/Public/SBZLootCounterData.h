#pragma once
#include "CoreMinimal.h"
#include "ESBZTickingLootType.h"
#include "SBZLootCounterData.generated.h"

USTRUCT(BlueprintType)
struct FSBZLootCounterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLootCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DesiredLootCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZTickingLootType TickingLootType;
    
    STARBREEZE_API FSBZLootCounterData();
};

