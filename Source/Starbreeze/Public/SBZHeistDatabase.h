#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZHeistDatabase.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable)
class USBZHeistDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPD3HeistDataAsset*> HeistArray;
    
    USBZHeistDatabase();
};

