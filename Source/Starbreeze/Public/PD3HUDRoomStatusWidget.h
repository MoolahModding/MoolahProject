#pragma once
#include "CoreMinimal.h"
#include "ESBZRoomType.h"
#include "SBZPlayerStatePawnWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "PD3HUDRoomStatusWidget.generated.h"

class ASBZRoomVolume;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDRoomStatusWidget : public USBZPlayerStatePawnWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRoomType RoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> InFeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasGoneLoud;
    
public:
    UPD3HUDRoomStatusWidget();
private:
    UFUNCTION()
    void RoomVolumeChanged(ASBZRoomVolume* InRoomVolume);
    
    UFUNCTION()
    void RoomTypeChanged(ESBZRoomType NewRoomType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRoomTypeChanged(ESBZRoomType InRoomType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRoomChanged(ASBZRoomVolume* RoomVolume);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNoRoomData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistGoneLoud();
    
private:
    UFUNCTION()
    void HandleHeistGoneLoud();
    
};

