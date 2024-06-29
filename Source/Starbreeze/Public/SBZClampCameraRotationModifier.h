#pragma once
#include "CoreMinimal.h"
#include "SBZLockCameraData.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZClampCameraRotationModifier.generated.h"

UCLASS(Blueprintable)
class USBZClampCameraRotationModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLockCameraData> DataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> IdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
public:
    USBZClampCameraRotationModifier();

};

