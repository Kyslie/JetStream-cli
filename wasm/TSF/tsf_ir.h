/* ./tests/suites/toyir/tsf_ir.h -- generated by tsf_define from ./tests/suites/toyir/tsf_ir.t */

#include "tsf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_VariableDecl
#define TSF_DEFINE_STRUCT_DECL_VariableDecl
struct VariableDecl_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction
#define TSF_DEFINE_STRUCT_DECL_Instruction
struct Instruction_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_DebugData
#define TSF_DEFINE_STRUCT_DECL_DebugData
struct DebugData_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Procedure
#define TSF_DEFINE_STRUCT_DECL_Procedure
struct Procedure_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_ProcedureDecl
#define TSF_DEFINE_STRUCT_DECL_ProcedureDecl
struct ProcedureDecl_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_ProcedureDefn
#define TSF_DEFINE_STRUCT_DECL_ProcedureDefn
struct ProcedureDefn_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_ProgramElement
#define TSF_DEFINE_STRUCT_DECL_ProgramElement
struct ProgramElement_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Program
#define TSF_DEFINE_STRUCT_DECL_Program
struct Program_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__mov
#define TSF_DEFINE_STRUCT_DECL_Instruction__mov
struct Instruction__mov_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__add
#define TSF_DEFINE_STRUCT_DECL_Instruction__add
struct Instruction__add_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__alloc
#define TSF_DEFINE_STRUCT_DECL_Instruction__alloc
struct Instruction__alloc_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__ret
#define TSF_DEFINE_STRUCT_DECL_Instruction__ret
struct Instruction__ret_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__jump
#define TSF_DEFINE_STRUCT_DECL_Instruction__jump
struct Instruction__jump_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__call
#define TSF_DEFINE_STRUCT_DECL_Instruction__call
struct Instruction__call_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_integer__array
#define TSF_DEFINE_STRUCT_DECL_integer__array
struct integer__array_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__branchZero
#define TSF_DEFINE_STRUCT_DECL_Instruction__branchZero
struct Instruction__branchZero_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_VariableDecl__array
#define TSF_DEFINE_STRUCT_DECL_VariableDecl__array
struct VariableDecl__array_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_Instruction__array
#define TSF_DEFINE_STRUCT_DECL_Instruction__array
struct Instruction__array_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_DebugData__array
#define TSF_DEFINE_STRUCT_DECL_DebugData__array
struct DebugData__array_s;
#endif

#ifndef TSF_DEFINE_STRUCT_DECL_ProgramElement__array
#define TSF_DEFINE_STRUCT_DECL_ProgramElement__array
struct ProgramElement__array_s;
#endif

