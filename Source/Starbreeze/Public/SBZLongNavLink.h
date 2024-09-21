#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "SBZSmartLinkReachedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZLongNavLink.generated.h"

class AActor;
class ASBZLongNavLinkPlatform;
class ASBZSmartNavLink;
class UNavArea;

UCLASS(Blueprintable)
class ASBZLongNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSmartLinkReachedSignature OnNavLinkReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> PlatformNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENavLinkDirection::Type> Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SubPlatformsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SubPlatformsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSmartNavLink* StartNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSmartNavLink* EndNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZLongNavLinkPlatform*> NavMeshPlatforms;
    
public:
    ASBZLongNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlatformNavArea(TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetNavArea(TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkEnabled(bool bInLinkEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint);
    
};

