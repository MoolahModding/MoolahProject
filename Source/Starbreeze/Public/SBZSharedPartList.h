#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZSharedPartList.generated.h"

class USBZEquippablePartDataAsset;

UCLASS(Blueprintable)
class USBZSharedPartList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartDataAsset*> SharedModParts;
    
    USBZSharedPartList();

};

