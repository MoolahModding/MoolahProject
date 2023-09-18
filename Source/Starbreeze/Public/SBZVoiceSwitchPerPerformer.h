#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogPerformer.h"
#include "SBZVoiceSwitchPerPerformer.generated.h"

USTRUCT(BlueprintType)
struct FSBZVoiceSwitchPerPerformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDialogPerformer Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllowedVoiceSwitches;
    
    STARBREEZE_API FSBZVoiceSwitchPerPerformer();
};

