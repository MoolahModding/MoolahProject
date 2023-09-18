#pragma once
#include "CoreMinimal.h"
#include "SBZRandomDefaultSwitchStates.generated.h"

USTRUCT(BlueprintType)
struct FSBZRandomDefaultSwitchStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SwitchGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> States;
    
    STARBREEZE_API FSBZRandomDefaultSwitchStates();
};

