#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZNewsItemDatabase.generated.h"

class USBZNewsData;

UCLASS(Blueprintable)
class USBZNewsItemDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZNewsData*> NewsItemArray;
    
    USBZNewsItemDatabase();

};

