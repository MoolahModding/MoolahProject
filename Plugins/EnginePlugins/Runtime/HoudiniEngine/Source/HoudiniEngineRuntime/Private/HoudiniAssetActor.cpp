#include "HoudiniAssetActor.h"
#include "HoudiniAssetComponent.h"

AHoudiniAssetActor::AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoudiniAssetComponent = CreateDefaultSubobject<UHoudiniAssetComponent>(TEXT("HoudiniAssetComponent"));
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = HoudiniAssetComponent;
}


