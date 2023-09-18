#include "AccelByteModelsStatInfo.h"

FAccelByteModelsStatInfo::FAccelByteModelsStatInfo() {
    this->DefaultValue = 0.00f;
    this->IncrementOnly = false;
    this->Maximum = 0.00f;
    this->Minimum = 0.00f;
    this->SetAsGlobal = false;
    this->SetBy = EAccelByteStatisticSetBy::CLIENT;
    this->Status = EAccelByteStatisticStatus::INIT;
}

