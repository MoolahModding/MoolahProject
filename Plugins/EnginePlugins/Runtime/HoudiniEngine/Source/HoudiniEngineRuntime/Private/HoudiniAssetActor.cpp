#include "HoudiniAssetActor.h"
#include "HoudiniAssetComponent.h"

AHoudiniAssetActor::AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHoudiniAssetComponent>(TEXT("HoudiniAssetComponent"));
    this->HoudiniAssetComponent = (UHoudiniAssetComponent*)RootComponent;
}


