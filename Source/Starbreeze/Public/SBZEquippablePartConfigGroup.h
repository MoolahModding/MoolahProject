#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfigGroup.generated.h"

class USBZEquippablePartConfig;
class USBZEquippablePartDataAsset;

USTRUCT(BlueprintType)
struct FSBZEquippablePartConfigGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZEquippablePartDataAsset* Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZEquippablePartConfig* Config;
    
    STARBREEZE_API FSBZEquippablePartConfigGroup();
};

