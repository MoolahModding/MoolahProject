#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomInterface.h"
#include "SBZBlockableNavlinkInterface.h"
#include "SBZSmartLinkReachedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZSmartNavLink.generated.h"

class AController;
class ASBZCharacter;
class UBillboardComponent;
class UNavArea;

UCLASS(Blueprintable)
class ASBZSmartNavLink : public AActor, public INavRelevantInterface, public INavLinkCustomInterface, public ISBZBlockableNavlinkInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSmartLinkReachedSignature OnSmartLinkReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLink NavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNavLinkWhenUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBlocked;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NavLinkUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCustomMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinkEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinkBlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLinkInUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* AllowedBlockingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* AllowedBlockingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultRightPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultLeftPointOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
public:
    ASBZSmartNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavArea(TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkEnabled(bool bInLinkEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavArea> GetNavArea() const;
    

    // Fix for true pure virtual functions not being implemented
};

