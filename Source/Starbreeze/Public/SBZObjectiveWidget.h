#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZObjectiveWidget.generated.h"

class ASBZObjective;
class UClass;
class UPanelWidget;
class UProgressBar;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZObjectiveWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SubObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ProgressSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_SubObjectivesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZObjective* Objective;
    
public:
    USBZObjectiveWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveRemoved();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveInitialized(ASBZObjective* ObjectiveInit, bool bIsSubObjective);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveUpdated(ASBZObjective* NewObjectiveUpdated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveFailed(ASBZObjective* NewObjectiveFailed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveDisabled(ASBZObjective* NewObjectiveDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveCompleted(ASBZObjective* NewObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveActivated(ASBZObjective* NewObjectiveActivated);
    
};

