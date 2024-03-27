#pragma once
#include "CoreMinimal.h"
#include "SBZInteractableLocalizedAnimatedInteractionData.generated.h"

class USBZAnimatedInteractionData;

USTRUCT(BlueprintType)
struct FSBZInteractableLocalizedAnimatedInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnimatedInteractionData* AnimatedInteractionData;
    
    STARBREEZE_API FSBZInteractableLocalizedAnimatedInteractionData();
};

