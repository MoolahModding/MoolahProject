#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "SBZRenderTargetWidgetComponent.generated.h"

class UMaterialInstanceDynamic;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZRenderTargetWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    USBZRenderTargetWidgetComponent();

protected:
    UFUNCTION(BlueprintCallable)
    void SetWidgetAsTextureParameter(UMaterialInstanceDynamic* Target, const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetUserWidgetInitialized();
    
};

