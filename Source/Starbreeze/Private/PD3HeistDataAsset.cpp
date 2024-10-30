#include "PD3HeistDataAsset.h"

UPD3HeistDataAsset::UPD3HeistDataAsset() {
    this->Hour = 14;
    this->Minute = 30;
    this->HeistComplexity = ESBZHeistComplexity::Low;
    this->HeistPlaystyle = ESBZHeistPlaystyle::Hybrid;
    this->bHasIntroSequence = false;
    this->bHasOutroSequence = false;
    this->bIsTutorialLevel = false;
    this->HeistButtonHoverPlayEvent = NULL;
    this->HeistDescriptionPlayEvent = NULL;
    this->HeistDescriptionStopEvent = NULL;
    this->HeistResultSuccessStealthPlayEvent = NULL;
    this->HeistResultSuccessLoudPlayEvent = NULL;
    this->HeistResultFailurePlayEvent = NULL;
    this->HostageTradeStatistiCriteriaData = NULL;
}

void UPD3HeistDataAsset::GetOverallPayout(int32& OutMin, int32& OutMax) const {
}

FText UPD3HeistDataAsset::GetHeistTimeShort() const {
    return FText::GetEmpty();
}

FString UPD3HeistDataAsset::GetHeistReferenceText() const {
    return TEXT("");
}

void UPD3HeistDataAsset::GetEstimatedPayout(ESBZDifficulty Diffculty, int32& OutMin, int32& OutMax) const {
}