#ifndef TSF_DEFINE_TYPEDEF_VariableDecl
#define TSF_DEFINE_TYPEDEF_VariableDecl
typedef struct VariableDecl_s VariableDecl_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction
#define TSF_DEFINE_TYPEDEF_Instruction
typedef struct Instruction_s Instruction_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_DebugData
#define TSF_DEFINE_TYPEDEF_DebugData
typedef struct DebugData_s DebugData_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Procedure
#define TSF_DEFINE_TYPEDEF_Procedure
typedef struct Procedure_s Procedure_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProcedureDecl
#define TSF_DEFINE_TYPEDEF_ProcedureDecl
typedef struct ProcedureDecl_s ProcedureDecl_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProcedureDefn
#define TSF_DEFINE_TYPEDEF_ProcedureDefn
typedef struct ProcedureDefn_s ProcedureDefn_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProgramElement
#define TSF_DEFINE_TYPEDEF_ProgramElement
typedef struct ProgramElement_s ProgramElement_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Program
#define TSF_DEFINE_TYPEDEF_Program
typedef struct Program_s Program_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__mov
#define TSF_DEFINE_TYPEDEF_Instruction__mov
typedef struct Instruction__mov_s Instruction__mov_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__add
#define TSF_DEFINE_TYPEDEF_Instruction__add
typedef struct Instruction__add_s Instruction__add_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__alloc
#define TSF_DEFINE_TYPEDEF_Instruction__alloc
typedef struct Instruction__alloc_s Instruction__alloc_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__ret
#define TSF_DEFINE_TYPEDEF_Instruction__ret
typedef struct Instruction__ret_s Instruction__ret_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__jump
#define TSF_DEFINE_TYPEDEF_Instruction__jump
typedef struct Instruction__jump_s Instruction__jump_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__call
#define TSF_DEFINE_TYPEDEF_Instruction__call
typedef struct Instruction__call_s Instruction__call_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_integer__array
#define TSF_DEFINE_TYPEDEF_integer__array
typedef struct integer__array_s integer__array_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__branchZero
#define TSF_DEFINE_TYPEDEF_Instruction__branchZero
typedef struct Instruction__branchZero_s Instruction__branchZero_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_VariableDecl__array
#define TSF_DEFINE_TYPEDEF_VariableDecl__array
typedef struct VariableDecl__array_s VariableDecl__array_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__array
#define TSF_DEFINE_TYPEDEF_Instruction__array
typedef struct Instruction__array_s Instruction__array_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_DebugData__array
#define TSF_DEFINE_TYPEDEF_DebugData__array
typedef struct DebugData__array_s DebugData__array_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProgramElement__array
#define TSF_DEFINE_TYPEDEF_ProgramElement__array
typedef struct ProgramElement__array_s ProgramElement__array_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Operand
#define TSF_DEFINE_TYPEDEF_Operand
typedef tsf_integer_t Operand_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Type
#define TSF_DEFINE_TYPEDEF_Type
typedef char* Type_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_CodeOffset
#define TSF_DEFINE_TYPEDEF_CodeOffset
typedef tsf_integer_t CodeOffset_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Instruction__call__args
#define TSF_DEFINE_TYPEDEF_Instruction__call__args
typedef integer__array_t Instruction__call__args_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProcedureDefn__variables
#define TSF_DEFINE_TYPEDEF_ProcedureDefn__variables
typedef VariableDecl__array_t ProcedureDefn__variables_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProcedureDefn__code
#define TSF_DEFINE_TYPEDEF_ProcedureDefn__code
typedef Instruction__array_t ProcedureDefn__code_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_ProcedureDefn__debug
#define TSF_DEFINE_TYPEDEF_ProcedureDefn__debug
typedef DebugData__array_t ProcedureDefn__debug_t;
#endif

