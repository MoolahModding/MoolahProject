#pragma once
#include "CoreMinimal.h"
#include "SBZActiveDialogData.generated.h"

class AActor;
class USBZDialogDataAsset;

USTRUCT(BlueprintType)
struct FSBZActiveDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* DialogDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Performers;
    
    STARBREEZE_API FSBZActiveDialogData();
};

