#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZPlaceableDatabase.generated.h"

class USBZPlaceableData;

UCLASS(Blueprintable)
class USBZPlaceableDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPlaceableData*> Placeables;
    
    USBZPlaceableDatabase();

};

