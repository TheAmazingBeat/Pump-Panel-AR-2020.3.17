#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.XR.MagicLeap.MLPolygon
struct MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache
struct GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F;
// UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate
struct GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E;

IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MagicLeapImageTrackingSubsystem_t4F119B98E1B5A60E2FDA42790033CE6834FA4401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1BCE56677723C9E0BB16F78FA8029503D359A880;
IL2CPP_EXTERN_C String_t* _stringLiteral86203D86B94AB2C71D3E7ADE4100EDD5B6039EF0;
IL2CPP_EXTERN_C const RuntimeMethod* CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache__ctor_m9D379C60128F383DE612FAAE5FC9E77812DC77A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_get_cachePath_m5D4B9E985CEB70B0CE66A36859EF5E69D5849EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_get_enabled_m8FD99A1D812A8276FAA0A8D280AAC501844CC64E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_get_maxBlobSizeInBytes_m9C9234758D507FAD49E8FF4BA6C9EF52AF3AB3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_get_maxFileSizeInBytes_mD680924714F8A08BECCFC59662DFAE8681C5F5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_set_enabled_mCDA96945C45A2E0C198D32B9491E51FEE8BB9448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_set_maxBlobSizeInBytes_m2F34709FDE21184D17ADC971B900E83CFC353436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLCache_set_maxFileSizeInBytes_m1A7DCFE71A5E059A2702D1B61C5C420FB4276D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GetGesturesDelegate_BeginInvoke_mC094285CB4FDAEAC12042405D0768A3ED882620C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GetGesturesDelegate_EndInvoke_mEF7E771D9DF6C5061F4D1E0D4F4C75F579898C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GetGesturesDelegate_Invoke_mF3E02DC009643A540ADABA5FF9D316049D2D321B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GetGesturesDelegate__ctor_m207679705E55F70BE15F1BD9780EEC7AAD8003FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_Release_m5EA8596835CD5F5CC7E06444D294F7BD7CBA1A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_Retain_m283DC9A5FBCC34659EC79A5AF0020D7A61A46BA8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
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

// UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache
struct GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::m_Enabled
	bool ___m_Enabled_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::m_MaxBlobSizeInBytes
	uint32_t ___m_MaxBlobSizeInBytes_1;
	// System.UInt32 UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::m_MaxFileSizeInBytes
	uint32_t ___m_MaxFileSizeInBytes_2;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxBlobSizeInBytes_1() { return static_cast<int32_t>(offsetof(GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F, ___m_MaxBlobSizeInBytes_1)); }
	inline uint32_t get_m_MaxBlobSizeInBytes_1() const { return ___m_MaxBlobSizeInBytes_1; }
	inline uint32_t* get_address_of_m_MaxBlobSizeInBytes_1() { return &___m_MaxBlobSizeInBytes_1; }
	inline void set_m_MaxBlobSizeInBytes_1(uint32_t value)
	{
		___m_MaxBlobSizeInBytes_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxFileSizeInBytes_2() { return static_cast<int32_t>(offsetof(GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F, ___m_MaxFileSizeInBytes_2)); }
	inline uint32_t get_m_MaxFileSizeInBytes_2() const { return ___m_MaxFileSizeInBytes_2; }
	inline uint32_t* get_address_of_m_MaxFileSizeInBytes_2() { return &___m_MaxFileSizeInBytes_2; }
	inline void set_m_MaxFileSizeInBytes_2(uint32_t value)
	{
		___m_MaxFileSizeInBytes_2 = value;
	}
};


// UnityEngine.XR.MagicLeap.Internal.PerceptionHandle/Native
struct Native_t4704B6400EBEE925FB00AD92F9BF0B668AE2F9AC  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
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


