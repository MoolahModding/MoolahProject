#pragma once
#include "CoreMinimal.h"
#include "SBZCodeViewerSet.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZCodeViewerSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PossibleCodeViewers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Identifier;
    
    STARBREEZE_API FSBZCodeViewerSet();
};

