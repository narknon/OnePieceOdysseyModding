#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Sofdec2PlayerOptions.h"
#include "ESofdec2PlayerTrack.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OnSofdec2PlayerSofdec2OpenFailedDelegate.h"
#include "OnSofdec2PlayerSofdec2OpenedDelegate.h"
#include "OnSofdec2PlayerSofdec2EventDelegate.h"
#include "UObject/Object.h"
#include "Sofdec2Player.generated.h"

class USofdec2Playlist;
class USofdec2Source;
class UManaComponent;

UCLASS(Blueprintable)
class SOFDEC2_API USofdec2Player : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UManaComponent> ManaComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnSofdec2Closed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Opened OnSofdec2Opened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2OpenFailed OnSofdec2OpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSofdec2PlayerSofdec2Event OnTracksChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan CacheBehindGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NativeAudioOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Shuffle: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Loop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USofdec2Playlist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan TimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ViewRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
public:
    USofdec2Player();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsScrubbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsRate(float Rate, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetViewRotation(const FRotator& Rotation, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    
    UFUNCTION(BlueprintCallable)
    bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(ESofdec2PlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDelay(FTimespan NewTimeDelay);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetNativeVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredPlayerName(FName PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockOnTime(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(ESofdec2PlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    bool OpenUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(USofdec2Source* Sofdec2Source, const FSofdec2PlayerOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSource(USofdec2Source* Sofdec2Source);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylistIndex(USofdec2Playlist* InPlaylist, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylist(USofdec2Playlist* InPlaylist);
    
    UFUNCTION(BlueprintCallable)
    bool OpenFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTrackLanguage(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackFormat(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTrackDisplayName(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSofdec2Name() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTrack(ESofdec2PlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaylistIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USofdec2Playlist* GetPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTracks(ESofdec2PlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTrackFormats(ESofdec2PlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDesiredPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaySource(USofdec2Source* Sofdec2Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPause() const;
    
};

