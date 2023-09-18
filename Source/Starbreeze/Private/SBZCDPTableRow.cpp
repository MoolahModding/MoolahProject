#include "SBZCDPTableRow.h"

FSBZCDPTableRow::FSBZCDPTableRow() {
    this->CDP_id = 0;
    this->Variable_type = ESBZCDPType::Float;
    this->FloatValue = 0.00f;
    this->IntValue = 0.00f;
    this->SelectValue = 0.00f;
    this->BoolValue = false;
    this->BitPosition = 0;
}

