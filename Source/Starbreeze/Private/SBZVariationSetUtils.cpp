#include "SBZVariationSetUtils.h"

USBZVariationSetUtils::USBZVariationSetUtils() {
}

bool USBZVariationSetUtils::ApplyVariationToStatic(UStaticMeshComponent* StatComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx) {
    return false;
}

bool USBZVariationSetUtils::ApplyVariationToSkeletal(USkeletalMeshComponent* SkelComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx) {
    return false;
}

bool USBZVariationSetUtils::ApplyVariationToMesh(UMeshComponent* MeshComponent, const USBZVariationSetData* VariationSet, int32 VariationIdx) {
    return false;
}

bool USBZVariationSetUtils::ApplyVariation(AActor* Actor, const USBZVariationSetData* VariationSet, int32 VariationIdx) {
    return false;
}


