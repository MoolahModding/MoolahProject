#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZGloveStoreItem.generated.h"

class USBZGloveData;

USTRUCT(BlueprintType)
struct FSBZGloveStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGloveData* GloveData;
    
    STARBREEZE_API FSBZGloveStoreItem();
};

