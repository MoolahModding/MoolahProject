#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZVariationSetUtils.generated.h"

class AActor;
class UMeshComponent;
class USBZVariationSetData;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZVariationSetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZVariationSetUtils();

    UFUNCTION(BlueprintCallable)
    static bool ApplyVariationToStatic(UStaticMeshComponent* StatComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyVariationToSkeletal(USkeletalMeshComponent* SkelComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyVariationToMesh(UMeshComponent* MeshComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyVariation(AActor* Actor, const USBZVariationSetData* VariationSet, int32 VariationIdx);
    
};

