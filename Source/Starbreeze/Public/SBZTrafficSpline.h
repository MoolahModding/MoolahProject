#pragma once
#include "CoreMinimal.h"
#include "SBZSpline.h"
#include "SBZTrafficSpline.generated.h"

class USBZTrafficManager;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZTrafficSpline : public ASBZSpline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTrafficManager* TrafficManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehicleTypeFlags;
    
public:
    ASBZTrafficSpline(const FObjectInitializer& ObjectInitializer);

};

