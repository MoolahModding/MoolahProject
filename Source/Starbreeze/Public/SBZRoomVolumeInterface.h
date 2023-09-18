#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZRoomVolumeInterface.generated.h"

class ASBZRoomVolume;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZRoomVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZRoomVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LeaveRoom(ASBZRoomVolume* RoomVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASBZRoomVolume* GetCurrentRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterRoom(ASBZRoomVolume* RoomVolume);
    
};

