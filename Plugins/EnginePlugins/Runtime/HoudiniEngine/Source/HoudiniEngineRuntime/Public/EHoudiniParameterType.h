#pragma once
#include "CoreMinimal.h"
#include "EHoudiniParameterType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniParameterType : uint8 {
    Invalid,
    Button,
    ButtonStrip,
    Color,
    ColorRamp,
    File,
    FileDir,
    FileGeo,
    FileImage,
    Float,
    FloatRamp,
    Folder,
    FolderList,
    Input,
    Int,
    IntChoice,
    Label,
    MultiParm,
    Separator,
    String,
    StringChoice,
    StringAssetRef,
    Toggle,
};

