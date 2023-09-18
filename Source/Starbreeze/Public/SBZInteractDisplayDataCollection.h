#pragma once
#include "CoreMinimal.h"
#include "SBZInteractDisplayData.h"
#include "SBZInteractDisplayDataCollection.generated.h"

USTRUCT(BlueprintType)
struct FSBZInteractDisplayDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractDisplayData FrontData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInteractDisplayData SelfData;
    
    STARBREEZE_API FSBZInteractDisplayDataCollection();
};

