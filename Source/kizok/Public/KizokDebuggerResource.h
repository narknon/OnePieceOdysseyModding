#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "KizokDebuggerResource.generated.h"

class UKizokDebuggerMessageBlock;
class UKizokDebuggerMarkerImage;
class UKizokDebuggerMainWidget;
class UKizokDebuggerCheckBox;
class UKizokDebuggerTextInput;
class UKizokSubMenuWidget;
class UKizokWidgetDebuggerTextBlock;
class UKizokWidgetDebuggerSpinButton;
class UKizokWidgetDebuggerMenuButton;
class UKizokWidgetDebuggerExecButton;

UCLASS(Blueprintable)
class KIZOK_API UKizokDebuggerResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerMainWidget> MainWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokSubMenuWidget> SubMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerExecButton> ExecButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerMenuButton> MenuButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerSpinButton> SpinButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerSpinButton> UpSpinButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerSpinButton> DownSpinButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerMarkerImage> MarkerImageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerTextBlock> TextBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerTextBlock> ButtonTextBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerTextBlock> SpinTextBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerTextBlock> CheckBoxTextBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokWidgetDebuggerTextBlock> StringTextBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerCheckBox> CheckBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerTextInput> TextInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerTextInput> StringTextInputClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKizokDebuggerMessageBlock> MessageBlockClass;
    
    UKizokDebuggerResource();
};

