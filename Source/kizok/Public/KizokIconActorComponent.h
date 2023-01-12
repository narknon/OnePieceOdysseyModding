#pragma once
#include "CoreMinimal.h"
#include "EIconRoutine.h"
#include "IconInfo.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KizokIconActorComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKizokIconActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FIconInfo> IconsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstacleStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObstacle;
    
public:
    UKizokIconActorComponent();
    UFUNCTION(BlueprintCallable)
    void VisibleIcon(int32 Index, bool IsAnim);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateIconTrans(UPARAM(Ref) FIconInfo& Info);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTransUpdate(int32 Index, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(int32 Index, FVector Pos);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetIconVisibleFlag(int32 Index, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRno(int32 Index, EIconRoutine Rno);
    
    UFUNCTION(BlueprintCallable)
    void SetIconHideState(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetIconAnimFlag(int32 Index, bool flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveScreenIcon(int32 Index, bool IsAnim);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 RegistIcon(UTexture2D* tex, FVector Pos, bool IsAttachOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidNumber(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HideIcon(int32 Index, bool IsAnim);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FIconInfo> GetIconsMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIconInfo GetIcon(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeleteIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTexture(int32 Index, UTexture2D* tex, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void AllVisibleIcon();
    
    UFUNCTION(BlueprintCallable)
    void AllRemoveIcon();
    
    UFUNCTION(BlueprintCallable)
    void AllHideIcon();
    
    UFUNCTION(BlueprintCallable)
    void AddScreenIcon(int32 Index, bool IsAnim);
    
    UFUNCTION(BlueprintCallable)
    int32 AddIcon(UClass* WidgetClass, FVector Offset, FName socket, bool isTransUpdate, UTexture2D* tex, bool isAddScreen);
    
};

