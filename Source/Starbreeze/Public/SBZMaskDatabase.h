#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskDatabase.generated.h"

class USBZMaskData;

UCLASS(Blueprintable)
class USBZMaskDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskData*> Masks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* CustomizableMask;
    
    USBZMaskDatabase();
};

