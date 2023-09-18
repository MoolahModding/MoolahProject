#pragma once
#include "CoreMinimal.h"
#include "SBZBaseControlReference.h"
#include "SBZActionControlReference.generated.h"

USTRUCT(BlueprintType)
struct FSBZActionControlReference : public FSBZBaseControlReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionList;
    
    STARBREEZE_API FSBZActionControlReference();
};

