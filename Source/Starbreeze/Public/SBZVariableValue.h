#pragma once
#include "CoreMinimal.h"
#include "SBZVariableValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZVariableValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
public:
    STARBREEZE_API FSBZVariableValue();
};

