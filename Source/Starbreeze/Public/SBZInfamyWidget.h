#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZInfamyWidget.generated.h"

class USBZInfamyManager;

UCLASS(Blueprintable, EditInlineNew)
class USBZInfamyWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfamyExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExperienceForCurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExperienceForNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLevelProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMaxLevel;
    
public:
    USBZInfamyWidget();

private:
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentInfamyData(USBZInfamyManager* InfamyManager);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfamyValuesRefreshed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInfamyAdded(USBZInfamyManager* InfamyManager, int32 InLevelValue, int32 InExpirienceValue);
    
};

