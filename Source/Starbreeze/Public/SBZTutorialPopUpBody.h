#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlsReference.h"
#include "SBZWidgetBase.h"
#include "SBZTutorialPopUpBody.generated.h"

class USBZTutorialPopUpDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZTutorialPopUpBody : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlsReference PopUpControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTutorialPopUpDataAsset* PopUpDataAsset;
    
public:
    USBZTutorialPopUpBody();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialPopUpInitialized(const USBZTutorialPopUpDataAsset* InPopUpDataAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeTutorialPopUpBody(const USBZTutorialPopUpDataAsset* InPopUpDataAsset);
    
};

