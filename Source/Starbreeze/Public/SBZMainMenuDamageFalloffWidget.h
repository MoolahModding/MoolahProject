#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuDamageFalloffWidget.generated.h"

class USBZPlayerWeaponFireData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuDamageFalloffWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCritDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDisplayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayStepDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerWeaponFireData* FireData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> CachedDamageArray;
    
public:
    USBZMainMenuDamageFalloffWidget();

    UFUNCTION(BlueprintCallable)
    void SetFireData(const USBZPlayerWeaponFireData* InFireData);
    
};

