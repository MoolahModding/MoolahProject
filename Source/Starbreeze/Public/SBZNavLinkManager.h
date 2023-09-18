#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZCachedNavLinkPoints.h"
#include "SBZNavLinkManager.generated.h"

class USBZNavLinkManager;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class STARBREEZE_API USBZNavLinkManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 PointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNavLinkChecksPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCachedNavLinkPoints> CachedNavLinkPoints;
    
public:
    USBZNavLinkManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZNavLinkManager* Get(const UObject* WorldContextObject);
    
};