// UnityEngine.XR.MagicLeap.MLPlaneBoundary
struct MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416 
{
public:
	// UnityEngine.XR.MagicLeap.MLPolygon* UnityEngine.XR.MagicLeap.MLPlaneBoundary::polygon
	MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * ___polygon_0;
	// UnityEngine.XR.MagicLeap.MLPolygon* UnityEngine.XR.MagicLeap.MLPlaneBoundary::holes
	MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * ___holes_1;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLPlaneBoundary::holes_count
	uint32_t ___holes_count_2;

public:
	inline static int32_t get_offset_of_polygon_0() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416, ___polygon_0)); }
	inline MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * get_polygon_0() const { return ___polygon_0; }
	inline MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 ** get_address_of_polygon_0() { return &___polygon_0; }
	inline void set_polygon_0(MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * value)
	{
		___polygon_0 = value;
	}

	inline static int32_t get_offset_of_holes_1() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416, ___holes_1)); }
	inline MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * get_holes_1() const { return ___holes_1; }
	inline MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 ** get_address_of_holes_1() { return &___holes_1; }
	inline void set_holes_1(MLPolygon_t778FE89DE0BD0E4871D5EF3E71130B26ED02D1C0 * value)
	{
		___holes_1 = value;
	}

	inline static int32_t get_offset_of_holes_count_2() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416, ___holes_count_2)); }
	inline uint32_t get_holes_count_2() const { return ___holes_count_2; }
	inline uint32_t* get_address_of_holes_count_2() { return &___holes_count_2; }
	inline void set_holes_count_2(uint32_t value)
	{
		___holes_count_2 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.XR.MagicLeap.MLCoordinateFrameUID/<data>e__FixedBuffer
struct U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6 
{
public:
	union
	{
		struct
		{
			// System.UInt64 UnityEngine.XR.MagicLeap.MLCoordinateFrameUID/<data>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6__padding[16];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6, ___FixedElementField_0)); }
	inline uint64_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint64_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint64_t value)
	{
		___FixedElementField_0 = value;
	}
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLCoordinateFrameUID
struct MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5 
{
public:
	// UnityEngine.XR.MagicLeap.MLCoordinateFrameUID/<data>e__FixedBuffer UnityEngine.XR.MagicLeap.MLCoordinateFrameUID::data
	U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5, ___data_0)); }
	inline U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6  get_data_0() const { return ___data_0; }
	inline U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(U3CdataU3Ee__FixedBuffer_t9C20A467F80740C3FBC07EC06843565A49351FB6  value)
	{
		___data_0 = value;
	}
};


