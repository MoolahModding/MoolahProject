#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZCodeViewerSet.h"
#include "SBZModuleActor.h"
#include "SBZOnCodeEnteredDelegate.h"
#include "SBZKeypad.generated.h"

class AActor;
class UAkAudioEvent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class ASBZKeypad : public ASBZModuleActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCodeEntered OnCodeCorrect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCodeEntered OnCodeIncorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GuessedCode, meta=(AllowPrivateAccess=true))
    int32 GuessedCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Inputs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZInteractableComponent*> KeypadInteractableComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseKeypadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* CodeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* LanternCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCodeViewerSet> PossibleCodeViewerSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInteractable, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncorrectCodeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    ASBZKeypad(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetInteractionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeCode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInteractable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GuessedCode();
    
    UFUNCTION(BlueprintCallable)
    void OnLanternCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLanternCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnKeypadPressed(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(const USBZBaseInteractableComponent* InteractableComp, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInteractKeypadE();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInteractKeypadC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateHighlights(const TArray<int32>& GeneratedCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKeypadPressed(const int32 KeyIndexPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKeypadFocusChanged(const int32 KeyIndex, bool bInNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGuessedCodeChanged(const FText& GuessedCodeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleLanternOverlapEnd(const TArray<AActor*>& PlayerAttachedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleLanternOverlapBegin(const TArray<AActor*>& PlayerAttachedActors, USkeletalMeshComponent* PlayerMesh, FName SocketToAttach, FTransform SpawnTransform);
    
};

