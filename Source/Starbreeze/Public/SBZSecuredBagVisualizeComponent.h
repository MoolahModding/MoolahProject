#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZBagHandle.h"
#include "SBZComponentSelector.h"
#include "SBZSecuredBagVisualizeBagAddedSignatureDelegate.h"
#include "SBZSecuredBagVisualizeComponent.generated.h"

class USBZBagType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSecuredBagVisualizeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSecuredBagVisualizeBagAddedSignature OnBagAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BagTypes, meta=(AllowPrivateAccess=true))
    TArray<USBZBagType*> BagTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZComponentSelector> SpawnLocationArray;
    
public:
    USBZSecuredBagVisualizeComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BagTypes();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddBagType(const USBZBagType* BagType);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddBagHandle(FSBZBagHandle BagHandle);
    
};

