#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZCodeViewerInterface.h"
#include "SBZCodeNote.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class ASBZCodeNote : public AActor, public ISBZCodeViewerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CodeToShow, meta=(AllowPrivateAccess=true))
    int32 CodeToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* CodeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShowTrueCode;
    
public:
    ASBZCodeNote(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CodeToShow();
    

    // Fix for true pure virtual functions not being implemented
};

