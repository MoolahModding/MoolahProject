#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SBZLevelVOInfo.h"
#include "SBZVOImportBindings.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZVOImportBindings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLevelVOInfo> VOInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FSBZLevelVOInfo> LevelToVOInfo;
    
    USBZVOImportBindings();

};

