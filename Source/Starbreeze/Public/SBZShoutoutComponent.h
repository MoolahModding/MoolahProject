#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ESBZShoutActionType.h"
#include "SBZShoutoutComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UClass;
class USBZMarkerDataAsset;
class USBZOutlineAsset;
class USBZShoutTargetComponent;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZShoutoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutOutRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRoomPathDistanceFromInitialTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightCutOffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaytraceTargetFindDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AproximateTargetFindBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* MarkingOutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DefaultMarkComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DefaultHelpComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DefaultGetDownComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* DefaultCopSurrenderComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GetDownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockGoDownTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* PingMarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CopSurrenderAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZShoutActionType, FGameplayTagContainer> ActivationBlockedTags;
    
public:
    USBZShoutoutComponent();

    UFUNCTION(BlueprintCallable)
    void SetMarkLimit(int32 NewLimit);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendPing(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnPingComplete();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ShoutoutWithoutTarget(ESBZShoutActionType Action);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendPing(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsActorMarked(AActor* Actor);
    
};

