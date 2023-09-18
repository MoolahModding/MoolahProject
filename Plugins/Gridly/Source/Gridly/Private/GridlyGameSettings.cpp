#include "GridlyGameSettings.h"

UGridlyGameSettings::UGridlyGameSettings() {
    this->ImportApiKey = TEXT("gk_1seXfcWBAzZy77");
    this->ImportFromViewIds.AddDefaulted(1);
    this->ImportMaxRecordsPerRequest = 1000;
    this->ExportMaxRecordsPerRequest = 1000;
    this->bUseCombinedNamespaceId = false;
    this->bAlsoExportNamespaceColumn = false;
    this->NamespaceColumnId = TEXT("msgctxt");
    this->SourceLanguageColumnIdPrefix = TEXT("src_");
    this->TargetLanguageColumnIdPrefix = TEXT("tg_");
    this->bUseCustomCultureMapping = true;
    this->bExportContext = true;
    this->ContextColumnId = TEXT("src_context");
    this->bExportMetadata = true;
    this->bExportTextTypeAsPath = true;
}


