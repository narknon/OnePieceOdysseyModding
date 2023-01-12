#include "KizokEffectParticle2.h"
#include "Particles/ParticleSystemComponent.h"

void AKizokEffectParticle2::OnParticleSystemEnd() {
}

AKizokEffectParticle2::AKizokEffectParticle2() {
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
}

