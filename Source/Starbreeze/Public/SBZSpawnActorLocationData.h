#pragma once
#include "CoreMinimal.h"
#include "SBZLocationInformation.h"
#include "SBZSpawnAttachData.h"
#include "SBZSpawnActorLocationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSpawnActorLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZLocationInformation ActorLocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoomLocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnAttachData> SpawnAttachDataArray;
    
    STARBREEZE_API FSBZSpawnActorLocationData();
};

