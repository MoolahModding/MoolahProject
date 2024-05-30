#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZActiveDialogData.h"
#include "SBZGameplaySystemInterface.h"
#include "SBZDialogManager.generated.h"

class AActor;
class ASBZNarrator;
class USBZDialogDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZDialogManager : public UActorComponent, public ISBZGameplaySystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZNarrator* Narrator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZDialogDataAsset*, FSBZActiveDialogData> ActiveDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* QueuedDialog;
    
public:
    USBZDialogManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayDialog(const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator, bool bCanBeQueued);
    

    // Fix for true pure virtual functions not being implemented
};

