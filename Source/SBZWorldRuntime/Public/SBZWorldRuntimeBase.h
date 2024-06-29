#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SBZWorldRuntimeBase.generated.h"

class USBZWorldRuntimeBase;

UCLASS(Blueprintable, DefaultConfig, Transient, Config=Engine)
class SBZWORLDRUNTIME_API USBZWorldRuntimeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZWorldRuntimeBase> WorldRuntimeClass;
    
    USBZWorldRuntimeBase();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWorldRuntimeBase* GetWorldRuntime(const UObject* WorldContextObject);
    
};

