#pragma once
#include "CoreMinimal.h"
#include "SBZPendingUsingSpawnedCarryData.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZPendingUsingSpawnedCarryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPagerEnabled;
    
    STARBREEZE_API FSBZPendingUsingSpawnedCarryData();
};

