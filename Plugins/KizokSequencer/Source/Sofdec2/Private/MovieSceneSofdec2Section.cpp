#include "MovieSceneSofdec2Section.h"

class UManaMovie;
class UManaComponent;

void UMovieSceneSofdec2Section::OnMovieChanged(UManaMovie* InMovie, UManaComponent* InManaComponent) {
}

UMovieSceneSofdec2Section::UMovieSceneSofdec2Section() {
    this->FileManaMovie = NULL;
    this->ManaTexture = NULL;
    this->bIsDisableApplyMovieChange = false;
    this->ManaComponent = NULL;
}

