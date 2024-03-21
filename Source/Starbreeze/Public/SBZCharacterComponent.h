#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZCharacterComponent.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    USBZCharacterComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSkeletalMeshLoaded(USkeletalMesh* NewSkeletalMesh);
    
};

