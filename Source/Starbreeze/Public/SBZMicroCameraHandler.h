#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.h"
#include "SBZTool.h"
#include "SBZViewTargetCollectionInterface.h"
#include "SBZMicroCameraHandler.generated.h"

class UWidget;

UCLASS(Blueprintable)
class ASBZMicroCameraHandler : public ASBZTool, public ISBZViewTargetCollectionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* MiniGameWidget;
    
    ASBZMicroCameraHandler();
    
    // Fix for true pure virtual functions not being implemented
};

