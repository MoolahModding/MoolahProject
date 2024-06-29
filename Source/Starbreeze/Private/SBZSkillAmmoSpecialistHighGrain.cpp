#include "SBZSkillAmmoSpecialistHighGrain.h"
#include "SBZAmmoSpecialistHighGrainCrewEffect.h"

USBZSkillAmmoSpecialistHighGrain::USBZSkillAmmoSpecialistHighGrain() {
    this->CrewEffect = USBZAmmoSpecialistHighGrainCrewEffect::StaticClass();
    this->FloatArray.AddDefaulted(2);
    this->IntArray.AddDefaulted(1);
}


