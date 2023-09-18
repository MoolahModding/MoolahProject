#include "PD3HeistDataAsset.h"

UPD3HeistDataAsset::UPD3HeistDataAsset() {
    this->Hour = 14;
    this->Minute = 30;
    this->HeistComplexity = ESBZHeistComplexity::Low;
    this->bHasIntroSequence = false;
    this->bHasOutroSequence = false;
    this->bIsTutorialLevel = false;
    this->HeistButtonHoverPlayEvent = NULL;
    this->HeistDescriptionPlayEvent = NULL;
    this->HeistDescriptionStopEvent = NULL;
    this->HeistResultSuccessStealthPlayEvent = NULL;
    this->HeistResultSuccessLoudPlayEvent = NULL;
    this->HeistResultFailurePlayEvent = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = UPD3HeistDataAsset::StaticClass();
}

FText UPD3HeistDataAsset::GetHeistTimeShort() const {
    return FText::GetEmpty();
}

void UPD3HeistDataAsset::GetEstimatedPayout(ESBZDifficulty Diffculty, int32& OutMin, int32& OutMax) const {
}

void UPD3HeistDataAsset::GetDisplayName(FText& OutDisplayName, bool& OutHasText) const {
}


