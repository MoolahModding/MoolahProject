#pragma once
#include "CoreMinimal.h"
#include "SBZSequenceViewerSet.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSequenceViewerSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SequenceViewerArray;
    
    STARBREEZE_API FSBZSequenceViewerSet();
};

