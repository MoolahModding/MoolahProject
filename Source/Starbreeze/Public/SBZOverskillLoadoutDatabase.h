#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZOverskillLoadoutDatabase.generated.h"

class USBZOverskillLoadoutData;

UCLASS(Blueprintable)
class USBZOverskillLoadoutDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZOverskillLoadoutData*> Loadouts;
    
    USBZOverskillLoadoutDatabase();

};