#ifndef TSF_DEFINE_TYPEDEF_Program__globals
#define TSF_DEFINE_TYPEDEF_Program__globals
typedef ProgramElement__array_t Program__globals_t;
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_VariableDecl
#define TSF_DEFINE_STRUCT_DEF_VariableDecl
struct VariableDecl_s {
    Type_t type;
    char* name;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__mov
#define TSF_DEFINE_STRUCT_DEF_Instruction__mov
struct Instruction__mov_s {
    Operand_t dest;
    Operand_t src;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__add
#define TSF_DEFINE_STRUCT_DEF_Instruction__add
struct Instruction__add_s {
    Operand_t dest;
    Operand_t src;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__alloc
#define TSF_DEFINE_STRUCT_DEF_Instruction__alloc
struct Instruction__alloc_s {
    Type_t type;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__ret
#define TSF_DEFINE_STRUCT_DEF_Instruction__ret
struct Instruction__ret_s {
    Operand_t src;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__jump
#define TSF_DEFINE_STRUCT_DEF_Instruction__jump
struct Instruction__jump_s {
    CodeOffset_t target;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_integer__array
#define TSF_DEFINE_STRUCT_DEF_integer__array
struct integer__array_s {
    tsf_integer_t *data;
    uint32_t len;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__call
#define TSF_DEFINE_STRUCT_DEF_Instruction__call
struct Instruction__call_s {
    Operand_t dest;
    Operand_t callee;
    Instruction__call__args_t args;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__branchZero
#define TSF_DEFINE_STRUCT_DEF_Instruction__branchZero
struct Instruction__branchZero_s {
    Operand_t src;
    CodeOffset_t target;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction
#define TSF_DEFINE_STRUCT_DEF_Instruction
struct Instruction_s {
    tsf_choice_t value;
    union {
        Instruction__mov_t mov;
        Instruction__add_t add;
        Instruction__alloc_t alloc;
        Instruction__ret_t ret;
        Instruction__jump_t jump;
        Instruction__call_t call;
        Instruction__branchZero_t branchZero;
    } u;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_DebugData
#define TSF_DEFINE_STRUCT_DEF_DebugData
struct DebugData_s {
    tsf_integer_t startOffset;
    tsf_integer_t spanSize;
    char* data;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Procedure
#define TSF_DEFINE_STRUCT_DEF_Procedure
struct Procedure_s {
    char* name;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_ProcedureDecl
#define TSF_DEFINE_STRUCT_DEF_ProcedureDecl
struct ProcedureDecl_s {
    char* name;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_VariableDecl__array
#define TSF_DEFINE_STRUCT_DEF_VariableDecl__array
struct VariableDecl__array_s {
    VariableDecl_t *data;
    uint32_t len;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Instruction__array
#define TSF_DEFINE_STRUCT_DEF_Instruction__array
struct Instruction__array_s {
    Instruction_t *data;
    uint32_t len;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_DebugData__array
#define TSF_DEFINE_STRUCT_DEF_DebugData__array
struct DebugData__array_s {
    DebugData_t *data;
    uint32_t len;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_ProcedureDefn
#define TSF_DEFINE_STRUCT_DEF_ProcedureDefn
struct ProcedureDefn_s {
    char* name;
    ProcedureDefn__variables_t variables;
    ProcedureDefn__code_t code;
    ProcedureDefn__debug_t debug;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_ProgramElement
#define TSF_DEFINE_STRUCT_DEF_ProgramElement
struct ProgramElement_s {
    tsf_choice_t value;
    union {
        ProcedureDecl_t procedureDecl;
        ProcedureDefn_t procedureDefn;
    } u;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_ProgramElement__array
#define TSF_DEFINE_STRUCT_DEF_ProgramElement__array
struct ProgramElement__array_s {
    ProgramElement_t *data;
    uint32_t len;
};
#endif

#ifndef TSF_DEFINE_STRUCT_DEF_Program
#define TSF_DEFINE_STRUCT_DEF_Program
struct Program_s {
    Program__globals_t globals;
};
#endif

#ifndef TSF_DEFINE_CHOICE_DEFS_Instruction
#define TSF_DEFINE_CHOICE_DEFS_Instruction
#define Instruction__nop 0
#define Instruction__mov 1
#define Instruction__add 2
#define Instruction__alloc 3
#define Instruction__ret 4
#define Instruction__jump 5
#define Instruction__call 6
#define Instruction__branchZero 7
static TSF_inline const char *Instruction__to_str(tsf_choice_t value) {
    switch (value) {
    case 0: return "nop";
    case 1: return "mov";
    case 2: return "add";
    case 3: return "alloc";
    case 4: return "ret";
    case 5: return "jump";
    case 6: return "call";
    case 7: return "branchZero";
    case UINT32_MAX: return "<unknown>";
    default: abort();
    }
}
#endif

#ifndef TSF_DEFINE_CHOICE_DEFS_ProgramElement
#define TSF_DEFINE_CHOICE_DEFS_ProgramElement
#define ProgramElement__procedureDecl 0
#define ProgramElement__procedureDefn 1
static TSF_inline const char *ProgramElement__to_str(tsf_choice_t value) {
    switch (value) {
    case 0: return "procedureDecl";
    case 1: return "procedureDefn";
    case UINT32_MAX: return "<unknown>";
    default: abort();
    }
}
#endif

#ifndef TSF_DEFINE_FUNCS_Operand
#define TSF_DEFINE_FUNCS_Operand
tsf_type_t *Operand__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Operand__destruct(Operand_t *data) { }
tsf_genrtr_t *Operand__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *Operand__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__Operand(tsf_type_t *type) { return tsf_type_instanceof(type, Operand__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__Operand(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, Operand__get_type()); }
static TSF_inline tsf_buffer_t *Operand__generate(void *data) { return tsf_generator_generate(Operand__get_generator(), data); }
static TSF_inline tsf_buffer_t *Operand__generate_in(void *data, void *region) { return tsf_generator_generate_in(Operand__get_generator(), data, region); }
static TSF_inline Operand_t *Operand__parse(tsf_buffer_t *buf) { return (Operand_t*)tsf_parser_parse(Operand__get_parser(), buf); }
static TSF_inline Operand_t *Operand__parse_in(tsf_buffer_t *buf, void *region) { return (Operand_t*)tsf_parser_parse_in(Operand__get_parser(), buf, region); }
static TSF_inline tsf_bool_t Operand__parse_into(tsf_buffer_t *buf, Operand_t *data, void *region) { return tsf_parser_parse_into(Operand__get_parser(), buf, data, region); }
tsf_bool_t Operand__write(tsf_stream_file_output_t *out, Operand_t *data) TSF_ATTRIBUTE_NOINLINE;
Operand_t *Operand__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t Operand__read_into(tsf_stream_file_input_t *inp, Operand_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_Type
#define TSF_DEFINE_FUNCS_Type
tsf_type_t *Type__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Type__destruct(Type_t *data);
tsf_genrtr_t *Type__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *Type__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__Type(tsf_type_t *type) { return tsf_type_instanceof(type, Type__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__Type(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, Type__get_type()); }
static TSF_inline tsf_buffer_t *Type__generate(void *data) { return tsf_generator_generate(Type__get_generator(), data); }
static TSF_inline tsf_buffer_t *Type__generate_in(void *data, void *region) { return tsf_generator_generate_in(Type__get_generator(), data, region); }
static TSF_inline Type_t *Type__parse(tsf_buffer_t *buf) { return (Type_t*)tsf_parser_parse(Type__get_parser(), buf); }
static TSF_inline Type_t *Type__parse_in(tsf_buffer_t *buf, void *region) { return (Type_t*)tsf_parser_parse_in(Type__get_parser(), buf, region); }
static TSF_inline tsf_bool_t Type__parse_into(tsf_buffer_t *buf, Type_t *data, void *region) { return tsf_parser_parse_into(Type__get_parser(), buf, data, region); }
tsf_bool_t Type__write(tsf_stream_file_output_t *out, Type_t *data) TSF_ATTRIBUTE_NOINLINE;
Type_t *Type__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t Type__read_into(tsf_stream_file_input_t *inp, Type_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_CodeOffset
#define TSF_DEFINE_FUNCS_CodeOffset
tsf_type_t *CodeOffset__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void CodeOffset__destruct(CodeOffset_t *data) { }
tsf_genrtr_t *CodeOffset__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *CodeOffset__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__CodeOffset(tsf_type_t *type) { return tsf_type_instanceof(type, CodeOffset__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__CodeOffset(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, CodeOffset__get_type()); }
static TSF_inline tsf_buffer_t *CodeOffset__generate(void *data) { return tsf_generator_generate(CodeOffset__get_generator(), data); }
static TSF_inline tsf_buffer_t *CodeOffset__generate_in(void *data, void *region) { return tsf_generator_generate_in(CodeOffset__get_generator(), data, region); }
static TSF_inline CodeOffset_t *CodeOffset__parse(tsf_buffer_t *buf) { return (CodeOffset_t*)tsf_parser_parse(CodeOffset__get_parser(), buf); }
static TSF_inline CodeOffset_t *CodeOffset__parse_in(tsf_buffer_t *buf, void *region) { return (CodeOffset_t*)tsf_parser_parse_in(CodeOffset__get_parser(), buf, region); }
static TSF_inline tsf_bool_t CodeOffset__parse_into(tsf_buffer_t *buf, CodeOffset_t *data, void *region) { return tsf_parser_parse_into(CodeOffset__get_parser(), buf, data, region); }
tsf_bool_t CodeOffset__write(tsf_stream_file_output_t *out, CodeOffset_t *data) TSF_ATTRIBUTE_NOINLINE;
CodeOffset_t *CodeOffset__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t CodeOffset__read_into(tsf_stream_file_input_t *inp, CodeOffset_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_VariableDecl
#define TSF_DEFINE_FUNCS_VariableDecl
tsf_type_t *VariableDecl__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void VariableDecl__destruct(VariableDecl_t *data);
tsf_genrtr_t *VariableDecl__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *VariableDecl__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__VariableDecl(tsf_type_t *type) { return tsf_type_instanceof(type, VariableDecl__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__VariableDecl(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, VariableDecl__get_type()); }
static TSF_inline tsf_buffer_t *VariableDecl__generate(void *data) { return tsf_generator_generate(VariableDecl__get_generator(), data); }
static TSF_inline tsf_buffer_t *VariableDecl__generate_in(void *data, void *region) { return tsf_generator_generate_in(VariableDecl__get_generator(), data, region); }
static TSF_inline VariableDecl_t *VariableDecl__parse(tsf_buffer_t *buf) { return (VariableDecl_t*)tsf_parser_parse(VariableDecl__get_parser(), buf); }
static TSF_inline VariableDecl_t *VariableDecl__parse_in(tsf_buffer_t *buf, void *region) { return (VariableDecl_t*)tsf_parser_parse_in(VariableDecl__get_parser(), buf, region); }
static TSF_inline tsf_bool_t VariableDecl__parse_into(tsf_buffer_t *buf, VariableDecl_t *data, void *region) { return tsf_parser_parse_into(VariableDecl__get_parser(), buf, data, region); }
tsf_bool_t VariableDecl__write(tsf_stream_file_output_t *out, VariableDecl_t *data) TSF_ATTRIBUTE_NOINLINE;
VariableDecl_t *VariableDecl__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t VariableDecl__read_into(tsf_stream_file_input_t *inp, VariableDecl_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction
#define TSF_DEFINE_FUNCS_Instruction
tsf_type_t *Instruction__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Instruction__destruct(Instruction_t *data);
tsf_genrtr_t *Instruction__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *Instruction__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__Instruction(tsf_type_t *type) { return tsf_type_instanceof(type, Instruction__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__Instruction(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, Instruction__get_type()); }
static TSF_inline tsf_buffer_t *Instruction__generate(void *data) { return tsf_generator_generate(Instruction__get_generator(), data); }
static TSF_inline tsf_buffer_t *Instruction__generate_in(void *data, void *region) { return tsf_generator_generate_in(Instruction__get_generator(), data, region); }
static TSF_inline Instruction_t *Instruction__parse(tsf_buffer_t *buf) { return (Instruction_t*)tsf_parser_parse(Instruction__get_parser(), buf); }
static TSF_inline Instruction_t *Instruction__parse_in(tsf_buffer_t *buf, void *region) { return (Instruction_t*)tsf_parser_parse_in(Instruction__get_parser(), buf, region); }
static TSF_inline tsf_bool_t Instruction__parse_into(tsf_buffer_t *buf, Instruction_t *data, void *region) { return tsf_parser_parse_into(Instruction__get_parser(), buf, data, region); }
tsf_bool_t Instruction__write(tsf_stream_file_output_t *out, Instruction_t *data) TSF_ATTRIBUTE_NOINLINE;
Instruction_t *Instruction__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t Instruction__read_into(tsf_stream_file_input_t *inp, Instruction_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_DebugData
#define TSF_DEFINE_FUNCS_DebugData
tsf_type_t *DebugData__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void DebugData__destruct(DebugData_t *data);
tsf_genrtr_t *DebugData__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *DebugData__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__DebugData(tsf_type_t *type) { return tsf_type_instanceof(type, DebugData__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__DebugData(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, DebugData__get_type()); }
static TSF_inline tsf_buffer_t *DebugData__generate(void *data) { return tsf_generator_generate(DebugData__get_generator(), data); }
static TSF_inline tsf_buffer_t *DebugData__generate_in(void *data, void *region) { return tsf_generator_generate_in(DebugData__get_generator(), data, region); }
static TSF_inline DebugData_t *DebugData__parse(tsf_buffer_t *buf) { return (DebugData_t*)tsf_parser_parse(DebugData__get_parser(), buf); }
static TSF_inline DebugData_t *DebugData__parse_in(tsf_buffer_t *buf, void *region) { return (DebugData_t*)tsf_parser_parse_in(DebugData__get_parser(), buf, region); }
static TSF_inline tsf_bool_t DebugData__parse_into(tsf_buffer_t *buf, DebugData_t *data, void *region) { return tsf_parser_parse_into(DebugData__get_parser(), buf, data, region); }
tsf_bool_t DebugData__write(tsf_stream_file_output_t *out, DebugData_t *data) TSF_ATTRIBUTE_NOINLINE;
DebugData_t *DebugData__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t DebugData__read_into(tsf_stream_file_input_t *inp, DebugData_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_Procedure
#define TSF_DEFINE_FUNCS_Procedure
tsf_type_t *Procedure__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Procedure__destruct(Procedure_t *data);
tsf_genrtr_t *Procedure__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *Procedure__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__Procedure(tsf_type_t *type) { return tsf_type_instanceof(type, Procedure__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__Procedure(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, Procedure__get_type()); }
static TSF_inline tsf_buffer_t *Procedure__generate(void *data) { return tsf_generator_generate(Procedure__get_generator(), data); }
static TSF_inline tsf_buffer_t *Procedure__generate_in(void *data, void *region) { return tsf_generator_generate_in(Procedure__get_generator(), data, region); }
static TSF_inline Procedure_t *Procedure__parse(tsf_buffer_t *buf) { return (Procedure_t*)tsf_parser_parse(Procedure__get_parser(), buf); }
static TSF_inline Procedure_t *Procedure__parse_in(tsf_buffer_t *buf, void *region) { return (Procedure_t*)tsf_parser_parse_in(Procedure__get_parser(), buf, region); }
static TSF_inline tsf_bool_t Procedure__parse_into(tsf_buffer_t *buf, Procedure_t *data, void *region) { return tsf_parser_parse_into(Procedure__get_parser(), buf, data, region); }
tsf_bool_t Procedure__write(tsf_stream_file_output_t *out, Procedure_t *data) TSF_ATTRIBUTE_NOINLINE;
Procedure_t *Procedure__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t Procedure__read_into(tsf_stream_file_input_t *inp, Procedure_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_ProcedureDecl
#define TSF_DEFINE_FUNCS_ProcedureDecl
tsf_type_t *ProcedureDecl__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProcedureDecl__destruct(ProcedureDecl_t *data);
tsf_genrtr_t *ProcedureDecl__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *ProcedureDecl__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__ProcedureDecl(tsf_type_t *type) { return tsf_type_instanceof(type, ProcedureDecl__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__ProcedureDecl(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, ProcedureDecl__get_type()); }
static TSF_inline tsf_buffer_t *ProcedureDecl__generate(void *data) { return tsf_generator_generate(ProcedureDecl__get_generator(), data); }
static TSF_inline tsf_buffer_t *ProcedureDecl__generate_in(void *data, void *region) { return tsf_generator_generate_in(ProcedureDecl__get_generator(), data, region); }
static TSF_inline ProcedureDecl_t *ProcedureDecl__parse(tsf_buffer_t *buf) { return (ProcedureDecl_t*)tsf_parser_parse(ProcedureDecl__get_parser(), buf); }
static TSF_inline ProcedureDecl_t *ProcedureDecl__parse_in(tsf_buffer_t *buf, void *region) { return (ProcedureDecl_t*)tsf_parser_parse_in(ProcedureDecl__get_parser(), buf, region); }
static TSF_inline tsf_bool_t ProcedureDecl__parse_into(tsf_buffer_t *buf, ProcedureDecl_t *data, void *region) { return tsf_parser_parse_into(ProcedureDecl__get_parser(), buf, data, region); }
tsf_bool_t ProcedureDecl__write(tsf_stream_file_output_t *out, ProcedureDecl_t *data) TSF_ATTRIBUTE_NOINLINE;
ProcedureDecl_t *ProcedureDecl__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t ProcedureDecl__read_into(tsf_stream_file_input_t *inp, ProcedureDecl_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_ProcedureDefn
#define TSF_DEFINE_FUNCS_ProcedureDefn
tsf_type_t *ProcedureDefn__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProcedureDefn__destruct(ProcedureDefn_t *data);
tsf_genrtr_t *ProcedureDefn__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *ProcedureDefn__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__ProcedureDefn(tsf_type_t *type) { return tsf_type_instanceof(type, ProcedureDefn__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__ProcedureDefn(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, ProcedureDefn__get_type()); }
static TSF_inline tsf_buffer_t *ProcedureDefn__generate(void *data) { return tsf_generator_generate(ProcedureDefn__get_generator(), data); }
static TSF_inline tsf_buffer_t *ProcedureDefn__generate_in(void *data, void *region) { return tsf_generator_generate_in(ProcedureDefn__get_generator(), data, region); }
static TSF_inline ProcedureDefn_t *ProcedureDefn__parse(tsf_buffer_t *buf) { return (ProcedureDefn_t*)tsf_parser_parse(ProcedureDefn__get_parser(), buf); }
static TSF_inline ProcedureDefn_t *ProcedureDefn__parse_in(tsf_buffer_t *buf, void *region) { return (ProcedureDefn_t*)tsf_parser_parse_in(ProcedureDefn__get_parser(), buf, region); }
static TSF_inline tsf_bool_t ProcedureDefn__parse_into(tsf_buffer_t *buf, ProcedureDefn_t *data, void *region) { return tsf_parser_parse_into(ProcedureDefn__get_parser(), buf, data, region); }
tsf_bool_t ProcedureDefn__write(tsf_stream_file_output_t *out, ProcedureDefn_t *data) TSF_ATTRIBUTE_NOINLINE;
ProcedureDefn_t *ProcedureDefn__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t ProcedureDefn__read_into(tsf_stream_file_input_t *inp, ProcedureDefn_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_ProgramElement
#define TSF_DEFINE_FUNCS_ProgramElement
tsf_type_t *ProgramElement__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProgramElement__destruct(ProgramElement_t *data);
tsf_genrtr_t *ProgramElement__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *ProgramElement__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__ProgramElement(tsf_type_t *type) { return tsf_type_instanceof(type, ProgramElement__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__ProgramElement(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, ProgramElement__get_type()); }
static TSF_inline tsf_buffer_t *ProgramElement__generate(void *data) { return tsf_generator_generate(ProgramElement__get_generator(), data); }
static TSF_inline tsf_buffer_t *ProgramElement__generate_in(void *data, void *region) { return tsf_generator_generate_in(ProgramElement__get_generator(), data, region); }
static TSF_inline ProgramElement_t *ProgramElement__parse(tsf_buffer_t *buf) { return (ProgramElement_t*)tsf_parser_parse(ProgramElement__get_parser(), buf); }
static TSF_inline ProgramElement_t *ProgramElement__parse_in(tsf_buffer_t *buf, void *region) { return (ProgramElement_t*)tsf_parser_parse_in(ProgramElement__get_parser(), buf, region); }
static TSF_inline tsf_bool_t ProgramElement__parse_into(tsf_buffer_t *buf, ProgramElement_t *data, void *region) { return tsf_parser_parse_into(ProgramElement__get_parser(), buf, data, region); }
tsf_bool_t ProgramElement__write(tsf_stream_file_output_t *out, ProgramElement_t *data) TSF_ATTRIBUTE_NOINLINE;
ProgramElement_t *ProgramElement__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t ProgramElement__read_into(tsf_stream_file_input_t *inp, ProgramElement_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_Program
#define TSF_DEFINE_FUNCS_Program
tsf_type_t *Program__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Program__destruct(Program_t *data);
tsf_genrtr_t *Program__get_generator(void) TSF_ATTRIBUTE_NOINLINE;
tsf_parser_t *Program__get_parser(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline tsf_bool_t instanceof__Program(tsf_type_t *type) { return tsf_type_instanceof(type, Program__get_type()); }
static TSF_inline tsf_bool_t buf_instanceof__Program(tsf_buffer_t *buf) { return tsf_buffer_instanceof(buf, Program__get_type()); }
static TSF_inline tsf_buffer_t *Program__generate(void *data) { return tsf_generator_generate(Program__get_generator(), data); }
static TSF_inline tsf_buffer_t *Program__generate_in(void *data, void *region) { return tsf_generator_generate_in(Program__get_generator(), data, region); }
static TSF_inline Program_t *Program__parse(tsf_buffer_t *buf) { return (Program_t*)tsf_parser_parse(Program__get_parser(), buf); }
static TSF_inline Program_t *Program__parse_in(tsf_buffer_t *buf, void *region) { return (Program_t*)tsf_parser_parse_in(Program__get_parser(), buf, region); }
static TSF_inline tsf_bool_t Program__parse_into(tsf_buffer_t *buf, Program_t *data, void *region) { return tsf_parser_parse_into(Program__get_parser(), buf, data, region); }
tsf_bool_t Program__write(tsf_stream_file_output_t *out, Program_t *data) TSF_ATTRIBUTE_NOINLINE;
Program_t *Program__read(tsf_stream_file_input_t *inp) TSF_ATTRIBUTE_NOINLINE;
tsf_bool_t Program__read_into(tsf_stream_file_input_t *inp, Program_t *result) TSF_ATTRIBUTE_NOINLINE;
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__mov
#define TSF_DEFINE_FUNCS_Instruction__mov
tsf_type_t *Instruction__mov__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Instruction__mov__destruct(Instruction__mov_t *data) { }
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__add
#define TSF_DEFINE_FUNCS_Instruction__add
tsf_type_t *Instruction__add__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Instruction__add__destruct(Instruction__add_t *data) { }
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__alloc
#define TSF_DEFINE_FUNCS_Instruction__alloc
tsf_type_t *Instruction__alloc__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Instruction__alloc__destruct(Instruction__alloc_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__ret
#define TSF_DEFINE_FUNCS_Instruction__ret
tsf_type_t *Instruction__ret__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Instruction__ret__destruct(Instruction__ret_t *data) { }
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__jump
#define TSF_DEFINE_FUNCS_Instruction__jump
tsf_type_t *Instruction__jump__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Instruction__jump__destruct(Instruction__jump_t *data) { }
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__call
#define TSF_DEFINE_FUNCS_Instruction__call
tsf_type_t *Instruction__call__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Instruction__call__destruct(Instruction__call_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__call__args
#define TSF_DEFINE_FUNCS_Instruction__call__args
tsf_type_t *Instruction__call__args__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Instruction__call__args__destruct(Instruction__call__args_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_integer__array
#define TSF_DEFINE_FUNCS_integer__array
#define integer__array__get_type integer__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__get_type
#define integer__array__destruct integer__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__destruct
tsf_type_t *integer__array__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void integer__array__destruct(integer__array_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__branchZero
#define TSF_DEFINE_FUNCS_Instruction__branchZero
tsf_type_t *Instruction__branchZero__get_type(void) TSF_ATTRIBUTE_NOINLINE;
static TSF_inline void Instruction__branchZero__destruct(Instruction__branchZero_t *data) { }
#endif

#ifndef TSF_DEFINE_FUNCS_ProcedureDefn__variables
#define TSF_DEFINE_FUNCS_ProcedureDefn__variables
tsf_type_t *ProcedureDefn__variables__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProcedureDefn__variables__destruct(ProcedureDefn__variables_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_VariableDecl__array
#define TSF_DEFINE_FUNCS_VariableDecl__array
#define VariableDecl__array__get_type VariableDecl__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__get_type
#define VariableDecl__array__destruct VariableDecl__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__destruct
tsf_type_t *VariableDecl__array__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void VariableDecl__array__destruct(VariableDecl__array_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_ProcedureDefn__code
#define TSF_DEFINE_FUNCS_ProcedureDefn__code
tsf_type_t *ProcedureDefn__code__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProcedureDefn__code__destruct(ProcedureDefn__code_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_Instruction__array
#define TSF_DEFINE_FUNCS_Instruction__array
#define Instruction__array__get_type Instruction__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__get_type
#define Instruction__array__destruct Instruction__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__destruct
tsf_type_t *Instruction__array__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Instruction__array__destruct(Instruction__array_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_ProcedureDefn__debug
#define TSF_DEFINE_FUNCS_ProcedureDefn__debug
tsf_type_t *ProcedureDefn__debug__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProcedureDefn__debug__destruct(ProcedureDefn__debug_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_DebugData__array
#define TSF_DEFINE_FUNCS_DebugData__array
#define DebugData__array__get_type DebugData__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__get_type
#define DebugData__array__destruct DebugData__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__destruct
tsf_type_t *DebugData__array__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void DebugData__array__destruct(DebugData__array_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_Program__globals
#define TSF_DEFINE_FUNCS_Program__globals
tsf_type_t *Program__globals__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void Program__globals__destruct(Program__globals_t *data);
#endif

#ifndef TSF_DEFINE_FUNCS_ProgramElement__array
#define TSF_DEFINE_FUNCS_ProgramElement__array
#define ProgramElement__array__get_type ProgramElement__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__get_type
#define ProgramElement__array__destruct ProgramElement__arrayLBP170xEiZImruzZ0iP9t_2COXNjY_uyYrAk1pf__destruct
tsf_type_t *ProgramElement__array__get_type(void) TSF_ATTRIBUTE_NOINLINE;
void ProgramElement__array__destruct(ProgramElement__array_t *data);
#endif

#ifdef __cplusplus
};
#endif

