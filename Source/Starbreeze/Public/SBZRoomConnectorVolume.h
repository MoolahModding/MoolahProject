#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerVolume.h"
#include "SBZRoomConnectorInterface.h"
#include "SBZRoomConnectorVolume.generated.h"

class ASBZGate;
class ASBZRoomVolume;

UCLASS(Blueprintable, MinimalAPI)
class ASBZRoomConnectorVolume : public ATriggerVolume, public ISBZRoomConnectorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsAIBreach;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZGate* Gate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConnectorLocation;
    
public:
    ASBZRoomConnectorVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

