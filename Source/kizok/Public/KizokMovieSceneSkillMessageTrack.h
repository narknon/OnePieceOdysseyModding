#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "KizokMovieSceneSkillMessageTrack.generated.h"

class UMovieSceneSection;
class UDataTable;

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneSkillMessageTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionDataTable;
    
public:
    UKizokMovieSceneSkillMessageTrack();
};

