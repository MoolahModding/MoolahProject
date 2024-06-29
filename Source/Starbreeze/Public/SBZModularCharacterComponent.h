#pragma once
#include "CoreMinimal.h"
#include "SBZSkeletalMeshComponentBudgeted.h"
#include "SBZModularCharacterComponent.generated.h"

class USBZCapsuleShadowingData;
class USBZCustomizableSuitMeshComponent;
class USBZOutlineComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZModularCharacterComponent : public USBZSkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCapsuleShadowingData* SuitCapsuleShadowingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCustomizableSuitMeshComponent* SuitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GlovesMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMeshComponent;
    
public:
    USBZModularCharacterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSuitMesh(USkeletalMesh* SuitSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetGlovesMesh(USkeletalMesh* GlovesSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyMesh(USkeletalMesh* BodySkeletalMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZCustomizableSuitMeshComponent* GetSuitMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetGlovesMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetBodyMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToOutline(USBZOutlineComponent* OutlineComponent);
    
};

