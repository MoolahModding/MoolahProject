#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SBZModularPartSlotBase.generated.h"

class UClass;
class USBZModularPartApplier;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZModularPartSlotBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ModularPartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ApplierClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApplierPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotWhenEquippedTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartApplier* ApplierInstance;
    
public:
    USBZModularPartSlotBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplayName(FText& OutDisplayName, bool& OutHasText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZModularPartApplier* GetApplierInstance() const;
    
};

