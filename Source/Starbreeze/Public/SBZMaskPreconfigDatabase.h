#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskPreconfigDatabase.generated.h"

class USBZMaskPreconfigData;

UCLASS(Blueprintable)
class USBZMaskPreconfigDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskPreconfigData*> MaskPreconfigArray;
    
    USBZMaskPreconfigDatabase();
};

