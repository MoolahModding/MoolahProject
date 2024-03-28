#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZItemBundleDatabase.generated.h"

class USBZItemBundleData;

UCLASS(Blueprintable)
class USBZItemBundleDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZItemBundleData*> ItemBundleArray;
    
    USBZItemBundleDatabase();
};

