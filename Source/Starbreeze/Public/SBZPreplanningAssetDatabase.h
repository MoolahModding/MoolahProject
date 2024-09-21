#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZPreplanningAssetDatabase.generated.h"

class USBZPreplanningAssetData;

UCLASS(Blueprintable)
class USBZPreplanningAssetDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPreplanningAssetData*> PreplanningAssetArray;
    
    USBZPreplanningAssetDatabase();

};

