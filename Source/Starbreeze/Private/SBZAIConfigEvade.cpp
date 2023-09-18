#include "SBZAIConfigEvade.h"

FSBZAIConfigEvade::FSBZAIConfigEvade() {
    this->MaxTimeSinceUnderFireToEvade = 0.00f;
    this->MaxTimeAfterUnderFireToEvade = 0.00f;
    this->FastEvadeCoolDown = 0.00f;
    this->SlowEvadeCoolDown = 0.00f;
    this->MinFireDist = 0.00f;
    this->MinSlowEvadeDist = 0.00f;
    this->MinFastEvadeDist = 0.00f;
    this->MaxAngleToStopSlowEvade = 0.00f;
    this->MaxAngleToStartSlowEvade = 0.00f;
    this->MaxMovingSpeed = 0.00f;
    this->MinTimeSinceDamage = 0.00f;
}

