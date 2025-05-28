#include "SBZPostProcessComponent.h"

USBZPostProcessComponent::USBZPostProcessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


/// The functions below are from Unreal Engine Source. If not present when building for Development Editor they cause linker errors.

#if UE_BUILD_DEVELOPMENT && WITH_EDITOR

// https://github.com/EpicGames/UnrealEngine/blob/2d53fcab0066b1f16dd956b227720841cad0f6f7/Engine/Source/Runtime/Engine/Private/UnrealClient.cpp#L1670
void UPostProcessComponent::OnRegister()
{
	Super::OnRegister();
	GetWorld()->InsertPostProcessVolume(this);
}

// https://github.com/EpicGames/UnrealEngine/blob/2d53fcab0066b1f16dd956b227720841cad0f6f7/Engine/Source/Runtime/Engine/Private/UnrealClient.cpp#L1676
void UPostProcessComponent::OnUnregister()
{
	Super::OnUnregister();
	GetWorld()->RemovePostProcessVolume(this);
}

// https://github.com/EpicGames/UnrealEngine/blob/2d53fcab0066b1f16dd956b227720841cad0f6f7/Engine/Source/Runtime/Engine/Private/UnrealClient.cpp#L1682
void UPostProcessComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	if (Ar.IsLoading()) {
#if WITH_EDITORONLY_DATA
		Settings.OnAfterLoad();
#endif
	}
}

#endif
