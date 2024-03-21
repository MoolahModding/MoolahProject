#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartCustomData.h"
#include "Templates/SubclassOf.h"
#include "SBZEquippableGadgetData.generated.h"

class ASBZGadget;

UCLASS(Blueprintable)
class USBZEquippableGadgetData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZGadget> GadgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocket;
    
    USBZEquippableGadgetData();
};

