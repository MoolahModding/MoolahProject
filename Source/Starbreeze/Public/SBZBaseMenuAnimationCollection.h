#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZBaseMenuAnimationCollection.generated.h"

class USBZBaseMenuAnimationCollection;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBaseMenuAnimationCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZBaseMenuAnimationCollection> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCollection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
public:
    USBZBaseMenuAnimationCollection();

};

