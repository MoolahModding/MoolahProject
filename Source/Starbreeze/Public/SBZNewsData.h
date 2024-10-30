#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZNewsDataEntry.h"
#include "SBZNewsData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNewsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNewsDataEntry> NewsDataArray;
    
    USBZNewsData();

};

