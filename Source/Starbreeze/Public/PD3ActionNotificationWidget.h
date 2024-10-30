#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZHUDNotificationData.h"
#include "SBZPawnWidget.h"
#include "SBZReviveEvent.h"
#include "PD3ActionNotificationWidget.generated.h"

class ASBZCharacter;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UPD3ActionNotificationWidget : public USBZPawnWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHUDNotificationData> HUDNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDNotificationData CasingNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDNotificationData InteractEncumberedNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference CasingControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDNotificationData KilledCivilianNotification;
    
public:
    UPD3ActionNotificationWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnRevive(const FSBZReviveEvent& ReviveEventData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotificationAdded(const FSBZHUDNotificationData& InNotificationAdded);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAICharacterKilled(ASBZCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayNotification(const FSBZHUDNotificationData& InNotification);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNotification(const FSBZHUDNotificationData& HUDNotification);
    
};

