#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZLifeActionActor.generated.h"

class ASBZRoomVolume;
class USBZLifeActionComponent;

UCLASS(Blueprintable)
class ASBZLifeActionActor : public AActor, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* LifeActionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
public:
    ASBZLifeActionActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

