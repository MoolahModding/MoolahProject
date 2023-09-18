#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZDownedByTypeVO.generated.h"

class USBZVoiceCommentDataAsset;

USTRUCT(BlueprintType)
struct FSBZDownedByTypeVO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DownedByVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
    STARBREEZE_API FSBZDownedByTypeVO();
};

