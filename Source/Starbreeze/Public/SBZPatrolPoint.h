#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZPatrolPoint.generated.h"

class ASBZPatrolPoint;

UCLASS(Blueprintable)
class ASBZPatrolPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPatrolPoint*> NextPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange WaitTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePointRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTesting;
    
public:
    ASBZPatrolPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTestingPoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Disconnect(ASBZPatrolPoint* Next);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Connect(ASBZPatrolPoint* Next);
    
};

