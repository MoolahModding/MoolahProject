#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ESBZCharacterMovementState.h"
#include "SBZMinimalAgilityTraversalTrajectory.h"
#include "SBZCharacterMovementComponent.generated.h"

class ASBZZipline;
class USBZAgilitySlideParams;
class USBZAgilityTraversalQueryParams;
class USBZZiplineSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAgilityTraversalQueryParams* AgilityTrajectoryQueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAgilitySlideParams* AgilitySlideParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentControlsReferenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZZiplineSettings* ZiplineParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHSInstigatorTargetingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHSInstigatorWalkingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StandingHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraversingHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZCharacterMovementState CharacterMovementState;
    
public:
    USBZCharacterMovementComponent();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopZipline(const bool bWasCancelled);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopSlide();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartZipline(ASBZZipline* InZipline, const bool bIsMovingZiplineForward, const float InTimeOnZipline);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartTraversal(const FSBZMinimalAgilityTraversalTrajectory& MinimalTrajectory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartSlide(const FVector& InSlideDirection, const FVector& InEndSlideLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StopTraversal();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StopSlide();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartTraversal(const FSBZMinimalAgilityTraversalTrajectory& MinimalTrajectory);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartSlide(const FVector& InSlideDirection, const FVector& InEndSlideLocation);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopZipline(const bool bWasCancelled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartZipline(ASBZZipline* InZipline, const bool bIsMovingZiplineForward, const float InTimeOnZipline);
    
};

