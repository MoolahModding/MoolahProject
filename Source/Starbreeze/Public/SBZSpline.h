#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZSplineOnEndReachedDelegate.h"
#include "SBZSplineOnEnterDelegate.h"
#include "SBZSplineOnLeftDelegate.h"
#include "SBZSplineOnStopDelegate.h"
#include "SBZSpline.generated.h"

class ASBZSpline;
class USBZSplineComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZSpline : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSplineOnEnter OnEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSplineOnLeft OnLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSplineOnEndReached OnEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSplineOnStop OnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSplineComponent* SplineComponent;
    
    ASBZSpline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZSpline*> GetOutputSplines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZSpline*> GetInputSplines() const;
    
};

