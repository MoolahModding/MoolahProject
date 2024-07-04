#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SBZSpawnWaveFilteredOrder.generated.h"

class USBZAIOrder;

USTRUCT(BlueprintType)
struct FSBZSpawnWaveFilteredOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZAIOrder> OrderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PawnTypes;
    
    STARBREEZE_API FSBZSpawnWaveFilteredOrder();
};

