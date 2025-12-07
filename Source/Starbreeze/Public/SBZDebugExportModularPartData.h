#pragma once
#include "CoreMinimal.h"
#include "SBZDebugExportModularPartData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDebugExportModularPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    STARBREEZE_API FSBZDebugExportModularPartData();
};

