#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZSuitConfig.h"
#include "SBZSuitCustomizationComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSuitCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBZSuitCustomizationComponent();

    UFUNCTION(BlueprintCallable)
    void SetSuitConfig(const FSBZSuitConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkeletalMeshComponent* InMeshCompoenent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSkeletalMeshLoaded();
    
};

