#pragma once
#include "CoreMinimal.h"
#include "SBZDefeatStateChangedData.h"
#include "SBZPlayerDefeatStateChangedData.generated.h"

class ASBZPlayerState;

USTRUCT(BlueprintType)
struct FSBZPlayerDefeatStateChangedData : public FSBZDefeatStateChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    STARBREEZE_API FSBZPlayerDefeatStateChangedData();
};

