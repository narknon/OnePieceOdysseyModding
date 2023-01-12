#include "Sofdec2Playlist.h"

class USofdec2Source;

bool USofdec2Playlist::Replace(int32 Index, USofdec2Source* Replacement) {
    return false;
}

bool USofdec2Playlist::RemoveAt(int32 Index) {
    return false;
}

bool USofdec2Playlist::Remove(USofdec2Source* Sofdec2Source) {
    return false;
}

int32 USofdec2Playlist::Num() {
    return 0;
}

void USofdec2Playlist::Insert(USofdec2Source* Sofdec2Source, int32 Index) {
}

USofdec2Source* USofdec2Playlist::GetRandom(int32& OutIndex) {
    return NULL;
}

USofdec2Source* USofdec2Playlist::GetPrevious(int32& InOutIndex) {
    return NULL;
}

USofdec2Source* USofdec2Playlist::GetNext(int32& InOutIndex) {
    return NULL;
}

USofdec2Source* USofdec2Playlist::Get(int32 Index) {
    return NULL;
}

bool USofdec2Playlist::AddUrl(const FString& URL) {
    return false;
}

bool USofdec2Playlist::AddFile(const FString& FilePath) {
    return false;
}

bool USofdec2Playlist::Add(USofdec2Source* Sofdec2Source) {
    return false;
}

USofdec2Playlist::USofdec2Playlist() {
}

