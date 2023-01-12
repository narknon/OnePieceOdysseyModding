#include "Sofdec2Player.h"

class USofdec2Playlist;
class USofdec2Source;

bool USofdec2Player::SupportsSeeking() const {
    return false;
}

bool USofdec2Player::SupportsScrubbing() const {
    return false;
}

bool USofdec2Player::SupportsRate(float Rate, bool Unthinned) const {
    return false;
}

bool USofdec2Player::SetViewRotation(const FRotator& Rotation, bool Absolute) {
    return false;
}

bool USofdec2Player::SetViewField(float Horizontal, float Vertical, bool Absolute) {
    return false;
}

bool USofdec2Player::SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate) {
    return false;
}

bool USofdec2Player::SetTrackFormat(ESofdec2PlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex) {
    return false;
}

void USofdec2Player::SetTimeDelay(FTimespan NewTimeDelay) {
}

bool USofdec2Player::SetRate(float Rate) {
    return false;
}

bool USofdec2Player::SetNativeVolume(float Volume) {
    return false;
}

bool USofdec2Player::SetLooping(bool Looping) {
    return false;
}

void USofdec2Player::SetDesiredPlayerName(FName PlayerName) {
}

void USofdec2Player::SetBlockOnTime(const FTimespan& Time) {
}

bool USofdec2Player::SelectTrack(ESofdec2PlayerTrack TrackType, int32 TrackIndex) {
    return false;
}

bool USofdec2Player::Seek(const FTimespan& Time) {
    return false;
}

bool USofdec2Player::Rewind() {
    return false;
}

bool USofdec2Player::Reopen() {
    return false;
}

bool USofdec2Player::Previous() {
    return false;
}

bool USofdec2Player::OpenUrl(const FString& URL) {
    return false;
}

bool USofdec2Player::OpenSourceWithOptions(USofdec2Source* Sofdec2Source, const FSofdec2PlayerOptions& Options) {
    return false;
}

bool USofdec2Player::OpenSource(USofdec2Source* Sofdec2Source) {
    return false;
}

bool USofdec2Player::OpenPlaylistIndex(USofdec2Playlist* InPlaylist, int32 Index) {
    return false;
}

bool USofdec2Player::OpenPlaylist(USofdec2Playlist* InPlaylist) {
    return false;
}

bool USofdec2Player::OpenFile(const FString& FilePath) {
    return false;
}

bool USofdec2Player::Next() {
    return false;
}

bool USofdec2Player::IsLooping() const {
    return false;
}

bool USofdec2Player::IsConnecting() const {
    return false;
}

bool USofdec2Player::IsBuffering() const {
    return false;
}

bool USofdec2Player::HasError() const {
    return false;
}

FRotator USofdec2Player::GetViewRotation() const {
    return FRotator{};
}

FString USofdec2Player::GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const {
    return TEXT("");
}

FFloatRange USofdec2Player::GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const {
    return FFloatRange{};
}

float USofdec2Player::GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const {
    return 0.0f;
}

FIntPoint USofdec2Player::GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const {
    return FIntPoint{};
}

float USofdec2Player::GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const {
    return 0.0f;
}

float USofdec2Player::GetVerticalFieldOfView() const {
    return 0.0f;
}

FString USofdec2Player::GetUrl() const {
    return TEXT("");
}

FString USofdec2Player::GetTrackLanguage(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const {
    return TEXT("");
}

int32 USofdec2Player::GetTrackFormat(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

FText USofdec2Player::GetTrackDisplayName(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const {
    return FText::GetEmpty();
}

FTimespan USofdec2Player::GetTimeDelay() const {
    return FTimespan{};
}

FTimespan USofdec2Player::GetTime() const {
    return FTimespan{};
}

void USofdec2Player::GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const {
}

FText USofdec2Player::GetSofdec2Name() const {
    return FText::GetEmpty();
}

int32 USofdec2Player::GetSelectedTrack(ESofdec2PlayerTrack TrackType) const {
    return 0;
}

float USofdec2Player::GetRate() const {
    return 0.0f;
}

int32 USofdec2Player::GetPlaylistIndex() const {
    return 0;
}

USofdec2Playlist* USofdec2Player::GetPlaylist() const {
    return NULL;
}

FName USofdec2Player::GetPlayerName() const {
    return NAME_None;
}

int32 USofdec2Player::GetNumTracks(ESofdec2PlayerTrack TrackType) const {
    return 0;
}

int32 USofdec2Player::GetNumTrackFormats(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const {
    return 0;
}

float USofdec2Player::GetHorizontalFieldOfView() const {
    return 0.0f;
}

FTimespan USofdec2Player::GetDuration() const {
    return FTimespan{};
}

FName USofdec2Player::GetDesiredPlayerName() const {
    return NAME_None;
}

FString USofdec2Player::GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const {
    return TEXT("");
}

int32 USofdec2Player::GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const {
    return 0;
}

int32 USofdec2Player::GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const {
    return 0;
}

void USofdec2Player::Close() {
}

bool USofdec2Player::CanPlayUrl(const FString& URL) {
    return false;
}

bool USofdec2Player::CanPlaySource(USofdec2Source* Sofdec2Source) {
    return false;
}

bool USofdec2Player::CanPause() const {
    return false;
}

USofdec2Player::USofdec2Player() {
    this->NativeAudioOut = false;
    this->PlayOnOpen = true;
    this->Shuffle = false;
    this->Loop = false;
    this->Playlist = NULL;
    this->PlaylistIndex = -1;
    this->HorizontalFieldOfView = 90.00f;
    this->VerticalFieldOfView = 60.00f;
}

