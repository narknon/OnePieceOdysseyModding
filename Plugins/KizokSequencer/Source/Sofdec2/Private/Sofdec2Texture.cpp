#include "Sofdec2Texture.h"

class USofdec2Player;

void USofdec2Texture::SetSofdec2Player(USofdec2Player* NewSofdec2Player) {
}

int32 USofdec2Texture::GetWidth() const {
    return 0;
}

USofdec2Player* USofdec2Texture::GetSofdec2Player() const {
    return NULL;
}

int32 USofdec2Texture::GetHeight() const {
    return 0;
}

float USofdec2Texture::GetAspectRatio() const {
    return 0.0f;
}

USofdec2Texture::USofdec2Texture() {
    this->AutoClear = false;
    this->Sofdec2Player = NULL;
}

