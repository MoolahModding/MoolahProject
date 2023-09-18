#include "Validation.h"

FValidation::FValidation() {
    this->AllowDigit = false;
    this->AllowLetter = false;
    this->AllowSpace = false;
    this->AllowUnicode = false;
    this->IsCustomRegex = false;
    this->MaxLength = 0;
    this->MaxRepeatingAlphaNum = 0;
    this->MaxRepeatingSpecialCharacter = 0;
    this->MinCharType = 0;
    this->MinLength = 0;
}

