#include "SBZRangedWeaponData.h"

USBZRangedWeaponData::USBZRangedWeaponData() {
    this->StatisticNoReloadKillAmount = 3;
    this->StatisticLongRangeDistance = 5000.00f;
    this->StatisticMultiKillAmount = 2;
    this->FireData = NULL;
    this->SpreadData = NULL;
    this->RecoilData = NULL;
    this->NormalAimAssistData = NULL;
    this->NormalAimAssistDataFiring = NULL;
    this->TargetingAimAssistData = NULL;
    this->TargetingAimAssistDataFiring = NULL;
    this->OnFireWeaponFeedback = NULL;
    this->NormalMagnification = 1.00f;
    this->DOFData = NULL;
    this->WeaponBoxClass = NULL;
    this->SprintEnterPlayRate = 1.00f;
    this->SprintExitPlayRate = 1.00f;
    this->EquipNotifyTime = 0.00f;
    this->UnequipNotifyTime = 0.00f;
    this->SprintExitNotifyTime = 0.00f;
    this->ReloadEmptyNotifyTime = 0.00f;
    this->ReloadNotifyTime = 0.00f;
    this->CachedMagazineData = NULL;
}

