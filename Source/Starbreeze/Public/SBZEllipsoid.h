#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZEllipsoid.generated.h"

class USBZEllipsoidComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEllipsoid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZEllipsoidComponent* EllipsoidComponent;
    
    ASBZEllipsoid(const FObjectInitializer& ObjectInitializer);

};

