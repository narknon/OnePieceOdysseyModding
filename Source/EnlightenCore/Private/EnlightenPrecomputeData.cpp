#include "EnlightenPrecomputeData.h"
#include "EnlightenAtlas.h"

UEnlightenPrecomputeData::UEnlightenPrecomputeData() {
    this->SolutionSignature = 0;
    this->PrecomputeDataVersion = EEnlightenPrecomputeDataVersion::None;
    this->UVBufferCollection = NULL;
    this->SystemAtlas = CreateDefaultSubobject<UEnlightenAtlas>(TEXT("SystemAtlas"));
}

