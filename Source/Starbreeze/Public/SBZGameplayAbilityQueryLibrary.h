#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZGameplayTagContainerComparison.h"
#include "SBZGameplayAbilityQueryLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class USBZGameplayAbilityQuery;
class UTexture2D;

UCLASS(Blueprintable)
class USBZGameplayAbilityQueryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZGameplayAbilityQueryLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayTagContainerFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagContainerComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAbilityFromActor(AActor* Actor, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
};

