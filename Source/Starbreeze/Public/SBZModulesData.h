#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZModulesData.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USBZModulesData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExpectedModules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KnownAlterations;
    
    USBZModulesData();

};

