#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZMainMenuLoadoutCustomization.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuLoadoutCustomization : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerLoadoutConfig CachedPlayerLoadoutConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoadoutIndex;
    
public:
    USBZMainMenuLoadoutCustomization();

protected:
    UFUNCTION(BlueprintCallable)
    void SaveCachedLoadout();
    
public:
    UFUNCTION(BlueprintCallable)
    void CustomizeLoadout(int32 InLoadoutIndex);
    
};

