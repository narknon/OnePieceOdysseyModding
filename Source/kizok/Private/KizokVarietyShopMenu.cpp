#include "KizokVarietyShopMenu.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UScrollBox;
class UKizokTextBlock;
class UMaterialInstance;
class UWidgetAnimation;

void UKizokVarietyShopMenu::SetUnableTradeItemMap(const FKizokShopItemDispData& DispData, bool bReadyToTrade) {
}

void UKizokVarietyShopMenu::SetReceiptState(bool IsReceiptState) {
}

void UKizokVarietyShopMenu::SetPossessItemNum(FName ItemId, int32 Num) {
}

void UKizokVarietyShopMenu::SetLineupFromDataTable(FName dataTableName) {
}

void UKizokVarietyShopMenu::SetIsBuy(bool flag) {
}

void UKizokVarietyShopMenu::SetInputCountEnable(bool bInEnable) {
}

void UKizokVarietyShopMenu::SetFocusInfo() {
}

void UKizokVarietyShopMenu::SetFocusIndex(FName ItemId, UKizokButtonWidget* ButtonWidget) {
}

void UKizokVarietyShopMenu::RegisterScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex) {
}

void UKizokVarietyShopMenu::RefreshSellLineupList() {
}

void UKizokVarietyShopMenu::OnUserScrolled(float InCurrentOffset) {
}




void UKizokVarietyShopMenu::NotifyChangeTab() {
}

bool UKizokVarietyShopMenu::IsTabButtonWidget(const UKizokButtonWidget* InButtonWidget) const {
    return false;
}

bool UKizokVarietyShopMenu::IsCurrentFrameChangeTab() const {
    return false;
}

bool UKizokVarietyShopMenu::HaveEnoughMoneyToBuy(int32 Price, int32 Num) const {
    return false;
}

UMaterialInstance* UKizokVarietyShopMenu::GetTabMaterial(int32 InIndex) const {
    return NULL;
}

FSoftObjectPath UKizokVarietyShopMenu::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

FKizokShopItemDispData UKizokVarietyShopMenu::GetSelectedItemData() {
    return FKizokShopItemDispData{};
}

bool UKizokVarietyShopMenu::GetReceiptState() const {
    return false;
}

FText UKizokVarietyShopMenu::GetMoneyAmount() const {
    return FText::GetEmpty();
}

FSoftObjectPath UKizokVarietyShopMenu::GetItemIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

int32 UKizokVarietyShopMenu::GetItemDataNum() const {
    return 0;
}

FKizokShopItemDispData UKizokVarietyShopMenu::GetItemData(int32 InIndex) const {
    return FKizokShopItemDispData{};
}

bool UKizokVarietyShopMenu::GetIsBuy() const {
    return false;
}

FName UKizokVarietyShopMenu::GetFocusInfo() const {
    return NAME_None;
}

FName UKizokVarietyShopMenu::GetFocusIndex() const {
    return NAME_None;
}

int32 UKizokVarietyShopMenu::GetFocusButtonIndex() const {
    return 0;
}

TArray<FKizokShopItemDispData> UKizokVarietyShopMenu::GetExchangeItemList() {
    return TArray<FKizokShopItemDispData>();
}

FKizokShopItemDispData UKizokVarietyShopMenu::GetExchangeItemData(int32 ButtonId) {
    return FKizokShopItemDispData{};
}

bool UKizokVarietyShopMenu::GetCanTradeFlag() {
    return false;
}

TArray<UKizokButtonWidget*> UKizokVarietyShopMenu::GetButtonWidgetList() const {
    return TArray<UKizokButtonWidget*>();
}

TArray<UKizokButtonWidget*> UKizokVarietyShopMenu::GetButtonWidgetArray(UScrollBox* ScrollBox) {
    return TArray<UKizokButtonWidget*>();
}

TArray<FName> UKizokVarietyShopMenu::CreateUnableTradeItemList() {
    return TArray<FName>();
}

void UKizokVarietyShopMenu::CreateItemListAndScrollBox(UScrollBox* ScrollBox) {
}

void UKizokVarietyShopMenu::CreateItemList() {
}

void UKizokVarietyShopMenu::CreateButtonWidgetList() {
}

FText UKizokVarietyShopMenu::ConvertTotalPriceToFText() {
    return FText::GetEmpty();
}

void UKizokVarietyShopMenu::ClearLineupDataTable() const {
}

void UKizokVarietyShopMenu::ClearExchangeItemNum() {
}

bool UKizokVarietyShopMenu::CheckCanTradeItem(const FKizokShopItemDispData& DispData) {
    return false;
}

void UKizokVarietyShopMenu::CheckCanTradeAndPlayAnimation(UWidgetAnimation* NormalAnim, UWidgetAnimation* NormalOverLimitAnim, UWidgetAnimation* NormalUnableAnim, UWidgetAnimation* FocusAnim, UWidgetAnimation* FocusOverLimitAnim, UWidgetAnimation* FocusUnableAnim, UKizokButtonWidget* ButtonWidget, UWidgetAnimation* NumVisibleAnim, UWidgetAnimation* NumHiddenAnim) {
}

void UKizokVarietyShopMenu::BackToNormalDisplay() {
}

void UKizokVarietyShopMenu::AssignTotalPriceTextBlock(UKizokTextBlock* pTextBlock) {
}

void UKizokVarietyShopMenu::AddMoneyAmount(int32 Price, int32 Num) const {
}

UKizokVarietyShopMenu::UKizokVarietyShopMenu() {
    this->ItemWidgetClass = NULL;
    this->SelectButtonWidget = NULL;
}

