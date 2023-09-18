#include "AggregatedWorkItemTally.h"

FAggregatedWorkItemTally::FAggregatedWorkItemTally() {
    this->TotalWorkItems = 0;
    this->WaitingWorkItems = 0;
    this->ScheduledWorkItems = 0;
    this->CookingWorkItems = 0;
    this->CookedWorkItems = 0;
    this->ErroredWorkItems = 0;
    this->CookCancelledWorkItems = 0;
}

