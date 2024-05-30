#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZRappellingRopeNotifyState.generated.h"

class USBZRappellingRopeData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZRappellingRopeNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRappellingRopeData* RappellingRopeData;
    
public:
    USBZRappellingRopeNotifyState();

};

