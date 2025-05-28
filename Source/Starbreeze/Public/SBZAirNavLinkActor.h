#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAirNavLinkActor.generated.h"

class USBZAirNavLinkComponent;

UCLASS(Blueprintable)
class ASBZAirNavLinkActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAirNavLinkComponent* AirNavLinkComponent;
    
public:
    ASBZAirNavLinkActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavLinkEnabled(bool bIsEnabled);
    
};

