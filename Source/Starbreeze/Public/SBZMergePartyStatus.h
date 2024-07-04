#pragma once
#include "CoreMinimal.h"
#include "SBZMergePartyStatus.generated.h"

USTRUCT(BlueprintType)
struct FSBZMergePartyStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyCode;
    
    STARBREEZE_API FSBZMergePartyStatus();
};

