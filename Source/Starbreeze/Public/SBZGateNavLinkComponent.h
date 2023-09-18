#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomInterface.h"
#include "SBZAgilityTrajectoryInterface.h"
#include "SBZBlockableNavlinkInterface.h"
#include "SBZGateNavLinkComponent.generated.h"

class AController;
class ASBZCharacter;
class UClass;
class USBZNavLinkAgilityComponent;

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, Within=SBZGate, meta=(BlueprintSpawnableComponent))
class USBZGateNavLinkComponent : public UActorComponent, public INavLinkCustomInterface, public ISBZBlockableNavlinkInterface, public ISBZAgilityTrajectoryInterface {
    GENERATED_BODY()
public:
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
    UClass* OriginalAreaClass;
    
public:
    USBZGateNavLinkComponent();


    // Fix for true pure virtual functions not being implemented
};

