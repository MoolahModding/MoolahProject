#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneAkTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAMasterTrack;
    
public:
    UMovieSceneAkTrack();

};

