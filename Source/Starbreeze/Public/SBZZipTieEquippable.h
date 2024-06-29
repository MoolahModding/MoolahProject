#pragma once
#include "CoreMinimal.h"
#include "SBZEquippable.h"
#include "SBZZipTieEquippable.generated.h"

class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class ASBZZipTieEquippable : public ASBZEquippable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BrokenMesh;
    
public:
    ASBZZipTieEquippable(const FObjectInitializer& ObjectInitializer);

};

