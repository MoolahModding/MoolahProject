#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZHUDDamageTakenIndicatorWidget.generated.h"

class AActor;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDDamageTakenIndicatorWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LatestDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DamageTakenIndicator;
    
    USBZHUDDamageTakenIndicatorWidget();

};

