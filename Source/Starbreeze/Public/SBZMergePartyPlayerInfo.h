#pragma once
#include "CoreMinimal.h"
#include "SBZMergePartyPlayerInfo.generated.h"

class ASBZPlayerController;

USTRUCT(BlueprintType)
struct FSBZMergePartyPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMergePartySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMembersInPartyManagersParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* MergePartyMemberPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectedAsMergePartyLeader;
    
    STARBREEZE_API FSBZMergePartyPlayerInfo();
};

