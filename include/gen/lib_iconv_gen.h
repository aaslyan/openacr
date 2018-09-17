//
// include/gen/lib_iconv_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include <iconv.h>
//#pragma endinclude

// --- lib_iconv_FieldIdEnum

enum lib_iconv_FieldIdEnum {        // lib_iconv.FieldId.value
     lib_iconv_FieldId_value   = 0
};

enum { lib_iconv_FieldIdEnum_N = 1 };

namespace lib_iconv { struct trace; }
namespace lib_iconv { struct FDb; }
namespace lib_iconv { struct FieldId; }
namespace lib_iconv { struct Icd; }
namespace lib_iconv {
}//pkey typedefs
namespace lib_iconv {
extern FDb _db;

// --- lib_iconv.trace
#pragma pack(push,1)
struct trace { // lib_iconv.trace
    trace();
};
#pragma pack(pop)

// print string representation of lib_iconv::trace to string LHS, no header -- cprint:lib_iconv.trace.String
void                 trace_Print(lib_iconv::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_iconv.FDb
// create: lib_iconv.FDb._db (Global)
struct FDb { // lib_iconv.FDb
    lib_iconv::trace   trace;   //
};

void                 StaticCheck();
// Parse strptr into known type and add to database.
// Return value is true unless an error occurs. If return value is false, algo_lib::_db.errtext has error text
bool                 InsertStrptrMaybe(algo::strptr str);
// Load all finputs from given directory.
bool                 LoadTuplesMaybe(algo::strptr root) __attribute__((nothrow));
// Load specified ssimfile.
bool                 LoadSsimfileMaybe(algo::strptr fname) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Call Unref or Delete to cleanup partially inserted row.
bool                 _db_XrefMaybe();

// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Call Unref or Delete to cleanup partially inserted row.
bool                 icd_XrefMaybe(lib_iconv::Icd &row);

// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- lib_iconv.FieldId
#pragma pack(push,1)
struct FieldId { // lib_iconv.FieldId: Field read helper
    i32   value;   //   -1
    inline operator lib_iconv_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(lib_iconv_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
lib_iconv_FieldIdEnum value_GetEnum(const lib_iconv::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(lib_iconv::FieldId& parent, lib_iconv_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const lib_iconv::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const lib_iconv::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(lib_iconv::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(lib_iconv::FieldId& parent, algo::strptr rhs, lib_iconv_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(lib_iconv::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of lib_iconv::FieldId from an ascii string.
// The format of the string is the format of the lib_iconv::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(lib_iconv::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(lib_iconv::FieldId& parent);
// print string representation of lib_iconv::FieldId to string LHS, no header -- cprint:lib_iconv.FieldId.String
void                 FieldId_Print(lib_iconv::FieldId & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_iconv.Icd
// create: lib_iconv.FDb.icd (Cppstack)
struct Icd { // lib_iconv.Icd
    iconv_t   icd;   //   ((iconv_t)-1)  iconv descriptor
    Icd();
    ~Icd();
private:
    // user-defined fcleanup on lib_iconv.Icd.icd prevents copy
    Icd(const Icd&){ /*disallow copy constructor */}
    void operator =(const Icd&){ /*disallow direct assignment */}
};

// User-defined cleanup function invoked for field icd of lib_iconv::Icd
void                 icd_Cleanup(lib_iconv::Icd& icd) __attribute__((nothrow));

// Set all fields to initial values.
void                 Icd_Init(lib_iconv::Icd& icd);
void                 Icd_Uninit(lib_iconv::Icd& icd) __attribute__((nothrow));
// print string representation of lib_iconv::Icd to string LHS, no header -- cprint:lib_iconv.Icd.String
void                 Icd_Print(lib_iconv::Icd & row, algo::cstring &str) __attribute__((nothrow));
} // end namespace lib_iconv
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const lib_iconv::trace &row);// cfmt:lib_iconv.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const lib_iconv::FieldId &row);// cfmt:lib_iconv.FieldId.String
inline algo::cstring &operator <<(algo::cstring &str, const lib_iconv::Icd &row);// cfmt:lib_iconv.Icd.String
}