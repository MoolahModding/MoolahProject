#include "SBZSkillSniperSpecGrazeBase.h"
#include "SBZSkillGrazePlayerEffect.h"

USBZSkillSniperSpecGrazeBase::USBZSkillSniperSpecGrazeBase() {
    this->PlayerEffect = USBZSkillGrazePlayerEffect::StaticClass();
    this->FloatArray.AddDefaulted(2);
    this->TagContainerArray.AddDefaulted(1);
}


