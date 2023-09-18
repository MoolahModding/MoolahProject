#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZLocalGasLocation.generated.h"

USTRUCT(BlueprintType)
struct FSBZLocalGasLocation : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    STARBREEZE_API FSBZLocalGasLocation();
};

