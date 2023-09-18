#include "SBZUIData.h"

USBZUIData::USBZUIData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZUIData::StaticClass();
}

TSoftObjectPtr<UPD3SecurityCompanyDataAsset> USBZUIData::GetSecurityCompanyData(ESBZSecurityCompany InSecurityCompany) const {
    return NULL;
}

void USBZUIData::GetDifficultyText(ESBZDifficulty InDifficulty, FText& OutDifficultyText, bool& bHasText) const {
}


