#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XeSSSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class XESSPLUGIN_API UXeSSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableXeSSInEditorViewports;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugDataDumpPath;
    
    UXeSSSettings();

};

