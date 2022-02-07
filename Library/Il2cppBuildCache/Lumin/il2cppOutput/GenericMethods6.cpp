#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel
struct DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856;
// UnityEngine.XR.MagicLeap.MLWebRTC/PeerConnection
struct PeerConnection_tFF3643DA161E64B0F939A4D66535A5BCC9C2B685;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnClosedDelegate
struct OnClosedDelegate_tB90AF429B138B795DC3FE2E2C12AD92BDB4421AC;
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnMessageBinaryDelegate
struct OnMessageBinaryDelegate_t64F693AC010F5BA14A48DA6364E46EF793FB800E;
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnMessageTextDelegate
struct OnMessageTextDelegate_t7DDAECE9DFE8C59C93A1DD33EC33EFF65C70587B;
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnOpenedDelegate
struct OnOpenedDelegate_t69C637453BFB834EEF5AB48F5719116BEDC0208E;

IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MLWebRTCDataChannelMessage_Create_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m53C780BD00D1191523C22E1D3A2E2178E82E246E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MLWebRTCDataChannelMessage_Create_TisRuntimeObject_m9EB90DFC62D45FFE69469B0A98F1677F3A9271B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeBindings_SendMessageToDataChannel_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FE74D3D6B1E11FB7382ED94B303CD5E1A50E2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeBindings_SendMessageToDataChannel_TisRuntimeObject_m82E9F0B7645C7E4DD64456F601E219ABC9CC0897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings
struct NativeBindings_t54D6E069620BF27CA3796F2A99F52F7E95D0D1A2  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
	}
};


// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLResult/Code
struct Code_t188333EEE5268C7988596D9ED31D430EF7C049D8 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLResult/Code::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Code_t188333EEE5268C7988596D9ED31D430EF7C049D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel
struct DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_0;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::<Handle>k__BackingField
	uint64_t ___U3CHandleU3Ek__BackingField_1;
	// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnOpenedDelegate UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::OnOpened
	OnOpenedDelegate_t69C637453BFB834EEF5AB48F5719116BEDC0208E * ___OnOpened_2;
	// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnClosedDelegate UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::OnClosed
	OnClosedDelegate_tB90AF429B138B795DC3FE2E2C12AD92BDB4421AC * ___OnClosed_3;
	// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnMessageTextDelegate UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::OnMessageText
	OnMessageTextDelegate_t7DDAECE9DFE8C59C93A1DD33EC33EFF65C70587B * ___OnMessageText_4;
	// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/OnMessageBinaryDelegate UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::OnMessageBinary
	OnMessageBinaryDelegate_t64F693AC010F5BA14A48DA6364E46EF793FB800E * ___OnMessageBinary_5;
	// System.String UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_6;
	// UnityEngine.XR.MagicLeap.MLWebRTC/PeerConnection UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::<ParentConnection>k__BackingField
	PeerConnection_tFF3643DA161E64B0F939A4D66535A5BCC9C2B685 * ___U3CParentConnectionU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_gcHandle_0() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___gcHandle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_0() const { return ___gcHandle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_0() { return &___gcHandle_0; }
	inline void set_gcHandle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_0 = value;
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___U3CHandleU3Ek__BackingField_1)); }
	inline uint64_t get_U3CHandleU3Ek__BackingField_1() const { return ___U3CHandleU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CHandleU3Ek__BackingField_1() { return &___U3CHandleU3Ek__BackingField_1; }
	inline void set_U3CHandleU3Ek__BackingField_1(uint64_t value)
	{
		___U3CHandleU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_OnOpened_2() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___OnOpened_2)); }
	inline OnOpenedDelegate_t69C637453BFB834EEF5AB48F5719116BEDC0208E * get_OnOpened_2() const { return ___OnOpened_2; }
	inline OnOpenedDelegate_t69C637453BFB834EEF5AB48F5719116BEDC0208E ** get_address_of_OnOpened_2() { return &___OnOpened_2; }
	inline void set_OnOpened_2(OnOpenedDelegate_t69C637453BFB834EEF5AB48F5719116BEDC0208E * value)
	{
		___OnOpened_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpened_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnClosed_3() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___OnClosed_3)); }
	inline OnClosedDelegate_tB90AF429B138B795DC3FE2E2C12AD92BDB4421AC * get_OnClosed_3() const { return ___OnClosed_3; }
	inline OnClosedDelegate_tB90AF429B138B795DC3FE2E2C12AD92BDB4421AC ** get_address_of_OnClosed_3() { return &___OnClosed_3; }
	inline void set_OnClosed_3(OnClosedDelegate_tB90AF429B138B795DC3FE2E2C12AD92BDB4421AC * value)
	{
		___OnClosed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClosed_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageText_4() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___OnMessageText_4)); }
	inline OnMessageTextDelegate_t7DDAECE9DFE8C59C93A1DD33EC33EFF65C70587B * get_OnMessageText_4() const { return ___OnMessageText_4; }
	inline OnMessageTextDelegate_t7DDAECE9DFE8C59C93A1DD33EC33EFF65C70587B ** get_address_of_OnMessageText_4() { return &___OnMessageText_4; }
	inline void set_OnMessageText_4(OnMessageTextDelegate_t7DDAECE9DFE8C59C93A1DD33EC33EFF65C70587B * value)
	{
		___OnMessageText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageText_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageBinary_5() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___OnMessageBinary_5)); }
	inline OnMessageBinaryDelegate_t64F693AC010F5BA14A48DA6364E46EF793FB800E * get_OnMessageBinary_5() const { return ___OnMessageBinary_5; }
	inline OnMessageBinaryDelegate_t64F693AC010F5BA14A48DA6364E46EF793FB800E ** get_address_of_OnMessageBinary_5() { return &___OnMessageBinary_5; }
	inline void set_OnMessageBinary_5(OnMessageBinaryDelegate_t64F693AC010F5BA14A48DA6364E46EF793FB800E * value)
	{
		___OnMessageBinary_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageBinary_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___U3CLabelU3Ek__BackingField_6)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_6() const { return ___U3CLabelU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_6() { return &___U3CLabelU3Ek__BackingField_6; }
	inline void set_U3CLabelU3Ek__BackingField_6(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParentConnectionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856, ___U3CParentConnectionU3Ek__BackingField_7)); }
	inline PeerConnection_tFF3643DA161E64B0F939A4D66535A5BCC9C2B685 * get_U3CParentConnectionU3Ek__BackingField_7() const { return ___U3CParentConnectionU3Ek__BackingField_7; }
	inline PeerConnection_tFF3643DA161E64B0F939A4D66535A5BCC9C2B685 ** get_address_of_U3CParentConnectionU3Ek__BackingField_7() { return &___U3CParentConnectionU3Ek__BackingField_7; }
	inline void set_U3CParentConnectionU3Ek__BackingField_7(PeerConnection_tFF3643DA161E64B0F939A4D66535A5BCC9C2B685 * value)
	{
		___U3CParentConnectionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentConnectionU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage
struct MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::Version
	uint32_t ___Version_0;
	// System.IntPtr UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::Data
	intptr_t ___Data_1;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::DataSize
	uint64_t ___DataSize_2;
	// System.Boolean UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::IsBinary
	bool ___IsBinary_3;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B, ___Version_0)); }
	inline uint32_t get_Version_0() const { return ___Version_0; }
	inline uint32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(uint32_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B, ___Data_1)); }
	inline intptr_t get_Data_1() const { return ___Data_1; }
	inline intptr_t* get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(intptr_t value)
	{
		___Data_1 = value;
	}

	inline static int32_t get_offset_of_DataSize_2() { return static_cast<int32_t>(offsetof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B, ___DataSize_2)); }
	inline uint64_t get_DataSize_2() const { return ___DataSize_2; }
	inline uint64_t* get_address_of_DataSize_2() { return &___DataSize_2; }
	inline void set_DataSize_2(uint64_t value)
	{
		___DataSize_2 = value;
	}

	inline static int32_t get_offset_of_IsBinary_3() { return static_cast<int32_t>(offsetof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B, ___IsBinary_3)); }
	inline bool get_IsBinary_3() const { return ___IsBinary_3; }
	inline bool* get_address_of_IsBinary_3() { return &___IsBinary_3; }
	inline void set_IsBinary_3(bool value)
	{
		___IsBinary_3 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.UInt64 UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t DataChannel_get_Handle_m86F9033431C41DD2B052796323011CEAA281517B_inline (DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult/Code UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings::MLWebRTCDataChannelSendMessage(System.UInt64,UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_MLWebRTCDataChannelSendMessage_m34A04C28ACFD1DC54302875D4C2ABC364A61046D (uint64_t ___dataChannelHandle0, MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B * ___message1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A (Type_t * ___t0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::Add(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_Add_m2B5474B2DD6AAFB58082A97F0157DB8F824EDA29 (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_gshared (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_RuntimeMethod_var);
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_0 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_2 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_2, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		V_1 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_2;
		V_2 = (int32_t)0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_3 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		V_3 = (int32_t)L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_5 = V_1;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8;
		L_8 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6, (int32_t)L_7);
		NullCheck((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_8, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_13 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_14 = V_1;
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13, (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_14, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15, /*hidden argument*/NULL);
		NullCheck((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_17;
		L_17 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		V_0 = (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_17;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_20 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_21;
		L_21 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_22 = V_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_23 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_24;
		L_24 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_22) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_25 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_25;
	}

IL_0069:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_26 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_27 = V_0;
		NullCheck((Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_28;
		L_28 = VirtFuncInvoker2< Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* >::Invoke(19 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_27, (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)NULL);
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_28;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_RuntimeMethod_var);
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_7 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_11), (int32_t)L_9, (int32_t)L_10, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_8 = L_11;
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0036:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_15), (int32_t)L_13, (int32_t)L_14, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_12 = L_15;
	}

IL_0046:
	{
		// }
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult/Code UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings::SendMessageToDataChannel<System.Int32>(UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_SendMessageToDataChannel_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FE74D3D6B1E11FB7382ED94B303CD5E1A50E2F6_gshared (DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * ___dataChannel0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBindings_SendMessageToDataChannel_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FE74D3D6B1E11FB7382ED94B303CD5E1A50E2F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NativeBindings_SendMessageToDataChannel_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FE74D3D6B1E11FB7382ED94B303CD5E1A50E2F6_RuntimeMethod_var);
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// NativeBindings.MLWebRTCDataChannelMessage messageNative = NativeBindings.MLWebRTCDataChannelMessage.Create(message);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___message1;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_1;
		L_1 = ((  MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_1;
		// MLResult.Code resultCode = NativeBindings.MLWebRTCDataChannelSendMessage(dataChannel.Handle, in messageNative);
		DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * L_2 = ___dataChannel0;
		NullCheck((DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 *)L_2);
		uint64_t L_3;
		L_3 = DataChannel_get_Handle_m86F9033431C41DD2B052796323011CEAA281517B_inline((DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 *)L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = NativeBindings_MLWebRTCDataChannelSendMessage_m34A04C28ACFD1DC54302875D4C2ABC364A61046D((uint64_t)L_3, (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B *)(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_4;
		// Marshal.FreeHGlobal(messageNative.Data);
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_5 = V_0;
		intptr_t L_6 = (intptr_t)L_5.get_Data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_6, /*hidden argument*/NULL);
		// return resultCode;
		int32_t L_7 = V_1;
		V_2 = (int32_t)L_7;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_8 = V_2;
		return (int32_t)L_8;
	}
}
// UnityEngine.XR.MagicLeap.MLResult/Code UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings::SendMessageToDataChannel<System.Object>(UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeBindings_SendMessageToDataChannel_TisRuntimeObject_m82E9F0B7645C7E4DD64456F601E219ABC9CC0897_gshared (DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * ___dataChannel0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBindings_SendMessageToDataChannel_TisRuntimeObject_m82E9F0B7645C7E4DD64456F601E219ABC9CC0897_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(NativeBindings_SendMessageToDataChannel_TisRuntimeObject_m82E9F0B7645C7E4DD64456F601E219ABC9CC0897_RuntimeMethod_var);
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// NativeBindings.MLWebRTCDataChannelMessage messageNative = NativeBindings.MLWebRTCDataChannelMessage.Create(message);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___message1;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_1;
		L_1 = ((  MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_1;
		// MLResult.Code resultCode = NativeBindings.MLWebRTCDataChannelSendMessage(dataChannel.Handle, in messageNative);
		DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * L_2 = ___dataChannel0;
		NullCheck((DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 *)L_2);
		uint64_t L_3;
		L_3 = DataChannel_get_Handle_m86F9033431C41DD2B052796323011CEAA281517B_inline((DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 *)L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = NativeBindings_MLWebRTCDataChannelSendMessage_m34A04C28ACFD1DC54302875D4C2ABC364A61046D((uint64_t)L_3, (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B *)(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_4;
		// Marshal.FreeHGlobal(messageNative.Data);
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_5 = V_0;
		intptr_t L_6 = (intptr_t)L_5.get_Data_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_6, /*hidden argument*/NULL);
		// return resultCode;
		int32_t L_7 = V_1;
		V_2 = (int32_t)L_7;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_8 = V_2;
		return (int32_t)L_8;
	}
}
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::Create<System.Int32>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  MLWebRTCDataChannelMessage_Create_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m53C780BD00D1191523C22E1D3A2E2178E82E246E_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLWebRTCDataChannelMessage_Create_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m53C780BD00D1191523C22E1D3A2E2178E82E246E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWebRTCDataChannelMessage_Create_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m53C780BD00D1191523C22E1D3A2E2178E82E246E_RuntimeMethod_var);
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// MLWebRTCDataChannelMessage channelMessage = new MLWebRTCDataChannelMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B ));
		// channelMessage.Version = 1;
		(&V_0)->set_Version_0(1);
		// int typeSize = Marshal.SizeOf(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		// int unmanagedByteArrayLength = (typeSize * message.Length);
		int32_t L_3 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___message0;
		NullCheck(L_4);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// channelMessage.Data = Marshal.AllocHGlobal(unmanagedByteArrayLength);
		int32_t L_5 = V_2;
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC((int32_t)L_5, /*hidden argument*/NULL);
		(&V_0)->set_Data_1((intptr_t)L_6);
		// IntPtr next = channelMessage.Data;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_7 = V_0;
		intptr_t L_8 = (intptr_t)L_7.get_Data_1();
		V_3 = (intptr_t)L_8;
		// for (int i = 0; i < message.Length; ++i)
		V_4 = (int32_t)0;
		goto IL_0060;
	}

IL_0040:
	{
		// Marshal.StructureToPtr(message[i], next, false);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___message0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		intptr_t L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		((  void (*) (int32_t, intptr_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((int32_t)L_12, (intptr_t)L_13, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// next = IntPtr.Add(next, typeSize);
		intptr_t L_14 = V_3;
		int32_t L_15 = V_1;
		intptr_t L_16;
		L_16 = IntPtr_Add_m2B5474B2DD6AAFB58082A97F0157DB8F824EDA29((intptr_t)L_14, (int32_t)L_15, /*hidden argument*/NULL);
		V_3 = (intptr_t)L_16;
		// for (int i = 0; i < message.Length; ++i)
		int32_t L_17 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < message.Length; ++i)
		int32_t L_18 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ___message0;
		NullCheck(L_19);
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0040;
		}
	}
	{
		// channelMessage.DataSize = (ulong)unmanagedByteArrayLength;
		int32_t L_21 = V_2;
		(&V_0)->set_DataSize_2(((int64_t)((int64_t)L_21)));
		// channelMessage.IsBinary = true;
		(&V_0)->set_IsBinary_3((bool)1);
		// return channelMessage;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_22 = V_0;
		V_6 = (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_22;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_23 = V_6;
		return (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_23;
	}
}
// UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage UnityEngine.XR.MagicLeap.MLWebRTC/DataChannel/NativeBindings/MLWebRTCDataChannelMessage::Create<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  MLWebRTCDataChannelMessage_Create_TisRuntimeObject_m9EB90DFC62D45FFE69469B0A98F1677F3A9271B1_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLWebRTCDataChannelMessage_Create_TisRuntimeObject_m9EB90DFC62D45FFE69469B0A98F1677F3A9271B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWebRTCDataChannelMessage_Create_TisRuntimeObject_m9EB90DFC62D45FFE69469B0A98F1677F3A9271B1_RuntimeMethod_var);
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// MLWebRTCDataChannelMessage channelMessage = new MLWebRTCDataChannelMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B ));
		// channelMessage.Version = 1;
		(&V_0)->set_Version_0(1);
		// int typeSize = Marshal.SizeOf(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_m5482D50095CD4ECFFE66778DDAB9173AD834E85A((Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (int32_t)L_2;
		// int unmanagedByteArrayLength = (typeSize * message.Length);
		int32_t L_3 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___message0;
		NullCheck(L_4);
		V_2 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// channelMessage.Data = Marshal.AllocHGlobal(unmanagedByteArrayLength);
		int32_t L_5 = V_2;
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC((int32_t)L_5, /*hidden argument*/NULL);
		(&V_0)->set_Data_1((intptr_t)L_6);
		// IntPtr next = channelMessage.Data;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_7 = V_0;
		intptr_t L_8 = (intptr_t)L_7.get_Data_1();
		V_3 = (intptr_t)L_8;
		// for (int i = 0; i < message.Length; ++i)
		V_4 = (int32_t)0;
		goto IL_0060;
	}

IL_0040:
	{
		// Marshal.StructureToPtr(message[i], next, false);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___message0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		intptr_t L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject *, intptr_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject *)L_12, (intptr_t)L_13, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// next = IntPtr.Add(next, typeSize);
		intptr_t L_14 = V_3;
		int32_t L_15 = V_1;
		intptr_t L_16;
		L_16 = IntPtr_Add_m2B5474B2DD6AAFB58082A97F0157DB8F824EDA29((intptr_t)L_14, (int32_t)L_15, /*hidden argument*/NULL);
		V_3 = (intptr_t)L_16;
		// for (int i = 0; i < message.Length; ++i)
		int32_t L_17 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < message.Length; ++i)
		int32_t L_18 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = ___message0;
		NullCheck(L_19);
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0040;
		}
	}
	{
		// channelMessage.DataSize = (ulong)unmanagedByteArrayLength;
		int32_t L_21 = V_2;
		(&V_0)->set_DataSize_2(((int64_t)((int64_t)L_21)));
		// channelMessage.IsBinary = true;
		(&V_0)->set_IsBinary_3((bool)1);
		// return channelMessage;
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_22 = V_0;
		V_6 = (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_22;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B  L_23 = V_6;
		return (MLWebRTCDataChannelMessage_tC863833E11CC38CA35110CA1BEC845A1D8EAEB5B )L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t DataChannel_get_Handle_m86F9033431C41DD2B052796323011CEAA281517B_inline (DataChannel_tAA87D4E43F6406A11CBEE58E9AE14622B82C4856 * __this, const RuntimeMethod* method)
{
	{
		// internal ulong Handle { get; private set; }
		uint64_t L_0 = __this->get_U3CHandleU3Ek__BackingField_1();
		return L_0;
	}
}
