#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZViewTargetCollectionInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZViewTargetCollectionInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZViewTargetCollectionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    int32 GetViewTargetIndex(AActor* ViewTarget) const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetViewTargetCount() const;
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* GetViewTarget(int32 InViewTargetIndex) const;
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* GetCurrentViewTarget() const;
    
};

