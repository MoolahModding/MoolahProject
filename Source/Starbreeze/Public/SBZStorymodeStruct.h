#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZStorymodeStruct.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FSBZStorymodeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath VideoURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> DisplayIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    STARBREEZE_API FSBZStorymodeStruct();
};

