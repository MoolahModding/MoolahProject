#include "SBZPhoneme.h"

FSBZPhoneme::FSBZPhoneme() {
    this->BlendInStartTime = 0;
    this->BlendInStartValue = 0;
    this->BlendInEndTime = 0;
    this->BlendInEndValue = 0;
    this->ControlStartTime = 0;
    this->ControlStartValue = 0;
    this->BlendOutStartTime = 0;
    this->BlendOutEndTime = 0;
    this->BlendOutStartValue = 0;
    this->BlendOutEndValue = 0;
    this->Phoneme = ESBZPhonemeType::AAA;
}