// UnityEngine.XR.MagicLeap.Internal.PerceptionHandle
struct PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC 
{
public:
	// System.IntPtr UnityEngine.XR.MagicLeap.Internal.PerceptionHandle::m_Handle
	intptr_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Jobs.TransformAccess
struct TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A 
{
public:
	// System.IntPtr UnityEngine.Jobs.TransformAccess::hierarchy
	intptr_t ___hierarchy_0;
	// System.Int32 UnityEngine.Jobs.TransformAccess::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_hierarchy_0() { return static_cast<int32_t>(offsetof(TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A, ___hierarchy_0)); }
	inline intptr_t get_hierarchy_0() const { return ___hierarchy_0; }
	inline intptr_t* get_address_of_hierarchy_0() { return &___hierarchy_0; }
	inline void set_hierarchy_0(intptr_t value)
	{
		___hierarchy_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob
struct CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5 
{
public:
	// System.IntPtr UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob::nativeProvider
	intptr_t ___nativeProvider_0;

public:
	inline static int32_t get_offset_of_nativeProvider_0() { return static_cast<int32_t>(offsetof(CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5, ___nativeProvider_0)); }
	inline intptr_t get_nativeProvider_0() const { return ___nativeProvider_0; }
	inline intptr_t* get_address_of_nativeProvider_0() { return &___nativeProvider_0; }
	inline void set_nativeProvider_0(intptr_t value)
	{
		___nativeProvider_0 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.MagicLeap.MLPlaneBoundary>
struct NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.XR.MagicLeap.PlaneBoundary
struct PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.PlaneBoundary::<polygonVertexCount>k__BackingField
	int32_t ___U3CpolygonVertexCountU3Ek__BackingField_0;
	// UnityEngine.XR.MagicLeap.MLPlaneBoundary UnityEngine.XR.MagicLeap.PlaneBoundary::m_Boundary
	MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416  ___m_Boundary_1;
	// UnityEngine.Pose UnityEngine.XR.MagicLeap.PlaneBoundary::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;

public:
	inline static int32_t get_offset_of_U3CpolygonVertexCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018, ___U3CpolygonVertexCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CpolygonVertexCountU3Ek__BackingField_0() const { return ___U3CpolygonVertexCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CpolygonVertexCountU3Ek__BackingField_0() { return &___U3CpolygonVertexCountU3Ek__BackingField_0; }
	inline void set_U3CpolygonVertexCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CpolygonVertexCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Boundary_1() { return static_cast<int32_t>(offsetof(PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018, ___m_Boundary_1)); }
	inline MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416  get_m_Boundary_1() const { return ___m_Boundary_1; }
	inline MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416 * get_address_of_m_Boundary_1() { return &___m_Boundary_1; }
	inline void set_m_Boundary_1(MLPlaneBoundary_t17F49453DEA8037BB811C19CD142471FE5161416  value)
	{
		___m_Boundary_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider
struct MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E  : public Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E
{
public:
	// UnityEngine.XR.MagicLeap.Internal.PerceptionHandle UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider::m_PerceptionHandle
	PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  ___m_PerceptionHandle_3;
	// System.Int32 UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider::m_RequestedNumberOfMovingImages
	int32_t ___m_RequestedNumberOfMovingImages_5;

public:
	inline static int32_t get_offset_of_m_PerceptionHandle_3() { return static_cast<int32_t>(offsetof(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E, ___m_PerceptionHandle_3)); }
	inline PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  get_m_PerceptionHandle_3() const { return ___m_PerceptionHandle_3; }
	inline PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC * get_address_of_m_PerceptionHandle_3() { return &___m_PerceptionHandle_3; }
	inline void set_m_PerceptionHandle_3(PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  value)
	{
		___m_PerceptionHandle_3 = value;
	}

	inline static int32_t get_offset_of_m_RequestedNumberOfMovingImages_5() { return static_cast<int32_t>(offsetof(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E, ___m_RequestedNumberOfMovingImages_5)); }
	inline int32_t get_m_RequestedNumberOfMovingImages_5() const { return ___m_RequestedNumberOfMovingImages_5; }
	inline int32_t* get_address_of_m_RequestedNumberOfMovingImages_5() { return &___m_RequestedNumberOfMovingImages_5; }
	inline void set_m_RequestedNumberOfMovingImages_5(int32_t value)
	{
		___m_RequestedNumberOfMovingImages_5 = value;
	}
};

struct MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_StaticFields
{
public:
	// System.IntPtr UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider::s_NativeProviderPtr
	intptr_t ___s_NativeProviderPtr_1;
	// Unity.Jobs.JobHandle UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider::s_NativeTrackerCreationJobHandle
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___s_NativeTrackerCreationJobHandle_2;

public:
	inline static int32_t get_offset_of_s_NativeProviderPtr_1() { return static_cast<int32_t>(offsetof(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_StaticFields, ___s_NativeProviderPtr_1)); }
	inline intptr_t get_s_NativeProviderPtr_1() const { return ___s_NativeProviderPtr_1; }
	inline intptr_t* get_address_of_s_NativeProviderPtr_1() { return &___s_NativeProviderPtr_1; }
	inline void set_s_NativeProviderPtr_1(intptr_t value)
	{
		___s_NativeProviderPtr_1 = value;
	}

	inline static int32_t get_offset_of_s_NativeTrackerCreationJobHandle_2() { return static_cast<int32_t>(offsetof(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_StaticFields, ___s_NativeTrackerCreationJobHandle_2)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_s_NativeTrackerCreationJobHandle_2() const { return ___s_NativeTrackerCreationJobHandle_2; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_s_NativeTrackerCreationJobHandle_2() { return &___s_NativeTrackerCreationJobHandle_2; }
	inline void set_s_NativeTrackerCreationJobHandle_2(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___s_NativeTrackerCreationJobHandle_2 = value;
	}
};


// UnityEngine.XR.MagicLeap.ReferenceFrame/Cinfo
struct Cinfo_t108AE6F537FD17A6634C97E76D81B8C0EFC90DB6 
{
public:
	// UnityEngine.Pose UnityEngine.XR.MagicLeap.ReferenceFrame/Cinfo::closetCoordinateFrame
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___closetCoordinateFrame_0;
	// UnityEngine.XR.MagicLeap.MLCoordinateFrameUID UnityEngine.XR.MagicLeap.ReferenceFrame/Cinfo::cfuid
	MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5  ___cfuid_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.MagicLeap.ReferenceFrame/Cinfo::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.Pose UnityEngine.XR.MagicLeap.ReferenceFrame/Cinfo::initialAnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___initialAnchorPose_3;

public:
	inline static int32_t get_offset_of_closetCoordinateFrame_0() { return static_cast<int32_t>(offsetof(Cinfo_t108AE6F537FD17A6634C97E76D81B8C0EFC90DB6, ___closetCoordinateFrame_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_closetCoordinateFrame_0() const { return ___closetCoordinateFrame_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_closetCoordinateFrame_0() { return &___closetCoordinateFrame_0; }
	inline void set_closetCoordinateFrame_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___closetCoordinateFrame_0 = value;
	}

	inline static int32_t get_offset_of_cfuid_1() { return static_cast<int32_t>(offsetof(Cinfo_t108AE6F537FD17A6634C97E76D81B8C0EFC90DB6, ___cfuid_1)); }
	inline MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5  get_cfuid_1() const { return ___cfuid_1; }
	inline MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5 * get_address_of_cfuid_1() { return &___cfuid_1; }
	inline void set_cfuid_1(MLCoordinateFrameUID_tA8D0393E638F9B4C5B7EBB2A1073BF5CB5FB71F5  value)
	{
		___cfuid_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(Cinfo_t108AE6F537FD17A6634C97E76D81B8C0EFC90DB6, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_initialAnchorPose_3() { return static_cast<int32_t>(offsetof(Cinfo_t108AE6F537FD17A6634C97E76D81B8C0EFC90DB6, ___initialAnchorPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_initialAnchorPose_3() const { return ___initialAnchorPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_initialAnchorPose_3() { return &___initialAnchorPose_3; }
	inline void set_initialAnchorPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___initialAnchorPose_3 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.PlaneBoundaryCollection
struct PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.MagicLeap.MLPlaneBoundary> UnityEngine.XR.MagicLeap.PlaneBoundaryCollection::m_Boundaries
	NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD  ___m_Boundaries_0;
	// UnityEngine.Pose UnityEngine.XR.MagicLeap.PlaneBoundaryCollection::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;

public:
	inline static int32_t get_offset_of_m_Boundaries_0() { return static_cast<int32_t>(offsetof(PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E, ___m_Boundaries_0)); }
	inline NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD  get_m_Boundaries_0() const { return ___m_Boundaries_0; }
	inline NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD * get_address_of_m_Boundaries_0() { return &___m_Boundaries_0; }
	inline void set_m_Boundaries_0(NativeArray_1_tE1F9EADA2B16E718DD555B825EB913F29023B0CD  value)
	{
		___m_Boundaries_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}
};


// UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob
struct CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC 
{
public:
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::Distance
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___Distance_0;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_1;

public:
	inline static int32_t get_offset_of_Distance_0() { return static_cast<int32_t>(offsetof(CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC, ___Distance_0)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_Distance_0() const { return ___Distance_0; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_Distance_0() { return &___Distance_0; }
	inline void set_Distance_0(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___Distance_0 = value;
	}

	inline static int32_t get_offset_of_Origin_1() { return static_cast<int32_t>(offsetof(CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC, ___Origin_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_1() const { return ___Origin_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_1() { return &___Origin_1; }
	inline void set_Origin_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_1 = value;
	}
};


// UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate
struct GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator
struct Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::m_Index
	int32_t ___m_Index_0;
	// UnityEngine.XR.MagicLeap.PlaneBoundaryCollection UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::m_Collection
	PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  ___m_Collection_1;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_Collection_1() { return static_cast<int32_t>(offsetof(Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4, ___m_Collection_1)); }
	inline PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  get_m_Collection_1() const { return ___m_Collection_1; }
	inline PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * get_address_of_m_Collection_1() { return &___m_Collection_1; }
	inline void set_m_Collection_1(PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  value)
	{
		___m_Collection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::.ctor(UnityEngine.XR.MagicLeap.PlaneBoundaryCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  ___collection0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MagicLeap.PlaneBoundaryCollection::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlaneBoundaryCollection_get_count_mBB777C02F77C750C16C84233210F137E5FC076DF (PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.PlaneBoundary UnityEngine.XR.MagicLeap.PlaneBoundaryCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  PlaneBoundaryCollection_get_Item_m0323CA3D9B7A67F24F41E0F86D365B93089E19FF (PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.PlaneBoundary UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::.ctor(Unity.Collections.NativeArray`1<System.Single>,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836 (CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___dist0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Jobs.TransformAccess::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformAccess_get_position_mF9DA76B90F2806600A0E9FAC52D8CB96E08CDDD0 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB (CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob::CreateNativeTracker(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67 (intptr_t ___nativeProviderPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicLeapImageTrackingSubsystem_LogError_m602013FC22C22DA646932A1FC21562DC603EE3A1 (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MagicLeap.RcoApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RcoApi_Release_m0F0D2265ECADD91A3CAEF639841D41428A6F0567 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD (CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMagicLeap_ReleasePerceptionStack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityMagicLeap_RetainPerceptionStack();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL UnityMagicLeap_ImageTracking_TryCreateNativeTracker(intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GLCache_get_enabled_m8FD99A1D812A8276FAA0A8D280AAC501844CC64E (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_get_enabled_m8FD99A1D812A8276FAA0A8D280AAC501844CC64E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_get_enabled_m8FD99A1D812A8276FAA0A8D280AAC501844CC64E_RuntimeMethod_var);
	bool V_0 = false;
	{
		// get { return m_Enabled; }
		bool L_0 = __this->get_m_Enabled_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Enabled; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCache_set_enabled_mCDA96945C45A2E0C198D32B9491E51FEE8BB9448 (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_set_enabled_mCDA96945C45A2E0C198D32B9491E51FEE8BB9448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_set_enabled_mCDA96945C45A2E0C198D32B9491E51FEE8BB9448_RuntimeMethod_var);
	{
		// set { m_Enabled = value; }
		bool L_0 = ___value0;
		__this->set_m_Enabled_0(L_0);
		// set { m_Enabled = value; }
		return;
	}
}
// System.UInt32 UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::get_maxBlobSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GLCache_get_maxBlobSizeInBytes_m9C9234758D507FAD49E8FF4BA6C9EF52AF3AB3B2 (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_get_maxBlobSizeInBytes_m9C9234758D507FAD49E8FF4BA6C9EF52AF3AB3B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_get_maxBlobSizeInBytes_m9C9234758D507FAD49E8FF4BA6C9EF52AF3AB3B2_RuntimeMethod_var);
	uint32_t V_0 = 0;
	{
		// get { return m_MaxBlobSizeInBytes; }
		uint32_t L_0 = __this->get_m_MaxBlobSizeInBytes_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MaxBlobSizeInBytes; }
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::set_maxBlobSizeInBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCache_set_maxBlobSizeInBytes_m2F34709FDE21184D17ADC971B900E83CFC353436 (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_set_maxBlobSizeInBytes_m2F34709FDE21184D17ADC971B900E83CFC353436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_set_maxBlobSizeInBytes_m2F34709FDE21184D17ADC971B900E83CFC353436_RuntimeMethod_var);
	{
		// set { m_MaxBlobSizeInBytes = value; }
		uint32_t L_0 = ___value0;
		__this->set_m_MaxBlobSizeInBytes_1(L_0);
		// set { m_MaxBlobSizeInBytes = value; }
		return;
	}
}
// System.UInt32 UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::get_maxFileSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GLCache_get_maxFileSizeInBytes_mD680924714F8A08BECCFC59662DFAE8681C5F5F7 (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_get_maxFileSizeInBytes_mD680924714F8A08BECCFC59662DFAE8681C5F5F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_get_maxFileSizeInBytes_mD680924714F8A08BECCFC59662DFAE8681C5F5F7_RuntimeMethod_var);
	uint32_t V_0 = 0;
	{
		// get { return m_MaxFileSizeInBytes; }
		uint32_t L_0 = __this->get_m_MaxFileSizeInBytes_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MaxFileSizeInBytes; }
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::set_maxFileSizeInBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCache_set_maxFileSizeInBytes_m1A7DCFE71A5E059A2702D1B61C5C420FB4276D7E (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_set_maxFileSizeInBytes_m1A7DCFE71A5E059A2702D1B61C5C420FB4276D7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_set_maxFileSizeInBytes_m1A7DCFE71A5E059A2702D1B61C5C420FB4276D7E_RuntimeMethod_var);
	{
		// set { m_MaxFileSizeInBytes = value; }
		uint32_t L_0 = ___value0;
		__this->set_m_MaxFileSizeInBytes_2(L_0);
		// set { m_MaxFileSizeInBytes = value; }
		return;
	}
}
// System.String UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::get_cachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GLCache_get_cachePath_m5D4B9E985CEB70B0CE66A36859EF5E69D5849EEE (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache_get_cachePath_m5D4B9E985CEB70B0CE66A36859EF5E69D5849EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86203D86B94AB2C71D3E7ADE4100EDD5B6039EF0);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache_get_cachePath_m5D4B9E985CEB70B0CE66A36859EF5E69D5849EEE_RuntimeMethod_var);
	{
		// internal string cachePath => Path.Combine(Application.persistentDataPath, "blob_cache.dat");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, _stringLiteral86203D86B94AB2C71D3E7ADE4100EDD5B6039EF0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MagicLeapSettings/GLCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLCache__ctor_m9D379C60128F383DE612FAAE5FC9E77812DC77A4 (GLCache_t7BED8253FA6D14BA2841E5C1932AFC25CC5C882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLCache__ctor_m9D379C60128F383DE612FAAE5FC9E77812DC77A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GLCache__ctor_m9D379C60128F383DE612FAAE5FC9E77812DC77A4_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.Internal.PerceptionHandle/Native::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_Release_m5EA8596835CD5F5CC7E06444D294F7BD7CBA1A38 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_Release_m5EA8596835CD5F5CC7E06444D294F7BD7CBA1A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_Release_m5EA8596835CD5F5CC7E06444D294F7BD7CBA1A38_RuntimeMethod_var);
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityMagicLeap"), "UnityMagicLeap_ReleasePerceptionStack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityMagicLeap_ReleasePerceptionStack)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.IntPtr UnityEngine.XR.MagicLeap.Internal.PerceptionHandle/Native::Retain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_Retain_m283DC9A5FBCC34659EC79A5AF0020D7A61A46BA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Native_Retain_m283DC9A5FBCC34659EC79A5AF0020D7A61A46BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_Retain_m283DC9A5FBCC34659EC79A5AF0020D7A61A46BA8_RuntimeMethod_var);
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityMagicLeap"), "UnityMagicLeap_RetainPerceptionStack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityMagicLeap_RetainPerceptionStack)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::.ctor(UnityEngine.XR.MagicLeap.PlaneBoundaryCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F_RuntimeMethod_var);
	{
		// m_Index = -1;
		__this->set_m_Index_0((-1));
		// m_Collection = collection;
		PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  L_0 = ___collection0;
		__this->set_m_Collection_1(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F_AdjustorThunk (RuntimeObject * __this, PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E  ___collection0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * _thisAdjusted = reinterpret_cast<Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 *>(__this + _offset);
	Enumerator__ctor_m5FC91F7995A3CAE1B968E6BFCBF5CAE88610C27F(_thisAdjusted, ___collection0, method);
}
// System.Boolean UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// return ++m_Index < m_Collection.count;
		int32_t L_0 = __this->get_m_Index_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_m_Index_0(L_1);
		int32_t L_2 = V_0;
		PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * L_3 = __this->get_address_of_m_Collection_1();
		int32_t L_4;
		L_4 = PlaneBoundaryCollection_get_count_mBB777C02F77C750C16C84233210F137E5FC076DF((PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * _thisAdjusted = reinterpret_cast<Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mF08169EAACA86E16626D68F239C81EEA3ED4D6EB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0_RuntimeMethod_var);
	{
		// m_Index = -1;
		__this->set_m_Index_0((-1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * _thisAdjusted = reinterpret_cast<Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 *>(__this + _offset);
	Enumerator_Reset_mC8A6B6728881273513B69877080D357A964106D0(_thisAdjusted, method);
}
// UnityEngine.XR.MagicLeap.PlaneBoundary UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7_RuntimeMethod_var);
	PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return m_Collection[m_Index];
		PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * L_0 = __this->get_address_of_m_Collection_1();
		int32_t L_1 = __this->get_m_Index_0();
		PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  L_2;
		L_2 = PlaneBoundaryCollection_get_Item_m0323CA3D9B7A67F24F41E0F86D365B93089E19FF((PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E *)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * _thisAdjusted = reinterpret_cast<Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 *>(__this + _offset);
	PlaneBoundary_tD6B65838EDEA1D3FBF9670D1B306BCBC09EC1018  _returnValue;
	_returnValue = Enumerator_get_Current_mA053A99F56AC8AF1C4154CF96EF2A1D085DF72B7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.MagicLeap.PlaneBoundaryCollection/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081 (Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081_RuntimeMethod_var);
	{
		// m_Collection = default(PlaneBoundaryCollection);
		PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E * L_0 = __this->get_address_of_m_Collection_1();
		il2cpp_codegen_initobj(L_0, sizeof(PlaneBoundaryCollection_t02D73F37DBBEBF6E6B64EE6CF2D2A91ED363E94E ));
		// m_Index = -1;
		__this->set_m_Index_0((-1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 * _thisAdjusted = reinterpret_cast<Enumerator_t81DCAD8B286A0BDD5530385604B9C8A8A9A2E9C4 *>(__this + _offset);
	Enumerator_Dispose_m960DA25926720B483D94603CD825727984340081(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::.ctor(Unity.Collections.NativeArray`1<System.Single>,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836 (CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___dist0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836_RuntimeMethod_var);
	{
		// Distance = dist;
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_0 = ___dist0;
		__this->set_Distance_0(L_0);
		// Origin = origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___origin1;
		__this->set_Origin_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___dist0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * _thisAdjusted = reinterpret_cast<CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC *>(__this + _offset);
	CalculateDistancesJob__ctor_mEDDF0428C834302F66EC2339F9FA4070D6AB4836(_thisAdjusted, ___dist0, ___origin1, method);
}
// System.Void UnityEngine.XR.MagicLeap.Rendering.RenderingJobs/CalculateDistancesJob::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB (CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB_RuntimeMethod_var);
	{
		// Distance[index] = Vector3.Distance(Origin, transform.position);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * L_0 = __this->get_address_of_Distance_0();
		int32_t L_1 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_Origin_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = TransformAccess_get_position_mF9DA76B90F2806600A0E9FAC52D8CB96E08CDDD0((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform1), /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)L_0)->___m_Buffer_0, L_1, (L_4));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC * _thisAdjusted = reinterpret_cast<CalculateDistancesJob_tA2D9008FD662FDA32D519ABD47873D96AD8AF2EC *>(__this + _offset);
	CalculateDistancesJob_Execute_m6540E84253072F3C0B046F8B409C08719DF5F2EB(_thisAdjusted, ___index0, ___transform1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void* DelegatePInvokeWrapper_GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E (GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E * __this, int32_t* ___gestureEventsLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc)(int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	void* returnValue = il2cppPInvokeFunc(___gestureEventsLength0, ___elementSize1);

	return returnValue;
}
// System.Void UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGesturesDelegate__ctor_m207679705E55F70BE15F1BD9780EEC7AAD8003FE (GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetGesturesDelegate__ctor_m207679705E55F70BE15F1BD9780EEC7AAD8003FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GetGesturesDelegate__ctor_m207679705E55F70BE15F1BD9780EEC7AAD8003FE_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void* UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate::Invoke(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* GetGesturesDelegate_Invoke_mF3E02DC009643A540ADABA5FF9D316049D2D321B (GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E * __this, int32_t* ___gestureEventsLength0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetGesturesDelegate_Invoke_mF3E02DC009643A540ADABA5FF9D316049D2D321B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GetGesturesDelegate_Invoke_mF3E02DC009643A540ADABA5FF9D316049D2D321B_RuntimeMethod_var);
	void* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void* (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___gestureEventsLength0, ___elementSize1, targetMethod);
			}
			else
			{
				// closed
				typedef void* (*FunctionPointerType) (void*, int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___gestureEventsLength0, ___elementSize1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___gestureEventsLength0, ___elementSize1);
					else
						result = GenericVirtFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___gestureEventsLength0, ___elementSize1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___gestureEventsLength0, ___elementSize1);
					else
						result = VirtFuncInvoker2< void*, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___gestureEventsLength0, ___elementSize1);
				}
			}
			else
			{
				typedef void* (*FunctionPointerType) (void*, int32_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___gestureEventsLength0, ___elementSize1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate::BeginInvoke(System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetGesturesDelegate_BeginInvoke_mC094285CB4FDAEAC12042405D0768A3ED882620C (GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E * __this, int32_t* ___gestureEventsLength0, int32_t* ___elementSize1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetGesturesDelegate_BeginInvoke_mC094285CB4FDAEAC12042405D0768A3ED882620C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GetGesturesDelegate_BeginInvoke_mC094285CB4FDAEAC12042405D0768A3ED882620C_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___gestureEventsLength0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___elementSize1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void* UnityEngine.XR.MagicLeap.MagicLeapGestureSubsystem/MagicLeapGestureProvider/GetGesturesDelegate::EndInvoke(System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* GetGesturesDelegate_EndInvoke_mEF7E771D9DF6C5061F4D1E0D4F4C75F579898C7F (GetGesturesDelegate_tDC6050F774C53A5845677C9A4765438C9434751E * __this, int32_t* ___gestureEventsLength0, int32_t* ___elementSize1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetGesturesDelegate_EndInvoke_mEF7E771D9DF6C5061F4D1E0D4F4C75F579898C7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GetGesturesDelegate_EndInvoke_mEF7E771D9DF6C5061F4D1E0D4F4C75F579898C7F_RuntimeMethod_var);
	void* ___out_args[] = {
	___gestureEventsLength0,
	___elementSize1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return (void*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD (CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagicLeapImageTrackingSubsystem_t4F119B98E1B5A60E2FDA42790033CE6834FA4401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BCE56677723C9E0BB16F78FA8029503D359A880);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (!CreateNativeTracker(nativeProvider))
		intptr_t L_0 = __this->get_nativeProvider_0();
		bool L_1;
		L_1 = CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// LogError($"Unable to create native tracker due to internal device error.  Subsystem will be set to invalid.  See native output for more details.");
		IL2CPP_RUNTIME_CLASS_INIT(MagicLeapImageTrackingSubsystem_t4F119B98E1B5A60E2FDA42790033CE6834FA4401_il2cpp_TypeInfo_var);
		MagicLeapImageTrackingSubsystem_LogError_m602013FC22C22DA646932A1FC21562DC603EE3A1(_stringLiteral1BCE56677723C9E0BB16F78FA8029503D359A880, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// RcoApi.Release(s_NativeProviderPtr);
		IL2CPP_RUNTIME_CLASS_INIT(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_il2cpp_TypeInfo_var);
		intptr_t L_3 = ((MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_StaticFields*)il2cpp_codegen_static_fields_for(MagicLeapProvider_t0F67BEB5A05AA220CB1E51DC0191121B49D2DB4E_il2cpp_TypeInfo_var))->get_s_NativeProviderPtr_1();
		int32_t L_4;
		L_4 = RcoApi_Release_m0F0D2265ECADD91A3CAEF639841D41428A6F0567((intptr_t)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5 * _thisAdjusted = reinterpret_cast<CreateNativeImageTrackerJob_t2C98226CE1882D8958E33EF9BC855E04A658D1F5 *>(__this + _offset);
	CreateNativeImageTrackerJob_Execute_m45473C694A4D7B7B3E7162605F1DD6EF068102BD(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.MagicLeap.MagicLeapImageTrackingSubsystem/MagicLeapProvider/CreateNativeImageTrackerJob::CreateNativeTracker(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67 (intptr_t ___nativeProviderPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(CreateNativeImageTrackerJob_CreateNativeTracker_mD3BF6FD56B009EDB1071473959E8CE04C034EC67_RuntimeMethod_var);
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityMagicLeap"), "UnityMagicLeap_ImageTracking_TryCreateNativeTracker", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityMagicLeap_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityMagicLeap_ImageTracking_TryCreateNativeTracker)(___nativeProviderPtr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___nativeProviderPtr0);
	#endif

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
