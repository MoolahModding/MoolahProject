#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZThrowableDatabase.generated.h"

class USBZThrowableData;

UCLASS(Blueprintable)
class USBZThrowableDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZThrowableData*> Throwables;
    
    USBZThrowableDatabase();
};

