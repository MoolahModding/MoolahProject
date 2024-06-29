#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZStandardImpactData.h"
#include "SBZImpactConfig.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class USBZImpactConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStandardImpactData Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTranslucentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucentSortPriority;
    
    USBZImpactConfig();

};

