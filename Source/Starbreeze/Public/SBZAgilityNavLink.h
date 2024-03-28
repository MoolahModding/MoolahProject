#pragma once
#include "CoreMinimal.h"
#include "SBZAgilityTrajectoryInterface.h"
#include "SBZRoomConnectorInterface.h"
#include "SBZSmartNavLink.h"
#include "SBZAgilityNavLink.generated.h"

class ASBZRoomVolume;
class USBZNavLinkAgilityComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAgilityNavLink : public ASBZSmartNavLink, public ISBZAgilityTrajectoryInterface, public ISBZRoomConnectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* LeftRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RightRoom;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavLinkAgilityComponent* NavLinkAgilityComponent;
    
public:
    ASBZAgilityNavLink();
    
    // Fix for true pure virtual functions not being implemented
};

