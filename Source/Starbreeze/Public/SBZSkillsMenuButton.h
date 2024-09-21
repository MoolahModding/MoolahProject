#pragma once
#include "CoreMinimal.h"
#include "ESBZSkillState.h"
#include "ESBZSkillType.h"
#include "SBZMenuButton.h"
#include "SBZSkillsMenuButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSkillsMenuButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSkillState SkillState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSkillType SkillType;
    
public:
    USBZSkillsMenuButton();

};

