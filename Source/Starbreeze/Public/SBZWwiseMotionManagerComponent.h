#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZWwiseMotionManagerComponent.generated.h"

class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZWwiseMotionManagerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WwiseMotionBusName;
    
public:
    USBZWwiseMotionManagerComponent(const FObjectInitializer& ObjectInitializer);

};

