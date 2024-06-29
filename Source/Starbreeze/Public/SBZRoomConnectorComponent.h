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
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAIBreachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSoundModifier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RoomB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedForRoomPathing;
    
public:
    USBZRoomConnectorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSoundModifier(float InSoundModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRoomConnectorEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetRoomBLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetRoomALocation() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlockSoundCompletly();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AllowSoundToPassUnmodified();
    

    // Fix for true pure virtual functions not being implemented
};

