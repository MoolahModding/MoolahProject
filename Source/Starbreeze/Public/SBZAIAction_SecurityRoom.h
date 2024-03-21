#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZAIAction_Order.h"
#include "SBZAIAction_SecurityRoom.generated.h"

class AActor;
class ASBZAIController;
class ASBZGate;
class ASBZRoomVolume;
class ASBZSecurityRoom;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_SecurityRoom : public USBZAIAction_Order {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSecurityRoom* SecurityRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* SecurityRoomVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZGate*> Gates;
    
public:
    USBZAIAction_SecurityRoom();
private:
    UFUNCTION(BlueprintCallable)
    void OnSecurityRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ClearDelegates();
    
};

