#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZOutlineAsset.generated.h"

UCLASS(Blueprintable)
class USBZOutlineAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 ColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    USBZOutlineAsset();

};

