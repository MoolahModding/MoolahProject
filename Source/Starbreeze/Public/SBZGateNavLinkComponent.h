#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomInterface.h"
#include "SBZAgilityTrajectoryInterface.h"
#include "SBZBlockableNavlinkInterface.h"
#include "SBZRoomConnectorInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZGateNavLinkComponent.generated.h"

class AController;
class ASBZCharacter;
class ASBZRoomVolume;
class UNavArea;
class USBZNavLinkAgilityComponent;

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, Within=SBZGate, meta=(BlueprintSpawnableComponent))
class USBZGateNavLinkComponent : public UActorComponent, public INavLinkCustomInterface, public ISBZBlockableNavlinkInterface, public ISBZAgilityTrajectoryInterface, public ISBZRoomConnectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* LeftRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* RightRoom;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLink NavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZNavLinkAgilityComponent* AgilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* AllowedBlockingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* AllowedBlockingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> OriginalAreaClass;
    
public:
    USBZGateNavLinkComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

