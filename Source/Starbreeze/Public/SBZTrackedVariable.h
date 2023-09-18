#pragma once
#include "CoreMinimal.h"
#include "ESBZTrackedVariableType.h"
#include "SBZTrackedVariable.generated.h"

USTRUCT(BlueprintType)
struct FSBZTrackedVariable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTrackedVariableType Type;
    
public:
    STARBREEZE_API FSBZTrackedVariable();
};

