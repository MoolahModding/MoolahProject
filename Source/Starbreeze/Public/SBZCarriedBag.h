#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZBagHandle.h"
#include "SBZCarriedBag.generated.h"

class ASBZCharacter;
class USBZBaseInteractableComponent;
class USBZInteractableCarriedBagComponent;
class USBZInteractorComponent;
class USBZOutlineAsset;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable, NotPlaceable)
class ASBZCarriedBag : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* AIBagOutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableCarriedBagComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagHandle BagHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffsetScale;
    
public:
    ASBZCarriedBag(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDegradationChanged(const int32 DegredationLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentComplete(USkeletalMeshComponent* ParentSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AdjustAttachment(int32 Index, int32 NewCount, const FTransform& NewStrapTransformOffset);
    
};

