#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWorldLoader.generated.h"

class UClass;
class UWorld;

UCLASS(Blueprintable)
class USBZWorldLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> LoadedWorlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* GameModeParamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* GameStateClass;
    
public:
    USBZWorldLoader();

};

