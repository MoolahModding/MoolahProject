#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "SBZAirNavigationTree.h"
#include "SBZAirNavigation.generated.h"

class USBZAirNavLinkComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAirNavigation : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 NodeMinSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAirNavigationTree> NavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZAirNavLinkComponent>> AirNavLinkArray;
    
public:
    ASBZAirNavigation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool HasValidNavigationAt(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void GenerateNavigationData();
    
};

