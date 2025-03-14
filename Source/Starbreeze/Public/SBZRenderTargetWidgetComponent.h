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
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OwnerRenderTimeDelay;
    
public:
    USBZRenderTargetWidgetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetWidgetAsTextureParameter(UMaterialInstanceDynamic* Target, const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUserWidget* GetUserWidgetInitialized();
    
};

