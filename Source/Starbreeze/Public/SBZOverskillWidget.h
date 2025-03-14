#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZOverskillWidget.generated.h"

class USBZEquippableData;
class USBZOverskillData;
class USBZOverskillLoadoutData;
class USBZPlayerStatisticsManager;

UCLASS(Blueprintable, EditInlineNew)
class USBZOverskillWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillData* OverskillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
public:
    USBZOverskillWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOverskill(USBZPlayerStatisticsManager* InStatisticsManager);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverskillLoadout(const USBZOverskillLoadoutData* InOverskillLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippable(const USBZEquippableData* InEquippable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverskillChanged(const USBZOverskillData* InOverskillData, float InProgress);
    
};

