#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "EPlayerCharacterSizeCategory.h"
#include "SBZSuitConfig.h"
#include "SBZCustomizableSuitMeshComponent.generated.h"

class USBZCapsuleShadowingData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCustomizableSuitMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSuitConfig SuitConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerCharacterSizeCategory SizeCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCapsuleShadowingData* CapsuleShadowingData;
    
public:
    USBZCustomizableSuitMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSuitConfig(const FSBZSuitConfig& Config);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSkeletalMeshLoaded();
    
};

