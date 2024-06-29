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
    UFUNCTION(BlueprintCallable)
    void RoomVolumeChanged(ASBZRoomVolume* InRoomVolume);
    
    UFUNCTION(BlueprintCallable)
    void RoomTypeChanged(ESBZRoomType NewRoomType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoomTypeChanged(ESBZRoomType InRoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoomChanged(ASBZRoomVolume* RoomVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoRoomData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistGoneLoud();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleHeistGoneLoud();
    
};

