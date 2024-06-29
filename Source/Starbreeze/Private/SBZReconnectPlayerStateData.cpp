#include "SBZReconnectPlayerStateData.h"

FSBZReconnectPlayerStateData::FSBZReconnectPlayerStateData() {
    this->PlayerId = 0;
    this->CiviliansKilledBeforeCustody = 0;
    this->ServerSentryKillCount = 0;
    this->SkillTankDisengageActivatedTimeSeconds = 0.00f;
    this->EnforcerSkillKillCount = 0;
    this->EnforcerSkillLastKillTime = 0.00f;
    this->EnforcerAcedSkillKillCount = 0;
    this->OverkillWeaponProgress = 0.00f;
    this->bIsMaskOn = false;
    this->SpectateDurationModification = 0.00f;
    this->ReducedCustodyTime = 0.00f;
    this->SpectateTime = 0.00f;
    this->CustodyCount = 0;
    this->CustodyReleaseCost = 0;
    this->CurrentTradeReduction = 0;
    this->bServerIsHardBargainCustody = false;
    this->DefeatState = EPD3DefeatState::None;
    this->bIsLastArrestedByGuard = false;
    this->bIsSkillTankLastManStandingBlocking = false;
    this->SkillTankLastManStandingImmuneTime = 0.00f;
}

