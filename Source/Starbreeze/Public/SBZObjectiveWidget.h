#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZObjectiveWidget.generated.h"

class ASBZObjective;
class UPanelWidget;
class UProgressBar;
class URichTextBlock;
class USBZObjectiveWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZObjectiveWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZObjectiveWidget> SubObjectiveWidgetClass;
    
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
    UFUNCTION()
    void OnObjectiveUpdated();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveRemoved();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectiveInitialized(ASBZObjective* ObjectiveInit, bool bIsSubObjective);
    
private:
    UFUNCTION()
    void OnObjectiveActivated();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveUpdated(ASBZObjective* NewObjectiveUpdated);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveFailed(ASBZObjective* NewObjectiveFailed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveDisabled(ASBZObjective* NewObjectiveDisabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveCompleted(ASBZObjective* NewObjectiveCompleted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveActivated(ASBZObjective* NewObjectiveActivated);
    
};

