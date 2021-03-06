//
// include/gen/dev_gen.inl.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/algo_gen.inl.h"
//#pragma endinclude
inline dev::Arch::Arch(const algo::strptr&            in_arch
        ,const algo::Comment&           in_comment)
    : arch(in_arch)
    , comment(in_comment)
{
}
inline dev::Arch::Arch() {
}

inline dev::Badline::Badline() {
}

inline dev::Builddir::Builddir() {
}

inline dev::Cfg::Cfg(const algo::strptr&            in_cfg
        ,const algo::Comment&           in_comment)
    : cfg(in_cfg)
    , comment(in_comment)
{
}
inline dev::Cfg::Cfg() {
}

inline dev::Compiler::Compiler(const algo::strptr&            in_compiler
        ,const algo::strptr&            in_dflt
        ,const algo::strptr&            in_ranlib
        ,const algo::strptr&            in_ar
        ,const algo::Comment&           in_comment)
    : compiler(in_compiler)
    , dflt(in_dflt)
    , ranlib(in_ranlib)
    , ar(in_ar)
    , comment(in_comment)
{
}
inline dev::Compiler::Compiler() {
}

inline dev::FieldId::FieldId(i32                            in_value)
    : value(in_value)
{
}
inline dev::FieldId::FieldId(dev_FieldIdEnum arg) { this->value = i32(arg); }
inline dev::FieldId::FieldId() {
    dev::FieldId_Init(*this);
}


// --- dev.FieldId.value.GetEnum
// Get value of field as enum type
inline dev_FieldIdEnum dev::value_GetEnum(const dev::FieldId& parent) {
    return dev_FieldIdEnum(parent.value);
}

// --- dev.FieldId.value.SetEnum
// Set value of field from enum type.
inline void dev::value_SetEnum(dev::FieldId& parent, dev_FieldIdEnum rhs) {
    parent.value = i32(rhs);
}

// --- dev.FieldId.value.Cast
inline dev::FieldId::operator dev_FieldIdEnum () const {
    return dev_FieldIdEnum((*this).value);
}

// --- dev.FieldId..Init
// Set all fields to initial values.
inline void dev::FieldId_Init(dev::FieldId& parent) {
    parent.value = i32(-1);
}
inline dev::Gitfile::Gitfile(const algo::strptr&            in_gitfile)
    : gitfile(in_gitfile)
{
}
inline dev::Gitfile::Gitfile() {
}

inline dev::Gitinfo::Gitinfo(const algo::strptr&            in_gitinfo
        ,const algo::strptr&            in_author
        ,const algo::strptr&            in_cfg
        ,const algo::strptr&            in_compver
        ,const algo::strptr&            in_package
        ,const algo::Comment&           in_comment)
    : gitinfo(in_gitinfo)
    , author(in_author)
    , cfg(in_cfg)
    , compver(in_compver)
    , package(in_package)
    , comment(in_comment)
{
}
inline dev::Gitinfo::Gitinfo() {
}

inline dev::Include::Include() {
    dev::Include_Init(*this);
}


// --- dev.Include..Init
// Set all fields to initial values.
inline void dev::Include_Init(dev::Include& parent) {
    parent.sys = bool(false);
}
inline dev::Linelim::Linelim() {
    dev::Linelim_Init(*this);
}


// --- dev.Linelim..Init
// Set all fields to initial values.
inline void dev::Linelim_Init(dev::Linelim& parent) {
    parent.nlongline = u32(0);
    parent.longestline = u32(0);
    parent.nbadws = u32(0);
    parent.maxws = u32(0);
    parent.nlongfunc = u32(0);
    parent.longestfunc = u32(0);
    parent.nmysteryfunc = u32(0);
}
inline dev::OptType::OptType(const algo::strptr&            in_opt_type
        ,const algo::strptr&            in_sep
        ,const algo::Comment&           in_comment)
    : opt_type(in_opt_type)
    , sep(in_sep)
    , comment(in_comment)
{
}
inline dev::OptType::OptType() {
}

inline dev::Readme::Readme() {
}

inline dev::Scriptfile::Scriptfile() {
}

inline dev::Srcfile::Srcfile() {
}

inline dev::Syscmd::Syscmd(i64                            in_syscmd
        ,const algo::strptr&            in_command
        ,i32                            in_pid
        ,i32                            in_status
        ,i32                            in_nprereq
        ,bool                           in_fail_prereq
        ,bool                           in_completed
        ,i32                            in_maxtime)
    : syscmd(in_syscmd)
    , command(in_command)
    , pid(in_pid)
    , status(in_status)
    , nprereq(in_nprereq)
    , fail_prereq(in_fail_prereq)
    , completed(in_completed)
    , maxtime(in_maxtime)
{
}
inline dev::Syscmd::Syscmd() {
    dev::Syscmd_Init(*this);
}


