#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBZAIOrderMode.h"
#include "ESBZEquippableFamily.h"
#include "SBZAccelerationBasedAngle.h"
#include "SBZFactionIdHelper.h"
#include "SBZGateNavAgentInterface.h"
#include "SBZOnPawnKilledDelegate.h"
#include "SBZPathFocusHandler.h"
#include "Templates/SubclassOf.h"
#include "SBZAIController.generated.h"

class AActor;
class APawn;
class UBlackboardData;
class USBZAIAction;
class USBZAIOrder;
class USBZAIUtilityComponent;
class USBZAIVisualDetectionComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIController : public AAIController, public ISBZGateNavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPawnKilled OnAIPawnKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAccelerationBasedAngle YawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAccelerationBasedAngle PitchAngle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIVisualDetectionComponent* VisualDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIUtilityComponent* UtilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LerpedControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIAction*> CurrentActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIOrder* CurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIOrder*> OrderQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZEquippableFamily> DisableTargetFocusWhilePathingEFs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPathFocusHandler PathFocusHandler;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MinCoverScoreToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromTraversalNavLinkToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SameRoomTargetFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetFocusEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusOnLastVisibleLocationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisabledReasonArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastDisabledReason;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve NearRangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PreferredRangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HeistStateAlert;
    
public:
    ASBZAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAIEnabled(bool bIsEnabled, const FName& Reason);
    
    UFUNCTION(BlueprintCallable)
    bool PushOrder(USBZAIOrder* Order, ESBZAIOrderMode Mode);
    
    UFUNCTION(BlueprintCallable)
    USBZAIAction* PushAction(TSubclassOf<USBZAIAction> ActionClass, AActor* TargetActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOrderCompleted(USBZAIOrder* Order, APawn* OrderPawn, TEnumAsByte<EBTNodeResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(APawn* KilledPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnActionCompleted(USBZAIAction* Action, AActor* Actor, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnActionCanceled(USBZAIAction* Action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCurrentEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCurrentEnemyAssigned();
    

    // Fix for true pure virtual functions not being implemented
};

