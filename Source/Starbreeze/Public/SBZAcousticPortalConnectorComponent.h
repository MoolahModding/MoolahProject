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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenState;
    
public:
    USBZAcousticPortalConnectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPortalOpenState(bool bIsOpen, bool bIsInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAllowPortalStateChange(bool bIsAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsPortalStateChangeAllowed() const;
    
};

