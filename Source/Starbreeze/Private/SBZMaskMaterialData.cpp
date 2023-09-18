#include "SBZMaskMaterialData.h"

USBZMaskMaterialData::USBZMaskMaterialData() {
    this->MaterialState = ESBZMaskMaterialState::New;
    this->BaseNormalTexture = NULL;
    this->AgedNormalTexture = NULL;
    this->AgedAlbedoTexture = NULL;
    this->Metallic = 0.00f;
    this->Roughness = 0.00f;
    this->DetailTiling = 0.00f;
    this->ShadingModel = 0.00f;
    this->UseAlbedo = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskMaterialData::StaticClass();
}

ESBZMaskMaterialState USBZMaskMaterialData::GetMaterialState() const {
    return ESBZMaskMaterialState::New;
}


