#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveKeysOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSBZObjectiveKeysOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> KeysOverrides;
    
    STARBREEZE_API FSBZObjectiveKeysOverrides();
};

