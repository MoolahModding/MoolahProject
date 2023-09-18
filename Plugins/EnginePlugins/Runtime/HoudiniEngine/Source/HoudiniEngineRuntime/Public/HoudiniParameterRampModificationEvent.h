#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampModificationEvent.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampModificationEvent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInsertEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFloatRamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeleteInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsertPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsertFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InsertColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniRampInterpolationType InsertInterpolation;
    
    UHoudiniParameterRampModificationEvent();

};

