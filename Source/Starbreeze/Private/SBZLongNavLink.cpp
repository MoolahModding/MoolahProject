#include "SBZLongNavLink.h"
#include "NavAreas/NavArea_Default.h"

ASBZLongNavLink::ASBZLongNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavArea = UNavArea_Default::StaticClass();
    this->PlatformNavArea = UNavArea_Default::StaticClass();
    this->Direction = ENavLinkDirection::BothWays;
    this->StartNavLink = NULL;
    this->EndNavLink = NULL;
    this->PointLinks.AddDefaulted(1);
}

void ASBZLongNavLink::SetPlatformNavArea(UClass* AreaClass) {
}

void ASBZLongNavLink::SetNavArea(UClass* AreaClass) {
}

void ASBZLongNavLink::SetLinkEnabled(bool bInLinkEnabled) {
}

void ASBZLongNavLink::OnSmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint) {
}


