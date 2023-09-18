#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZCharacterComponent.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBZCharacterComponent();

protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSkeletalMeshLoaded(USkeletalMesh* NewSkeletalMesh);
    
};

