#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlReference.h"
#include "SBZButtonControlsReference.generated.h"

USTRUCT(BlueprintType)
struct FSBZButtonControlsReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZButtonControlReference> ActionList;
    
    STARBREEZE_API FSBZButtonControlsReference();
};

