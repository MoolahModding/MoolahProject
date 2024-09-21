#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZHideMagazineNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZHideMagazineNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawnAllowed;
    
public:
    USBZHideMagazineNotifyState();

};

