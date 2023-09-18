#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZRagdollSyncData.generated.h"

USTRUCT(BlueprintType)
struct FSBZRagdollSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize HipsLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NetID;
    
    STARBREEZE_API FSBZRagdollSyncData();
};

