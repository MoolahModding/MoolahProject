#pragma once
#include "CoreMinimal.h"
#include "SBZBaseControlReference.h"
#include "SBZButtonControlReference.generated.h"

USTRUCT(BlueprintType)
struct FSBZButtonControlReference : public FSBZBaseControlReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonAction;
    
    STARBREEZE_API FSBZButtonControlReference();
};

