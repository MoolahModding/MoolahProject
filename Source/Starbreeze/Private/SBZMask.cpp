#include "SBZMask.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASBZMask::ASBZMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MaskSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mask"));
    this->StrapSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bNeedCollisionWithCharacter = false;
    this->MaskOnMontage = NULL;
    this->bIsMaskOn = false;
    this->bIsRendered1P = false;
    this->MaskSkeletalMeshComponent->SetupAttachment(StrapSkeletalMeshComponent);
    this->StrapSkeletalMeshComponent->SetupAttachment(RootComponent);
}

UMaterialInstanceDynamic* ASBZMask::GetDynamicMaterialInstance() {
  UMaterialInterface* MaterialInstance = this->MaskSkeletalMeshComponent->GetMaterial(0);
  if (IsValid(MaterialInstance)) {
    if (Cast<UMaterialInstanceDynamic>(MaterialInstance)) {
      return Cast<UMaterialInstanceDynamic>(MaterialInstance);
    }
  }
  return this->MaskSkeletalMeshComponent->CreateDynamicMaterialInstance(0, MaterialInstance);
}

void ASBZMask::SetMaterialParameters(UTexture2D* BaseNormalTexture, UTexture2D* AgedNormalTexture, UTexture2D* AgedAlbedoTexture, float Metallic, float Roughness, float DetailTiling, float ShadingModel, bool UseAlbedo) {
  UMaterialInstanceDynamic* MaterialInstance = GetDynamicMaterialInstance();

  MaterialInstance->SetTextureParameterValueByInfo(FMaterialParameterInfo("Normal00Base", EMaterialParameterAssociation::BlendParameter, 0), BaseNormalTexture);
  MaterialInstance->SetTextureParameterValueByInfo(FMaterialParameterInfo("Normal00Aged", EMaterialParameterAssociation::BlendParameter, 0), AgedNormalTexture);
  MaterialInstance->SetTextureParameterValueByInfo(FMaterialParameterInfo("AgedDetailAlbedoBaseMaterial", EMaterialParameterAssociation::BlendParameter, 0), AgedAlbedoTexture);

  MaterialInstance->SetScalarParameterValueByInfo(FMaterialParameterInfo("Metallic00", EMaterialParameterAssociation::BlendParameter, 0), Metallic);
  MaterialInstance->SetScalarParameterValueByInfo(FMaterialParameterInfo("Roughness00", EMaterialParameterAssociation::BlendParameter, 0), Roughness);
  MaterialInstance->SetScalarParameterValueByInfo(FMaterialParameterInfo("ShadinModelBaseMaterial", EMaterialParameterAssociation::BlendParameter, 0), ShadingModel);
  MaterialInstance->SetScalarParameterValueByInfo(FMaterialParameterInfo("DetailTiling00", EMaterialParameterAssociation::BlendParameter, 0), DetailTiling);
  MaterialInstance->SetScalarParameterValueByInfo(FMaterialParameterInfo("UseAgeAlbedo", EMaterialParameterAssociation::BlendParameter, 0), UseAlbedo ? 1.f : 0.f);
}


