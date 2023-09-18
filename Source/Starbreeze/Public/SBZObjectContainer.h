#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZObjectContainer.generated.h"

class UClass;

UCLASS(Blueprintable, DefaultToInstanced)
class USBZObjectContainer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* RestrictedObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* RestrictedInterfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDuplicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepSorted;
    
public:
    USBZObjectContainer();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool Remove(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> K2_GetArray();
    
    UFUNCTION(BlueprintCallable)
    bool CleanUp();
    
    UFUNCTION(BlueprintCallable)
    bool Add(UObject* Object);
    
};

