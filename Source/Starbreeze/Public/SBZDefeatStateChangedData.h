#pragma once
#include "CoreMinimal.h"
#include "EPD3DefeatState.h"
#include "SBZGameEventStructBase.h"
#include "SBZDefeatStateChangedData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDefeatStateChangedData : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState OldDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPD3DefeatState NewDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialDefeatStateChange;
    
    STARBREEZE_API FSBZDefeatStateChangedData();
};

