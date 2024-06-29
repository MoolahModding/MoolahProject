#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayTagCounterArrayItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZGameplayTagCounterArrayItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    STARBREEZE_API FSBZGameplayTagCounterArrayItem();
};

