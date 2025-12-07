#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PD3AttributePercentWidget.h"
#include "PD3SegmentedPercentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UPD3SegmentedPercentWidget : public UPD3AttributePercentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute TraumaGameplayAttribute;
    
    UPD3SegmentedPercentWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTraumaRatioChanged(float StartOffset, float EndOffset);
    
};

