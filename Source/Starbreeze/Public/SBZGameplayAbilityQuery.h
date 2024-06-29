#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZGameplayTagContainerComparison.h"
#include "SBZGameplayAbilityQuery.generated.h"

UCLASS(Blueprintable, Const, MinimalAPI)
class USBZGameplayAbilityQuery : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagContainerComparison> TagContainersQuery;
    
    USBZGameplayAbilityQuery();

};

