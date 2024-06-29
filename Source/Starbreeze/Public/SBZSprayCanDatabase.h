#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSprayCanDatabase.generated.h"

class USBZSprayCanData;

UCLASS(Blueprintable)
class USBZSprayCanDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSprayCanData*> SprayCanArray;
    
    USBZSprayCanDatabase();

};

