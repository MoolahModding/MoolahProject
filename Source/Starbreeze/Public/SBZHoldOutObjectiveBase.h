#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutObjectiveBase.generated.h"

class ASBZObjective;

UCLASS(Abstract, Blueprintable)
class USBZHoldOutObjectiveBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZObjective* UIObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProgressChangedEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SuccessEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FailEventTag;
    
public:
    USBZHoldOutObjectiveBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOptional() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIObjectiveProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUIObjectiveMaxProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
};