// --- dev.Syscmd..Init
// Set all fields to initial values.
inline void dev::Syscmd_Init(dev::Syscmd& parent) {
    parent.syscmd = i64(0);
    parent.pid = i32(0);
    parent.status = i32(0);
    parent.nprereq = i32(0);
    parent.fail_prereq = bool(false);
    parent.completed = bool(false);
    parent.maxtime = i32(0);
}
inline dev::Syscmddep::Syscmddep(i64                            in_child
        ,i64                            in_parent)
    : child(in_child)
    , parent(in_parent)
{
}
inline dev::Syscmddep::Syscmddep() {
    dev::Syscmddep_Init(*this);
}


// --- dev.Syscmddep..Init
// Set all fields to initial values.
inline void dev::Syscmddep_Init(dev::Syscmddep& parent) {
    parent.child = i64(0);
    parent.parent = i64(0);
}
inline dev::Syslib::Syslib() {
}

inline dev::Targdep::Targdep(const algo::strptr&            in_targdep
        ,const algo::Comment&           in_comment)
    : targdep(in_targdep)
    , comment(in_comment)
{
}
inline dev::Targdep::Targdep() {
}

inline dev::Target::Target(const algo::strptr&            in_target)
    : target(in_target)
{
}
inline dev::Target::Target() {
}

inline dev::Targinstall::Targinstall() {
}

inline dev::Targsrc::Targsrc(const algo::strptr&            in_targsrc
        ,const algo::Comment&           in_comment)
    : targsrc(in_targsrc)
    , comment(in_comment)
{
}
inline dev::Targsrc::Targsrc() {
}

inline dev::Targsyslib::Targsyslib() {
}

inline dev::ToolOpt::ToolOpt(const algo::strptr&            in_tool_opt
        ,const algo::strptr&            in_opt_type
        ,const algo::strptr&            in_opt
        ,const algo::strptr&            in_target
        ,const algo::strptr&            in_uname
        ,const algo::strptr&            in_compiler
        ,const algo::strptr&            in_cfg
        ,const algo::strptr&            in_arch
        ,const algo::Comment&           in_comment)
    : tool_opt(in_tool_opt)
    , opt_type(in_opt_type)
    , opt(in_opt)
    , target(in_target)
    , uname(in_uname)
    , compiler(in_compiler)
    , cfg(in_cfg)
    , arch(in_arch)
    , comment(in_comment)
{
}
inline dev::ToolOpt::ToolOpt() {
}

inline dev::Uname::Uname(const algo::strptr&            in_uname
        ,const algo::Comment&           in_comment)
    : uname(in_uname)
    , comment(in_comment)
{
}
inline dev::Uname::Uname() {
}


inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Badline &row) {// cfmt:dev.Badline.String
    dev::Badline_Print(const_cast<dev::Badline&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::FieldId &row) {// cfmt:dev.FieldId.String
    dev::FieldId_Print(const_cast<dev::FieldId&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Gitfile &row) {// cfmt:dev.Gitfile.String
    dev::Gitfile_Print(const_cast<dev::Gitfile&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Include &row) {// cfmt:dev.Include.String
    dev::Include_Print(const_cast<dev::Include&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Linelim &row) {// cfmt:dev.Linelim.String
    dev::Linelim_Print(const_cast<dev::Linelim&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Readme &row) {// cfmt:dev.Readme.String
    dev::Readme_Print(const_cast<dev::Readme&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Scriptfile &row) {// cfmt:dev.Scriptfile.String
    dev::Scriptfile_Print(const_cast<dev::Scriptfile&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Srcfile &row) {// cfmt:dev.Srcfile.String
    dev::Srcfile_Print(const_cast<dev::Srcfile&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Syscmd &row) {// cfmt:dev.Syscmd.String
    dev::Syscmd_Print(const_cast<dev::Syscmd&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Syscmddep &row) {// cfmt:dev.Syscmddep.String
    dev::Syscmddep_Print(const_cast<dev::Syscmddep&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Syslib &row) {// cfmt:dev.Syslib.String
    dev::Syslib_Print(const_cast<dev::Syslib&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Targdep &row) {// cfmt:dev.Targdep.String
    dev::Targdep_Print(const_cast<dev::Targdep&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Target &row) {// cfmt:dev.Target.String
    dev::Target_Print(const_cast<dev::Target&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Targinstall &row) {// cfmt:dev.Targinstall.String
    dev::Targinstall_Print(const_cast<dev::Targinstall&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Targsrc &row) {// cfmt:dev.Targsrc.String
    dev::Targsrc_Print(const_cast<dev::Targsrc&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Targsyslib &row) {// cfmt:dev.Targsyslib.String
    dev::Targsyslib_Print(const_cast<dev::Targsyslib&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::ToolOpt &row) {// cfmt:dev.ToolOpt.String
    dev::ToolOpt_Print(const_cast<dev::ToolOpt&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const dev::Uname &row) {// cfmt:dev.Uname.String
    dev::Uname_Print(const_cast<dev::Uname&>(row), str);
    return str;
}
