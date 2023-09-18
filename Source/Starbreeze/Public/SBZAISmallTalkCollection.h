#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZAISmallTalkCollection.generated.h"

class USBZDialogDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISmallTalkCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> DialogAssets;
    
    USBZAISmallTalkCollection();

};

