#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZDebugPreviewSettings.generated.h"

class USBZLifeActionPreviewData;
class USBZPedestrianTrafficNavLinkPreviewData;
class USkeletalMesh;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class USBZDebugPreviewSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZLifeActionPreviewData> PreviewData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPedestrianTrafficNavLinkPreviewData> PedestrianPreviewData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> AgilitySkeletalPreview;
    
    USBZDebugPreviewSettings();

};

