#include "KizokEachRegionMessageTable.h"

class UDataTable;

void UKizokEachRegionMessageTable::UnloadMessageTable() {
}

void UKizokEachRegionMessageTable::LoadMessageTable(FName InRegionId) {
}

UDataTable* UKizokEachRegionMessageTable::GetDataTable(EKizokMessageTableType InTableType) const {
    return NULL;
}

UKizokEachRegionMessageTable::UKizokEachRegionMessageTable() {
    this->DataTableList[0] = NULL;
    this->DataTableList[1] = NULL;
    this->DataTableList[2] = NULL;
    this->DataTableList[3] = NULL;
    this->DataTableList[4] = NULL;
    this->DataTableList[5] = NULL;
    this->DataTableList[6] = NULL;
    this->DataTableList[7] = NULL;
}

