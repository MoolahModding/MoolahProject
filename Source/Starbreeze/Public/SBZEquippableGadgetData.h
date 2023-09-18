#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZEquippableGadgetData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZEquippableGadgetData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GadgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocket;
    
    USBZEquippableGadgetData();

};

