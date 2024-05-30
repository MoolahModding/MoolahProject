#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZSpecialAIComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZAITowerSpecialComponent.generated.h"

class APawn;
class ASBZAIRefractorShield;
class USBZAIOrder;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAITowerSpecialComponent : public USBZSpecialAIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIRefractorShield> ShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ShieldBrokenComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* ShieldDeployedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RefractorShield, meta=(AllowPrivateAccess=true))
    ASBZAIRefractorShield* RefractorShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGlitchEffectActive, meta=(AllowPrivateAccess=true))
    bool bIsGlitchEffectActive;
    
public:
    USBZAITowerSpecialComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RefractorShield(ASBZAIRefractorShield* OldRefractorShield);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGlitchEffectActive();
    
    UFUNCTION(BlueprintCallable)
    void OnHideOrderCompleted(USBZAIOrder* Order, APawn* Owner, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RetractShield();
    
};

