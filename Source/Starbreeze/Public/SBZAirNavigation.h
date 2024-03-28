#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZAirNavigationTree.h"
#include "SBZAirNavigation.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASBZAirNavigation : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAirNavigationTree> NavData;
    
public:
    ASBZAirNavigation();
    UFUNCTION()
    void GenerateNavigationData();
    
};

