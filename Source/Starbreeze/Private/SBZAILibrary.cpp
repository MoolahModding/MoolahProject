#include "SBZAILibrary.h"

USBZAILibrary::USBZAILibrary() {
}

void USBZAILibrary::TriggerAbility(ASBZAICharacter* Character, ESBZAbilityInput InAbility) {
}

void USBZAILibrary::SetStance(ASBZCharacter* Character, ESBZCharacterStance InStance) {
}

USBZAIAction* USBZAILibrary::PushAction(UObject* Owner, const USBZAIActionData* Data) {
    return NULL;
}

FVector USBZAILibrary::PlayerCenterOfMass(const UObject* WorldContextObject) {
    return FVector{};
}

void USBZAILibrary::MakeNoise(AActor* NoiseGenerator, float Range, float Lifetime, const FGameplayTag& Tag, AActor* NoiseInstigator, ASBZRoomVolume* Room) {
}

bool USBZAILibrary::IsLocationSafeFromNeighbours(const ASBZAIBaseCharacter* Character, const FVector& Location, float MaxImpactTime, float DiameterInflation) {
    return false;
}

float USBZAILibrary::GetNavAreaSmallestSideSqSize(const UObject* WorldContextObject, FVector CharacterLocation, float SearchRange, float WallAdditiveLength) {
    return 0.0f;
}

float USBZAILibrary::FindDistance2DToWallAlongDir(const ASBZCharacter* Character, float MaxDistance, const FVector Direction, UClass* FilterClass, const bool bProjectStartLocation) {
    return 0.0f;
}

bool USBZAILibrary::DetectNavBottleNeckAndRelocate(const UObject* WorldContextObject, const FVector& BlockingCharacterLocation, const FVector& BlockedCharacterDirection, float& OutBottleNeckSqSize2D, FVector& OutRelocationPosition, float CharacterRadius, float BottleNeckSize) {
    return false;
}

USBZAIOrder_MoveTo* USBZAILibrary::CreateAIOrderMoveTo(UClass* OrderClass, FVector Location, ASBZAIController* AIController) {
    return NULL;
}

USBZAIOrder* USBZAILibrary::CreateAIOrder(UClass* OrderClass, ASBZAIController* AIController) {
    return NULL;
}

USBZAIActionData* USBZAILibrary::CreateActionData(UClass* ObjectClass, UObject* Outer) {
    return NULL;
}


