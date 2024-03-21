#pragma once
#include "CoreMinimal.h"
#include "SingleUserStatRequests.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSingleUserStatRequests {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> Stats;
    
    FSingleUserStatRequests();
};

