#include "KizokSaveloadSlotDisplayData.h"

FKizokSaveloadSlotDisplayData::FKizokSaveloadSlotDisplayData() {
    this->DataType = EKizokSaveloadDataType::AutoSave;
    this->SlotNumber = 0;
    this->ChapterNumber = 0;
    this->MainLevel = 0;
    this->bIsDemoData = false;
}

