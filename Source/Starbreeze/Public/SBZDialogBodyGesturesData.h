#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZDialogBodyGesturesData.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDialogBodyGesturesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DialogBodyGestures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DialogBodyGestureDurations;
    
    USBZDialogBodyGesturesData();

};

