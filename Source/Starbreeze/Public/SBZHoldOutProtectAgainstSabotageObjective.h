#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutProtectAgainstSabotageObjective.generated.h"

class AActor;
class ASBZSabotagePoint;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutProtectAgainstSabotageObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSabotagePoint*> SabotagePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TagEventProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SabotageTagEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamagePerSabotageEvent;
    
public:
    USBZHoldOutProtectAgainstSabotageObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTagEventActiveChanged(const FGameplayTag& Tag, bool bIsTagActive);
    
};

