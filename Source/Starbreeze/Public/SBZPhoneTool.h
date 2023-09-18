#pragma once
#include "CoreMinimal.h"
#include "ESBZPhoneScreenState.h"
#include "SBZComponentSelector.h"
#include "SBZTool.h"
#include "SBZViewTargetCollectionInterface.h"
#include "SBZPhoneTool.generated.h"

class UStaticMeshComponent;
class UWidget;

UCLASS(Blueprintable)
class ASBZPhoneTool : public ASBZTool, public ISBZViewTargetCollectionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* MiniGameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GlowMesh;
    
    ASBZPhoneTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ToggleScreenMode(ESBZPhoneScreenState NewScreenState);
    

    // Fix for true pure virtual functions not being implemented
};

