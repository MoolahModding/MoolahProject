#pragma once
#include "CoreMinimal.h"
#include "SBZDamageEvent.h"
#include "SBZHitIndicatorSettings.h"
#include "SBZWidgetBase.h"
#include "SBZHUDHitIndicatorWidget.generated.h"

class UAkAudioEvent;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDHitIndicatorWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HitIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedInHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyHitAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CriticalHitAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyKilledAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyCriticalKilledAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmorHitAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmorPenetrationAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmorBreakAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHitIndicatorSettings HitIndicatorSettings;
    
public:
    USBZHUDHitIndicatorWidget();

private:
    UFUNCTION(BlueprintCallable)
    void PostOnTakenDamageEvent(const FSBZDamageEvent& DamageEventData);
    
};

