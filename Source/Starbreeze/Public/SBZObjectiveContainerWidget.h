#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZObjectiveContainerWidget.generated.h"

class ASBZObjective;
class UObject;
class UPanelWidget;
class USBZObjectiveWidget;

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
    TSubclassOf<USBZObjectiveWidget> ObjectiveWidgetClass;
    
public:
    USBZObjectiveContainerWidget();
private:
    UFUNCTION()
    void OnObjectiveRemoved(UObject* ObjectiveUObject);
    
    UFUNCTION()
    void OnObjectiveAdded(UObject* ObjectiveUObject);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveRemove(ASBZObjective* Objective);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ObjectiveAdded(ASBZObjective* Objective);
    
};

