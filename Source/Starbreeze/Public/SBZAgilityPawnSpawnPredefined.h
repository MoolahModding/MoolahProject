#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomInterface.h"
#include "ESBZAgilityType.h"
#include "SBZAgilityTrajectoryInterface.h"
#include "SBZPawnSpawnPredefined.h"
#include "SBZAgilityPawnSpawnPredefined.generated.h"

class ASBZAIController;
class UAnimMontage;
class USBZAIOrder;
class USBZNavLinkAgilityComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAgilityPawnSpawnPredefined : public ASBZPawnSpawnPredefined, public ISBZAgilityTrajectoryInterface, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ForcedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationToComputeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityType AgilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavLinkAgilityComponent* NavLinkAgilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLink NavigationLink;
    
public:
    ASBZAgilityPawnSpawnPredefined(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAgilityTrajectory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnedPawnOrderPushed(ASBZAIController* Controller, USBZAIOrder* Order);
    

    // Fix for true pure virtual functions not being implemented
};

