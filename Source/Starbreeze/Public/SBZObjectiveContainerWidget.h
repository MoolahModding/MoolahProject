#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZObjectiveContainerWidget.generated.h"

class ASBZObjective;
class UClass;
class UObject;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZObjectiveContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ObjectivesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_OptionalObjectivesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectiveWidgetClass;
    
public:
    USBZObjectiveContainerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveRemoved(UObject* ObjectiveUObject);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAdded(UObject* ObjectiveUObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveRemove(ASBZObjective* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveAdded(ASBZObjective* Objective);
    
};

