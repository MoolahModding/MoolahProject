#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZToolDatabase.generated.h"

class USBZToolData;

UCLASS(Blueprintable)
class USBZToolDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZToolData*> Tools;
    
    USBZToolDatabase();
};

