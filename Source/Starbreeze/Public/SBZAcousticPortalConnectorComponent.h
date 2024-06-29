#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAcousticPortalConnectorComponent.generated.h"

class ASBZAkAcousticPortal;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAcousticPortalConnectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAkAcousticPortal* ConnectedPortal;
    
public:
    USBZAcousticPortalConnectorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPortalOpenState(bool bIsOpen);
    
};

