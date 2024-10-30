#pragma once
#include "CoreMinimal.h"
#include "ESBZMatchmakingCommand.h"
#include "ESBZOnlineTacticType.h"
#include "ESBZSecurityCompany.h"
#include "SBZOnlineMatchmakingParams.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZOnlineMatchmakingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DifficultyIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZSecurityCompany> SecurityCompanies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchmakingRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMatchmakingCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZOnlineTacticType TacticType;
    
    FSBZOnlineMatchmakingParams();
};

