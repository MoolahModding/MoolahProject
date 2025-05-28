#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZMenuArmor.generated.h"

class USBZCustomizationRotateComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZMenuArmor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCustomizationRotateComponent* RotateComponent;
    
public:
    ASBZMenuArmor(const FObjectInitializer& ObjectInitializer);

};

