#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "SBZComponentSelector.h"
#include "SBZPostProcessComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector ShapeSelector;
    
public:
    USBZPostProcessComponent(const FObjectInitializer& ObjectInitializer);

};

