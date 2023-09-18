#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskVFXDatabase.generated.h"

class USBZMaskVFXData;

UCLASS(Blueprintable)
class USBZMaskVFXDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskVFXData*> MaskVFXArray;
    
    USBZMaskVFXDatabase();

};

