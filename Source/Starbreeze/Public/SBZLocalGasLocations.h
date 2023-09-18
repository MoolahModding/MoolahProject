#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZLocalGasLocation.h"
#include "SBZLocalGasLocations.generated.h"

USTRUCT(BlueprintType)
struct FSBZLocalGasLocations : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLocalGasLocation> Locations;
    
    STARBREEZE_API FSBZLocalGasLocations();
};

