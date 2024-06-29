#include "SBZSkillTacticianDiscombobulate.h"
#include "SBZTacticianDiscombobulateEffect.h"

USBZSkillTacticianDiscombobulate::USBZSkillTacticianDiscombobulate() {
    this->FloatArray.AddDefaulted(2);
    this->PostSmokeFlashEffect = USBZTacticianDiscombobulateEffect::StaticClass();
}


