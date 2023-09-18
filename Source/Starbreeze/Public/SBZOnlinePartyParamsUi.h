#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineJoinType.h"
#include "SBZOnlinePartyParamsUi.generated.h"

USTRUCT(BlueprintType)
struct FSBZOnlinePartyParamsUi {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZOnlineJoinType PartyType;
    
    STARBREEZE_API FSBZOnlinePartyParamsUi();
};

