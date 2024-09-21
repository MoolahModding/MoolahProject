#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIScorer.h"
#include "Templates/SubclassOf.h"
#include "SBZAIScorer_CanPathToEnemy.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIScorer_CanPathToEnemy : public USBZAIScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDistanceFromPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredTags;
    
public:
    USBZAIScorer_CanPathToEnemy();

};

