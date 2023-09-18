#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWorldRuntimeBase.generated.h"

class UClass;
class USBZWorldRuntimeBase;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Transient)
class SBZWORLDRUNTIME_API USBZWorldRuntimeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    UClass* WorldRuntimeClass;
    
    USBZWorldRuntimeBase();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWorldRuntimeBase* GetWorldRuntime(const UObject* WorldContextObject);
    
};

