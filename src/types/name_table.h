/*
 *  Copyright (c) 2021 Thakee Nathees
 *  Licensed under: MIT License
 */

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

// Symbol table maps the names to it's member indecies in the VarBuffer.
#include "gen/string_buffer.h"

// TODO: Change this to use Map.
typedef StringBuffer NameTable;

// Initialize the symbol table.
void nameTableInit(NameTable* self);

// Remove the elements of the symbol table.
void nameTableClear(NameTable* self, MSVM* vm);

// Add a name to the name table and return the index of the name in the table.
// Parameter [ptr] will updated with the string entry if it's not NULL.
int nameTableAdd(NameTable* self, MSVM* vm, const char* name, size_t length,
	               String** ptr);

// Return name at index.
const char* nameTableGet(NameTable* self, int index);

// Find and return the index of the name. If not found returns -1.
int nameTableFind(NameTable* self, const char* name, size_t length);

#endif // SYMBOL_TABLE_H
