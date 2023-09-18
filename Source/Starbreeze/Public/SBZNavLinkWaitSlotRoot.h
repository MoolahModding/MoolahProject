#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZNavLinkWaitSlot.h"
#include "SBZNavLinkWaitSlotRoot.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZNavLinkWaitSlotRoot : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZNavLinkWaitSlot> Slots;
    
    USBZNavLinkWaitSlotRoot();

};

