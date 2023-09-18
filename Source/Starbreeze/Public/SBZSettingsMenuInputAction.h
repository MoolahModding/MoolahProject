#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsMenuInputAction.generated.h"

USTRUCT(BlueprintType)
struct FSBZSettingsMenuInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    STARBREEZE_API FSBZSettingsMenuInputAction();
};

