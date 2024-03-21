#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZAIOrder.h"
#include "SBZAIOrder_SecurityRoom.generated.h"

class ASBZAIController;
class ASBZGate;
class ASBZRoomVolume;
class ASBZSecurityRoom;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_SecurityRoom : public USBZAIOrder {
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
    USBZAIOrder_SecurityRoom();
private:
    UFUNCTION(BlueprintCallable)
    void OnPausedFunc(const FName& Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

