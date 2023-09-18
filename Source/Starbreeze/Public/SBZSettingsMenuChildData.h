#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsMenuChildData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSettingsMenuChildData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChildsName;
    
    STARBREEZE_API FSBZSettingsMenuChildData();
};

