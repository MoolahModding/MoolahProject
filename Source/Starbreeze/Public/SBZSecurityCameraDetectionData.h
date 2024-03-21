#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraDetectionLevel.h"
#include "SBZSecurityCameraDetectionData.generated.h"

class AActor;
class ISBZAIVisualDetectionGeneratorInterface;
class USBZAIVisualDetectionGeneratorInterface;

USTRUCT(BlueprintType)
struct FSBZSecurityCameraDetectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPerceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZCameraDetectionLevel DetectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZAIVisualDetectionGeneratorInterface> VisionGeneratorInterface;
    
    STARBREEZE_API FSBZSecurityCameraDetectionData();
};

