#include "SBZAgilityAnimationQueryFilter.h"

FSBZAgilityAnimationQueryFilter::FSBZAgilityAnimationQueryFilter() {
    this->StartAgilityType = ESBZAgilityPointType::FloorStart;
    this->EndAgilityType = ESBZAgilityPointType::FloorStart;
    this->DistanceRangeAxis = ESBZAgilitySegmentAxis::All;
}

