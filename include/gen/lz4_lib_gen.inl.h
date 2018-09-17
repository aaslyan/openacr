//
// include/gen/lz4_lib_gen.inl.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
//#pragma endinclude
inline lz4_lib::FieldId::FieldId(i32                            in_value)
    : value(in_value)
{
}
inline lz4_lib::FieldId::FieldId(lz4_lib_FieldIdEnum arg) { this->value = i32(arg); }
inline lz4_lib::FieldId::FieldId() {
    lz4_lib::FieldId_Init(*this);
}


// --- lz4_lib.FieldId.value.GetEnum
// Get value of field as enum type
inline lz4_lib_FieldIdEnum lz4_lib::value_GetEnum(const lz4_lib::FieldId& parent) {
    return lz4_lib_FieldIdEnum(parent.value);
}

// --- lz4_lib.FieldId.value.SetEnum
// Set value of field from enum type.
inline void lz4_lib::value_SetEnum(lz4_lib::FieldId& parent, lz4_lib_FieldIdEnum rhs) {
    parent.value = i32(rhs);
}

// --- lz4_lib.FieldId.value.Cast
inline lz4_lib::FieldId::operator lz4_lib_FieldIdEnum () const {
    return lz4_lib_FieldIdEnum((*this).value);
}

// --- lz4_lib.FieldId..Init
// Set all fields to initial values.
inline void lz4_lib::FieldId_Init(lz4_lib::FieldId& parent) {
    parent.value = i32(-1);
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const lz4_lib::FieldId &row) {// cfmt:lz4_lib.FieldId.String
    lz4_lib::FieldId_Print(const_cast<lz4_lib::FieldId&>(row), str);
    return str;
}