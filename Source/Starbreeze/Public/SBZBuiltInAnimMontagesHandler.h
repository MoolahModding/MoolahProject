#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBuiltInAnimMontageInstance.h"
#include "SBZBuiltInAnimMontagesHandler.generated.h"

class USBZBuiltInAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class USBZBuiltInAnimMontagesHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuiltInAnimMontageInstance> ActiveAnimMontageInstances;
    
public:
    USBZBuiltInAnimMontagesHandler();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimMontagesWithinGroup(const FName& Group);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    float PlayAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZBuiltInAnimMontageInstance> GetActiveAnimMontageInstances() const;
    
};

