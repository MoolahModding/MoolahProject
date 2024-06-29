#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "SBZSkillCQCSpecialistPinPuller.generated.h"

class USBZGrenadeData;

UCLASS(Blueprintable)
class USBZSkillCQCSpecialistPinPuller : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGrenadeData* GrenadeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrenadeAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashBangDelay;
    
    USBZSkillCQCSpecialistPinPuller();

};

