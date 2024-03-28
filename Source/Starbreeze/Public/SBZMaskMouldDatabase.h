#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskMouldDatabase.generated.h"

class USBZMaskMouldData;

UCLASS(Blueprintable)
class USBZMaskMouldDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskMouldData*> MaskMouldArray;
    
    USBZMaskMouldDatabase();
};

