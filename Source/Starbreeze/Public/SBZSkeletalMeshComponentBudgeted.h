#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "SBZSkeletalMeshComponentBudgeted.generated.h"

class USBZCapsuleShadowingData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCapsuleShadowingData* CapsuleShadowingData;
    
public:
    USBZSkeletalMeshComponentBudgeted(const FObjectInitializer& ObjectInitializer);

};

