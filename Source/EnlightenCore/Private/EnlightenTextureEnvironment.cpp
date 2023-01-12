#include "EnlightenTextureEnvironment.h"
#include "EnlightenEnvironmentTextureComponent.h"

AEnlightenTextureEnvironment::AEnlightenTextureEnvironment() {
    this->Component = CreateDefaultSubobject<UEnlightenEnvironmentTextureComponent>(TEXT("EnvironmentTextureComponent0"));
}

