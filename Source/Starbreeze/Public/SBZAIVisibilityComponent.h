#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "SBZAIVisibilityComponent.generated.h"

struct FSBZAIVisibilityComponentCustomVersion {
  enum Version {
    V5 = 5,
    V6 = 6, // random room struct is now 80 bytes

    LatestVersion = V6
  };
  const static FGuid GUID;
};

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIVisibilityComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyForUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInRandomSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterStandHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterCrouchHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbSubRaycastPerPolarCoord;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSubRaycastSideDistFromCenter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbSubRaycastPerPolarCoordCoverPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSubRaycastSideDistFromCenterCoverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessMeshInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasFinishedBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsParsingDynNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDynVerticesHavedBeenTransformed;
    
public:
    USBZAIVisibilityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void Serialize(FArchive& Ar) override;

public:
  struct FPayload {
    unsigned short CrouchDistances[40];
    unsigned short StandDistances[40];
    unsigned short UpAzymut15Distances[40];
    unsigned short UpAzymut30Distances[40];
    unsigned short UpAzymut45Distances[40];
    unsigned short UpAzymut60Distances[40];

    friend FArchive& operator<<(FArchive& Ar, FPayload& Payload);
  };
  struct FNode {
    char pad[0xC];
    friend FArchive& operator<<(FArchive& Ar, FNode& Node);
  };
  class FTree {
  public:
    FIntVector BoxCenter;
    unsigned int BoxHalfSize;
    unsigned int NodeHalfSize;
    TArray<FNode> Nodes;
    TArray<FPayload> Payloads;
  };
};

