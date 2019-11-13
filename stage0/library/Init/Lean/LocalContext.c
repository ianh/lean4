// Lean compiler output
// Module: Init.Lean.LocalContext
// Imports: Init.Data.PersistentArray.Basic Init.Data.PersistentHashMap.Basic Init.Lean.Expr
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_get_unused_name(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_forM(lean_object*);
lean_object* l_Lean_LocalContext_foldlM(lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1(lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5(lean_object*);
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg___boxed(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1(lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_Inhabited___closed__3;
lean_object* l_Lean_LocalContext_foldl(lean_object*);
uint8_t lean_name_dec_eq(lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___boxed(lean_object*);
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2(lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5(lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4(lean_object*);
lean_object* l_Lean_LocalContext_forM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_Inhabited;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4(lean_object*);
lean_object* l_Lean_LocalContext_findDeclRev___rarg___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFrom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___boxed(lean_object*);
lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1(lean_object*, uint8_t);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___boxed(lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2(lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___boxed(lean_object*);
lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_all___boxed(lean_object*, lean_object*);
size_t l_USize_shift__right(size_t, size_t);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2(lean_object*, size_t, size_t);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4(lean_object*);
lean_object* l_Lean_LocalContext_allM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_let(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_empty___rarg___closed__2;
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_name___boxed(lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___boxed(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_anyM___boxed(lean_object*);
lean_object* l_Lean_LocalContext_Inhabited___closed__1;
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___boxed(lean_object*);
lean_object* l_Lean_LocalContext_findFVar___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5(lean_object*);
lean_object* l_Lean_LocalDecl_valueOpt___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1(lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___boxed(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___boxed(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_anyM(lean_object*);
lean_object* l_Lean_LocalContext_contains___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRev___rarg(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRev(lean_object*);
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2(lean_object*);
lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___boxed(lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___boxed(lean_object*);
lean_object* l_Lean_LocalContext_findDeclM(lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5(lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4(lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___boxed(lean_object*);
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_LocalContext_1__popTailNoneAux(lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_mk_fvar(lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_PersistentArray_set___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDecl___rarg(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Name_DecidableEq;
uint8_t l_Lean_LocalContext_containsFVar(lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_pop___rarg(lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(lean_object*);
lean_object* lean_local_ctx_rename_user_name(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___boxed(lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_Inhabited;
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_pop(lean_object*);
size_t lean_name_hash_usize(lean_object*);
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3(lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
extern lean_object* l_PersistentArray_empty___closed__3;
lean_object* l_beqOfEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2(lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___boxed(lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_LocalContext_mkLocalDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___boxed(lean_object*);
lean_object* l_Lean_LocalContext_findFVar(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___boxed(lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*);
lean_object* l_Lean_LocalContext_forM___boxed(lean_object*);
lean_object* l_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_updateUserName(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t l_USize_add(size_t, size_t);
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___boxed(lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___boxed(lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___boxed(lean_object*);
lean_object* l_Lean_LocalContext_findDecl(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3(lean_object*);
lean_object* l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___boxed(lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM___boxed(lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_LocalContext_all(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM(lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_get(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5(lean_object*);
lean_object* l_Lean_LocalContext_allM___boxed(lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_Inhabited___closed__2;
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4(lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1(lean_object*);
lean_object* l_Lean_LocalDecl_type___boxed(lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_any___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___boxed(lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDecl___rarg___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3(lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___boxed(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_allM(lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_empty;
lean_object* l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3(lean_object*);
uint8_t l_Lean_LocalContext_any(lean_object*, lean_object*);
extern lean_object* l_PersistentArray_getAux___main___rarg___closed__1;
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_LocalDecl_Inhabited___closed__1;
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1(lean_object*);
extern lean_object* l_Lean_Expr_inhabited;
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___boxed(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg(lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___boxed(lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3(lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___boxed(lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2(lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6(lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___boxed(lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2(lean_object*);
lean_object* l_Lean_LocalContext_forM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFrom(lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_local_ctx_uses_user_name(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldl___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4(lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_LocalDecl_valueOpt(lean_object*);
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x27___rarg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2(lean_object*);
lean_object* l_Lean_LocalDecl_value___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4(lean_object*);
lean_object* l_Lean_LocalContext_anyM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_isUnaryNode___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___boxed(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t lean_local_ctx_is_empty(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getUnusedNameAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4(lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_isSubPrefixOfAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldl___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___boxed(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2(lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_inhabited___closed__1;
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1(lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3(lean_object*);
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3(lean_object*);
lean_object* l_Lean_LocalContext_findDeclM___boxed(lean_object*);
lean_object* lean_local_ctx_last_decl(lean_object*);
lean_object* l_Lean_LocalContext_foldlFrom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___boxed(lean_object*);
lean_object* l_Lean_LocalDecl_value___closed__1;
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3(lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5(lean_object*);
lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5(lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
uint8_t l_Lean_LocalContext_isSubPrefixOfAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2(lean_object*);
lean_object* l_Lean_LocalDecl_index___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___boxed(lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___boxed(lean_object*);
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shift__left(size_t, size_t);
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object*);
lean_object* l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1___boxed(lean_object*);
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3(lean_object*);
lean_object* l_Lean_LocalDecl_userName___boxed(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getUnusedNameAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1(lean_object*);
lean_object* lean_mk_empty_local_ctx(lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_LocalDecl_value___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___boxed(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5(lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1(lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5(lean_object*);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_name(lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3(lean_object*);
lean_object* l_panicWithPos___at_Lean_Expr_getRevArg_x21___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* _init_l_Lean_LocalDecl_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_box(0);
x_3 = l_Lean_Expr_inhabited___closed__1;
x_4 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set(x_4, 3, x_3);
lean_ctor_set(x_4, 4, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_LocalDecl_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalDecl_Inhabited___closed__1;
return x_1;
}
}
uint8_t l_Lean_LocalDecl_isLet(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_LocalDecl_isLet(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalDecl_index(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_index___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_index(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_name(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_name___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_name(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_userName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_userName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_userName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_type(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_type___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_type(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Lean_LocalDecl_binderInfo(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_LocalDecl_binderInfo(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalDecl_valueOpt(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_Lean_LocalDecl_valueOpt___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_valueOpt(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_LocalDecl_value___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Lean.LocalContext");
return x_1;
}
}
lean_object* _init_l_Lean_LocalDecl_value___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("let declaration expected");
return x_1;
}
}
lean_object* l_Lean_LocalDecl_value(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_LocalDecl_value___closed__1;
x_3 = lean_unsigned_to_nat(49u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_LocalDecl_value___closed__2;
x_6 = l_panicWithPos___at_Lean_Expr_getRevArg_x21___main___spec__1(x_2, x_3, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
return x_7;
}
}
}
lean_object* l_Lean_LocalDecl_value___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_value(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalDecl_updateUserName(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_dec(x_4);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_2);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*4, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 2);
lean_dec(x_11);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_2);
lean_ctor_set(x_16, 3, x_14);
lean_ctor_set(x_16, 4, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_LocalDecl_toExpr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_LocalDecl_name(x_1);
x_3 = lean_expr_mk_fvar(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalDecl_toExpr___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalDecl_toExpr(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_LocalContext_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Name_DecidableEq;
x_2 = lean_alloc_closure((void*)(l_beqOfEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_LocalContext_Inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PersistentHashMap_empty___rarg___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_LocalContext_Inhabited___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_LocalContext_Inhabited___closed__2;
x_2 = l_PersistentArray_empty___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_LocalContext_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_Inhabited___closed__3;
return x_1;
}
}
lean_object* lean_mk_empty_local_ctx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = l_Lean_LocalContext_Inhabited___closed__3;
return x_2;
}
}
lean_object* _init_l_Lean_LocalContext_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_Inhabited___closed__3;
return x_1;
}
}
uint8_t l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
uint8_t lean_local_ctx_is_empty(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1(x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_PersistentHashMap_isEmpty___at_Lean_LocalContext_isEmpty___spec__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_local_ctx_is_empty(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_LocalContext_mkLocalDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_LocalContext_mkLocalDecl___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* lean_local_ctx_mk_local_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set(x_10, 2, x_3);
lean_ctor_set(x_10, 3, x_4);
lean_ctor_set_uint8(x_10, sizeof(void*)*4, x_5);
lean_inc(x_10);
x_11 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_7, x_2, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_10);
x_13 = l_PersistentArray_push___rarg(x_8, x_12);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_inc(x_2);
x_17 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_3);
lean_ctor_set(x_17, 3, x_4);
lean_ctor_set_uint8(x_17, sizeof(void*)*4, x_5);
lean_inc(x_17);
x_18 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_14, x_2, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = l_PersistentArray_push___rarg(x_15, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_mkLocalDecl___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_LocalContext_mkLocalDecl___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = lean_local_ctx_mk_local_decl(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* lean_local_ctx_mk_let_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_2);
x_10 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set(x_10, 2, x_3);
lean_ctor_set(x_10, 3, x_4);
lean_ctor_set(x_10, 4, x_5);
lean_inc(x_10);
x_11 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_7, x_2, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_10);
x_13 = l_PersistentArray_push___rarg(x_8, x_12);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_inc(x_2);
x_17 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_3);
lean_ctor_set(x_17, 3, x_4);
lean_ctor_set(x_17, 4, x_5);
lean_inc(x_17);
x_18 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_14, x_2, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = l_PersistentArray_push___rarg(x_15, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_local_ctx_find(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_LocalContext_find___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_LocalContext_find___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findFVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_fvarId_x21(x_2);
x_4 = lean_local_ctx_find(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_findFVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findFVar(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = lean_name_dec_eq(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_2 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = 1;
return x_12;
}
}
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t l_Lean_LocalContext_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_LocalContext_contains___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_LocalContext_contains___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalContext_contains(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_LocalContext_containsFVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_fvarId_x21(x_2);
x_4 = l_Lean_LocalContext_contains(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalContext_containsFVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = x_2 >> x_3;
x_6 = lean_usize_to_nat(x_5);
x_7 = l_PersistentArray_getAux___main___rarg___closed__1;
x_8 = lean_array_get(x_7, x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3;
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = lean_usize_to_nat(x_2);
x_19 = lean_array_get(x_17, x_16, x_18);
lean_dec(x_18);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_box(0);
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
x_5 = lean_nat_dec_le(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_usize_of_nat(x_2);
x_8 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_9 = l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2(x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_nat_sub(x_2, x_4);
lean_dec(x_4);
x_12 = lean_array_get(x_3, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
lean_object* l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
lean_inc(x_1);
x_7 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_1, x_6);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = l_PersistentArray_pop___rarg(x_1);
x_1 = x_8;
goto _start;
}
else
{
lean_dec(x_7);
return x_1;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_PersistentArray_getAux___main___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__2(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_LocalContext_1__popTailNoneAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(x_1);
return x_2;
}
}
lean_object* l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_name_dec_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_4);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
x_18 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_18);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_22 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 1:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_array_set(x_4, x_8, x_9);
x_30 = x_2 >> x_5;
x_31 = l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(x_28, x_30, x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_29);
lean_free_object(x_10);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_31, 0);
lean_dec(x_36);
x_37 = 0;
x_38 = lean_box(x_37);
lean_ctor_set(x_31, 1, x_38);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_1);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_dec(x_46);
x_47 = l_PersistentHashMap_isUnaryNode___rarg(x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
lean_ctor_set(x_10, 0, x_45);
x_48 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_48);
x_49 = 1;
x_50 = lean_box(x_49);
lean_ctor_set(x_31, 1, x_50);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_free_object(x_31);
lean_dec(x_45);
lean_free_object(x_10);
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
lean_dec(x_47);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_set(x_29, x_8, x_55);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_51, 1, x_58);
lean_ctor_set(x_51, 0, x_1);
return x_51;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_51, 0);
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_51);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_array_set(x_29, x_8, x_61);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_62);
x_63 = 1;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_1);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_31, 0);
lean_inc(x_66);
lean_dec(x_31);
x_67 = l_PersistentHashMap_isUnaryNode___rarg(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_ctor_set(x_10, 0, x_66);
x_68 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_68);
x_69 = 1;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_66);
lean_free_object(x_10);
x_72 = lean_ctor_get(x_67, 0);
lean_inc(x_72);
lean_dec(x_67);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_array_set(x_29, x_8, x_76);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_77);
x_78 = 1;
x_79 = lean_box(x_78);
if (lean_is_scalar(x_75)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_75;
}
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_1);
x_81 = lean_ctor_get(x_31, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_82 = x_31;
} else {
 lean_dec_ref(x_31);
 x_82 = lean_box(0);
}
x_83 = l_PersistentHashMap_isUnaryNode___rarg(x_81);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; 
lean_ctor_set(x_10, 0, x_81);
x_84 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = 1;
x_87 = lean_box(x_86);
if (lean_is_scalar(x_82)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_82;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_82);
lean_dec(x_81);
lean_free_object(x_10);
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
lean_dec(x_83);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_array_set(x_29, x_8, x_93);
lean_dec(x_8);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_92)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_92;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
else
{
lean_object* x_99; lean_object* x_100; size_t x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_10, 0);
lean_inc(x_99);
lean_dec(x_10);
x_100 = lean_array_set(x_4, x_8, x_9);
x_101 = x_2 >> x_5;
x_102 = l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(x_99, x_101, x_3);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_100);
lean_dec(x_8);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_105 = x_102;
} else {
 lean_dec_ref(x_102);
 x_105 = lean_box(0);
}
x_106 = 0;
x_107 = lean_box(x_106);
if (lean_is_scalar(x_105)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_105;
}
lean_ctor_set(x_108, 0, x_1);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_109 = x_1;
} else {
 lean_dec_ref(x_1);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_102, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_111 = x_102;
} else {
 lean_dec_ref(x_102);
 x_111 = lean_box(0);
}
x_112 = l_PersistentHashMap_isUnaryNode___rarg(x_110);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_110);
x_114 = lean_array_set(x_100, x_8, x_113);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_115 = lean_alloc_ctor(0, 1, 0);
} else {
 x_115 = x_109;
}
lean_ctor_set(x_115, 0, x_114);
x_116 = 1;
x_117 = lean_box(x_116);
if (lean_is_scalar(x_111)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_111;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_111);
lean_dec(x_110);
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
lean_dec(x_112);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
x_124 = lean_array_set(x_100, x_8, x_123);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_125 = lean_alloc_ctor(0, 1, 0);
} else {
 x_125 = x_109;
}
lean_ctor_set(x_125, 0, x_124);
x_126 = 1;
x_127 = lean_box(x_126);
if (lean_is_scalar(x_122)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_122;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
}
default: 
{
uint8_t x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_8);
lean_dec(x_4);
x_129 = 0;
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_1);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_1, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_1, 1);
lean_inc(x_133);
x_134 = lean_unsigned_to_nat(0u);
x_135 = l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(x_132, x_3, x_134);
if (lean_obj_tag(x_135) == 0)
{
uint8_t x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_133);
lean_dec(x_132);
x_136 = 0;
x_137 = lean_box(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_1);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
else
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_1);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; 
x_140 = lean_ctor_get(x_1, 1);
lean_dec(x_140);
x_141 = lean_ctor_get(x_1, 0);
lean_dec(x_141);
x_142 = lean_ctor_get(x_135, 0);
lean_inc(x_142);
lean_dec(x_135);
x_143 = l_Array_eraseIdx_x27___rarg(x_132, x_142);
x_144 = l_Array_eraseIdx_x27___rarg(x_133, x_142);
lean_dec(x_142);
lean_ctor_set(x_1, 1, x_144);
lean_ctor_set(x_1, 0, x_143);
x_145 = 1;
x_146 = lean_box(x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_1);
x_148 = lean_ctor_get(x_135, 0);
lean_inc(x_148);
lean_dec(x_135);
x_149 = l_Array_eraseIdx_x27___rarg(x_132, x_148);
x_150 = l_Array_eraseIdx_x27___rarg(x_133, x_148);
lean_dec(x_148);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = 1;
x_153 = lean_box(x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_name_hash_usize(x_2);
x_7 = l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(x_4, x_6, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = lean_name_hash_usize(x_2);
x_17 = l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(x_14, x_16, x_2);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_15, x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* lean_local_ctx_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_PersistentHashMap_find___at_Lean_LocalContext_find___spec__1(x_3, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(x_3, x_2);
lean_dec(x_2);
x_11 = l_Lean_LocalDecl_index(x_9);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = l_PersistentArray_set___rarg(x_4, x_11, x_12);
lean_dec(x_11);
x_14 = l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(x_13);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(x_3, x_2);
lean_dec(x_2);
x_17 = l_Lean_LocalDecl_index(x_15);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = l_PersistentArray_set___rarg(x_4, x_17, x_18);
lean_dec(x_17);
x_20 = l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_eraseAux___main___at_Lean_LocalContext_erase___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* lean_local_ctx_pop(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
lean_dec(x_4);
lean_inc(x_3);
x_9 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_3, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = l_Lean_LocalDecl_name(x_13);
lean_dec(x_13);
x_15 = l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(x_2, x_14);
lean_dec(x_14);
x_16 = l_PersistentArray_pop___rarg(x_3);
x_17 = l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(x_16);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec(x_9);
x_19 = l_Lean_LocalDecl_name(x_18);
lean_dec(x_18);
x_20 = l_PersistentHashMap_erase___at_Lean_LocalContext_erase___spec__1(x_2, x_19);
lean_dec(x_19);
x_21 = l_PersistentArray_pop___rarg(x_3);
x_22 = l___private_Init_Lean_LocalContext_1__popTailNoneAux___main(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = l_Lean_LocalDecl_userName(x_12);
lean_dec(x_12);
x_14 = lean_name_dec_eq(x_13, x_1);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_10);
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
return x_10;
}
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
x_11 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3(x_1, x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
return x_11;
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = l_Lean_LocalDecl_userName(x_12);
lean_dec(x_12);
x_14 = lean_name_dec_eq(x_13, x_1);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_10);
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
return x_10;
}
}
}
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4(x_1, x_3, x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_array_get_size(x_6);
x_8 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5(x_1, x_6, x_7, lean_box(0));
return x_8;
}
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2(x_1, x_3, x_4, lean_box(0));
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3(x_1, x_6);
return x_7;
}
else
{
return x_5;
}
}
}
lean_object* lean_local_ctx_find_from_user_name(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1(x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findFromUserName___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findRevM___at_Lean_LocalContext_findFromUserName___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t lean_local_ctx_uses_user_name(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_local_ctx_find_from_user_name(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_local_ctx_uses_user_name(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_getUnusedNameAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_Lean_Name_appendIndexAfter(x_2, x_3);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_local_ctx_uses_user_name(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_3, x_6);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
}
}
lean_object* l_Lean_LocalContext_getUnusedNameAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_getUnusedNameAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* lean_local_ctx_get_unused_name(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_local_ctx_uses_user_name(x_1, x_2);
if (x_3 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_LocalContext_getUnusedNameAux___main(x_1, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* lean_local_ctx_last_decl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_2, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* lean_local_ctx_rename_user_name(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = lean_local_ctx_find_from_user_name(x_1, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 0);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = l_Lean_LocalDecl_updateUserName(x_11, x_3);
x_13 = l_Lean_LocalDecl_name(x_12);
lean_inc(x_12);
x_14 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_4, x_13, x_12);
x_15 = l_Lean_LocalDecl_index(x_12);
lean_ctor_set(x_6, 0, x_12);
x_16 = l_PersistentArray_set___rarg(x_5, x_15, x_6);
lean_dec(x_15);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_6, 0);
lean_inc(x_17);
lean_dec(x_6);
x_18 = l_Lean_LocalDecl_updateUserName(x_17, x_3);
x_19 = l_Lean_LocalDecl_name(x_18);
lean_inc(x_18);
x_20 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_4, x_19, x_18);
x_21 = l_Lean_LocalDecl_index(x_18);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = l_PersistentArray_set___rarg(x_5, x_21, x_22);
lean_dec(x_21);
lean_ctor_set(x_1, 1, x_23);
lean_ctor_set(x_1, 0, x_20);
return x_1;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_25 = x_6;
} else {
 lean_dec_ref(x_6);
 x_25 = lean_box(0);
}
x_26 = l_Lean_LocalDecl_updateUserName(x_24, x_3);
x_27 = l_Lean_LocalDecl_name(x_26);
lean_inc(x_26);
x_28 = l_PersistentHashMap_insert___at_Lean_LocalContext_mkLocalDecl___spec__1(x_4, x_27, x_26);
x_29 = l_Lean_LocalDecl_index(x_26);
if (lean_is_scalar(x_25)) {
 x_30 = lean_alloc_ctor(1, 1, 0);
} else {
 x_30 = x_25;
}
lean_ctor_set(x_30, 0, x_26);
x_31 = l_PersistentArray_set___rarg(x_5, x_29, x_30);
lean_dec(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* lean_local_ctx_num_indices(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
lean_object* lean_local_ctx_get(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_5, x_6);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___rarg(x_1, lean_box(0), x_3, x_14, x_7);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
x_18 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg___boxed), 7, 6);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_5, x_6);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_6, x_15);
lean_inc(x_3);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg___boxed), 7, 6);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, lean_box(0));
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_5);
lean_closure_set(x_17, 5, x_16);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_2(x_19, lean_box(0), x_7);
x_21 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_20, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_apply_2(x_3, x_7, x_22);
x_24 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_23, x_17);
return x_24;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg(x_1, lean_box(0), x_3, x_6, x_6, x_7, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_11 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg(x_1, lean_box(0), x_3, x_9, x_9, x_10, x_5);
return x_11;
}
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_5, x_6);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_6, x_15);
lean_inc(x_3);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg___boxed), 7, 6);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, lean_box(0));
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_5);
lean_closure_set(x_17, 5, x_16);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_2(x_19, lean_box(0), x_7);
x_21 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_20, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_apply_2(x_3, x_7, x_22);
x_24 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_23, x_17);
return x_24;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg(x_2, lean_box(0), x_3, x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___rarg(x_1, lean_box(0), x_3, x_7, x_5);
x_9 = lean_alloc_closure((void*)(l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___rarg(x_1, lean_box(0), x_4, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_LocalContext_foldlM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlM___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_foldlM___at_Lean_LocalContext_foldlM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_foldlM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg(x_1, lean_box(0), x_3, x_12);
lean_dec(x_12);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_5, x_16);
x_18 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg(x_1, lean_box(0), x_3, x_4, x_17);
lean_dec(x_17);
x_19 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_inc(x_3);
x_17 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg(x_1, lean_box(0), x_3, x_4, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_18, lean_box(0), x_19);
x_21 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_20, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
x_23 = lean_apply_1(x_3, x_22);
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_dec(x_13);
x_25 = lean_box(0);
x_26 = lean_apply_2(x_24, lean_box(0), x_25);
lean_inc(x_14);
x_27 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_23, x_26);
x_28 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_27, x_17);
return x_28;
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg(x_1, lean_box(0), x_3, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg(x_1, lean_box(0), x_3, x_8, x_9);
return x_10;
}
}
}
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_inc(x_3);
x_17 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg(x_1, lean_box(0), x_3, x_4, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_18, lean_box(0), x_19);
x_21 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_20, x_17);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
x_23 = lean_apply_1(x_3, x_22);
x_24 = lean_ctor_get(x_13, 1);
lean_inc(x_24);
lean_dec(x_13);
x_25 = lean_box(0);
x_26 = lean_apply_2(x_24, lean_box(0), x_25);
lean_inc(x_14);
x_27 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_23, x_26);
x_28 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_27, x_17);
return x_28;
}
}
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg(x_1, lean_box(0), x_3, x_7);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg(x_1, lean_box(0), x_3, x_9, x_10);
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_11);
return x_12;
}
}
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_forM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg(x_1, lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_LocalContext_forM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_forM___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_forMAux___main___at_Lean_LocalContext_forM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_forMAux___main___at_Lean_LocalContext_forM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_forM___at_Lean_LocalContext_forM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_forM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_LocalContext_forM___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_LocalContext_forM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_forM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg(x_2, lean_box(0), x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_5);
return x_11;
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_1);
x_14 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___rarg(x_1, lean_box(0), x_3, x_13);
x_15 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_4);
x_16 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg(x_2, lean_box(0), x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_5);
return x_11;
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_14, 0, x_5);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_18, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_apply_1(x_3, x_20);
x_22 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_21, x_14);
return x_22;
}
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg(x_1, lean_box(0), x_3, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg(x_1, lean_box(0), x_3, x_8, x_9);
return x_10;
}
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg(x_2, lean_box(0), x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_5);
return x_11;
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_14, 0, x_5);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_18, x_14);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_apply_1(x_3, x_20);
x_22 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_21, x_14);
return x_22;
}
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg(x_2, lean_box(0), x_3, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_4);
return x_10;
}
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___rarg(x_1, lean_box(0), x_3, x_6);
x_8 = lean_alloc_closure((void*)(l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_3);
x_9 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___rarg(x_1, lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_LocalContext_findDeclM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDeclM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findMAux___main___at_Lean_LocalContext_findDeclM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_findM___at_Lean_LocalContext_findDeclM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_findDeclM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg(x_1, lean_box(0), x_2, x_3, x_4, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_5);
return x_9;
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_5, x_13);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_array_fget(x_4, x_14);
lean_inc(x_3);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = lean_apply_2(x_19, lean_box(0), x_20);
x_22 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_21, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_apply_1(x_3, x_23);
x_25 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_24, x_17);
return x_25;
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg(x_1, lean_box(0), x_2, x_3, x_4, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_5);
return x_9;
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_5, x_13);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_array_fget(x_4, x_14);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___rarg(x_1, lean_box(0), x_3, x_16);
x_18 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_3);
lean_closure_set(x_18, 2, x_4);
lean_closure_set(x_18, 3, x_14);
x_19 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg(x_1, lean_box(0), x_2, x_3, x_4, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_5);
return x_9;
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_5, x_13);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_array_fget(x_4, x_14);
lean_inc(x_3);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = lean_apply_2(x_19, lean_box(0), x_20);
x_22 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_21, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_apply_1(x_3, x_23);
x_25 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_24, x_17);
return x_25;
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg(x_1, lean_box(0), x_3, x_5, x_6, lean_box(0));
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_array_get_size(x_8);
x_10 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg(x_1, lean_box(0), x_3, x_8, x_9, lean_box(0));
lean_dec(x_9);
return x_10;
}
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___rarg(x_2, lean_box(0), x_3, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_4);
return x_9;
}
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg(x_1, lean_box(0), x_3, x_6, x_7, lean_box(0));
lean_dec(x_7);
x_9 = lean_alloc_closure((void*)(l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___rarg(x_1, lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclRevM___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRevM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRevM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_findDeclRevM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_5, x_6);
lean_inc(x_4);
x_15 = lean_apply_2(x_4, x_7, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
x_18 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg___boxed), 7, 6);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, lean_box(0), x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_5, x_6);
lean_inc(x_4);
x_15 = lean_apply_2(x_4, x_7, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
x_18 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg___boxed), 7, 6);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg(x_2, lean_box(0), x_1, x_3, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_3, 3);
lean_inc(x_7);
x_8 = lean_nat_dec_le(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_usize_of_nat(x_6);
x_12 = lean_ctor_get_usize(x_3, 4);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_PersistentArray_foldlFromMAux___main___rarg(x_1, lean_box(0), x_4, x_10, x_11, x_12, x_5);
x_14 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_4);
x_15 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
x_17 = lean_nat_sub(x_6, x_7);
lean_dec(x_7);
x_18 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg(x_1, lean_box(0), x_3, x_4, x_16, x_17, x_5);
lean_dec(x_17);
return x_18;
}
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, lean_box(0), x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_2(x_2, x_3, x_8);
return x_9;
}
}
}
lean_object* l_Lean_LocalContext_foldlFromM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___rarg___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_4);
x_9 = l_Lean_LocalDecl_index(x_6);
x_10 = l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg(x_1, lean_box(0), x_7, x_8, x_5, x_9);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Lean_LocalContext_foldlFromM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFromM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFromM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_LocalContext_foldlFromM___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_foldlFromM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg(x_1, x_8, x_5);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
if (lean_obj_tag(x_8) == 0)
{
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_apply_2(x_1, x_5, x_12);
x_4 = x_10;
x_5 = x_13;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg(x_1, x_4, x_4, x_5, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg(x_1, x_7, x_7, x_8, x_3);
return x_9;
}
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_fget(x_3, x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
if (lean_obj_tag(x_8) == 0)
{
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_apply_2(x_1, x_5, x_12);
x_4 = x_10;
x_5 = x_13;
goto _start;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_5 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg(x_1, x_4, x_3);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg(x_2, x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_foldl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldl___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldl___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PersistentArray_foldlM___at_Lean_LocalContext_foldl___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_foldlM___at_Lean_LocalContext_foldl___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_LocalContext_foldl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_foldl___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_8 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg(x_1, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_3 = x_14;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg(x_1, x_6, x_7);
return x_8;
}
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_3 = x_14;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
}
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_4 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg(x_1, x_5, x_6);
return x_7;
}
else
{
lean_dec(x_1);
return x_4;
}
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDecl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findMAux___main___at_Lean_LocalContext_findDecl___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findMAux___main___at_Lean_LocalContext_findDecl___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findM___at_Lean_LocalContext_findDecl___spec__2___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDeclM___at_Lean_LocalContext_findDecl___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDecl___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDecl___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_1);
x_13 = lean_apply_1(x_1, x_12);
if (lean_obj_tag(x_13) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_1);
return x_13;
}
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
lean_inc(x_1);
x_11 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg(x_1, x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_1);
return x_11;
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_array_fget(x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_1);
x_13 = lean_apply_1(x_1, x_12);
if (lean_obj_tag(x_13) == 0)
{
x_3 = x_9;
x_4 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_1);
return x_13;
}
}
}
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_array_get_size(x_3);
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg(x_1, x_3, x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_array_get_size(x_6);
x_8 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg(x_1, x_6, x_7, lean_box(0));
return x_8;
}
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_array_get_size(x_3);
lean_inc(x_1);
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg(x_1, x_3, x_4, lean_box(0));
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg(x_1, x_6);
return x_7;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_findDeclRev___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDeclRev(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclRev___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findRevMAux___main___at_Lean_LocalContext_findDeclRev___spec__4___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentArray_findRevM___at_Lean_LocalContext_findDeclRev___spec__2___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDeclRevM___at_Lean_LocalContext_findDeclRev___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_LocalContext_findDeclRev___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_LocalContext_findDeclRev___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg(x_1, x_8, x_5);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_5, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg(x_1, x_4, x_4, x_5, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg(x_1, x_7, x_7, x_8, x_3);
return x_9;
}
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg(x_1, x_8, x_5);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_5, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = x_3 >> x_4;
x_8 = lean_usize_to_nat(x_7);
x_9 = l_PersistentArray_getAux___main___rarg___closed__1;
x_10 = lean_array_get(x_9, x_6, x_8);
x_11 = 1;
x_12 = x_11 << x_4;
x_13 = x_12 - x_11;
x_14 = x_3 & x_13;
x_15 = 5;
x_16 = x_4 - x_15;
lean_inc(x_1);
x_17 = l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg(x_1, x_10, x_14, x_16, x_5);
lean_dec(x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_8, x_18);
lean_dec(x_8);
x_20 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg(x_1, x_6, x_6, x_19, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_usize_to_nat(x_3);
x_23 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg(x_1, x_21, x_21, x_22, x_5);
return x_23;
}
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
x_9 = lean_apply_2(x_2, x_5, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
x_9 = lean_apply_2(x_2, x_5, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 3);
x_6 = lean_nat_dec_le(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_usize_of_nat(x_4);
x_9 = lean_ctor_get_usize(x_1, 4);
lean_inc(x_2);
x_10 = l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg(x_2, x_7, x_8, x_9, x_3);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg(x_1, x_2, x_11, x_12, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_nat_sub(x_4, x_5);
x_16 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg(x_1, x_2, x_14, x_15, x_3);
return x_16;
}
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_Lean_LocalDecl_index(x_4);
x_8 = l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg(x_5, x_6, x_3, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_foldlFrom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg(x_2, x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlFrom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFrom___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PersistentArray_foldlMAux___main___at_Lean_LocalContext_foldlFrom___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__7___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__8___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_PersistentArray_foldlFromMAux___main___at_Lean_LocalContext_foldlFrom___spec__3___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_LocalContext_foldlFrom___spec__10___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PersistentArray_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_LocalContext_foldlFromM___at_Lean_LocalContext_foldlFrom___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlFrom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_LocalContext_foldlFrom___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
uint8_t l_Lean_LocalContext_isSubPrefixOfAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = 1;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_nat_dec_lt(x_4, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_1);
x_11 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_1, x_3);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_2);
x_16 = l_PersistentArray_get_x21___at___private_Init_Lean_LocalContext_1__popTailNoneAux___main___spec__1(x_2, x_4);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_4, x_17);
lean_dec(x_4);
x_4 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = l_Lean_LocalDecl_name(x_15);
lean_dec(x_15);
x_22 = l_Lean_LocalDecl_name(x_20);
lean_dec(x_20);
x_23 = lean_name_dec_eq(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_4, x_24);
lean_dec(x_4);
x_4 = x_25;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_3, x_27);
lean_dec(x_3);
x_29 = lean_nat_add(x_4, x_27);
lean_dec(x_4);
x_3 = x_28;
x_4 = x_29;
goto _start;
}
}
}
}
}
}
}
lean_object* l_Lean_LocalContext_isSubPrefixOfAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_LocalContext_isSubPrefixOfAux___main(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_LocalContext_isSubPrefixOfAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_LocalContext_isSubPrefixOfAux(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_LocalContext_isSubPrefixOfAux___main(x_3, x_4, x_5, x_5);
return x_6;
}
}
lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalContext_isSubPrefixOf(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown free variable");
return x_1;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_dec(x_4);
x_10 = l_Lean_Expr_inhabited;
x_11 = lean_array_get(x_10, x_3, x_9);
lean_inc(x_2);
x_12 = l_Lean_LocalContext_findFVar(x_2, x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_13 = l_Lean_LocalDecl_value___closed__1;
x_14 = lean_unsigned_to_nat(262u);
x_15 = lean_unsigned_to_nat(12u);
x_16 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_17 = l_panicWithPos___at_Lean_Expr_getRevArg_x21___main___spec__1(x_13, x_14, x_15, x_16);
x_4 = x_9;
x_5 = x_17;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 3);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_19, sizeof(void*)*4);
lean_dec(x_19);
x_23 = lean_expr_abstract_range(x_21, x_9, x_3);
lean_dec(x_21);
if (x_1 == 0)
{
lean_object* x_24; 
x_24 = lean_expr_mk_forall(x_20, x_22, x_23, x_5);
x_4 = x_9;
x_5 = x_24;
goto _start;
}
else
{
lean_object* x_26; 
x_26 = lean_expr_mk_lambda(x_20, x_22, x_23, x_5);
x_4 = x_9;
x_5 = x_26;
goto _start;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_19, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_19, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_19, 4);
lean_inc(x_30);
lean_dec(x_19);
x_31 = lean_expr_has_loose_bvar(x_5, x_6);
if (x_31 == 0)
{
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_expr_abstract_range(x_29, x_9, x_3);
lean_dec(x_29);
x_34 = lean_expr_abstract_range(x_30, x_9, x_3);
lean_dec(x_30);
x_35 = lean_expr_mk_let(x_28, x_33, x_34, x_5);
x_4 = x_9;
x_5 = x_35;
goto _start;
}
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Lean_LocalContext_mkBinding(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_expr_abstract(x_4, x_3);
x_6 = lean_array_get_size(x_3);
x_7 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_LocalContext_mkBinding(x_5, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_Expr_inhabited;
x_10 = lean_array_get(x_9, x_2, x_8);
lean_inc(x_1);
x_11 = l_Lean_LocalContext_findFVar(x_1, x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_12 = l_Lean_LocalDecl_value___closed__1;
x_13 = lean_unsigned_to_nat(262u);
x_14 = lean_unsigned_to_nat(12u);
x_15 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_16 = l_panicWithPos___at_Lean_Expr_getRevArg_x21___main___spec__1(x_12, x_13, x_14, x_15);
x_3 = x_8;
x_4 = x_16;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
lean_dec(x_18);
x_22 = lean_expr_abstract_range(x_20, x_8, x_2);
lean_dec(x_20);
x_23 = lean_expr_mk_lambda(x_19, x_21, x_22, x_4);
x_3 = x_8;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_18, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_18, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_18, 4);
lean_inc(x_27);
lean_dec(x_18);
x_28 = lean_expr_has_loose_bvar(x_4, x_5);
if (x_28 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_expr_abstract_range(x_26, x_8, x_2);
lean_dec(x_26);
x_31 = lean_expr_abstract_range(x_27, x_8, x_2);
lean_dec(x_27);
x_32 = lean_expr_mk_let(x_25, x_30, x_31, x_4);
x_3 = x_8;
x_4 = x_32;
goto _start;
}
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
}
lean_object* l_Lean_LocalContext_mkLambda(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_expr_abstract(x_3, x_2);
x_5 = lean_array_get_size(x_2);
x_6 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkLambda___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_mkLambda(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_Expr_inhabited;
x_10 = lean_array_get(x_9, x_2, x_8);
lean_inc(x_1);
x_11 = l_Lean_LocalContext_findFVar(x_1, x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_12 = l_Lean_LocalDecl_value___closed__1;
x_13 = lean_unsigned_to_nat(262u);
x_14 = lean_unsigned_to_nat(12u);
x_15 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_16 = l_panicWithPos___at_Lean_Expr_getRevArg_x21___main___spec__1(x_12, x_13, x_14, x_15);
x_3 = x_8;
x_4 = x_16;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
lean_dec(x_18);
x_22 = lean_expr_abstract_range(x_20, x_8, x_2);
lean_dec(x_20);
x_23 = lean_expr_mk_forall(x_19, x_21, x_22, x_4);
x_3 = x_8;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_18, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_18, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_18, 4);
lean_inc(x_27);
lean_dec(x_18);
x_28 = lean_expr_has_loose_bvar(x_4, x_5);
if (x_28 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_expr_abstract_range(x_26, x_8, x_2);
lean_dec(x_26);
x_31 = lean_expr_abstract_range(x_27, x_8, x_2);
lean_dec(x_27);
x_32 = lean_expr_mk_let(x_25, x_30, x_31, x_4);
x_3 = x_8;
x_4 = x_32;
goto _start;
}
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
}
lean_object* l_Lean_LocalContext_mkForall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_expr_abstract(x_3, x_2);
x_5 = lean_array_get_size(x_2);
x_6 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkForall___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_mkForall(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg(x_2, x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(x_5);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_apply_2(x_8, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___rarg(x_1, x_2, x_13);
x_15 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_3);
x_16 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg(x_2, x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(x_5);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_apply_2(x_8, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
x_20 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_19, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_apply_1(x_2, x_21);
x_23 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_22, x_14);
return x_23;
}
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg), 4, 0);
return x_2;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg(x_1, x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg(x_1, x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg(x_2, x_3, x_4, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(x_5);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_apply_2(x_8, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
x_20 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_19, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_apply_1(x_2, x_21);
x_23 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_22, x_14);
return x_23;
}
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg), 4, 0);
return x_2;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg(x_2, x_3, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(x_4);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___rarg(x_1, x_2, x_5);
x_7 = lean_alloc_closure((void*)(l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_anyM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_LocalContext_anyM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_anyM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_anyM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_anyM___at_Lean_LocalContext_anyM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_anyM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_anyM(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg(x_2, x_3, x_4, x_5, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(x_6);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
return x_13;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_apply_2(x_9, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___rarg(x_1, x_2, x_3, x_14);
x_16 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
x_17 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_apply_2(x_9, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg(x_2, x_3, x_4, x_5, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(x_6);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
return x_13;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_apply_2(x_9, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_4, x_5);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_15, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_apply_2(x_18, lean_box(0), x_20);
x_22 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_21, x_15);
x_23 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_22, x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_24 = lean_ctor_get(x_14, 0);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_apply_1(x_2, x_24);
x_26 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_25, x_15);
x_27 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_26, x_16);
return x_27;
}
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg(x_1, x_2, x_3, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg(x_1, x_2, x_3, x_8, x_9);
return x_10;
}
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg(x_2, x_3, x_4, x_5, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(x_6);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
return x_13;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_4);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_apply_2(x_9, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_fget(x_4, x_5);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_15, 0, x_1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_apply_2(x_18, lean_box(0), x_20);
x_22 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_21, x_15);
x_23 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_22, x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_24 = lean_ctor_get(x_14, 0);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_apply_1(x_2, x_24);
x_26 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_25, x_15);
x_27 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_26, x_16);
return x_27;
}
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg), 5, 0);
return x_2;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg(x_2, x_3, x_4, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(x_5);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___rarg(x_1, x_2, x_3, x_6);
x_8 = lean_alloc_closure((void*)(l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_3);
x_9 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_LocalContext_allM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg(x_1, x_3, x_5, x_4);
x_7 = lean_alloc_closure((void*)(l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_LocalContext_allM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__1(x_1, x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_allM___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_LocalContext_allM___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PersistentArray_anyM___at_Lean_LocalContext_allM___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_LocalContext_allM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_LocalContext_allM(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_3, x_14);
lean_dec(x_3);
x_3 = x_15;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_3, x_14);
lean_dec(x_3);
x_3 = x_15;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5(x_1, x_5, x_6);
return x_7;
}
else
{
lean_dec(x_1);
return x_4;
}
}
}
uint8_t l_Lean_LocalContext_any(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1(x_2, x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_any___spec__2(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_any___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_LocalContext_any___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_any___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalContext_any(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = 1;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_11);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = 1;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_1);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5(x_1, x_5, x_6);
return x_7;
}
else
{
lean_dec(x_1);
return x_4;
}
}
}
uint8_t l_Lean_LocalContext_all(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1(x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_LocalContext_all___spec__2(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_LocalContext_all___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_LocalContext_all___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_LocalContext_all___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_LocalContext_all(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init_Data_PersistentArray_Basic(lean_object*);
lean_object* initialize_Init_Data_PersistentHashMap_Basic(lean_object*);
lean_object* initialize_Init_Lean_Expr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_LocalContext(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_PersistentArray_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_PersistentHashMap_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Expr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_LocalDecl_Inhabited___closed__1 = _init_l_Lean_LocalDecl_Inhabited___closed__1();
lean_mark_persistent(l_Lean_LocalDecl_Inhabited___closed__1);
l_Lean_LocalDecl_Inhabited = _init_l_Lean_LocalDecl_Inhabited();
lean_mark_persistent(l_Lean_LocalDecl_Inhabited);
l_Lean_LocalDecl_value___closed__1 = _init_l_Lean_LocalDecl_value___closed__1();
lean_mark_persistent(l_Lean_LocalDecl_value___closed__1);
l_Lean_LocalDecl_value___closed__2 = _init_l_Lean_LocalDecl_value___closed__2();
lean_mark_persistent(l_Lean_LocalDecl_value___closed__2);
l_Lean_LocalContext_Inhabited___closed__1 = _init_l_Lean_LocalContext_Inhabited___closed__1();
lean_mark_persistent(l_Lean_LocalContext_Inhabited___closed__1);
l_Lean_LocalContext_Inhabited___closed__2 = _init_l_Lean_LocalContext_Inhabited___closed__2();
lean_mark_persistent(l_Lean_LocalContext_Inhabited___closed__2);
l_Lean_LocalContext_Inhabited___closed__3 = _init_l_Lean_LocalContext_Inhabited___closed__3();
lean_mark_persistent(l_Lean_LocalContext_Inhabited___closed__3);
l_Lean_LocalContext_Inhabited = _init_l_Lean_LocalContext_Inhabited();
lean_mark_persistent(l_Lean_LocalContext_Inhabited);
l_Lean_LocalContext_empty = _init_l_Lean_LocalContext_empty();
lean_mark_persistent(l_Lean_LocalContext_empty);
l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1 = _init_l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1();
lean_mark_persistent(l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
