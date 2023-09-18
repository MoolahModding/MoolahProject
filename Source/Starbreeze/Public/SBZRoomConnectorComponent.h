#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBZRoomConnectorInterface.h"
#include "SBZRoomConnectorComponent.generated.h"

class ASBZRoomVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZRoomConnectorComponent : public UActorComponent, public ISBZRoomConnectorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomB;
    
public:
    USBZRoomConnectorComponent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetRoomBLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetRoomALocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

