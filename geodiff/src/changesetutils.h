/*
 GEODIFF - MIT License
 Copyright (C) 2020 Martin Dobias
*/

#ifndef CHANGESETUTILS_H
#define CHANGESETUTILS_H

class ChangesetReader;
class ChangesetWriter;

#include "geodiff.h"
#include <string>

struct ChangesetTable;
struct TableSchema;

ChangesetTable schemaToChangesetTable( const std::string &tableName, const TableSchema &tbl );

GEODIFF_EXPORT void invertChangeset( ChangesetReader &reader, ChangesetWriter &writer );

GEODIFF_EXPORT std::string changesetToJSON( ChangesetReader &reader );

GEODIFF_EXPORT std::string changesetToJSONSummary( ChangesetReader &reader );

#endif // CHANGESETUTILS_H
