﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>
struct ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029;
// System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Object,System.Object>>
struct ConcurrentQueue_1_t88C4C3F054BCCE74BE43061A14DDAEA0481D6F54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.Object,VRMShaders.TextureDescriptor>
struct Dictionary_2_t4485FF231CC1F7A566262CD10477051D5DAD5A0A;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector4>
struct Dictionary_2_tD2310F9956479E75275A8588414EFA998511BFFF;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,VRMShaders.TextureDescriptor>
struct Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector4>
struct Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350;
// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D;
// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>
struct Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57;
// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9;
// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9;
// System.Func`1<System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>>
struct Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<UnityEngine.Texture2D>
struct Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>>
struct IEnumerable_1_tE26AE0A91554D859EEFA27F3600B10CD13145773;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>>
struct IEnumerable_1_t8BAAF9E36B6F9330CC6A7785D582F946402F93BA;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>>
struct IEnumerable_1_tA706E8FCDFF7AAFFE4E3EE6BBBFC917995F040B7;
// System.Collections.Generic.IEnumerable`1<VRMShaders.TextureDescriptor>
struct IEnumerable_1_tE5B15C2D01E506E8BCD964F6AB5BC0198EB60F37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>>
struct IEnumerator_1_t6F4E675BB571FC2B1E700343333452C651CC5C0F;
// System.Collections.Generic.IEnumerator`1<VRMShaders.TextureDescriptor>
struct IEnumerator_1_tF8F1E5A00C9EC5E897F2D4118231112902DD33F6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<VRMShaders.SubAssetKey>
struct IEqualityComparer_1_tAF846A7C6847A3CE50F0FD90B1BFF51C25DFDA52;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Color>
struct IReadOnlyDictionary_2_tB5BAAD17362EAA36B1620C50F90903A176245A80;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Single>
struct IReadOnlyDictionary_2_tB9E63AFB2EADDA46173958EE960EC556FADD94A4;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,VRMShaders.TextureDescriptor>
struct IReadOnlyDictionary_2_t66E468460A02B36F7F80E1EE7746FC4156410441;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Vector4>
struct IReadOnlyDictionary_2_t0644A66175BBC3448627A02B1E31DE40C56F0289;
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct IReadOnlyDictionary_2_tEFB1B20AAF2664F0C91D1D9BC88CDB5097FCF2E3;
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Material>
struct IReadOnlyDictionary_2_t26866E77AEDAEA17BA4DDCE7E2D438A56CC460FB;
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct IReadOnlyDictionary_2_t20066CF49149BEEC544379F7CD8EC6C47B0CA535;
// System.Collections.Generic.IReadOnlyList`1<System.Action`1<UnityEngine.Material>>
struct IReadOnlyList_1_t8C9A84A7D02317D797DDB93D782495AED73AB7CD;
// System.Collections.Generic.IReadOnlyList`1<VRMShaders.SubAssetKey>
struct IReadOnlyList_1_tA1E2103FABB45878466500AF289C2DA81FA45656;
// System.Collections.Generic.IReadOnlyList`1<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct IReadOnlyList_1_t2FF250DA93D45973475AAEB95A103931078F6DDD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Color>
struct KeyCollection_tAAED30053BF529AED2E6E333C14B2FB3A99CA633;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,VRMShaders.TextureDescriptor>
struct KeyCollection_tFF3B1AA8F4BF231BB2CC81D599B83D82A49C256D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Vector4>
struct KeyCollection_t05E5368878D8A51022598F70AE74FCFC283EF776;
// System.Collections.Generic.Dictionary`2/KeyCollection<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct KeyCollection_t229B144CF4EBC7B68CC90EB5D0A51A5F366DD0C3;
// System.Collections.Generic.Dictionary`2/KeyCollection<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct KeyCollection_tC618F6339FA3F4EDBFF428548553AF3BEA1A3FCE;
// System.Collections.Generic.Dictionary`2/KeyCollection<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct KeyCollection_tA217C26CC2BDBD83F3E7BD353963C7B10F1CE6B4;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Material>>
struct List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int32Enum>>
struct List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A;
// System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>>
struct List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<VRMShaders.SubAssetKey>
struct List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F;
// System.Collections.Generic.List`1<VRMShaders.TextureExportParam>
struct List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64;
// System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<VRMShaders.TextureExportParam>
struct Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717;
// System.Predicate`1<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>
struct Segment_tCA0EDBA75AE8669387749E49A72A8CC338D4E2E3;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>
struct TaskFactory_1_tACDAAC8EE4395D06CB56F0A880F9DE1D3A98AB0B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AnimationClip>
struct TaskFactory_1_tEE66FC3217F56C2437F8C23FBBF28DB5F52A58B1;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Material>
struct TaskFactory_1_t22A25E4BB751A0574F37EA543CCAEF4D3327EF5F;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture>
struct TaskFactory_1_t787283E65B266EE5F3013B5C16790CEAAC93D778;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture2D>
struct TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>
struct Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>
struct Task_1_t3A8AF0BD9C9CE9EA63EFA1B756DF3210319E89C2;
// System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>
struct Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F;
// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<UnityEngine.Texture>
struct Task_1_tAE3580031834C793688B3B00005C66DC69CA7807;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Color>
struct ValueCollection_t556DB39053EC773DAE5F5FF5668D409764519356;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,VRMShaders.TextureDescriptor>
struct ValueCollection_tF98A1BD8AF6D08B54B89E85873370321B07EB1D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Vector4>
struct ValueCollection_t588E64E656E52CB8FD24311EA5A7287B0D0634B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct ValueCollection_t3579E927E0E7957EA314C0D79CFE85D0D250917D;
// System.Collections.Generic.Dictionary`2/ValueCollection<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct ValueCollection_tBA9804704965B12AB87479DFB74B9250AE67D9C1;
// System.Collections.Generic.Dictionary`2/ValueCollection<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct ValueCollection_t961D5427D6FF2B9E2733576B1F56BC0B1D61F004;
// System.Action`1<UnityEngine.Material>[]
struct Action_1U5BU5D_t324025798C0B32BE1FF6F1CA90D1D4B97E913AD9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Color>[]
struct EntryU5BU5D_t4B191F9BC172FA2AEFB4767EC5834077BF1C199A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Collections.Generic.Dictionary`2/Entry<System.String,VRMShaders.TextureDescriptor>[]
struct EntryU5BU5D_tD579ACE45C6236A128C3C0BEBB58025E964A07CE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Vector4>[]
struct EntryU5BU5D_t3F2A4FE8590D42FA766EB3CAB6B10D4973881826;
// System.Collections.Generic.Dictionary`2/Entry<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>[]
struct EntryU5BU5D_t6CF3F929305C436107F6695CC6E751A8057CB9B4;
// System.Collections.Generic.Dictionary`2/Entry<VRMShaders.SubAssetKey,UnityEngine.Texture>[]
struct EntryU5BU5D_tDB279B5FEAF4686F4E8F3779147593685435FE1F;
// System.Collections.Generic.Dictionary`2/Entry<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>[]
struct EntryU5BU5D_tEA6FB0F77555BBCE7715BEEF7F29C32CBBFF3FD8;
// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>[]
struct KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5;
// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>[]
struct KeyValuePair_2U5BU5D_t2B926012E4FDA9D4336F5E382FD7F44CCD8559D1;
// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>[]
struct KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1;
// System.ValueTuple`2<System.Object,System.Int32Enum>[]
struct ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4;
// System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>[]
struct ValueTuple_2U5BU5D_t3C69A8D41D0CF8E411EB04F3ED699D300147E669;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// VRMShaders.SubAssetKey[]
struct SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950;
// VRMShaders.TextureExportParam[]
struct TextureExportParamU5BU5D_t26ED2166C374FC1EACAE5A7BA962ABD4B3BB3A24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// VRMShaders.MaterialFactory/MaterialLoadInfo[]
struct MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// VRMShaders.AnimationClipFactory
struct AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// VRMShaders.DeserializingTextureInfo
struct DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// VRMShaders.GetTextureAsyncFunc
struct GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3;
// VRMShaders.GetTextureBytesAsync
struct GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// VRMShaders.IAwaitCaller
struct IAwaitCaller_t30AB7C9A0B7F4815BA5CA7329E5F5559BCCB6CFC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// VRMShaders.ITextureDeserializer
struct ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298;
// VRMShaders.ITextureSerializer
struct ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1;
// VRMShaders.ImmediateCaller
struct ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// VRMShaders.MaterialFactory
struct MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// VRMShaders.NextFrameTaskScheduler
struct NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// VRMShaders.RuntimeOnlyAwaitCaller
struct RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455;
// VRMShaders.RuntimeOnlyNoThreadAwaitCaller
struct RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421;
// VRMShaders.RuntimeTextureSerializer
struct RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// VRMShaders.SamplerParam
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB;
// VRMShaders.TakeResponsibilityForDestroyObjectFunc
struct TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// VRMShaders.TextureDescriptorSet
struct TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7;
// VRMShaders.TextureExportParam
struct TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8;
// VRMShaders.TextureExporter
struct TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534;
// VRMShaders.TextureFactory
struct TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D;
// VRMShaders.TinyManagedTaskScheduler
struct TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61;
// System.Type
struct Type_t;
// VRMShaders.UnityTextureDeserializer
struct UnityTextureDeserializer_t2E435F41E8E79458542EE60D96D0118C97D7955D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VRMShaders.MaterialFactory/<>c
struct U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484;
// VRMShaders.MaterialFactory/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59;
// VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E;
// VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler
struct UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7;
// VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED;
// VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2
struct U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E;
// VRMShaders.TextureExporter/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA;
// VRMShaders.TextureExporter/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C;
// VRMShaders.TextureExporter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorSpace_t29C4C39B3D36807D40111F88691A51CA2203E8EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAwaitCaller_t30AB7C9A0B7F4815BA5CA7329E5F5559BCCB6CFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t429C26DEF4163186CF0A7500E45D444920BE8C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t69E9F2733C638F9AB9A6A675F0A59D898CF5DD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t94CF5C87D4739506C4D2C511FB9A469E94227D5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9989281527DA585C1345EDCD868B95045F9FB6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC553A7669449415558239639A6767294F3A7263C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3123A64882B39CB64BE9243C89A1E334790573A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6F4E675BB571FC2B1E700343333452C651CC5C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F4A443ED1607A983618DFAA0A579693F9D16AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCAAFFED05AC2EE13BCD0843BB6772D64C9812DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD731BF0993C17F69DCC5B17173EB3BEDAC2BC127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t20066CF49149BEEC544379F7CD8EC6C47B0CA535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t26866E77AEDAEA17BA4DDCE7E2D438A56CC460FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tEFB1B20AAF2664F0C91D1D9BC88CDB5097FCF2E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0320CB48D6B5FC1A380252C97D75B50A8F28D1A6;
IL2CPP_EXTERN_C String_t* _stringLiteral07532417683C25F02088439518E0FAA6418D412A;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3320E33FE0DA73B071C48C69745380C235E943;
IL2CPP_EXTERN_C String_t* _stringLiteral1A966729DD25626E7B421AC182B6043657A6CD3F;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2D998FE0F5158B156E3B0EEB64D2AF317061DF68;
IL2CPP_EXTERN_C String_t* _stringLiteral3164530FEB17F18B5B9F51B4B89A156DFA472E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral38593A33ADE66F6DD6980D5BCEDB5EDF31D076EA;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral45ACBCBB9C93ACCC10E325CCC09A7EFC9B9116E9;
IL2CPP_EXTERN_C String_t* _stringLiteral481434F40349BFBE0F26719A1A61E9A29E760BB1;
IL2CPP_EXTERN_C String_t* _stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392;
IL2CPP_EXTERN_C String_t* _stringLiteral6785889D416105E7DDD3115A1E22FA4B60334C65;
IL2CPP_EXTERN_C String_t* _stringLiteral6E10CA065AD4490EC6112D24F68919B99B1491E4;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7715703D94D995D0A3A453958D77D8836741DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB00D9C0567BF63CF2B35250749ABD5A3DBB925;
IL2CPP_EXTERN_C String_t* _stringLiteral82D95C9038FADE61EAA402493C3AB02991DF2B25;
IL2CPP_EXTERN_C String_t* _stringLiteral86B404A52E1ED7B7D61F2DA69459D9316C69C18D;
IL2CPP_EXTERN_C String_t* _stringLiteral890688A6DF52C1227DEF02446F5C2341CCB38DA2;
IL2CPP_EXTERN_C String_t* _stringLiteral92CB34CBB4170D92CCFD4D41A5A60079A1ABF4EF;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F;
IL2CPP_EXTERN_C String_t* _stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487;
IL2CPP_EXTERN_C String_t* _stringLiteralA8963AF5501E3EB9C69855DEE3C371A7CE17B9A4;
IL2CPP_EXTERN_C String_t* _stringLiteralACA1CA336C835CAA266D3262B19A0CB700D38F07;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5551C01F4DB21D8AE6E8A06CC59A39732D6BABD;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C76C37AED068B0EB86A95803BCD751DA6BCAF0;
IL2CPP_EXTERN_C String_t* _stringLiteralBEEA98AECB3602533B47E8D1A8B989E18727CF9E;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4EC0F73BD52F5EF864C8A67D26C4ED242EEBC9;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD18AD386E43F80BA1CE04FF20D80CCD7D3D3A155;
IL2CPP_EXTERN_C String_t* _stringLiteralD8211A56C70251073C38D2535BC730C862BA0259;
IL2CPP_EXTERN_C String_t* _stringLiteralE20A0F3BD27C076AEAF8700304F3236427722CD3;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F1E38EF53DDA899E4025560ED06001D0DF1CBF;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF725264EE5C0635A0245C1282B6745789EFD9F1C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m7514FB3EBDA78496DDF224A57B193A6905744BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m092114FC44FD3528526C38D395FEBF80EC906172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m204FCAB80E4785657550AFD7C876ECAF5BD2D7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4BA37483E577200CFCDF06019DD0F8A8BD587736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m7619836111BB94BA38A1BB9571E3B07C50B05F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mABDAD23DA0173AE8326A7C04920DB407423921EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mD2DB64A27E5E976307A021010EB9FAB5C7BB339E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m69B9E671DDED5917ADE05CE0BA8116E64981B1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m94A24D634E94D8CB9B48E502AF60871745076334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mCBB33B982E6B4138B23EE00BE96D9C1810438D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m397D77518B5E87582D6628397D5EC380E3D6B7B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4D6BE2D25322D9A9C27BB2395E0D035313427F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAA726334D3DFE03E62A79582EED2C176EAED531D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0BA4ACB7B5DE9C3DE968DD0CC8EA3FCA0AF46679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mAB687E7BA7ECA7D9CBC0D3EAA501C4C8BC310F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE9FEC7A547FFE114CF4F03B8AF4ED80B0E9C2378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m8F04329184D143B1C451F9C3492E97306351A01C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m6AE8DEC8121E4C7CAE6B82B2BC8778C61CDBC305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m9847B12E4A6F740B85AAE030955D7C4DF9DE4852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mEDFC6DA4B7E247B34DE3FE7547704DD61857A87A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m5CBBC7E5001A81FB63D0053306B4BB77B5BE7C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA7CB40FC684078D672347CD01971238B61A243F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE4704D087AF95816B490025308CD8CEE558C81A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8B5717423727B71ABB36EABCD28F78BC64EBBFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m572E815DF3FFC15DC05A71ACDFBD462A291FF6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mC6905DC706A69FD31C153FF3A6DABAC9B11F2340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m061DF1BB007F126331ED4B3D5256E53DF9EDE40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7790456B1DDB14EB1475A6EE63A7D922B0A12744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mBBFA5AFE091091E866CF412782627C1F9648CF9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m57504ACDBB1FBD467D66E1B415485C87F78E847D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB457CC2846421D816714436C0C7D0EFC0CD3D887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4D9529C985F4D1E645FD582FBB2079A479FFA019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4DAB465502F9ECE204E2DC742160E3B42DF92B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m57141BE2AA4931D7ADE4A1AB19B20877C3BA1A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB69686FC68B0FF4339F36B5CD71AEF42DFB7710F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisKeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418_mEF7FBD3DE43B18E673813DBD2F48AE1A70298A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisKeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD_m473696F6A443AB17179BE66F988EB2440C30F9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m34F9A2D6407A54112CDB5AFD6197C83814B2305D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAE70529F29BD1768FE6E58B9937FC912E78A474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m91AD6B4DF951A5F9B54348367E9FDF2FB38ECB88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_m35D00C93C695CBEF3F5A6F9FFF02B11B019E7D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_Deconstruct_m0C24FF57AE7832C8731F917643DEF6A20352BB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_Deconstruct_m8D863C313D199F9D6E2C11B8EBAA9BE57EC89736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m8D62DB0B47EAE697C8A45D6163F646C28DB3CCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m17D0E6AA6114D14507F66491AF38C3E874B64E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m675D88354E32F198B160C8A222259E4027B2A62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC7EC904EAEE573DEE87C2C57A6538972CEC709BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m1C691E73B55BEA84C6E2CA3A14BFF1DCAE9863D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m279C03C8488D976D9ECF32C7809BB0184FA4B42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CD93AB6804CF54605296873190B2AA1B9CB9248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD5D40B514D4FBB5950B696E35511CBA11CAB5508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mB73490C9393F38CE83CF33488D350D0EE98EFC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcclusionMetallicRoughnessConverter_Export_mB6C9D0836C8C8D54F61DB52EC17DB96FD21C0C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcclusionMetallicRoughnessConverter_Import_m372DC2C9A6D8579D4E1DE3BC5B2F7179E28BED9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE30B4F79CBAD5023CA7429D70E18EB0F7DBD5B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mFF6ED44A18823D8B0D9F44AF41E64325610BAED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m992139945AB62277F0823802F35DCD5498D7F859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF33995FEE2DB39F5D10B0080998A4C467A9BFF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3407EB6F39CE65A53271EBB979203845EE01B10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m89386CB273679B04B7CA2F4650CC0BE8452F0792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m792BEB34B2E4463F88A7B18B6DB8170DE7175940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureExportParam_EqualsAsKey_m923145EA06F8FDE16A4864A40356E449C14F975D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_mE840B33E606A70BF6A66D3A642DF5F1E147CF893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadAsyncU3Eb__11_0_m6D436ECD547B231CE092F9E98EB6855122C0F535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CEnqueueU3Eb__0_m7DB27EE2008C86A129A4A98C2AB05A32D6727163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m2185A70C0F3270F546B581F73222EFC57DB8D276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m59A0A5BB481801A6A0AB9815AFA21F5F19DF2F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRegisterExportingSimpleU3Eb__0_m368C6BFEC44123B199CFD6DA1959216F694B792D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRemoveU3Eb__0_m45BF5D752F596560394909369B914B578A419BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CRegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTexturesU3Eb__0_m588107E9A8F70DE40E173FCC11C09DCF2C368DC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRegisterExportingAsNormalU3Eb__0_mAEEFD991DD48A76E7388D283DD9969310C952077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m512348AB69774EFE6A10AB6467B1A02BF5E411FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m5FE3673EDB75ABE13CD440CA825BE6119E18A46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6;;
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com;
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com;;
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke;
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke;;
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB;;
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com;
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com;;
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke;
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke;;

struct KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5;
struct KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1;
struct ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950;
struct MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDFFB17FED38D2936DB00AD1295683E5DEC1E017C 
{
};

// System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>
struct ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_tCA0EDBA75AE8669387749E49A72A8CC338D4E2E3* ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_tCA0EDBA75AE8669387749E49A72A8CC338D4E2E3* ____head_4;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4B191F9BC172FA2AEFB4767EC5834077BF1C199A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAAED30053BF529AED2E6E333C14B2FB3A99CA633* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t556DB39053EC773DAE5F5FF5668D409764519356* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,VRMShaders.TextureDescriptor>
struct Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD579ACE45C6236A128C3C0BEBB58025E964A07CE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFF3B1AA8F4BF231BB2CC81D599B83D82A49C256D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF98A1BD8AF6D08B54B89E85873370321B07EB1D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector4>
struct Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3F2A4FE8590D42FA766EB3CAB6B10D4973881826* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t05E5368878D8A51022598F70AE74FCFC283EF776* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t588E64E656E52CB8FD24311EA5A7287B0D0634B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6CF3F929305C436107F6695CC6E751A8057CB9B4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t229B144CF4EBC7B68CC90EB5D0A51A5F366DD0C3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3579E927E0E7957EA314C0D79CFE85D0D250917D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDB279B5FEAF4686F4E8F3779147593685435FE1F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC618F6339FA3F4EDBFF428548553AF3BEA1A3FCE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA9804704965B12AB87479DFB74B9250AE67D9C1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA6FB0F77555BBCE7715BEEF7F29C32CBBFF3FD8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA217C26CC2BDBD83F3E7BD353963C7B10F1CE6B4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t961D5427D6FF2B9E2733576B1F56BC0B1D61F004* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Material>>
struct List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t324025798C0B32BE1FF6F1CA90D1D4B97E913AD9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_t324025798C0B32BE1FF6F1CA90D1D4B97E913AD9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int32Enum>>
struct List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>>
struct List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t3C69A8D41D0CF8E411EB04F3ED699D300147E669* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t3C69A8D41D0CF8E411EB04F3ED699D300147E669* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRMShaders.SubAssetKey>
struct List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRMShaders.TextureExportParam>
struct List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextureExportParamU5BU5D_t26ED2166C374FC1EACAE5A7BA962ABD4B3BB3A24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextureExportParamU5BU5D_t26ED2166C374FC1EACAE5A7BA962ABD4B3BB3A24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// VRMShaders.AnimationClipFactory
struct AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory::_externalClips
	RuntimeObject* ____externalClips_0;
	// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory::_runtimeClips
	Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* ____runtimeClips_1;
	// System.Collections.Generic.List`1<VRMShaders.SubAssetKey> VRMShaders.AnimationClipFactory::_loadedClipKeys
	List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* ____loadedClipKeys_2;
};
struct Il2CppArrayBounds;

// VRMShaders.DeserializingTextureInfo
struct DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9  : public RuntimeObject
{
	// System.Byte[] VRMShaders.DeserializingTextureInfo::<ImageData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CImageDataU3Ek__BackingField_0;
	// System.String VRMShaders.DeserializingTextureInfo::<DataMimeType>k__BackingField
	String_t* ___U3CDataMimeTypeU3Ek__BackingField_1;
	// VRMShaders.ColorSpace VRMShaders.DeserializingTextureInfo::<ColorSpace>k__BackingField
	int32_t ___U3CColorSpaceU3Ek__BackingField_2;
	// System.Boolean VRMShaders.DeserializingTextureInfo::<UseMipmap>k__BackingField
	bool ___U3CUseMipmapU3Ek__BackingField_3;
	// UnityEngine.FilterMode VRMShaders.DeserializingTextureInfo::<FilterMode>k__BackingField
	int32_t ___U3CFilterModeU3Ek__BackingField_4;
	// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::<WrapModeU>k__BackingField
	int32_t ___U3CWrapModeUU3Ek__BackingField_5;
	// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::<WrapModeV>k__BackingField
	int32_t ___U3CWrapModeVU3Ek__BackingField_6;
};

// VRMShaders.ImmediateCaller
struct ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659  : public RuntimeObject
{
};

// VRMShaders.KeyValuePariExtensions
struct KeyValuePariExtensions_t0815E1FEE5DDA0E154E0DFC74D3316D16C0361F4  : public RuntimeObject
{
};

// VRMShaders.MaterialFactory
struct MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Material> VRMShaders.MaterialFactory::m_externalMap
	RuntimeObject* ___m_externalMap_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> VRMShaders.MaterialFactory::m_fallbackShaders
	RuntimeObject* ___m_fallbackShaders_1;
	// System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo> VRMShaders.MaterialFactory::m_materials
	List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* ___m_materials_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// VRMShaders.NextFrameTaskScheduler
struct NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D  : public RuntimeObject
{
};

// VRMShaders.NormalConverter
struct NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776  : public RuntimeObject
{
};

struct NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_StaticFields
{
	// UnityEngine.Material VRMShaders.NormalConverter::_exporter
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____exporter_0;
};

// VRMShaders.OcclusionMetallicRoughnessConverter
struct OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3  : public RuntimeObject
{
};

struct OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields
{
	// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::_importer
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____importer_0;
	// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::_exporter
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____exporter_1;
};

// VRMShaders.RuntimeOnlyAwaitCaller
struct RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455  : public RuntimeObject
{
	// VRMShaders.NextFrameTaskScheduler VRMShaders.RuntimeOnlyAwaitCaller::_scheduler
	NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* ____scheduler_0;
	// System.Single VRMShaders.RuntimeOnlyAwaitCaller::_timeOutInSeconds
	float ____timeOutInSeconds_1;
	// System.Single VRMShaders.RuntimeOnlyAwaitCaller::_lastTimeoutBaseTime
	float ____lastTimeoutBaseTime_2;
};

// VRMShaders.RuntimeOnlyNoThreadAwaitCaller
struct RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421  : public RuntimeObject
{
	// VRMShaders.NextFrameTaskScheduler VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_scheduler
	NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* ____scheduler_0;
	// System.Single VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_timeoutInSeconds
	float ____timeoutInSeconds_1;
	// System.Single VRMShaders.RuntimeOnlyNoThreadAwaitCaller::_lastTimeoutBaseTime
	float ____lastTimeoutBaseTime_2;
};

// VRMShaders.RuntimeTextureSerializer
struct RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// VRMShaders.Symbols
struct Symbols_t6EC05870263E16A5D80AF7A8C83CBD2F5CD28065  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// VRMShaders.TextureConverter
struct TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875  : public RuntimeObject
{
};

struct TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_StaticFields
{
	// UnityEngine.TextureFormat VRMShaders.TextureConverter::WithAlphaFormat
	int32_t ___WithAlphaFormat_0;
	// UnityEngine.TextureFormat VRMShaders.TextureConverter::WithoutAlphaFormat
	int32_t ___WithoutAlphaFormat_1;
};

// VRMShaders.TextureDescriptorSet
struct TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor> VRMShaders.TextureDescriptorSet::_texDescDict
	Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* ____texDescDict_0;
};

// VRMShaders.TextureExportParam
struct TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8  : public RuntimeObject
{
	// VRMShaders.TextureExportTypes VRMShaders.TextureExportParam::<ExportType>k__BackingField
	int32_t ___U3CExportTypeU3Ek__BackingField_0;
	// VRMShaders.ColorSpace VRMShaders.TextureExportParam::<ExportColorSpace>k__BackingField
	int32_t ___U3CExportColorSpaceU3Ek__BackingField_1;
	// UnityEngine.Texture VRMShaders.TextureExportParam::<PrimaryTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CPrimaryTextureU3Ek__BackingField_2;
	// UnityEngine.Texture VRMShaders.TextureExportParam::<SecondaryTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CSecondaryTextureU3Ek__BackingField_3;
	// System.Single VRMShaders.TextureExportParam::<OptionFactor>k__BackingField
	float ___U3COptionFactorU3Ek__BackingField_4;
	// System.Boolean VRMShaders.TextureExportParam::<NeedsAlpha>k__BackingField
	bool ___U3CNeedsAlphaU3Ek__BackingField_5;
	// System.Func`1<UnityEngine.Texture2D> VRMShaders.TextureExportParam::<Creator>k__BackingField
	Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___U3CCreatorU3Ek__BackingField_6;
};

// VRMShaders.TextureExporter
struct TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534  : public RuntimeObject
{
	// VRMShaders.ITextureSerializer VRMShaders.TextureExporter::_textureSerializer
	RuntimeObject* ____textureSerializer_0;
	// System.Collections.Generic.List`1<VRMShaders.TextureExportParam> VRMShaders.TextureExporter::_exportingList
	List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* ____exportingList_1;
};

// VRMShaders.TextureExtensions
struct TextureExtensions_tCED38516AB61887EB9D7B67DEF3464F8985688B3  : public RuntimeObject
{
};

// VRMShaders.TextureFactory
struct TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture> VRMShaders.TextureFactory::_externalMap
	RuntimeObject* ____externalMap_0;
	// System.Boolean VRMShaders.TextureFactory::_isLegacySquaredRoughness
	bool ____isLegacySquaredRoughness_1;
	// System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture> VRMShaders.TextureFactory::_textureCache
	Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* ____textureCache_2;
	// VRMShaders.ITextureDeserializer VRMShaders.TextureFactory::<TextureDeserializer>k__BackingField
	RuntimeObject* ___U3CTextureDeserializerU3Ek__BackingField_3;
};

// VRMShaders.TextureImportName
struct TextureImportName_tC46A33584DFB5266BAD8B3877BDB8827501EAB6C  : public RuntimeObject
{
};

// VRMShaders.TinyManagedTaskScheduler
struct TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>> VRMShaders.TinyManagedTaskScheduler::_continuationQueue
	ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* ____continuationQueue_0;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>> VRMShaders.TinyManagedTaskScheduler::_temporaryQueue
	ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* ____temporaryQueue_1;
};

// VRMShaders.UnityObjectDestroyer
struct UnityObjectDestroyer_t149F4F85E51D84C209F9C7C9C24DAEDDF73E4ED4  : public RuntimeObject
{
};

// VRMShaders.UnityTextureDeserializer
struct UnityTextureDeserializer_t2E435F41E8E79458542EE60D96D0118C97D7955D  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// VRMShaders.MaterialFactory/<>c
struct U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484  : public RuntimeObject
{
};

struct U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields
{
	// VRMShaders.MaterialFactory/<>c VRMShaders.MaterialFactory/<>c::<>9
	U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* ___U3CU3E9_0;
	// VRMShaders.GetTextureAsyncFunc VRMShaders.MaterialFactory/<>c::<>9__11_0
	GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* ___U3CU3E9__11_0_1;
};

// VRMShaders.MaterialFactory/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59  : public RuntimeObject
{
	// UnityEngine.Material VRMShaders.MaterialFactory/<>c__DisplayClass7_0::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
};

// VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E  : public RuntimeObject
{
	// System.Int32 VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0::currentFrame
	int32_t ___currentFrame_0;
};

// VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0::tcs
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___tcs_0;
};

// VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0::tcs
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___tcs_0;
};

// VRMShaders.TextureExporter/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA  : public RuntimeObject
{
	// VRMShaders.TextureExporter VRMShaders.TextureExporter/<>c__DisplayClass7_0::<>4__this
	TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* ___U3CU3E4__this_0;
	// UnityEngine.Texture VRMShaders.TextureExporter/<>c__DisplayClass7_0::src
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_1;
	// System.Boolean VRMShaders.TextureExporter/<>c__DisplayClass7_0::needsAlpha
	bool ___needsAlpha_2;
	// VRMShaders.ColorSpace VRMShaders.TextureExporter/<>c__DisplayClass7_0::colorSpace
	int32_t ___colorSpace_3;
};

// VRMShaders.TextureExporter/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C  : public RuntimeObject
{
	// VRMShaders.TextureExporter VRMShaders.TextureExporter/<>c__DisplayClass8_0::<>4__this
	TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* ___U3CU3E4__this_0;
	// UnityEngine.Texture VRMShaders.TextureExporter/<>c__DisplayClass8_0::metallicSmoothTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicSmoothTexture_1;
	// UnityEngine.Texture VRMShaders.TextureExporter/<>c__DisplayClass8_0::occlusionTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___occlusionTexture_2;
	// System.Single VRMShaders.TextureExporter/<>c__DisplayClass8_0::smoothness
	float ___smoothness_3;
};

// VRMShaders.TextureExporter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E  : public RuntimeObject
{
	// VRMShaders.TextureExporter VRMShaders.TextureExporter/<>c__DisplayClass9_0::<>4__this
	TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* ___U3CU3E4__this_0;
	// UnityEngine.Texture VRMShaders.TextureExporter/<>c__DisplayClass9_0::src
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
struct KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
struct KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>
struct TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>
struct TaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3A8AF0BD9C9CE9EA63EFA1B756DF3210319E89C2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AnimationClip>
struct TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture>
struct TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>
struct Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_result_38;
};

struct Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tEE66FC3217F56C2437F8C23FBBF28DB5F52A58B1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_result_38;
};

struct Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t22A25E4BB751A0574F37EA543CCAEF4D3327EF5F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture>
struct Task_1_tAE3580031834C793688B3B00005C66DC69CA7807  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_result_38;
};

struct Task_1_tAE3580031834C793688B3B00005C66DC69CA7807_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t787283E65B266EE5F3013B5C16790CEAAC93D778* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_result_38;
};

struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF* ___s_defaultFactory_39;
};

// System.ValueTuple`2<System.Byte[],System.String>
struct ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 
{
	// T1 System.ValueTuple`2::Item1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;
};

// System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>
struct ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 
{
	// T1 System.ValueTuple`2::Item1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___Item2_1;
};

// System.ValueTuple`2<System.Object,System.Int32Enum>
struct ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>
struct ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430 
{
	// T1 System.ValueTuple`2::Item1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// VRMShaders.PathObject
struct PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B 
{
	// System.String VRMShaders.PathObject::<FullPath>k__BackingField
	String_t* ___U3CFullPathU3Ek__BackingField_0;
};

struct PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields
{
	// VRMShaders.PathObject VRMShaders.PathObject::<UnityRoot>k__BackingField
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B ___U3CUnityRootU3Ek__BackingField_1;
	// VRMShaders.PathObject VRMShaders.PathObject::<UnityAssets>k__BackingField
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B ___U3CUnityAssetsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of VRMShaders.PathObject
struct PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_pinvoke
{
	char* ___U3CFullPathU3Ek__BackingField_0;
};
// Native definition for COM marshalling of VRMShaders.PathObject
struct PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_com
{
	Il2CppChar* ___U3CFullPathU3Ek__BackingField_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// VRMShaders.SamplerParam
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 
{
	// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::<WrapModesU>k__BackingField
	int32_t ___U3CWrapModesUU3Ek__BackingField_0;
	// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::<WrapModesV>k__BackingField
	int32_t ___U3CWrapModesVU3Ek__BackingField_1;
	// UnityEngine.FilterMode VRMShaders.SamplerParam::<FilterMode>k__BackingField
	int32_t ___U3CFilterModeU3Ek__BackingField_2;
	// System.Boolean VRMShaders.SamplerParam::<EnableMipMap>k__BackingField
	bool ___U3CEnableMipMapU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of VRMShaders.SamplerParam
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke
{
	int32_t ___U3CWrapModesUU3Ek__BackingField_0;
	int32_t ___U3CWrapModesVU3Ek__BackingField_1;
	int32_t ___U3CFilterModeU3Ek__BackingField_2;
	int32_t ___U3CEnableMipMapU3Ek__BackingField_3;
};
// Native definition for COM marshalling of VRMShaders.SamplerParam
struct SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com
{
	int32_t ___U3CWrapModesUU3Ek__BackingField_0;
	int32_t ___U3CWrapModesVU3Ek__BackingField_1;
	int32_t ___U3CFilterModeU3Ek__BackingField_2;
	int32_t ___U3CEnableMipMapU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB 
{
	// System.Type VRMShaders.SubAssetKey::Type
	Type_t* ___Type_2;
	// System.String VRMShaders.SubAssetKey::Name
	String_t* ___Name_3;
};

struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields
{
	// System.Type VRMShaders.SubAssetKey::TextureType
	Type_t* ___TextureType_0;
	// System.Type VRMShaders.SubAssetKey::MaterialType
	Type_t* ___MaterialType_1;
};
// Native definition for P/Invoke marshalling of VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke
{
	Type_t* ___Type_2;
	char* ___Name_3;
};
// Native definition for COM marshalling of VRMShaders.SubAssetKey
struct SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com
{
	Type_t* ___Type_2;
	Il2CppChar* ___Name_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>
struct AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>
struct AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>
struct AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___s_defaultResultTask_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>
struct KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector4>
struct KeyValuePair_2_tC0541F0661306527FB49D9D6653274DCFE2EE125 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>
struct KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Vector4>
struct KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>
struct KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>
struct KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value_1;
};

// System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>
struct Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 ___value_1;
};

// System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>
struct Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// VRMShaders.MaterialDescriptor
struct MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF 
{
	// System.String VRMShaders.MaterialDescriptor::Name
	String_t* ___Name_0;
	// System.String VRMShaders.MaterialDescriptor::ShaderName
	String_t* ___ShaderName_1;
	// System.Nullable`1<System.Int32> VRMShaders.MaterialDescriptor::RenderQueue
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RenderQueue_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,VRMShaders.TextureDescriptor> VRMShaders.MaterialDescriptor::TextureSlots
	RuntimeObject* ___TextureSlots_3;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Single> VRMShaders.MaterialDescriptor::FloatValues
	RuntimeObject* ___FloatValues_4;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Color> VRMShaders.MaterialDescriptor::Colors
	RuntimeObject* ___Colors_5;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Vector4> VRMShaders.MaterialDescriptor::Vectors
	RuntimeObject* ___Vectors_6;
	// System.Collections.Generic.IReadOnlyList`1<System.Action`1<UnityEngine.Material>> VRMShaders.MaterialDescriptor::Actions
	RuntimeObject* ___Actions_7;
};

struct MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields
{
	// VRMShaders.MaterialDescriptor VRMShaders.MaterialDescriptor::Default
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___Default_8;
};
// Native definition for P/Invoke marshalling of VRMShaders.MaterialDescriptor
struct MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_pinvoke
{
	char* ___Name_0;
	char* ___ShaderName_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RenderQueue_2;
	RuntimeObject* ___TextureSlots_3;
	RuntimeObject* ___FloatValues_4;
	RuntimeObject* ___Colors_5;
	RuntimeObject* ___Vectors_6;
	RuntimeObject* ___Actions_7;
};
// Native definition for COM marshalling of VRMShaders.MaterialDescriptor
struct MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_com
{
	Il2CppChar* ___Name_0;
	Il2CppChar* ___ShaderName_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___RenderQueue_2;
	RuntimeObject* ___TextureSlots_3;
	RuntimeObject* ___FloatValues_4;
	RuntimeObject* ___Colors_5;
	RuntimeObject* ___Vectors_6;
	RuntimeObject* ___Actions_7;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// VRMShaders.TextureDescriptor
struct TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D 
{
	// System.String VRMShaders.TextureDescriptor::UnityObjectName
	String_t* ___UnityObjectName_0;
	// UnityEngine.Vector2 VRMShaders.TextureDescriptor::Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_1;
	// UnityEngine.Vector2 VRMShaders.TextureDescriptor::Scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	// VRMShaders.SamplerParam VRMShaders.TextureDescriptor::Sampler
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___Sampler_3;
	// VRMShaders.TextureImportTypes VRMShaders.TextureDescriptor::TextureType
	int32_t ___TextureType_4;
	// System.Single VRMShaders.TextureDescriptor::MetallicFactor
	float ___MetallicFactor_5;
	// System.Single VRMShaders.TextureDescriptor::RoughnessFactor
	float ___RoughnessFactor_6;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index0
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index0_7;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index1
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index1_8;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index2
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index2_9;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index3
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index3_10;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index4
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index4_11;
	// VRMShaders.GetTextureBytesAsync VRMShaders.TextureDescriptor::Index5
	GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___Index5_12;
};
// Native definition for P/Invoke marshalling of VRMShaders.TextureDescriptor
struct TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_pinvoke
{
	char* ___UnityObjectName_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke ___Sampler_3;
	int32_t ___TextureType_4;
	float ___MetallicFactor_5;
	float ___RoughnessFactor_6;
	Il2CppMethodPointer ___Index0_7;
	Il2CppMethodPointer ___Index1_8;
	Il2CppMethodPointer ___Index2_9;
	Il2CppMethodPointer ___Index3_10;
	Il2CppMethodPointer ___Index4_11;
	Il2CppMethodPointer ___Index5_12;
};
// Native definition for COM marshalling of VRMShaders.TextureDescriptor
struct TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_com
{
	Il2CppChar* ___UnityObjectName_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com ___Sampler_3;
	int32_t ___TextureType_4;
	float ___MetallicFactor_5;
	float ___RoughnessFactor_6;
	Il2CppMethodPointer ___Index0_7;
	Il2CppMethodPointer ___Index1_8;
	Il2CppMethodPointer ___Index2_9;
	Il2CppMethodPointer ___Index3_10;
	Il2CppMethodPointer ___Index4_11;
	Il2CppMethodPointer ___Index5_12;
};

// VRMShaders.MaterialFactory/MaterialLoadInfo
struct MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC 
{
	// VRMShaders.SubAssetKey VRMShaders.MaterialFactory/MaterialLoadInfo::Key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___Key_0;
	// UnityEngine.Material VRMShaders.MaterialFactory/MaterialLoadInfo::Asset
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Asset_1;
	// System.Boolean VRMShaders.MaterialFactory/MaterialLoadInfo::UseExternal
	bool ___UseExternal_2;
};
// Native definition for P/Invoke marshalling of VRMShaders.MaterialFactory/MaterialLoadInfo
struct MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_pinvoke
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke ___Key_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Asset_1;
	int32_t ___UseExternal_2;
};
// Native definition for COM marshalling of VRMShaders.MaterialFactory/MaterialLoadInfo
struct MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_com
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com ___Key_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___Asset_1;
	int32_t ___UseExternal_2;
};

// System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>
struct Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,System.Object>
struct Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,VRMShaders.TextureDescriptor>
struct KeyValuePair_2_t796983C488716EBD0A7B2F81880C6F60EDAB1AB4 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>
struct KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___value_1;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>
struct Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 ___m_result_38;
};

struct Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tACDAAC8EE4395D06CB56F0A880F9DE1D3A98AB0B* ___s_defaultFactory_39;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13
struct U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62 
{
	// System.Int32 VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::<>t__builder
	AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F ___U3CU3Et__builder_1;
	// VRMShaders.AnimationClipFactory VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::<>4__this
	AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* ___U3CU3E4__this_2;
	// VRMShaders.SubAssetKey VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::key
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key_3;
	// System.Func`1<System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>> VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::loadAnimationClip
	Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60* ___loadAnimationClip_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::<>u__1
	TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 ___U3CU3Eu__1_5;
};

// VRMShaders.TextureFactory/<GetTextureAsync>d__13
struct U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33 
{
	// System.Int32 VRMShaders.TextureFactory/<GetTextureAsync>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture> VRMShaders.TextureFactory/<GetTextureAsync>d__13::<>t__builder
	AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3 ___U3CU3Et__builder_1;
	// VRMShaders.TextureDescriptor VRMShaders.TextureFactory/<GetTextureAsync>d__13::texDesc
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc_2;
	// VRMShaders.TextureFactory VRMShaders.TextureFactory/<GetTextureAsync>d__13::<>4__this
	TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* ___U3CU3E4__this_3;
	// VRMShaders.IAwaitCaller VRMShaders.TextureFactory/<GetTextureAsync>d__13::awaitCaller
	RuntimeObject* ___awaitCaller_4;
	// VRMShaders.SubAssetKey VRMShaders.TextureFactory/<GetTextureAsync>d__13::<subAssetKey>5__2
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___U3CsubAssetKeyU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>> VRMShaders.TextureFactory/<GetTextureAsync>d__13::<>u__1
	TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> VRMShaders.TextureFactory/<GetTextureAsync>d__13::<>u__2
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B ___U3CU3Eu__2_7;
	// UnityEngine.Texture2D VRMShaders.TextureFactory/<GetTextureAsync>d__13::<metallicRoughnessTexture>5__3
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CmetallicRoughnessTextureU3E5__3_8;
	// UnityEngine.Texture2D VRMShaders.TextureFactory/<GetTextureAsync>d__13::<occlusionTexture>5__4
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CocclusionTextureU3E5__4_9;
};

// VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0
struct U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E 
{
	// System.Int32 VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// VRMShaders.DeserializingTextureInfo VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::textureInfo
	DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* ___textureInfo_2;
	// VRMShaders.IAwaitCaller VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::awaitCaller
	RuntimeObject* ___awaitCaller_3;
	// UnityEngine.Texture2D VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::<texture>5__2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>
struct Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Func`1<System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>>
struct Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<UnityEngine.Texture2D>
struct Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3  : public MulticastDelegate_t
{
};

// System.Predicate`1<VRMShaders.TextureExportParam>
struct Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717  : public MulticastDelegate_t
{
};

// System.Predicate`1<VRMShaders.MaterialFactory/MaterialLoadInfo>
struct Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// VRMShaders.GetTextureAsyncFunc
struct GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3  : public MulticastDelegate_t
{
};

// VRMShaders.GetTextureBytesAsync
struct GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// VRMShaders.TakeResponsibilityForDestroyObjectFunc
struct TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD  : public MulticastDelegate_t
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// VRMShaders.MaterialFactory/<LoadAsync>d__11
struct U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195 
{
	// System.Int32 VRMShaders.MaterialFactory/<LoadAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material> VRMShaders.MaterialFactory/<LoadAsync>d__11::<>t__builder
	AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4 ___U3CU3Et__builder_1;
	// VRMShaders.MaterialFactory VRMShaders.MaterialFactory/<LoadAsync>d__11::<>4__this
	MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* ___U3CU3E4__this_2;
	// VRMShaders.MaterialDescriptor VRMShaders.MaterialFactory/<LoadAsync>d__11::matDesc
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___matDesc_3;
	// VRMShaders.GetTextureAsyncFunc VRMShaders.MaterialFactory/<LoadAsync>d__11::getTexture
	GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* ___getTexture_4;
	// VRMShaders.IAwaitCaller VRMShaders.MaterialFactory/<LoadAsync>d__11::awaitCaller
	RuntimeObject* ___awaitCaller_5;
	// UnityEngine.Material VRMShaders.MaterialFactory/<LoadAsync>d__11::<material>5__2
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CmaterialU3E5__2_6;
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>> VRMShaders.MaterialFactory/<LoadAsync>d__11::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;
	// System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor> VRMShaders.MaterialFactory/<LoadAsync>d__11::<kv>5__4
	KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727 ___U3CkvU3E5__4_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture> VRMShaders.MaterialFactory/<LoadAsync>d__11::<>u__1
	TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD ___U3CU3Eu__1_9;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2
struct U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E  : public RuntimeObject
{
	// System.Int32 VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// VRMShaders.TextureDescriptor VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>2__current
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___U3CU3E2__current_1;
	// System.Int32 VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// VRMShaders.TextureDescriptorSet VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>4__this
	TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor> VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>7__wrap1
	Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 ___U3CU3E7__wrap1_4;
};

// VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler
struct UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VRMShaders.TinyManagedTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::<Scheduler>k__BackingField
	TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* ___U3CSchedulerU3Ek__BackingField_5;
};

struct UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_StaticFields
{
	// VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::_instance
	UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* ____instance_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>[]
struct KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 m_Items[1];

	inline KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VRMShaders.MaterialFactory/MaterialLoadInfo[]
struct MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0  : public RuntimeArray
{
	ALIGN_FIELD (8) MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC m_Items[1];

	inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Asset_1), (void*)NULL);
		#endif
	}
	inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Asset_1), (void*)NULL);
		#endif
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>[]
struct KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD m_Items[1];

	inline KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___Name_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// VRMShaders.SubAssetKey[]
struct SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950  : public RuntimeArray
{
	ALIGN_FIELD (8) SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB m_Items[1];

	inline SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_3), (void*)NULL);
		#endif
	}
	inline SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_3), (void*)NULL);
		#endif
	}
};
// System.ValueTuple`2<System.Object,System.Int32Enum>[]
struct ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 m_Items[1];

	inline ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
	}
	inline ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke_back(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled);
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke_cleanup(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com_back(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled);
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com_cleanup(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_back(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_cleanup(SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_back(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled);
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_cleanup(SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m01C84F8A2234BE682E8680DD1357924A2C37D827_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE_gshared (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0 Dictionary_2_GetEnumerator_mBDE8550ACE24A1376D1CC4F3B0E97FA6EC0C2CAE_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m48EF7B46EAA1E8D8E69A528251A26A9DEEE5F62E_gshared (Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986 Enumerator_get_Current_m6CF6A6C22C19A82E8DED886B58887E20F10032C8_gshared_inline (Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mF3EE6AC5AC83FF4C8A4C5BB05E2D12D87821B5D9_gshared_inline (KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB03AC91A15176403A66AA5D39F65AC0F3A8E675B_gshared (Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m386DDC921BCCD1847F64FCB6A2716BBB09818FEB_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t2B926012E4FDA9D4336F5E382FD7F44CCD8559D1* Enumerable_ToArray_TisKeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986_m2C03A59B4C1063DBD32F5AD46FD8CDD5DDD6D675_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,System.Object>::Deconstruct(TKey&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2_Deconstruct_m0B31518F1BC43BE007FEB5B87596122573B081E6_gshared (KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m643BDDFDC67D20D1AB82A08C465FA2EA2D8362C7_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m035C78D6F72178A18500F49206C0719FB5B05128_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_mD8E783CA8BA56CFAD74F86833BDFE09BA7105324_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB_gshared (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_gshared_inline (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___item0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m1C19CE13C7FF786572E97ABE0868B9F9C59DD604_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCB2D97D3E9B4DCF45363280193FB8A1047EA9389_gshared (Dictionary_2_t294568FADC5D9B32AFA4EAD0EA2821F8F8F30E57* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Object,System.Object>>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_mA12291C2C7BF7EE60B6C00DC37B0B069D5CBF564_gshared (ConcurrentQueue_1_t88C4C3F054BCCE74BE43061A14DDAEA0481D6F54* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* ___result0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Object,System.Object>>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_mDC7DCE43901A3A70B82710E9387386928AC832E1_gshared (ConcurrentQueue_1_t88C4C3F054BCCE74BE43061A14DDAEA0481D6F54* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___item0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_mAE906617E8A28CC9AB4AA99CF9C17CB2E08FF972_gshared (ConcurrentQueue_1_t88C4C3F054BCCE74BE43061A14DDAEA0481D6F54* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,VRMShaders.TextureDescriptor>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m93BB8528448E54CDDB5F13FEE98141667947A579_gshared (Dictionary_2_t4485FF231CC1F7A566262CD10477051D5DAD5A0A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7CE1FD4678D8769E81090E14D0E1F13B0838A4F2_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0263D33E2CDFEDD92506FBBD128A4C2C72CE34DE_gshared (Dictionary_2_tD2310F9956479E75275A8588414EFA998511BFFF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mEB5A6BD9AB515B40A71374466B103B58E024B058_gshared (Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862_gshared (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_gshared_inline (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2_gshared (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_gshared_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8_gshared (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRMShaders.MaterialFactory/<LoadAsync>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m3C1EDF64A0A425814EE301614EAF377A5ECCEC2C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_gshared_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___item0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,VRMShaders.TextureDescriptor>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_mA7D8986F71B806E9A95E20A5D5FEBB81AA88E223_gshared_inline (KeyValuePair_2_t796983C488716EBD0A7B2F81880C6F60EDAB1AB4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRMShaders.MaterialFactory/<LoadAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m27FB3BFC1D50FDBC360641771EEB45B796895F02_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* ___stateMachine1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,VRMShaders.TextureDescriptor>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0842A0499476FBD4C818EEF67EE6FDB06EF2C2B9_gshared_inline (KeyValuePair_2_t796983C488716EBD0A7B2F81880C6F60EDAB1AB4* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector4>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6E28093B229E73823CBAA1C3A178F33BA94DDC7B_gshared_inline (KeyValuePair_2_tC0541F0661306527FB49D9D6653274DCFE2EE125* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector4>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_mD45B58EB40362D3F8E92FE11643718AE2E67314B_gshared_inline (KeyValuePair_2_tC0541F0661306527FB49D9D6653274DCFE2EE125* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int32Enum>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m97230F4B1E6C0072E0649B4AB0ECEF959A475CEA_gshared (List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Int32Enum>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mD844C0CC761CFC60FE083BCC03EBB4243D54767C_gshared (ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49* __this, RuntimeObject* ___item10, int32_t ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int32Enum>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAC985A3824A4305BEC2B381B9868C73202BB5863_gshared_inline (List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A* __this, ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F_gshared (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24_gshared (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8_gshared (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC_gshared (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_gshared_inline (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_gshared_inline (KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55_gshared (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD_gshared (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m83891E4FD2DF37F4C40A9F7440656C85F781A3B8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E Task_1_GetAwaiter_m2BEBDAE4592267FCCA21600125BE489842244969_gshared (Task_1_t3A8AF0BD9C9CE9EA63EFA1B756DF3210319E89C2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mA21A40C0F804061F77F489EE30A9B6D4EC0825F8_gshared (TaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>,VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m13AE38976ED041F311BE1451232E5DF148E5C896_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E* ___awaiter0, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4 TaskAwaiter_1_GetResult_mA3305506E3E235963DA83F3A41ACBD7CEFC14241_gshared (TaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m163BBAC499296BBC70BE048FC4C9C61A0CECFECC_gshared_inline (Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.ValueTuple`2<System.Object,System.Object>>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Nullable_1_GetValueOrDefault_m6AFFEE188D1F30878F0D93176575235674EC59E3_gshared_inline (Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA1198A86E1A69FD879204033C4D1ACB50E8D7213_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mBE93B27FCAC5919797532E0DB74FE138B3747108_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m311EFBBBB6E25AF889B0BB558DDF85C428902D6F_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::.ctor()
inline void Dictionary_2__ctor_m4DAB465502F9ECE204E2DC742160E3B42DF92B64 (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, const RuntimeMethod*))Dictionary_2__ctor_m01C84F8A2234BE682E8680DD1357924A2C37D827_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::.ctor()
inline void List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F*, const RuntimeMethod*))List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::GetEnumerator()
inline Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91 Dictionary_2_GetEnumerator_m061DF1BB007F126331ED4B3D5256E53DF9EDE40D (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91 (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mBDE8550ACE24A1376D1CC4F3B0E97FA6EC0C2CAE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::Dispose()
inline void Enumerator_Dispose_m34F9A2D6407A54112CDB5AFD6197C83814B2305D (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91*, const RuntimeMethod*))Enumerator_Dispose_m48EF7B46EAA1E8D8E69A528251A26A9DEEE5F62E_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::get_Current()
inline KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 Enumerator_get_Current_m91AD6B4DF951A5F9B54348367E9FDF2FB38ECB88_inline (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 (*) (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91*, const RuntimeMethod*))Enumerator_get_Current_m6CF6A6C22C19A82E8DED886B58887E20F10032C8_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::get_Value()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* KeyValuePair_2_get_Value_m675D88354E32F198B160C8A222259E4027B2A62C_inline (KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF3EE6AC5AC83FF4C8A4C5BB05E2D12D87821B5D9_gshared_inline)(__this, method);
}
// System.Void VRMShaders.UnityObjectDestroyer::DestroyRuntimeOrEditor(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___o0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::MoveNext()
inline bool Enumerator_MoveNext_mFAE70529F29BD1768FE6E58B9937FC912E78A474 (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91*, const RuntimeMethod*))Enumerator_MoveNext_mB03AC91A15176403A66AA5D39F65AC0F3A8E675B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::Clear()
inline void Dictionary_2_Clear_m572E815DF3FFC15DC05A71ACDFBD462A291FF6EE (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, const RuntimeMethod*))Dictionary_2_Clear_m386DDC921BCCD1847F64FCB6A2716BBB09818FEB_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* Enumerable_ToArray_TisKeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418_mEF7FBD3DE43B18E673813DBD2F48AE1A70298A56 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986_m2C03A59B4C1063DBD32F5AD46FD8CDD5DDD6D675_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::Deconstruct(TKey&,TValue&)
inline void KeyValuePair_2_Deconstruct_m0C24FF57AE7832C8731F917643DEF6A20352BB06 (KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* ___key0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712**, const RuntimeMethod*))KeyValuePair_2_Deconstruct_m0B31518F1BC43BE007FEB5B87596122573B081E6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void VRMShaders.TakeResponsibilityForDestroyObjectFunc::Invoke(VRMShaders.SubAssetKey,UnityEngine.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_inline (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::Remove(TKey)
inline bool Dictionary_2_Remove_mBBFA5AFE091091E866CF412782627C1F9648CF9E (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))Dictionary_2_Remove_m643BDDFDC67D20D1AB82A08C465FA2EA2D8362C7_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB457CC2846421D816714436C0C7D0EFC0CD3D887 (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712**, const RuntimeMethod*))Dictionary_2_TryGetValue_m035C78D6F72178A18500F49206C0719FB5B05128_gshared)(__this, ___key0, ___value1, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::Create()
inline AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F AsyncTaskMethodBuilder_1_Create_mABDAD23DA0173AE8326A7C04920DB407423921EC (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::Start<VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m6AE8DEC8121E4C7CAE6B82B2BC8778C61CDBC305 (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_mD8E783CA8BA56CFAD74F86833BDFE09BA7105324_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::get_Task()
inline Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* AsyncTaskMethodBuilder_1_get_Task_mA7CB40FC684078D672347CD01971238B61A243F5 (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::Contains(T)
inline bool List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.SubAssetKey>::Add(T)
inline void List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_inline (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.AnimationClip VRMShaders.AnimationClipFactory::GetAnimationClip(VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimationClipFactory_GetAnimationClip_mAB53A3960881F042312108F0738B4BC0AC46E55A (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>>::Invoke()
inline Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* Func_1_Invoke_m141038C81F2F6E6E931C4875106CF040DA707139_inline (Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* (*) (Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>::GetAwaiter()
inline TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 Task_1_GetAwaiter_m3407EB6F39CE65A53271EBB979203845EE01B10E (Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 (*) (Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AnimationClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m992139945AB62277F0823802F35DCD5498D7F859 (TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AnimationClip>,VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m7514FB3EBDA78496DDF224A57B193A6905744BD5 (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36* ___awaiter0, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36*, U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m1C19CE13C7FF786572E97ABE0868B9F9C59DD604_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AnimationClip>::GetResult()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* TaskAwaiter_1_GetResult_mFF6ED44A18823D8B0D9F44AF41E64325610BAED4 (TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8B5717423727B71ABB36EABCD28F78BC64EBBFE2 (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, const RuntimeMethod*))Dictionary_2_Add_mCB2D97D3E9B4DCF45363280193FB8A1047EA9389_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mCBB33B982E6B4138B23EE00BE96D9C1810438D7A (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m4D6BE2D25322D9A9C27BB2395E0D035313427F3A (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAnimationClipAsyncU3Ed__13_MoveNext_mF09E45C9200FBAA15187AAFE5F62E4390587EA68 (U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AnimationClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mAB687E7BA7ECA7D9CBC0D3EAA501C4C8BC310F43 (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAnimationClipAsyncU3Ed__13_SetStateMachine_m89EB85D8BE304E411504904FA8CD4903527CD40E (U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A (RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (RuntimeObject*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task VRMShaders.ImmediateCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ImmediateCaller_NextFrame_m183A9C60C43D97D3A09119BD04CC4063054B0634 (ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean VRMShaders.NextFrameTaskScheduler::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NextFrameTaskScheduler_get_IsSupported_m7812EB01545365F4AA3E8060C835ADCD12212209 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF3B12D7E1B0CAFC75DE63113E6A5C1B4FB30A6AA (U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* UnityLoopTaskScheduler_get_Instance_m25B4348DD007CE6C41BC869450282FB021C9A571 (const RuntimeMethod* method) ;
// VRMShaders.TinyManagedTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::get_Scheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* UnityLoopTaskScheduler_get_Scheduler_m83E131DE075E9689458CAF05C3AEC3881E06EA30_inline (UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VRMShaders.TinyManagedTaskScheduler::Enqueue(System.Action,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler_Enqueue_mA27886C88CE516A35AA6BC84F77908B701149EC9 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___canExecute1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler>()
inline UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* GameObject_AddComponent_TisUnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_m35D00C93C695CBEF3F5A6F9FFF02B11B019E7D08 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void VRMShaders.TinyManagedTaskScheduler::ManagedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler_ManagedUpdate_m4BC5CE7731D8ADDEC7AE24ABB80E0A25B1D3B791 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.TinyManagedTaskScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler__ctor_mDE48A55FBCE13C9D4F7778E1B2CAC458DA87EF10 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.NextFrameTaskScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.RuntimeOnlyAwaitCaller::ResetLastTimeoutBaseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyAwaitCaller_ResetLastTimeoutBaseTime_mD77FD9DA8C3540A54713170DA90FE7B0229CAAA0 (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m58B608B9A78D6757AB8F5B99F38A93FE2704CD74 (U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.NextFrameTaskScheduler::Enqueue(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NextFrameTaskScheduler_Enqueue_m9D3E6F455FA9A40E078C143F220618CF23AD5B73 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.RuntimeOnlyAwaitCaller::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyAwaitCaller_CheckTimeout_m89E6800375D8013A12443AD17292B5DCAB0627CA (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyAwaitCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyAwaitCaller_NextFrame_mABFF659C172148EDEA9B8A88C9B0C2581161E78E (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Boolean VRMShaders.RuntimeOnlyAwaitCaller::get_LastTimeoutBaseTimeNeedsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C5BBEC583577A0C55F93F088E348BEEBC0D31B (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, RuntimeObject*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller::ResetLastTimeoutBaseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyNoThreadAwaitCaller_ResetLastTimeoutBaseTime_m11879DACEA5DF4DB8961464DA1513A2524EBDE32 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9B16ED662F42FFD7687D533808F61A8342ED8D2E (U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromException_m9757D9F49178A24C1DF7DB8973DF7B81574CEA55 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.RuntimeOnlyNoThreadAwaitCaller::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyNoThreadAwaitCaller_CheckTimeout_m1C3D26EB6F253876E225CFCB2D6C49C4BEA62B08 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyNoThreadAwaitCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyNoThreadAwaitCaller_NextFrame_m0A890B1006C3AA7EFB1C35C41E97F8777A740915 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.RuntimeOnlyNoThreadAwaitCaller::get_LastTimeoutBaseTimeNeedsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyNoThreadAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C406A7E6119149B9F0875805A97B3B356F0CCA (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66 (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* __this, ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029*, ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6*, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_mA12291C2C7BF7EE60B6C00DC37B0B069D5CBF564_gshared)(__this, ___result0, method);
}
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16 (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* __this, ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029*, ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_mDC7DCE43901A3A70B82710E9387386928AC832E1_gshared)(__this, ___item0, method);
}
// System.Void System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m5FE3673EDB75ABE13CD440CA825BE6119E18A46D (ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item10, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.ValueTuple`2<System.Action,System.Func`1<System.Boolean>>>::.ctor()
inline void ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680 (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029*, const RuntimeMethod*))ConcurrentQueue_1__ctor_mAE906617E8A28CC9AB4AA99CF9C17CB2E08FF972_gshared)(__this, method);
}
// System.Void VRMShaders.SubAssetKey::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// VRMShaders.SubAssetKey VRMShaders.MaterialDescriptor::get_SubAssetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.MaterialDescriptor::.ctor(System.String,System.String,System.Nullable`1<System.Int32>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,VRMShaders.TextureDescriptor>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Single>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Color>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Vector4>,System.Collections.Generic.IReadOnlyList`1<System.Action`1<UnityEngine.Material>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialDescriptor__ctor_m36D44D451E1D91E08030756C606543A4913BC3A3 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, String_t* ___name0, String_t* ___shaderName1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___renderQueue2, RuntimeObject* ___textureSlots3, RuntimeObject* ___floatValues4, RuntimeObject* ___colors5, RuntimeObject* ___vectors6, RuntimeObject* ___actions7, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.MaterialDescriptor::Equals(VRMShaders.MaterialDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialDescriptor_Equals_m44F1A512E0D0509C5CC2AE73A8C62114CF1D483B (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___other0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.MaterialDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialDescriptor_Equals_m73708F6E7FC0CEDD9788CD41777E722FBBD8C113 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
inline int32_t Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_gshared)(__this, method);
}
// System.Int32 VRMShaders.MaterialDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaterialDescriptor_GetHashCode_mA7E11337B9695D9CEDD4BBFA3F054F707EAA69AF (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,VRMShaders.TextureDescriptor>::.ctor()
inline void Dictionary_2__ctor_mB69686FC68B0FF4339F36B5CD71AEF42DFB7710F (Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9*, const RuntimeMethod*))Dictionary_2__ctor_m93BB8528448E54CDDB5F13FEE98141667947A579_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3 (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, const RuntimeMethod*))Dictionary_2__ctor_m7CE1FD4678D8769E81090E14D0E1F13B0838A4F2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector4>::.ctor()
inline void Dictionary_2__ctor_m4D9529C985F4D1E645FD582FBB2079A479FFA019 (Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350*, const RuntimeMethod*))Dictionary_2__ctor_m0263D33E2CDFEDD92506FBBD128A4C2C72CE34DE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<UnityEngine.Material>>::.ctor()
inline void List_1__ctor_m279C03C8488D976D9ECF32C7809BB0184FA4B42B (List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::.ctor()
inline void List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, const RuntimeMethod*))List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB_gshared)(__this, method);
}
// System.Void VRMShaders.MaterialFactory/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8A1805A0701C2CB7E06EDEE20D0D872400748B64 (U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEB5A6BD9AB515B40A71374466B103B58E024B058 (Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mEB5A6BD9AB515B40A71374466B103B58E024B058_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13 (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C*, const RuntimeMethod*))List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::GetEnumerator()
inline Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65 (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, const RuntimeMethod*))List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::Dispose()
inline void Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862 (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13*, const RuntimeMethod*))Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Current()
inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_inline (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method)
{
	return ((  MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC (*) (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13*, const RuntimeMethod*))Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<VRMShaders.MaterialFactory/MaterialLoadInfo>::MoveNext()
inline bool Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2 (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13*, const RuntimeMethod*))Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::ToArray()
inline MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method)
{
	return ((  MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, const RuntimeMethod*))List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::Remove(T)
inline bool List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC, const RuntimeMethod*))List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Count()
inline int32_t List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, const RuntimeMethod*))List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::get_Item(System.Int32)
inline MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8 (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, int32_t, const RuntimeMethod*))List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8_gshared)(__this, ___index0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::Create()
inline AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4 AsyncTaskMethodBuilder_1_Create_m7619836111BB94BA38A1BB9571E3B07C50B05F9D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::Start<VRMShaders.MaterialFactory/<LoadAsync>d__11>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m9847B12E4A6F740B85AAE030955D7C4DF9DE4852 (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m3C1EDF64A0A425814EE301614EAF377A5ECCEC2C_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::get_Task()
inline Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* AsyncTaskMethodBuilder_1_get_Task_m5CBBC7E5001A81FB63D0053306B4BB77B5BE7C26 (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_m8DBD33DD5E1F19C75C9C022974B27C719E9C5F8D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.MaterialFactory/MaterialLoadInfo::get_IsSubAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialLoadInfo_get_IsSubAsset_m69D0DC45B5DDCF62549D48AB5D476C6E63B9C24E (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.MaterialFactory/MaterialLoadInfo::.ctor(VRMShaders.SubAssetKey,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3 (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___asset1, bool ___useExternal2, const RuntimeMethod* method) ;
// System.Void VRMShaders.MaterialFactory/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31AE0CCAFDD42BE7D2642E0B553DEE276E9BC941 (U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<UnityEngine.Texture>(TResult)
inline Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* Task_FromResult_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m792BEB34B2E4463F88A7B18B6DB8170DE7175940 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*) (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.MaterialFactory/MaterialLoadInfo>::Add(T)
inline void List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC, const RuntimeMethod*))List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_gshared_inline)(__this, ___item0, method);
}
// System.Void VRMShaders.GetTextureAsyncFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTextureAsyncFunc__ctor_mDC2139E98FADF3D12C53F6F42BDEBEB262BAEEBC (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>::get_Value()
inline TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_inline (KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* __this, const RuntimeMethod* method)
{
	return ((  TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D (*) (KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA7D8986F71B806E9A95E20A5D5FEBB81AA88E223_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture> VRMShaders.GetTextureAsyncFunc::Invoke(VRMShaders.TextureDescriptor,VRMShaders.IAwaitCaller)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_inline (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture>::GetAwaiter()
inline TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD Task_1_GetAwaiter_m89386CB273679B04B7CA2F4650CC0BE8452F0792 (Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD (*) (Task_1_tAE3580031834C793688B3B00005C66DC69CA7807*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF33995FEE2DB39F5D10B0080998A4C467A9BFF8A (TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture>,VRMShaders.MaterialFactory/<LoadAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m092114FC44FD3528526C38D395FEBF80EC906172 (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD* ___awaiter0, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD*, U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m27FB3BFC1D50FDBC360641771EEB45B796895F02_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture>::GetResult()
inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TaskAwaiter_1_GetResult_mE30B4F79CBAD5023CA7429D70E18EB0F7DBD5B03 (TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD* __this, const RuntimeMethod* method)
{
	return ((  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* (*) (TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_inline (KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0842A0499476FBD4C818EEF67EE6FDB06EF2C2B9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void VRMShaders.MaterialFactory::SetTextureOffsetAndScale(UnityEngine.Material,System.String,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory_SetTextureOffsetAndScale_m2C96D9B642C20094BF08043A7E759BFF4E3F8008 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, String_t* ___propertyName1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale3, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_inline (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_inline (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Vector4>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m8D62DB0B47EAE697C8A45D6163F646C28DB3CCAC_inline (KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7*, const RuntimeMethod*))KeyValuePair_2_get_Key_m6E28093B229E73823CBAA1C3A178F33BA94DDC7B_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Vector4>::get_Value()
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_m17D0E6AA6114D14507F66491AF38C3E874B64E70_inline (KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7* __this, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD45B58EB40362D3F8E92FE11643718AE2E67314B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	return ((  float (*) (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Material>::Invoke(T)
inline void Action_1_Invoke_m1960168077AF32A34C109932F39D6DED83A157AB_inline (Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m94A24D634E94D8CB9B48E502AF60871745076334 (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mAA726334D3DFE03E62A79582EED2C176EAED531D (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void VRMShaders.MaterialFactory/<LoadAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491 (U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Material>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE9FEC7A547FFE114CF4F03B8AF4ED80B0E9C2378 (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void VRMShaders.MaterialFactory/<LoadAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__11_SetStateMachine_m836AFCAF5C72058E4DB2C9C069425E626508C210 (U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String VRMShaders.PathObject::get_FullPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String VRMShaders.PathObject::get_Extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_Extension_m7C738BBD65735B0B9B27E430D1FB57CC60112E98 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String VRMShaders.PathObject::get_Stem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_Stem_m91492E9C2A76D9FA495EECE9D0DC79F267439350 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// VRMShaders.PathObject VRMShaders.PathObject::FromFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8 (String_t* ___src0, const RuntimeMethod* method) ;
// VRMShaders.PathObject VRMShaders.PathObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_Parent_m2AC042A2F3B92BFBE931F980824B2D6D41618B7D (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// VRMShaders.PathObject VRMShaders.PathObject::get_UnityAssets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityAssets_mF212A5E2B6684E37AD5CFD2F8DE7796CB87FFE8C_inline (const RuntimeMethod* method) ;
// System.Boolean VRMShaders.PathObject::IsDescendantOf(VRMShaders.PathObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B ___ascendant0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.PathObject::get_IsUnderAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_get_IsUnderAsset_m2DE1A6BC1F37FC1436B07F64D048B1EA46B83E83 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.PathObject::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_get_Exists_mDC954D6EF7B541BDA60094E710AAFEA27C98D103 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// VRMShaders.PathObject VRMShaders.PathObject::get_UnityRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String VRMShaders.PathObject::get_UnityAssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m17A1AD4E216D884E3DF3208BF44F4E40823BAA23 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void VRMShaders.PathObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, String_t* ___src0, const RuntimeMethod* method) ;
// System.String VRMShaders.PathObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_ToString_m7E60319427F6EC3250A7498E034D83460911F1F5 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// VRMShaders.PathObject VRMShaders.PathObject::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, String_t* ___child0, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8 (String_t* ___variable0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] VRMShaders.PathObject::ReadAllBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PathObject_ReadAllBytes_m75FB512EC231DBF9586DBB8BC8E6E091B3B2FE8E (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void VRMShaders.PathObject::WriteAllBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathObject_WriteAllBytes_mF84A5EF4A16B01826EB56CD39575BD6D25FE3272 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.SubAssetKey::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___obj0, const RuntimeMethod* method) ;
// System.Void VRMShaders.SubAssetKey::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String VRMShaders.SubAssetKey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubAssetKey_ToString_m1F8484C5F2BE3576FF176C448256B3AFD3D22335 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.SubAssetKey::op_Equality(VRMShaders.SubAssetKey,VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_op_Equality_mF67D177A7B2D114D7CBA6E4A31BD5A2808917E44 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___l0, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___r1, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.SubAssetKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_Equals_m4A176AC100A717456097488AF6FA3937EFC2B63F (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.SubAssetKey::Equals(VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_Equals_mB133BD474F6CDB7144F3C8C52BA444BCB839E38D (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___other0, const RuntimeMethod* method) ;
// System.Int32 VRMShaders.SubAssetKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubAssetKey_GetHashCode_mD73F3672BA05D8325171774B09197AE436334DD0 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, const RuntimeMethod* method) ;
// UnityEngine.Material VRMShaders.NormalConverter::get_Exporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NormalConverter_get_Exporter_m19EEE4C3F007BCAAA4F129C95C26A6287167EF90 (const RuntimeMethod* method) ;
// UnityEngine.Texture2D VRMShaders.TextureConverter::CopyTexture(UnityEngine.Texture,VRMShaders.ColorSpace,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___dstColorSpace1, bool ___dstNeedsAlpha2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, const RuntimeMethod* method) ;
// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::get_Importer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::get_Exporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.TextureExtensions::HasMipMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExtensions_HasMipMap_m83BE937348B6D7A9B10E15A1A01F18D086E11C1D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_anisoLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_anisoLevel_m49CB873A0A3A71281BAE34A9512803D76D2EA27F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Texture::get_mipMapBias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Texture_get_mipMapBias_m83F116D84856F99AD09EE8D3701763EAA80F1FB1 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_m1DE1C2813B72EDCCCEB396CFC91989358E8C3AD0 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeU_m9217A53AC4A40DA2486AAD664F286C28A32D7716 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeV_mDD1FD069227720CAA9433145CDFBAD42E680A212 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeW_mE0C1A36F3EB7ABC2D4CD8CAB7BD0226E00229EB8 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeW(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D VRMShaders.TextureConverter::CreateEmptyTextureWithSettings(UnityEngine.Texture,VRMShaders.ColorSpace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureConverter_CreateEmptyTextureWithSettings_m5B239575ABA429F51E4317041B8BDDEB98E593D3 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___dstColorSpace1, bool ___dstNeedsAlpha2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Byte[],System.String>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47 (ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item10, String_t* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t*, const RuntimeMethod*))ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared)(__this, ___item10, ___item21, method);
}
// System.ValueTuple`2<System.Byte[],System.String> VRMShaders.RuntimeTextureSerializer::CopyTextureAndGetBytesWithMime(UnityEngine.Texture2D,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 RuntimeTextureSerializer_CopyTextureAndGetBytesWithMime_mF8AF557328E65B37730881CEA399E4E4391D237A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, int32_t ___colorSpace1, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::.ctor()
inline void List_1__ctor_m4CD93AB6804CF54605296873190B2AA1B9CB9248 (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>>::.ctor()
inline void List_1__ctor_mD5D40B514D4FBB5950B696E35511CBA11CAB5508 (List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E*, const RuntimeMethod*))List_1__ctor_m97230F4B1E6C0072E0649B4AB0ECEF959A475CEA_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::get_Item(System.Int32)
inline TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666 (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Func`1<UnityEngine.Texture2D> VRMShaders.TextureExportParam::get_Creator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* TextureExportParam_get_Creator_mF2CC80F3E392CA4B2B851D6F886F3547E48EC7D9_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<UnityEngine.Texture2D>::Invoke()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Func_1_Invoke_m29A9BE613A7C896227B80E561BDD80B137492198_inline (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// VRMShaders.ColorSpace VRMShaders.TextureExportParam::get_ExportColorSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportColorSpace_mDD3F70989428356E1206929057CC0BBBD7574CB7_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m512348AB69774EFE6A10AB6467B1A02BF5E411FA (ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mD844C0CC761CFC60FE083BCC03EBB4243D54767C_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>>::Add(T)
inline void List_1_Add_mC7EC904EAEE573DEE87C2C57A6538972CEC709BE_inline (List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* __this, ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E*, ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430, const RuntimeMethod*))List_1_Add_mAC985A3824A4305BEC2B381B9868C73202BB5863_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::get_Count()
inline int32_t List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_inline (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingSimple(UnityEngine.Texture,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingSimple_m2EF10D75480DFD0D346A059F8F23C9D08267F668 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, bool ___isLinear2, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m7B87366FEB4B92685ED3AC6C69CD249C0A671536 (U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE45245356843E99B1B7DACA7142184A15D1E21E2 (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VRMShaders.TextureExportParam::.ctor(VRMShaders.TextureExportTypes,VRMShaders.ColorSpace,UnityEngine.Texture,UnityEngine.Texture,System.Single,System.Boolean,System.Func`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExportParam__ctor_m7A7C93C8A3A26BEB875E5BAA6DF3F45E246E7170 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, int32_t ___exportType0, int32_t ___exportColorSpace1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___primaryTexture2, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___secondaryTexture3, float ___optionFactor4, bool ___needsAlpha5, Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___creator6, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.TextureExporter::TryGetExistsParam(VRMShaders.TextureExportParam,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExporter_TryGetExistsParam_m3AB72331C8E3BFFD883D95366C1F5764C413EE6A (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* ___param0, int32_t* ___existsIdx1, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.TextureExportParam::get_NeedsAlpha()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextureExportParam_get_NeedsAlpha_m8BD690FE8D76AE3A0B7C6B00FC1B42A70D1DB5B5_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::set_Item(System.Int32,T)
inline void List_1_set_Item_mB73490C9393F38CE83CF33488D350D0EE98EFC41 (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, int32_t ___index0, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, int32_t, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::Add(T)
inline void List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_inline (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m02971892B62BCED9CCE4F7A2EB52A3D911282D4D (U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA5B9373932DACFC810450D881745AF775F9AC980 (U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<VRMShaders.TextureExportParam>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mF68C2F84CC8D3EE3321A455FB49A060E77EFC9B4 (Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<VRMShaders.TextureExportParam>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m1C691E73B55BEA84C6E2CA3A14BFF1DCAE9863D6 (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* __this, Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*, Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// UnityEngine.Texture2D VRMShaders.TextureExporter::ConvertTextureSimple(UnityEngine.Texture,System.Boolean,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureExporter_ConvertTextureSimple_m5B5C766C0A97E7F1D35FD6BB01219DAAB0E5A392 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, int32_t ___exportColorSpace2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D VRMShaders.OcclusionMetallicRoughnessConverter::Export(UnityEngine.Texture,System.Single,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* OcclusionMetallicRoughnessConverter_Export_mB6C9D0836C8C8D54F61DB52EC17DB96FD21C0C55 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicSmoothTexture0, float ___smoothness1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___occlusionTexture2, const RuntimeMethod* method) ;
// UnityEngine.Texture2D VRMShaders.NormalConverter::Export(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NormalConverter_Export_mB3C96BB0035EACC2B2C5AA2E52CC0BF347AB26C5 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureExportParam::set_NeedsAlpha(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureExportParam_set_NeedsAlpha_mD3AE6957BC080CBC5B613EA776865387958714DC_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureExportParam::set_Creator(System.Func`1<UnityEngine.Texture2D>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureExportParam_set_Creator_m4D73C6589C8F6B730162AD9161B93909FC516A1E_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___value0, const RuntimeMethod* method) ;
// VRMShaders.TextureExportTypes VRMShaders.TextureExportParam::get_ExportType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VRMShaders.TextureExportParam::get_PrimaryTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture VRMShaders.TextureExportParam::get_SecondaryTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_SecondaryTexture_m1991DF636235D83F5D3FDBF67C4C1D97DFBB7A06_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.SamplerParam::get_EnableMipMap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) ;
// UnityEngine.FilterMode VRMShaders.SamplerParam::get_FilterMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::get_WrapModesU()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::get_WrapModesV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.SamplerParam::.ctor(UnityEngine.TextureWrapMode,UnityEngine.TextureWrapMode,UnityEngine.FilterMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplerParam__ctor_mE36D8C781F96A64CCDCCB85F9E3069986F906C36 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, int32_t ___wrapModesU0, int32_t ___wrapModesV1, int32_t ___filterMode2, bool ___enableMipMap3, const RuntimeMethod* method) ;
// VRMShaders.SubAssetKey VRMShaders.TextureDescriptor::get_SubAssetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401 (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureDescriptor::.ctor(System.String,UnityEngine.Vector2,UnityEngine.Vector2,VRMShaders.SamplerParam,VRMShaders.TextureImportTypes,System.Single,System.Single,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2 (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___sampler3, int32_t ___textureType4, float ___metallicFactor5, float ___roughnessFactor6, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i07, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i18, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i29, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i310, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i411, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i512, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::Add(TKey,TValue)
inline void Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24 (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, const RuntimeMethod*))Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24_gshared)(__this, ___key0, ___value1, method);
}
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2__ctor_mD37786100B244E4FE6249A90F6D3A68694361F4F (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::.ctor()
inline void Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8 (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9*, const RuntimeMethod*))Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2_U3CU3Em__Finally1_m002E619D6E2073E1C6F7A3FCB6BE8860104BA549 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2_System_IDisposable_Dispose_m60DB92951B01BDBF4CF1BE71E98D2EC7B41B9152 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::GetEnumerator()
inline Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 (*) (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::get_Current()
inline KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_inline (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 (*) (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90*, const RuntimeMethod*))Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::get_Value()
inline TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_inline (KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168* __this, const RuntimeMethod* method)
{
	return ((  TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D (*) (KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168*, const RuntimeMethod*))KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55 (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90*, const RuntimeMethod*))Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<VRMShaders.SubAssetKey,VRMShaders.TextureDescriptor>::Dispose()
inline void Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90*, const RuntimeMethod*))Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<VRMShaders.TextureDescriptor> VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.Generic.IEnumerable<VRMShaders.TextureDescriptor>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CVRMShaders_TextureDescriptorU3E_GetEnumerator_m0CE91616EEF2296343D02237090379F336984D62 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::.ctor()
inline void Dictionary_2__ctor_m57141BE2AA4931D7ADE4A1AB19B20877C3BA1A7B (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*, const RuntimeMethod*))Dictionary_2__ctor_m01C84F8A2234BE682E8680DD1357924A2C37D827_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::Clear()
inline void Dictionary_2_Clear_mC6905DC706A69FD31C153FF3A6DABAC9B11F2340 (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*, const RuntimeMethod*))Dictionary_2_Clear_m386DDC921BCCD1847F64FCB6A2716BBB09818FEB_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* Enumerable_ToArray_TisKeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD_m473696F6A443AB17179BE66F988EB2440C30F9CC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986_m2C03A59B4C1063DBD32F5AD46FD8CDD5DDD6D675_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::Deconstruct(TKey&,TValue&)
inline void KeyValuePair_2_Deconstruct_m8D863C313D199F9D6E2C11B8EBAA9BE57EC89736 (KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* ___key0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700**, const RuntimeMethod*))KeyValuePair_2_Deconstruct_m0B31518F1BC43BE007FEB5B87596122573B081E6_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::Remove(TKey)
inline bool Dictionary_2_Remove_m7790456B1DDB14EB1475A6EE63A7D922B0A12744 (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))Dictionary_2_Remove_m643BDDFDC67D20D1AB82A08C465FA2EA2D8362C7_gshared)(__this, ___key0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::Create()
inline AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3 AsyncTaskMethodBuilder_1_Create_mD2DB64A27E5E976307A021010EB9FAB5C7BB339E (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::Start<VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m8F04329184D143B1C451F9C3492E97306351A01C (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m83891E4FD2DF37F4C40A9F7440656C85F781A3B8_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::get_Task()
inline Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* AsyncTaskMethodBuilder_1_get_Task_mE4704D087AF95816B490025308CD8CEE558C81A0 (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m57504ACDBB1FBD467D66E1B415485C87F78E847D (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700**, const RuntimeMethod*))Dictionary_2_TryGetValue_m035C78D6F72178A18500F49206C0719FB5B05128_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>> VRMShaders.GetTextureBytesAsync::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>::GetAwaiter()
inline TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA (Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F (*) (Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078*, const RuntimeMethod*))Task_1_GetAwaiter_m2BEBDAE4592267FCCA21600125BE489842244969_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA (TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mA21A40C0F804061F77F489EE30A9B6D4EC0825F8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>,VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0 (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* ___awaiter0, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F*, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t11F7DB289A7003A8B4A868EC12F2CE9E35AD881E_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m13AE38976ED041F311BE1451232E5DF148E5C896_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>>::GetResult()
inline Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70 (TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 (*) (TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA3305506E3E235963DA83F3A41ACBD7CEFC14241_gshared)(__this, method);
}
// VRMShaders.ITextureDeserializer VRMShaders.TextureFactory::get_TextureDeserializer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline (Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806*, const RuntimeMethod*))Nullable_1_get_HasValue_m163BBAC499296BBC70BE048FC4C9C61A0CECFECC_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>::GetValueOrDefault()
inline ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline (Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 (*) (Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m6AFFEE188D1F30878F0D93176575235674EC59E3_gshared_inline)(__this, method);
}
// System.Void VRMShaders.DeserializingTextureInfo::.ctor(System.Byte[],System.String,VRMShaders.ColorSpace,VRMShaders.SamplerParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___imageData0, String_t* ___dataMimeType1, int32_t ___colorSpace2, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___samplerParam3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C (Task_1_t95921EB64E237ACD28589D64B693C652268F225E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B (*) (Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911 (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,VRMShaders.TextureFactory/<GetTextureAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* ___awaiter0, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA1198A86E1A69FD879204033C4D1ACB50E8D7213_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7 (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, const RuntimeMethod*))Dictionary_2_Add_mCB2D97D3E9B4DCF45363280193FB8A1047EA9389_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Texture2D VRMShaders.OcclusionMetallicRoughnessConverter::Import(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* OcclusionMetallicRoughnessConverter_Import_m372DC2C9A6D8579D4E1DE3BC5B2F7179E28BED9E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___metallicRoughnessTexture0, float ___metallicFactor1, float ___roughnessFactor2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___occlusionTexture3, bool ___isLegacySquaredRoughness4, const RuntimeMethod* method) ;
// System.Void VRMShaders.TextureExtensions::SetSampler(UnityEngine.Texture2D,VRMShaders.SamplerParam&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_SetSampler_m58D7FBA605BB18338B95B946DF1ADCF40652F760 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* ___param1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m69B9E671DDED5917ADE05CE0BA8116E64981B1B7 (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m397D77518B5E87582D6628397D5EC380E3D6B7B5 (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void VRMShaders.TextureFactory/<GetTextureAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1 (U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0BA4ACB7B5DE9C3DE968DD0CC8EA3FCA0AF46679 (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void VRMShaders.TextureFactory/<GetTextureAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureAsyncU3Ed__13_SetStateMachine_m988A2C53D5D30F9288328809C68A2BFA7C92C1DF (U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Create()
inline AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F AsyncTaskMethodBuilder_1_Create_m4BA37483E577200CFCDF06019DD0F8A8BD587736 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mEDFC6DA4B7E247B34DE3FE7547704DD61857A87A (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mBE93B27FCAC5919797532E0DB74FE138B3747108_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_t95921EB64E237ACD28589D64B693C652268F225E* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t95921EB64E237ACD28589D64B693C652268F225E* (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String VRMShaders.DeserializingTextureInfo::get_DataMimeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean VRMShaders.DeserializingTextureInfo::get_UseMipmap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeserializingTextureInfo_get_UseMipmap_mE27396FDCFD6F9F47E37B4F62314B32E2B7F421C_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// VRMShaders.ColorSpace VRMShaders.DeserializingTextureInfo::get_ColorSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_ColorSpace_m9854E04604D1193A5298FDF58BFE38AE6E8912AA_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// System.Byte[] VRMShaders.DeserializingTextureInfo::get_ImageData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeserializingTextureInfo_get_ImageData_m849A30088BD35D7738C8E40D514B72355E878AC0_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::get_WrapModeU()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeU_mC29BB4ACDAD84E3640BB5964DAB40CB44BAB5E65_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::get_WrapModeV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeV_m4BD882EC14CAB385FAB6DA794FBC77E62B482A86_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// UnityEngine.FilterMode VRMShaders.DeserializingTextureInfo::get_FilterMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_FilterMode_m001BCDA1780DE3D353D755E4F43A74D252B98E81_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m204FCAB80E4785657550AFD7C876ECAF5BD2D7FD (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m311EFBBBB6E25AF889B0BB558DDF85C428902D6F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__0_MoveNext_m19A37D650915BE1184FEFD56C75481AB49AC0633 (U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__0_SetStateMachine_mE2AA27E80F27CFE14286F8C1455087B474E84B86 (U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::get_useMipMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
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
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory::get_ExternalClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationClipFactory_get_ExternalClips_mF1BB9E954658DB285F12378E4E4A8870C76A1592 (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<SubAssetKey, AnimationClip> ExternalClips => _externalClips;
		RuntimeObject* L_0 = __this->____externalClips_0;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory::get_RuntimeGeneratedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationClipFactory_get_RuntimeGeneratedClips_m6B8C803475B98F4A8444E937A709687D3CD1420D (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<SubAssetKey, AnimationClip> RuntimeGeneratedClips => _runtimeClips;
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_0 = __this->____runtimeClips_1;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRMShaders.SubAssetKey> VRMShaders.AnimationClipFactory::get_LoadedClipKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationClipFactory_get_LoadedClipKeys_mD1C2DF69E096BF174CE6ADCF8E3C4D9F753BF684 (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<SubAssetKey> LoadedClipKeys => _loadedClipKeys;
		List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* L_0 = __this->____loadedClipKeys_2;
		return L_0;
	}
}
// System.Void VRMShaders.AnimationClipFactory::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipFactory__ctor_m48373B5FD153D3254E57F9CB504DDB5F25B6FFAA (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, RuntimeObject* ___externalClips0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4DAB465502F9ECE204E2DC742160E3B42DF92B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<SubAssetKey, AnimationClip> _runtimeClips = new Dictionary<SubAssetKey, AnimationClip>();
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_0 = (Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D*)il2cpp_codegen_object_new(Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4DAB465502F9ECE204E2DC742160E3B42DF92B64(L_0, Dictionary_2__ctor_m4DAB465502F9ECE204E2DC742160E3B42DF92B64_RuntimeMethod_var);
		__this->____runtimeClips_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeClips_1), (void*)L_0);
		// private readonly List<SubAssetKey> _loadedClipKeys = new List<SubAssetKey>();
		List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* L_1 = (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F*)il2cpp_codegen_object_new(List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE(L_1, List_1__ctor_m425CAE8026B6DEFDB02577281D533B5450FA32AE_RuntimeMethod_var);
		__this->____loadedClipKeys_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadedClipKeys_2), (void*)L_1);
		// public AnimationClipFactory(IReadOnlyDictionary<SubAssetKey, AnimationClip> externalClips)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _externalClips = externalClips;
		RuntimeObject* L_2 = ___externalClips0;
		__this->____externalClips_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____externalClips_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void VRMShaders.AnimationClipFactory::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipFactory_Dispose_m1B206CD12CE01DFA49953294EC313BF22DA9CB39 (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m572E815DF3FFC15DC05A71ACDFBD462A291FF6EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m061DF1BB007F126331ED4B3D5256E53DF9EDE40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m34F9A2D6407A54112CDB5AFD6197C83814B2305D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAE70529F29BD1768FE6E58B9937FC912E78A474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m91AD6B4DF951A5F9B54348367E9FDF2FB38ECB88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m675D88354E32F198B160C8A222259E4027B2A62C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var kv in _runtimeClips)
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_0 = __this->____runtimeClips_1;
		NullCheck(L_0);
		Enumerator_t8BF794667098F6008753E7A6FFEC60E7F444EB91 L_1;
		L_1 = Dictionary_2_GetEnumerator_m061DF1BB007F126331ED4B3D5256E53DF9EDE40D(L_0, Dictionary_2_GetEnumerator_m061DF1BB007F126331ED4B3D5256E53DF9EDE40D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m34F9A2D6407A54112CDB5AFD6197C83814B2305D((&V_0), Enumerator_Dispose_m34F9A2D6407A54112CDB5AFD6197C83814B2305D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000e_1:
			{
				// foreach (var kv in _runtimeClips)
				KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 L_2;
				L_2 = Enumerator_get_Current_m91AD6B4DF951A5F9B54348367E9FDF2FB38ECB88_inline((&V_0), Enumerator_get_Current_m91AD6B4DF951A5F9B54348367E9FDF2FB38ECB88_RuntimeMethod_var);
				V_1 = L_2;
				// UnityObjectDestroyer.DestroyRuntimeOrEditor(kv.Value);
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_3;
				L_3 = KeyValuePair_2_get_Value_m675D88354E32F198B160C8A222259E4027B2A62C_inline((&V_1), KeyValuePair_2_get_Value_m675D88354E32F198B160C8A222259E4027B2A62C_RuntimeMethod_var);
				UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D(L_3, NULL);
			}

IL_0022_1:
			{
				// foreach (var kv in _runtimeClips)
				bool L_4;
				L_4 = Enumerator_MoveNext_mFAE70529F29BD1768FE6E58B9937FC912E78A474((&V_0), Enumerator_MoveNext_mFAE70529F29BD1768FE6E58B9937FC912E78A474_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// _runtimeClips.Clear();
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_5 = __this->____runtimeClips_1;
		NullCheck(L_5);
		Dictionary_2_Clear_m572E815DF3FFC15DC05A71ACDFBD462A291FF6EE(L_5, Dictionary_2_Clear_m572E815DF3FFC15DC05A71ACDFBD462A291FF6EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRMShaders.AnimationClipFactory::TransferOwnership(VRMShaders.TakeResponsibilityForDestroyObjectFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipFactory_TransferOwnership_mE19F840F35E169F4F81391D967522C49AD0255EA (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mBBFA5AFE091091E866CF412782627C1F9648CF9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisKeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418_mEF7FBD3DE43B18E673813DBD2F48AE1A70298A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_Deconstruct_m0C24FF57AE7832C8731F917643DEF6A20352BB06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* V_0 = NULL;
	int32_t V_1 = 0;
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_2;
	memset((&V_2), 0, sizeof(V_2));
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_3 = NULL;
	KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 V_4;
	memset((&V_4), 0, sizeof(V_4));
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_5;
	memset((&V_5), 0, sizeof(V_5));
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_6 = NULL;
	{
		// foreach (var (key, o) in _runtimeClips.ToArray())
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_0 = __this->____runtimeClips_1;
		KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* L_1;
		L_1 = Enumerable_ToArray_TisKeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418_mEF7FBD3DE43B18E673813DBD2F48AE1A70298A56(L_0, Enumerable_ToArray_TisKeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418_mEF7FBD3DE43B18E673813DBD2F48AE1A70298A56_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0043;
	}

IL_0010:
	{
		// foreach (var (key, o) in _runtimeClips.ToArray())
		KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		KeyValuePair_2_t2B92D0C196D119D2458D95F5480A90C48351D418 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		KeyValuePair_2_Deconstruct_m0C24FF57AE7832C8731F917643DEF6A20352BB06((&V_4), (&V_5), (&V_6), KeyValuePair_2_Deconstruct_m0C24FF57AE7832C8731F917643DEF6A20352BB06_RuntimeMethod_var);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_6 = V_5;
		V_2 = L_6;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_7 = V_6;
		V_3 = L_7;
		// take(key, o);
		TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* L_8 = ___take0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_9 = V_2;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10 = V_3;
		NullCheck(L_8);
		TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_inline(L_8, L_9, L_10, NULL);
		// _runtimeClips.Remove(key);
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_11 = __this->____runtimeClips_1;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_mBBFA5AFE091091E866CF412782627C1F9648CF9E(L_11, L_12, Dictionary_2_Remove_mBBFA5AFE091091E866CF412782627C1F9648CF9E_RuntimeMethod_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		// foreach (var (key, o) in _runtimeClips.ToArray())
		int32_t L_15 = V_1;
		KeyValuePair_2U5BU5D_t4B7027E824184CCA218EDD38B7FEEEE7926106F5* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.AnimationClip VRMShaders.AnimationClipFactory::GetAnimationClip(VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimationClipFactory_GetAnimationClip_mAB53A3960881F042312108F0738B4BC0AC46E55A (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB457CC2846421D816714436C0C7D0EFC0CD3D887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tEFB1B20AAF2664F0C91D1D9BC88CDB5097FCF2E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_0 = NULL;
	{
		// if (_externalClips.TryGetValue(key, out var clip))
		RuntimeObject* L_0 = __this->____externalClips_0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.AnimationClip>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tEFB1B20AAF2664F0C91D1D9BC88CDB5097FCF2E3_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return clip;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// if (_runtimeClips.TryGetValue(key, out clip))
		Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_4 = __this->____runtimeClips_1;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_5 = ___key0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mB457CC2846421D816714436C0C7D0EFC0CD3D887(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mB457CC2846421D816714436C0C7D0EFC0CD3D887_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// return clip;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_7 = V_0;
		return L_7;
	}

IL_0024:
	{
		// return null;
		return (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*)NULL;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AnimationClip> VRMShaders.AnimationClipFactory::LoadAnimationClipAsync(VRMShaders.SubAssetKey,System.Func`1<System.Threading.Tasks.Task`1<UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* AnimationClipFactory_LoadAnimationClipAsync_m5D9D3F6F661EB79CEDCF8A1653649C0E235EEE74 (AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60* ___loadAnimationClip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mABDAD23DA0173AE8326A7C04920DB407423921EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m6AE8DEC8121E4C7CAE6B82B2BC8778C61CDBC305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mA7CB40FC684078D672347CD01971238B61A243F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mABDAD23DA0173AE8326A7C04920DB407423921EC(AsyncTaskMethodBuilder_1_Create_mABDAD23DA0173AE8326A7C04920DB407423921EC_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_1 = ___key0;
		(&V_0)->___key_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___key_3))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___key_3))->___Name_3), (void*)NULL);
		#endif
		Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60* L_2 = ___loadAnimationClip1;
		(&V_0)->___loadAnimationClip_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___loadAnimationClip_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m6AE8DEC8121E4C7CAE6B82B2BC8778C61CDBC305(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m6AE8DEC8121E4C7CAE6B82B2BC8778C61CDBC305_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mA7CB40FC684078D672347CD01971238B61A243F5(L_4, AsyncTaskMethodBuilder_1_get_Task_mA7CB40FC684078D672347CD01971238B61A243F5_RuntimeMethod_var);
		return L_5;
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
// System.Void VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAnimationClipAsyncU3Ed__13_MoveNext_mF09E45C9200FBAA15187AAFE5F62E4390587EA68 (U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m7514FB3EBDA78496DDF224A57B193A6905744BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4D6BE2D25322D9A9C27BB2395E0D035313427F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8B5717423727B71ABB36EABCD28F78BC64EBBFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mFF6ED44A18823D8B0D9F44AF41E64325610BAED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m992139945AB62277F0823802F35DCD5498D7F859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3407EB6F39CE65A53271EBB979203845EE01B10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* V_1 = NULL;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_2 = NULL;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_3 = NULL;
	TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_008e_1;
			}
		}
		{
			// if (!_loadedClipKeys.Contains(key))
			AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* L_3 = V_1;
			NullCheck(L_3);
			List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* L_4 = L_3->____loadedClipKeys_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_5 = __this->___key_3;
			NullCheck(L_4);
			bool L_6;
			L_6 = List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB(L_4, L_5, List_1_Contains_m4259FCE300841DD410BC862718506638B5CBE4FB_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0035_1;
			}
		}
		{
			// _loadedClipKeys.Add(key);
			AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* L_7 = V_1;
			NullCheck(L_7);
			List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* L_8 = L_7->____loadedClipKeys_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_9 = __this->___key_3;
			NullCheck(L_8);
			List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_inline(L_8, L_9, List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_RuntimeMethod_var);
		}

IL_0035_1:
		{
			// var clip = GetAnimationClip(key);
			AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* L_10 = V_1;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_11 = __this->___key_3;
			NullCheck(L_10);
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_12;
			L_12 = AnimationClipFactory_GetAnimationClip_mAB53A3960881F042312108F0738B4BC0AC46E55A(L_10, L_11, NULL);
			V_3 = L_12;
			// if (clip != null)
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_13 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_14;
			L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_14)
			{
				goto IL_0052_1;
			}
		}
		{
			// return clip;
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_15 = V_3;
			V_2 = L_15;
			goto IL_00e2;
		}

IL_0052_1:
		{
			// clip = await loadAnimationClip();
			Func_1_tDF9902B9C7197F4E37CDC9C313AFCE9681123C60* L_16 = __this->___loadAnimationClip_4;
			NullCheck(L_16);
			Task_1_t3A312FCAC2B9908D5A56C208728BE20D2EC5494F* L_17;
			L_17 = Func_1_Invoke_m141038C81F2F6E6E931C4875106CF040DA707139_inline(L_16, NULL);
			NullCheck(L_17);
			TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 L_18;
			L_18 = Task_1_GetAwaiter_m3407EB6F39CE65A53271EBB979203845EE01B10E(L_17, Task_1_GetAwaiter_m3407EB6F39CE65A53271EBB979203845EE01B10E_RuntimeMethod_var);
			V_4 = L_18;
			bool L_19;
			L_19 = TaskAwaiter_1_get_IsCompleted_m992139945AB62277F0823802F35DCD5498D7F859((&V_4), TaskAwaiter_1_get_IsCompleted_m992139945AB62277F0823802F35DCD5498D7F859_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_00ab_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 L_21 = V_4;
			__this->___U3CU3Eu__1_5 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m7514FB3EBDA78496DDF224A57B193A6905744BD5(L_22, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36_TisU3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62_m7514FB3EBDA78496DDF224A57B193A6905744BD5_RuntimeMethod_var);
			goto IL_00f6;
		}

IL_008e_1:
		{
			TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36 L_23 = __this->___U3CU3Eu__1_5;
			V_4 = L_23;
			TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36* L_24 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_t6806BE9B1D683D6C397F3C6EB25F455C280BCA36));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00ab_1:
		{
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_26;
			L_26 = TaskAwaiter_1_GetResult_mFF6ED44A18823D8B0D9F44AF41E64325610BAED4((&V_4), TaskAwaiter_1_GetResult_mFF6ED44A18823D8B0D9F44AF41E64325610BAED4_RuntimeMethod_var);
			V_3 = L_26;
			// _runtimeClips.Add(key, clip);
			AnimationClipFactory_t152363D7E15128613DE0CE1CAFB7EE16BC3C39D7* L_27 = V_1;
			NullCheck(L_27);
			Dictionary_2_t1A9AC348C713FFE86D8DF5177C80923583A59F7D* L_28 = L_27->____runtimeClips_1;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_29 = __this->___key_3;
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_30 = V_3;
			NullCheck(L_28);
			Dictionary_2_Add_m8B5717423727B71ABB36EABCD28F78BC64EBBFE2(L_28, L_29, L_30, Dictionary_2_Add_m8B5717423727B71ABB36EABCD28F78BC64EBBFE2_RuntimeMethod_var);
			// return clip;
			AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_31 = V_3;
			V_2 = L_31;
			goto IL_00e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mCBB33B982E6B4138B23EE00BE96D9C1810438D7A(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mCBB33B982E6B4138B23EE00BE96D9C1810438D7A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f6;
	}// end catch (depth: 1)

IL_00e2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_34 = (&__this->___U3CU3Et__builder_1);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4D6BE2D25322D9A9C27BB2395E0D035313427F3A(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_m4D6BE2D25322D9A9C27BB2395E0D035313427F3A_RuntimeMethod_var);
	}

IL_00f6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAnimationClipAsyncU3Ed__13_MoveNext_mF09E45C9200FBAA15187AAFE5F62E4390587EA68_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62*>(__this + _offset);
	U3CLoadAnimationClipAsyncU3Ed__13_MoveNext_mF09E45C9200FBAA15187AAFE5F62E4390587EA68(_thisAdjusted, method);
}
// System.Void VRMShaders.AnimationClipFactory/<LoadAnimationClipAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAnimationClipAsyncU3Ed__13_SetStateMachine_m89EB85D8BE304E411504904FA8CD4903527CD40E (U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAB687E7BA7ECA7D9CBC0D3EAA501C4C8BC310F43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t6134AB2CE6BED5B12B59B685E1FA3069A62A684F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAB687E7BA7ECA7D9CBC0D3EAA501C4C8BC310F43(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAB687E7BA7ECA7D9CBC0D3EAA501C4C8BC310F43_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAnimationClipAsyncU3Ed__13_SetStateMachine_m89EB85D8BE304E411504904FA8CD4903527CD40E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAnimationClipAsyncU3Ed__13_t6CEC0BC79375A825C3F8FAA8B9CD22D1082E9E62*>(__this + _offset);
	U3CLoadAnimationClipAsyncU3Ed__13_SetStateMachine_m89EB85D8BE304E411504904FA8CD4903527CD40E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task VRMShaders.ImmediateCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ImmediateCaller_NextFrame_m183A9C60C43D97D3A09119BD04CC4063054B0634 (ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Task.FromResult<object>(null);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0;
		L_0 = Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A(NULL, Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Threading.Tasks.Task VRMShaders.ImmediateCaller::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ImmediateCaller_Run_m5DF090EFF872B05BF7C4780E60B08614F6729FD2 (ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// return Task.FromResult<object>(null);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A(NULL, Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Threading.Tasks.Task VRMShaders.ImmediateCaller::NextFrameIfTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ImmediateCaller_NextFrameIfTimedOut_m0B774D1CE06B13B041209252EB117E00EC4CBB0B (ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659* __this, const RuntimeMethod* method) 
{
	{
		// public Task NextFrameIfTimedOut() => NextFrame();
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = ImmediateCaller_NextFrame_m183A9C60C43D97D3A09119BD04CC4063054B0634(__this, NULL);
		return L_0;
	}
}
// System.Void VRMShaders.ImmediateCaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediateCaller__ctor_mF9CF7C39DC94603FF97478D985A942AAD02078BB (ImmediateCaller_tAE8C671F4680183E2665677AA6892B23C269E659* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean VRMShaders.NextFrameTaskScheduler::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NextFrameTaskScheduler_get_IsSupported_m7812EB01545365F4AA3E8060C835ADCD12212209 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSupported => Application.isPlaying;
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		return L_0;
	}
}
// System.Void VRMShaders.NextFrameTaskScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, const RuntimeMethod* method) 
{
	{
		// public NextFrameTaskScheduler()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (!IsSupported)
		bool L_0;
		L_0 = NextFrameTaskScheduler_get_IsSupported_m7812EB01545365F4AA3E8060C835ADCD12212209(__this, NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// throw new NotSupportedException($"{nameof(NextFrameTaskScheduler)} is supported at runtime only.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A966729DD25626E7B421AC182B6043657A6CD3F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5_RuntimeMethod_var)));
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean VRMShaders.NextFrameTaskScheduler::Enqueue(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NextFrameTaskScheduler_Enqueue_m9D3E6F455FA9A40E078C143F220618CF23AD5B73 (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CEnqueueU3Eb__0_m7DB27EE2008C86A129A4A98C2AB05A32D6727163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* L_0 = (U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mF3B12D7E1B0CAFC75DE63113E6A5C1B4FB30A6AA(L_0, NULL);
		V_0 = L_0;
		// var currentFrame = Time.frameCount;
		U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		NullCheck(L_1);
		L_1->___currentFrame_0 = L_2;
		// UnityLoopTaskScheduler.Instance.Scheduler.Enqueue(action, () => Time.frameCount != currentFrame);
		UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* L_3;
		L_3 = UnityLoopTaskScheduler_get_Instance_m25B4348DD007CE6C41BC869450282FB021C9A571(NULL);
		NullCheck(L_3);
		TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* L_4;
		L_4 = UnityLoopTaskScheduler_get_Scheduler_m83E131DE075E9689458CAF05C3AEC3881E06EA30_inline(L_3, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___action0;
		U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* L_6 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CEnqueueU3Eb__0_m7DB27EE2008C86A129A4A98C2AB05A32D6727163_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		TinyManagedTaskScheduler_Enqueue_mA27886C88CE516A35AA6BC84F77908B701149EC9(L_4, L_5, L_7, NULL);
		// return true;
		return (bool)1;
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
// VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* UnityLoopTaskScheduler_get_Instance_m25B4348DD007CE6C41BC869450282FB021C9A571 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_m35D00C93C695CBEF3F5A6F9FFF02B11B019E7D08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE20A0F3BD27C076AEAF8700304F3236427722CD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* L_0 = ((UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// var go = new GameObject("UniGLTF UnityThreadScheduler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralE20A0F3BD27C076AEAF8700304F3236427722CD3, NULL);
		// Object.DontDestroyOnLoad(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		// _instance = go.AddComponent<UnityLoopTaskScheduler>();
		NullCheck(L_3);
		UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* L_4;
		L_4 = GameObject_AddComponent_TisUnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_m35D00C93C695CBEF3F5A6F9FFF02B11B019E7D08(L_3, GameObject_AddComponent_TisUnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_m35D00C93C695CBEF3F5A6F9FFF02B11B019E7D08_RuntimeMethod_var);
		((UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var))->____instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var))->____instance_4), (void*)L_4);
	}

IL_0027:
	{
		// return _instance;
		UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* L_5 = ((UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7_il2cpp_TypeInfo_var))->____instance_4;
		return L_5;
	}
}
// VRMShaders.TinyManagedTaskScheduler VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::get_Scheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* UnityLoopTaskScheduler_get_Scheduler_m83E131DE075E9689458CAF05C3AEC3881E06EA30 (UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* __this, const RuntimeMethod* method) 
{
	{
		// public TinyManagedTaskScheduler Scheduler { get; } = new TinyManagedTaskScheduler();
		TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* L_0 = __this->___U3CSchedulerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoopTaskScheduler_Update_m25AAC557BA563C197069AACCA9C0BD6A277F6163 (UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* __this, const RuntimeMethod* method) 
{
	{
		// Scheduler.ManagedUpdate();
		TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* L_0;
		L_0 = UnityLoopTaskScheduler_get_Scheduler_m83E131DE075E9689458CAF05C3AEC3881E06EA30_inline(__this, NULL);
		NullCheck(L_0);
		TinyManagedTaskScheduler_ManagedUpdate_m4BC5CE7731D8ADDEC7AE24ABB80E0A25B1D3B791(L_0, NULL);
		// }
		return;
	}
}
// System.Void VRMShaders.NextFrameTaskScheduler/UnityLoopTaskScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoopTaskScheduler__ctor_m1E38DF9BC9D1B7E8B3AA9290E71ECA3AD5B67E0E (UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TinyManagedTaskScheduler Scheduler { get; } = new TinyManagedTaskScheduler();
		TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* L_0 = (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61*)il2cpp_codegen_object_new(TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TinyManagedTaskScheduler__ctor_mDE48A55FBCE13C9D4F7778E1B2CAC458DA87EF10(L_0, NULL);
		__this->___U3CSchedulerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchedulerU3Ek__BackingField_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF3B12D7E1B0CAFC75DE63113E6A5C1B4FB30A6AA (U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VRMShaders.NextFrameTaskScheduler/<>c__DisplayClass3_0::<Enqueue>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CEnqueueU3Eb__0_m7DB27EE2008C86A129A4A98C2AB05A32D6727163 (U3CU3Ec__DisplayClass3_0_tBCD8C9A8271D091525352550715191AC695C255E* __this, const RuntimeMethod* method) 
{
	{
		// UnityLoopTaskScheduler.Instance.Scheduler.Enqueue(action, () => Time.frameCount != currentFrame);
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		int32_t L_1 = __this->___currentFrame_0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void VRMShaders.RuntimeOnlyAwaitCaller::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyAwaitCaller__ctor_m704D1F48D51C936BF3ED9AC7B40CDFB2D63F1E67 (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, float ___timeOutInSeconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RuntimeOnlyAwaitCaller(float timeOutInSeconds = 1f / 1000f)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _scheduler = new NextFrameTaskScheduler();
		NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* L_0 = (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D*)il2cpp_codegen_object_new(NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5(L_0, NULL);
		__this->____scheduler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scheduler_0), (void*)L_0);
		// _timeOutInSeconds = timeOutInSeconds;
		float L_1 = ___timeOutInSeconds0;
		__this->____timeOutInSeconds_1 = L_1;
		// ResetLastTimeoutBaseTime();
		RuntimeOnlyAwaitCaller_ResetLastTimeoutBaseTime_mD77FD9DA8C3540A54713170DA90FE7B0229CAAA0(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyAwaitCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyAwaitCaller_NextFrame_mABFF659C172148EDEA9B8A88C9B0C2581161E78E (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m59A0A5BB481801A6A0AB9815AFA21F5F19DF2F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* L_0 = (U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m58B608B9A78D6757AB8F5B99F38A93FE2704CD74(L_0, NULL);
		V_0 = L_0;
		// ResetLastTimeoutBaseTime();
		RuntimeOnlyAwaitCaller_ResetLastTimeoutBaseTime_mD77FD9DA8C3540A54713170DA90FE7B0229CAAA0(__this, NULL);
		// var tcs = new TaskCompletionSource<object>();
		U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* L_1 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_2 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_2, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tcs_0), (void*)L_2);
		// _scheduler.Enqueue(() => tcs.SetResult(default));
		NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* L_3 = __this->____scheduler_0;
		U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m59A0A5BB481801A6A0AB9815AFA21F5F19DF2F40_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = NextFrameTaskScheduler_Enqueue_m9D3E6F455FA9A40E078C143F220618CF23AD5B73(L_3, L_5, NULL);
		// return tcs.Task;
		U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = L_7->___tcs_0;
		NullCheck(L_8);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_9;
		L_9 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_8, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyAwaitCaller::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyAwaitCaller_Run_mFE526CE094928FE4CEA71320D7CA897647CB0AB4 (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Task.Run(action);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_0, NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyAwaitCaller::NextFrameIfTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyAwaitCaller_NextFrameIfTimedOut_m5C18F6CB69C55933AF8F9E046DA3A4228CD3377A (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Task NextFrameIfTimedOut() => CheckTimeout() ? NextFrame() : Task.CompletedTask;
		bool L_0;
		L_0 = RuntimeOnlyAwaitCaller_CheckTimeout_m89E6800375D8013A12443AD17292B5DCAB0627CA(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = RuntimeOnlyAwaitCaller_NextFrame_mABFF659C172148EDEA9B8A88C9B0C2581161E78E(__this, NULL);
		return L_2;
	}
}
// System.Void VRMShaders.RuntimeOnlyAwaitCaller::ResetLastTimeoutBaseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyAwaitCaller_ResetLastTimeoutBaseTime_mD77FD9DA8C3540A54713170DA90FE7B0229CAAA0 (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) 
{
	{
		// private void ResetLastTimeoutBaseTime() => _lastTimeoutBaseTime = 0f;
		__this->____lastTimeoutBaseTime_2 = (0.0f);
		return;
	}
}
// System.Boolean VRMShaders.RuntimeOnlyAwaitCaller::get_LastTimeoutBaseTimeNeedsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C5BBEC583577A0C55F93F088E348BEEBC0D31B (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) 
{
	{
		// private bool LastTimeoutBaseTimeNeedsReset => _lastTimeoutBaseTime == 0f;
		float L_0 = __this->____lastTimeoutBaseTime_2;
		return (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean VRMShaders.RuntimeOnlyAwaitCaller::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyAwaitCaller_CheckTimeout_m89E6800375D8013A12443AD17292B5DCAB0627CA (RuntimeOnlyAwaitCaller_tCF2855FA690F71FF79CEEC5FB5799E4FE247C455* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float t = UnityEngine.Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		V_0 = L_0;
		// if (LastTimeoutBaseTimeNeedsReset)
		bool L_1;
		L_1 = RuntimeOnlyAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C5BBEC583577A0C55F93F088E348BEEBC0D31B(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// _lastTimeoutBaseTime = t;
		float L_2 = V_0;
		__this->____lastTimeoutBaseTime_2 = L_2;
	}

IL_0015:
	{
		// return (t - _lastTimeoutBaseTime) >= _timeOutInSeconds;
		float L_3 = V_0;
		float L_4 = __this->____lastTimeoutBaseTime_2;
		float L_5 = __this->____timeOutInSeconds_1;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_3, L_4))) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m58B608B9A78D6757AB8F5B99F38A93FE2704CD74 (U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VRMShaders.RuntimeOnlyAwaitCaller/<>c__DisplayClass4_0::<NextFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m59A0A5BB481801A6A0AB9815AFA21F5F19DF2F40 (U3CU3Ec__DisplayClass4_0_tD5D5D30B2D2DE61BFE09E223F154438DFBBDF2ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _scheduler.Enqueue(() => tcs.SetResult(default));
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4(L_0, NULL, TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_RuntimeMethod_var);
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
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyNoThreadAwaitCaller__ctor_m7E834A6A5BDE8779FC8C16F75C4733F36D79C554 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, float ___timeoutInSeconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RuntimeOnlyNoThreadAwaitCaller(float timeoutInSeconds = 1f / 1000f)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _scheduler = new NextFrameTaskScheduler();
		NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* L_0 = (NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D*)il2cpp_codegen_object_new(NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NextFrameTaskScheduler__ctor_mA364CCC7133E5DF54AAB586585F89C1D41E524E5(L_0, NULL);
		__this->____scheduler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scheduler_0), (void*)L_0);
		// _timeoutInSeconds = timeoutInSeconds;
		float L_1 = ___timeoutInSeconds0;
		__this->____timeoutInSeconds_1 = L_1;
		// ResetLastTimeoutBaseTime();
		RuntimeOnlyNoThreadAwaitCaller_ResetLastTimeoutBaseTime_m11879DACEA5DF4DB8961464DA1513A2524EBDE32(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyNoThreadAwaitCaller::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyNoThreadAwaitCaller_NextFrame_m0A890B1006C3AA7EFB1C35C41E97F8777A740915 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m2185A70C0F3270F546B581F73222EFC57DB8D276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* L_0 = (U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m9B16ED662F42FFD7687D533808F61A8342ED8D2E(L_0, NULL);
		V_0 = L_0;
		// ResetLastTimeoutBaseTime();
		RuntimeOnlyNoThreadAwaitCaller_ResetLastTimeoutBaseTime_m11879DACEA5DF4DB8961464DA1513A2524EBDE32(__this, NULL);
		// var tcs = new TaskCompletionSource<object>();
		U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* L_1 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_2 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_2, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tcs_0), (void*)L_2);
		// _scheduler.Enqueue(() => tcs.SetResult(default));
		NextFrameTaskScheduler_tE322C7B8B9AC16A2B5F0FF3A5475B4FE4B3D6F1D* L_3 = __this->____scheduler_0;
		U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* L_4 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m2185A70C0F3270F546B581F73222EFC57DB8D276_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = NextFrameTaskScheduler_Enqueue_m9D3E6F455FA9A40E078C143F220618CF23AD5B73(L_3, L_5, NULL);
		// return tcs.Task;
		U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = L_7->___tcs_0;
		NullCheck(L_8);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_9;
		L_9 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_8, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		return L_9;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyNoThreadAwaitCaller::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyNoThreadAwaitCaller_Run_m7C766CF25E711E319AE624BCBE9749A102A257B6 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// return Task.FromResult<object>(null);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A(NULL, Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0017;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000f;
		}
		throw e;
	}

CATCH_000f:
	{// begin catch(System.Exception)
		// return Task.FromException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var)));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_FromException_m9757D9F49178A24C1DF7DB8973DF7B81574CEA55(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_2;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0017;
	}// end catch (depth: 1)

IL_0017:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Tasks.Task VRMShaders.RuntimeOnlyNoThreadAwaitCaller::NextFrameIfTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RuntimeOnlyNoThreadAwaitCaller_NextFrameIfTimedOut_mD4C3E661C8DD7E684B0B44F1FF1DBD3392DD751E (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Task NextFrameIfTimedOut() => CheckTimeout() ? NextFrame() : Task.CompletedTask;
		bool L_0;
		L_0 = RuntimeOnlyNoThreadAwaitCaller_CheckTimeout_m1C3D26EB6F253876E225CFCB2D6C49C4BEA62B08(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = RuntimeOnlyNoThreadAwaitCaller_NextFrame_m0A890B1006C3AA7EFB1C35C41E97F8777A740915(__this, NULL);
		return L_2;
	}
}
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller::ResetLastTimeoutBaseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOnlyNoThreadAwaitCaller_ResetLastTimeoutBaseTime_m11879DACEA5DF4DB8961464DA1513A2524EBDE32 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) 
{
	{
		// private void ResetLastTimeoutBaseTime() => _lastTimeoutBaseTime = 0f;
		__this->____lastTimeoutBaseTime_2 = (0.0f);
		return;
	}
}
// System.Boolean VRMShaders.RuntimeOnlyNoThreadAwaitCaller::get_LastTimeoutBaseTimeNeedsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyNoThreadAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C406A7E6119149B9F0875805A97B3B356F0CCA (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) 
{
	{
		// private bool LastTimeoutBaseTimeNeedsReset => _lastTimeoutBaseTime == 0f;
		float L_0 = __this->____lastTimeoutBaseTime_2;
		return (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean VRMShaders.RuntimeOnlyNoThreadAwaitCaller::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeOnlyNoThreadAwaitCaller_CheckTimeout_m1C3D26EB6F253876E225CFCB2D6C49C4BEA62B08 (RuntimeOnlyNoThreadAwaitCaller_t2C6536780914579F61D718A5F72FC0C212576421* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float t = UnityEngine.Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		V_0 = L_0;
		// if (LastTimeoutBaseTimeNeedsReset)
		bool L_1;
		L_1 = RuntimeOnlyNoThreadAwaitCaller_get_LastTimeoutBaseTimeNeedsReset_mA9C406A7E6119149B9F0875805A97B3B356F0CCA(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// _lastTimeoutBaseTime = t;
		float L_2 = V_0;
		__this->____lastTimeoutBaseTime_2 = L_2;
	}

IL_0015:
	{
		// return (t - _lastTimeoutBaseTime) >= _timeoutInSeconds;
		float L_3 = V_0;
		float L_4 = __this->____lastTimeoutBaseTime_2;
		float L_5 = __this->____timeoutInSeconds_1;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_3, L_4))) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9B16ED662F42FFD7687D533808F61A8342ED8D2E (U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VRMShaders.RuntimeOnlyNoThreadAwaitCaller/<>c__DisplayClass4_0::<NextFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CNextFrameU3Eb__0_m2185A70C0F3270F546B581F73222EFC57DB8D276 (U3CU3Ec__DisplayClass4_0_t39BD2C496A3F70FA4EFC44C5DB6995C35AE7721E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _scheduler.Enqueue(() => tcs.SetResult(default));
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4(L_0, NULL, TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_RuntimeMethod_var);
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
// System.Void VRMShaders.TinyManagedTaskScheduler::ManagedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler_ManagedUpdate_m4BC5CE7731D8ADDEC7AE24ABB80E0A25B1D3B791 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 V_2;
	memset((&V_2), 0, sizeof(V_2));

IL_0000:
	{
		// while (_continuationQueue.TryDequeue(out var tuple))
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_0 = __this->____continuationQueue_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66(L_0, (&V_0), ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// var (continuation, canExecute) = tuple;
		ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 L_2 = V_0;
		ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 L_3 = L_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3.___Item1_0;
		V_1 = L_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_3.___Item2_1;
		// if (canExecute())
		NullCheck(L_5);
		bool L_6;
		L_6 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		goto IL_0000;
	}

IL_002b:
	{
		// _temporaryQueue.Enqueue(tuple);
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_8 = __this->____temporaryQueue_1;
		ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 L_9 = V_0;
		NullCheck(L_8);
		ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16(L_8, L_9, ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var);
		// }
		goto IL_0000;
	}

IL_0039:
	{
		// while (_temporaryQueue.TryDequeue(out var tuple))
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_10 = __this->____temporaryQueue_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66(L_10, (&V_2), ConcurrentQueue_1_TryDequeue_m0CC9C6A6C86689B1712EB33B47A8137A4F474C66_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// _continuationQueue.Enqueue(tuple);
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_12 = __this->____continuationQueue_0;
		ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 L_13 = V_2;
		NullCheck(L_12);
		ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16(L_12, L_13, ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var);
		// }
		goto IL_0039;
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void VRMShaders.TinyManagedTaskScheduler::Enqueue(System.Action,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler_Enqueue_mA27886C88CE516A35AA6BC84F77908B701149EC9 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___canExecute1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m5FE3673EDB75ABE13CD440CA825BE6119E18A46D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _continuationQueue.Enqueue((continuation, canExecute));
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_0 = __this->____continuationQueue_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___continuation0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ___canExecute1;
		ValueTuple_2_tF08E099E26FD0C3A8449B09D57E37119ACBD36F6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTuple_2__ctor_m5FE3673EDB75ABE13CD440CA825BE6119E18A46D((&L_3), L_1, L_2, /*hidden argument*/ValueTuple_2__ctor_m5FE3673EDB75ABE13CD440CA825BE6119E18A46D_RuntimeMethod_var);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16(L_0, L_3, ConcurrentQueue_1_Enqueue_m10C7EB07362A783A0B11FC1BC44C52BA4272AA16_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRMShaders.TinyManagedTaskScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TinyManagedTaskScheduler__ctor_mDE48A55FBCE13C9D4F7778E1B2CAC458DA87EF10 (TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ConcurrentQueue<(Action, Func<bool>)> _continuationQueue =
		//     new ConcurrentQueue<(Action, Func<bool>)>();
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_0 = (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029*)il2cpp_codegen_object_new(ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680(L_0, ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680_RuntimeMethod_var);
		__this->____continuationQueue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationQueue_0), (void*)L_0);
		// private readonly ConcurrentQueue<(Action, Func<bool>)> _temporaryQueue =
		//     new ConcurrentQueue<(Action, Func<bool>)>();
		ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029* L_1 = (ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029*)il2cpp_codegen_object_new(ConcurrentQueue_1_t52E773CADF3EBF03CCB396EE6E74907723C73029_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680(L_1, ConcurrentQueue_1__ctor_m127D7F38D753A8C210660E57721B04AC5D66D680_RuntimeMethod_var);
		__this->____temporaryQueue_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____temporaryQueue_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_Multicast(TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* currentDelegate = reinterpret_cast<TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___key0, ___obj1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_OpenInst(TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___key0, ___obj1, method);
}
void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_OpenStatic(TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___key0, ___obj1, method);
}
void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_OpenStaticInvoker(TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(__this->___method_ptr_0, method, NULL, ___key0, ___obj1);
}
void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_ClosedStaticInvoker(TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___key0, ___obj1);
}
// System.Void VRMShaders.TakeResponsibilityForDestroyObjectFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeResponsibilityForDestroyObjectFunc__ctor_m104E367CBA2EE52FCF30E80CF41849D25003D5FD (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_Multicast;
}
// System.Void VRMShaders.TakeResponsibilityForDestroyObjectFunc::Invoke(VRMShaders.SubAssetKey,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8 (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___key0, ___obj1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VRMShaders.TakeResponsibilityForDestroyObjectFunc::BeginInvoke(VRMShaders.SubAssetKey,UnityEngine.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TakeResponsibilityForDestroyObjectFunc_BeginInvoke_m341A589E4681C1AC18CF3D8BBA93EF755168A9BD (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var, &___key0);
	__d_args[1] = ___obj1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void VRMShaders.TakeResponsibilityForDestroyObjectFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeResponsibilityForDestroyObjectFunc_EndInvoke_mCE83686B8DF4860C8FFE37A56AAEFC57090D7576 (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRMShaders.MaterialDescriptor
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_pinvoke(const MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF& unmarshaled, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___RenderQueue_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'RenderQueue' of type 'MaterialDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___RenderQueue_2Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_pinvoke_back(const MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_pinvoke& marshaled, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF& unmarshaled)
{
	Exception_t* ___RenderQueue_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'RenderQueue' of type 'MaterialDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___RenderQueue_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.MaterialDescriptor
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_pinvoke_cleanup(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRMShaders.MaterialDescriptor
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_com(const MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF& unmarshaled, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_com& marshaled)
{
	Exception_t* ___RenderQueue_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'RenderQueue' of type 'MaterialDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___RenderQueue_2Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_com_back(const MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_com& marshaled, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF& unmarshaled)
{
	Exception_t* ___RenderQueue_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'RenderQueue' of type 'MaterialDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___RenderQueue_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.MaterialDescriptor
IL2CPP_EXTERN_C void MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshal_com_cleanup(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_marshaled_com& marshaled)
{
}
// VRMShaders.SubAssetKey VRMShaders.MaterialDescriptor::get_SubAssetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SubAssetKey SubAssetKey => new SubAssetKey(SubAssetKey.MaterialType, Name);
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___MaterialType_1;
		String_t* L_1 = __this->___Name_0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_2;
		memset((&L_2), 0, sizeof(L_2));
		SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*>(__this + _offset);
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB _returnValue;
	_returnValue = MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.MaterialDescriptor::.ctor(System.String,System.String,System.Nullable`1<System.Int32>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,VRMShaders.TextureDescriptor>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Single>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Color>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Vector4>,System.Collections.Generic.IReadOnlyList`1<System.Action`1<UnityEngine.Material>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialDescriptor__ctor_m36D44D451E1D91E08030756C606543A4913BC3A3 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, String_t* ___name0, String_t* ___shaderName1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___renderQueue2, RuntimeObject* ___textureSlots3, RuntimeObject* ___floatValues4, RuntimeObject* ___colors5, RuntimeObject* ___vectors6, RuntimeObject* ___actions7, const RuntimeMethod* method) 
{
	{
		// Name = name;
		String_t* L_0 = ___name0;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		// ShaderName = shaderName;
		String_t* L_1 = ___shaderName1;
		__this->___ShaderName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShaderName_1), (void*)L_1);
		// RenderQueue = renderQueue;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___renderQueue2;
		__this->___RenderQueue_2 = L_2;
		// TextureSlots = textureSlots;
		RuntimeObject* L_3 = ___textureSlots3;
		__this->___TextureSlots_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextureSlots_3), (void*)L_3);
		// FloatValues = floatValues;
		RuntimeObject* L_4 = ___floatValues4;
		__this->___FloatValues_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FloatValues_4), (void*)L_4);
		// Colors = colors;
		RuntimeObject* L_5 = ___colors5;
		__this->___Colors_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Colors_5), (void*)L_5);
		// Vectors = vectors;
		RuntimeObject* L_6 = ___vectors6;
		__this->___Vectors_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Vectors_6), (void*)L_6);
		// Actions = actions;
		RuntimeObject* L_7 = ___actions7;
		__this->___Actions_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Actions_7), (void*)L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MaterialDescriptor__ctor_m36D44D451E1D91E08030756C606543A4913BC3A3_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, String_t* ___shaderName1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___renderQueue2, RuntimeObject* ___textureSlots3, RuntimeObject* ___floatValues4, RuntimeObject* ___colors5, RuntimeObject* ___vectors6, RuntimeObject* ___actions7, const RuntimeMethod* method)
{
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*>(__this + _offset);
	MaterialDescriptor__ctor_m36D44D451E1D91E08030756C606543A4913BC3A3(_thisAdjusted, ___name0, ___shaderName1, ___renderQueue2, ___textureSlots3, ___floatValues4, ___colors5, ___vectors6, ___actions7, method);
}
// System.Boolean VRMShaders.MaterialDescriptor::Equals(VRMShaders.MaterialDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialDescriptor_Equals_m44F1A512E0D0509C5CC2AE73A8C62114CF1D483B (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return Name == other.Name && ShaderName == other.ShaderName && RenderQueue == other.RenderQueue && Equals(TextureSlots, other.TextureSlots) && Equals(FloatValues, other.FloatValues) && Equals(Colors, other.Colors) && Equals(Vectors, other.Vectors) && Equals(Actions, other.Actions);
		String_t* L_0 = __this->___Name_0;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_1 = ___other0;
		String_t* L_2 = L_1.___Name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_4 = __this->___ShaderName_1;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_5 = ___other0;
		String_t* L_6 = L_5.___ShaderName_1;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_00bb;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = __this->___RenderQueue_2;
		V_0 = L_8;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_9 = ___other0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = L_9.___RenderQueue_2;
		V_1 = L_10;
		int32_t L_11;
		L_11 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_12;
		L_12 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_1), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_1), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)&((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0))))
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_15 = __this->___TextureSlots_3;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_16 = ___other0;
		RuntimeObject* L_17 = L_16.___TextureSlots_3;
		bool L_18;
		L_18 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_19 = __this->___FloatValues_4;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_20 = ___other0;
		RuntimeObject* L_21 = L_20.___FloatValues_4;
		bool L_22;
		L_22 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_23 = __this->___Colors_5;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_24 = ___other0;
		RuntimeObject* L_25 = L_24.___Colors_5;
		bool L_26;
		L_26 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_27 = __this->___Vectors_6;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_28 = ___other0;
		RuntimeObject* L_29 = L_28.___Vectors_6;
		bool L_30;
		L_30 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_31 = __this->___Actions_7;
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_32 = ___other0;
		RuntimeObject* L_33 = L_32.___Actions_7;
		bool L_34;
		L_34 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_31, L_33, NULL);
		return L_34;
	}

IL_00bb:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MaterialDescriptor_Equals_m44F1A512E0D0509C5CC2AE73A8C62114CF1D483B_AdjustorThunk (RuntimeObject* __this, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___other0, const RuntimeMethod* method)
{
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialDescriptor_Equals_m44F1A512E0D0509C5CC2AE73A8C62114CF1D483B(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean VRMShaders.MaterialDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialDescriptor_Equals_m73708F6E7FC0CEDD9788CD41777E722FBBD8C113 (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is MaterialDescriptor other && Equals(other);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*)((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*)(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*)UnBox(L_1, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))));
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_2 = V_0;
		bool L_3;
		L_3 = MaterialDescriptor_Equals_m44F1A512E0D0509C5CC2AE73A8C62114CF1D483B(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MaterialDescriptor_Equals_m73708F6E7FC0CEDD9788CD41777E722FBBD8C113_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialDescriptor_Equals_m73708F6E7FC0CEDD9788CD41777E722FBBD8C113(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 VRMShaders.MaterialDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaterialDescriptor_GetHashCode_mA7E11337B9695D9CEDD4BBFA3F054F707EAA69AF (MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	{
		// var hashCode = (Name != null ? Name.GetHashCode() : 0);
		String_t* L_0 = __this->___Name_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = __this->___Name_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hashCode = (hashCode * 397) ^ (ShaderName != null ? ShaderName.GetHashCode() : 0);
		String_t* L_3 = __this->___ShaderName_1;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)397)));
		if (L_3)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)397)));
			goto IL_0027;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0032;
	}

IL_0027:
	{
		String_t* L_4 = __this->___ShaderName_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_0032:
	{
		// hashCode = (hashCode * 397) ^ RenderQueue.GetHashCode();
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = __this->___RenderQueue_2;
		V_0 = L_6;
		int32_t L_7;
		L_7 = Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3((&V_0), Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_RuntimeMethod_var);
		// hashCode = (hashCode * 397) ^ (TextureSlots != null ? TextureSlots.GetHashCode() : 0);
		RuntimeObject* L_8 = __this->___TextureSlots_3;
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B6_1^G_B6_0)), ((int32_t)397)))^L_7)), ((int32_t)397)));
		if (L_8)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B6_1^G_B6_0)), ((int32_t)397)))^L_7)), ((int32_t)397)));
			goto IL_005f;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_006a;
	}

IL_005f:
	{
		RuntimeObject* L_9 = __this->___TextureSlots_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_9);
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
	}

IL_006a:
	{
		// hashCode = (hashCode * 397) ^ (FloatValues != null ? FloatValues.GetHashCode() : 0);
		RuntimeObject* L_11 = __this->___FloatValues_4;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B9_1^G_B9_0)), ((int32_t)397)));
		if (L_11)
		{
			G_B11_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B9_1^G_B9_0)), ((int32_t)397)));
			goto IL_007c;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_0087;
	}

IL_007c:
	{
		RuntimeObject* L_12 = __this->___FloatValues_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_12);
		G_B12_0 = L_13;
		G_B12_1 = G_B11_0;
	}

IL_0087:
	{
		// hashCode = (hashCode * 397) ^ (Colors != null ? Colors.GetHashCode() : 0);
		RuntimeObject* L_14 = __this->___Colors_5;
		G_B13_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B12_1^G_B12_0)), ((int32_t)397)));
		if (L_14)
		{
			G_B14_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B12_1^G_B12_0)), ((int32_t)397)));
			goto IL_0099;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_00a4;
	}

IL_0099:
	{
		RuntimeObject* L_15 = __this->___Colors_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_15);
		G_B15_0 = L_16;
		G_B15_1 = G_B14_0;
	}

IL_00a4:
	{
		// hashCode = (hashCode * 397) ^ (Vectors != null ? Vectors.GetHashCode() : 0);
		RuntimeObject* L_17 = __this->___Vectors_6;
		G_B16_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B15_1^G_B15_0)), ((int32_t)397)));
		if (L_17)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B15_1^G_B15_0)), ((int32_t)397)));
			goto IL_00b6;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_00c1;
	}

IL_00b6:
	{
		RuntimeObject* L_18 = __this->___Vectors_6;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_18);
		G_B18_0 = L_19;
		G_B18_1 = G_B17_0;
	}

IL_00c1:
	{
		// hashCode = (hashCode * 397) ^ (Actions != null ? Actions.GetHashCode() : 0);
		RuntimeObject* L_20 = __this->___Actions_7;
		G_B19_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B18_1^G_B18_0)), ((int32_t)397)));
		if (L_20)
		{
			G_B20_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(G_B18_1^G_B18_0)), ((int32_t)397)));
			goto IL_00d3;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_00de;
	}

IL_00d3:
	{
		RuntimeObject* L_21 = __this->___Actions_7;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_21);
		G_B21_0 = L_22;
		G_B21_1 = G_B20_0;
	}

IL_00de:
	{
		// return hashCode;
		return ((int32_t)(G_B21_1^G_B21_0));
	}
}
IL2CPP_EXTERN_C  int32_t MaterialDescriptor_GetHashCode_mA7E11337B9695D9CEDD4BBFA3F054F707EAA69AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MaterialDescriptor_GetHashCode_mA7E11337B9695D9CEDD4BBFA3F054F707EAA69AF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.MaterialDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialDescriptor__cctor_m65679FBFC2D12BB64310B666924BE755ABD2C09A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4D9529C985F4D1E645FD582FBB2079A479FFA019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB69686FC68B0FF4339F36B5CD71AEF42DFB7710F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m279C03C8488D976D9ECF32C7809BB0184FA4B42B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F1E38EF53DDA899E4025560ED06001D0DF1CBF);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly MaterialDescriptor Default = new MaterialDescriptor("__default__", "Standard", default,
		//     new Dictionary<string, TextureDescriptor>(),
		//     new Dictionary<string, float>(),
		//     new Dictionary<string, Color>(),
		//     new Dictionary<string, Vector4>(),
		//     new List<Action<Material>>());
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9* L_1 = (Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9*)il2cpp_codegen_object_new(Dictionary_2_tE0516E01E2A76C5B3B9A469639BB1388822DBAA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB69686FC68B0FF4339F36B5CD71AEF42DFB7710F(L_1, Dictionary_2__ctor_mB69686FC68B0FF4339F36B5CD71AEF42DFB7710F_RuntimeMethod_var);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_2 = (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*)il2cpp_codegen_object_new(Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED(L_2, Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_3 = (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*)il2cpp_codegen_object_new(Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3(L_3, Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var);
		Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350* L_4 = (Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350*)il2cpp_codegen_object_new(Dictionary_2_tFF5F7F7D1B537F65CA676244418F1E051D318350_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m4D9529C985F4D1E645FD582FBB2079A479FFA019(L_4, Dictionary_2__ctor_m4D9529C985F4D1E645FD582FBB2079A479FFA019_RuntimeMethod_var);
		List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105* L_5 = (List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105*)il2cpp_codegen_object_new(List_1_t9380F8AE94DEE869D95ACAA27D9248FA60D2D105_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m279C03C8488D976D9ECF32C7809BB0184FA4B42B(L_5, List_1__ctor_m279C03C8488D976D9ECF32C7809BB0184FA4B42B_RuntimeMethod_var);
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_6;
		memset((&L_6), 0, sizeof(L_6));
		MaterialDescriptor__ctor_m36D44D451E1D91E08030756C606543A4913BC3A3((&L_6), _stringLiteralE6F1E38EF53DDA899E4025560ED06001D0DF1CBF, _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___ShaderName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___TextureSlots_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___FloatValues_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___Colors_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___Vectors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_StaticFields*)il2cpp_codegen_static_fields_for(MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF_il2cpp_TypeInfo_var))->___Default_8))->___Actions_7), (void*)NULL);
		#endif
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
Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_Multicast(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* currentDelegate = reinterpret_cast<GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3*>(delegatesToInvoke[i]);
		typedef Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*FunctionPointerType) (RuntimeObject*, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___texDesc0, ___awaitCaller1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_OpenInst(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method)
{
	typedef Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*FunctionPointerType) (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___texDesc0, ___awaitCaller1, method);
}
Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_OpenStatic(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method)
{
	typedef Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*FunctionPointerType) (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___texDesc0, ___awaitCaller1, method);
}
Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_OpenStaticInvoker(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Task_1_tAE3580031834C793688B3B00005C66DC69CA7807*, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___texDesc0, ___awaitCaller1);
}
Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_ClosedStaticInvoker(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< Task_1_tAE3580031834C793688B3B00005C66DC69CA7807*, RuntimeObject*, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___texDesc0, ___awaitCaller1);
}
// System.Void VRMShaders.GetTextureAsyncFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTextureAsyncFunc__ctor_mDC2139E98FADF3D12C53F6F42BDEBEB262BAEEBC (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_Multicast;
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture> VRMShaders.GetTextureAsyncFunc::Invoke(VRMShaders.TextureDescriptor,VRMShaders.IAwaitCaller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method) 
{
	typedef Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*FunctionPointerType) (RuntimeObject*, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___texDesc0, ___awaitCaller1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VRMShaders.GetTextureAsyncFunc::BeginInvoke(VRMShaders.TextureDescriptor,VRMShaders.IAwaitCaller,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetTextureAsyncFunc_BeginInvoke_m75510094785E8C51BE11B9BFC234603A24E0E24C (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_il2cpp_TypeInfo_var, &___texDesc0);
	__d_args[1] = ___awaitCaller1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture> VRMShaders.GetTextureAsyncFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_EndInvoke_m3938E886014EFF7190B8B8B82B9D8E7B52E27178 (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_1_tAE3580031834C793688B3B00005C66DC69CA7807*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRMShaders.MaterialFactory::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Material>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory__ctor_mC869A47C881A5EFD99107F739DD1BBA639CB1C4C (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, RuntimeObject* ___externalMaterialMap0, RuntimeObject* ___fallbackShaders1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<MaterialLoadInfo> m_materials = new List<MaterialLoadInfo>();
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_0 = (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*)il2cpp_codegen_object_new(List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB(L_0, List_1__ctor_mDBEAB9EFD3050DBA5D78CCE3E7C20FDBE8D75AAB_RuntimeMethod_var);
		__this->___m_materials_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materials_2), (void*)L_0);
		// public MaterialFactory(IReadOnlyDictionary<SubAssetKey, Material> externalMaterialMap, IReadOnlyDictionary<string, string> fallbackShaders)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_externalMap = externalMaterialMap;
		RuntimeObject* L_1 = ___externalMaterialMap0;
		__this->___m_externalMap_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_externalMap_0), (void*)L_1);
		// m_fallbackShaders = fallbackShaders;
		RuntimeObject* L_2 = ___fallbackShaders1;
		__this->___m_fallbackShaders_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_fallbackShaders_1), (void*)L_2);
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRMShaders.MaterialFactory/MaterialLoadInfo> VRMShaders.MaterialFactory::get_Materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MaterialFactory_get_Materials_m2663BD0527BCBAF9F90E1D553C81145DDEC458ED (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<MaterialLoadInfo> Materials => m_materials;
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_0 = __this->___m_materials_2;
		return L_0;
	}
}
// System.Void VRMShaders.MaterialFactory::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory_Remove_mC469C50813D7F001B565549BFB32458667954732 (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CRemoveU3Eb__0_m45BF5D752F596560394909369B914B578A419BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* L_0 = (U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m8A1805A0701C2CB7E06EDEE20D0D872400748B64(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		NullCheck(L_1);
		L_1->___material_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___material_0), (void*)L_2);
		// var index = m_materials.FindIndex(x => x.Asset == material);
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_3 = __this->___m_materials_2;
		U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* L_4 = V_0;
		Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C* L_5 = (Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C*)il2cpp_codegen_object_new(Predicate_1_tDBFEB7AE7D950A176AEE329105C76BA7CF6F889C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mEB5A6BD9AB515B40A71374466B103B58E024B058(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CRemoveU3Eb__0_m45BF5D752F596560394909369B914B578A419BCC_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13(L_3, L_5, List_1_FindIndex_mF8C5DE32CB2D9CB2E5A2D8815069F8753DCA4E13_RuntimeMethod_var);
		V_1 = L_6;
		// if (index >= 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// m_materials.RemoveAt(index);
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_8 = __this->___m_materials_2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B(L_8, L_9, List_1_RemoveAt_mFB38C2FCDA609CE8357F3256578A64617E63363B_RuntimeMethod_var);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VRMShaders.MaterialFactory::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory_Dispose_mA2F8A0093C06144BA9AFAD01B94056B578A229E7 (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var x in m_materials)
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_0 = __this->___m_materials_2;
		NullCheck(L_0);
		Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13 L_1;
		L_1 = List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65(L_0, List_1_GetEnumerator_m75BD2D5EC210452F2D42BB07D7D0334B648F6B65_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862((&V_0), Enumerator_Dispose_mABEA167E5A2C10C61DA038D81F22090492A19862_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_000e_1:
			{
				// foreach (var x in m_materials)
				MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_2;
				L_2 = Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_inline((&V_0), Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_RuntimeMethod_var);
				V_1 = L_2;
				// if (!x.UseExternal)
				MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_3 = V_1;
				bool L_4 = L_3.___UseExternal_2;
				if (L_4)
				{
					goto IL_0029_1;
				}
			}
			{
				// UnityObjectDestroyer.DestroyRuntimeOrEditor(x.Asset);
				MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_5 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5.___Asset_1;
				UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D(L_6, NULL);
			}

IL_0029_1:
			{
				// foreach (var x in m_materials)
				bool L_7;
				L_7 = Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2((&V_0), Enumerator_MoveNext_m78E674320387A655FD4360017E2E849862F883E2_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void VRMShaders.MaterialFactory::TransferOwnership(VRMShaders.TakeResponsibilityForDestroyObjectFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory_TransferOwnership_mD5D6ACA7B35A016C87D13CEDBAB41408F8A24D74 (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* V_0 = NULL;
	int32_t V_1 = 0;
	MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var x in m_materials.ToArray())
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_0 = __this->___m_materials_2;
		NullCheck(L_0);
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_1;
		L_1 = List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D(L_0, List_1_ToArray_m1F03456DE813E3B153B723CA67F661F2A4D47C2D_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0043;
	}

IL_0010:
	{
		// foreach (var x in m_materials.ToArray())
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (!x.UseExternal)
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_6 = V_2;
		bool L_7 = L_6.___UseExternal_2;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// take(x.Key, x.Asset);
		TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* L_8 = ___take0;
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_9 = V_2;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_10 = L_9.___Key_0;
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_11 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11.___Asset_1;
		NullCheck(L_8);
		TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_inline(L_8, L_10, L_12, NULL);
		// m_materials.Remove(x);
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_13 = __this->___m_materials_2;
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_14 = V_2;
		NullCheck(L_13);
		bool L_15;
		L_15 = List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A(L_13, L_14, List_1_Remove_mF523288DDD502ABBC549932C9797E00FAC079F1A_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0043:
	{
		// foreach (var x in m_materials.ToArray())
		int32_t L_17 = V_1;
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Material VRMShaders.MaterialFactory::GetMaterial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* MaterialFactory_GetMaterial_m212325AC970307CD8036B366E06457C58CEE6F8D (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index < 0) return null;
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// if (index < 0) return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0006:
	{
		// if (index >= m_materials.Count) return null;
		int32_t L_1 = ___index0;
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_2 = __this->___m_materials_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_inline(L_2, List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		// if (index >= m_materials.Count) return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0016:
	{
		// return m_materials[index].Asset;
		List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_4 = __this->___m_materials_2;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_6;
		L_6 = List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8(L_4, L_5, List_1_get_Item_m63D465BC61E53ACFBFA87915E2C1404024F48EE8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6.___Asset_1;
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Material> VRMShaders.MaterialFactory::LoadAsync(VRMShaders.MaterialDescriptor,VRMShaders.GetTextureAsyncFunc,VRMShaders.IAwaitCaller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* MaterialFactory_LoadAsync_m29907FCFA985C909D307D76A84A640DD8E9D79BD (MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* __this, MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF ___matDesc0, GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* ___getTexture1, RuntimeObject* ___awaitCaller2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m7619836111BB94BA38A1BB9571E3B07C50B05F9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m9847B12E4A6F740B85AAE030955D7C4DF9DE4852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m5CBBC7E5001A81FB63D0053306B4BB77B5BE7C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m7619836111BB94BA38A1BB9571E3B07C50B05F9D(AsyncTaskMethodBuilder_1_Create_m7619836111BB94BA38A1BB9571E3B07C50B05F9D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF L_1 = ___matDesc0;
		(&V_0)->___matDesc_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___ShaderName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___TextureSlots_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___FloatValues_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___Colors_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___Vectors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___matDesc_3))->___Actions_7), (void*)NULL);
		#endif
		GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_2 = ___getTexture1;
		(&V_0)->___getTexture_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___getTexture_4), (void*)L_2);
		RuntimeObject* L_3 = ___awaitCaller2;
		(&V_0)->___awaitCaller_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___awaitCaller_5), (void*)L_3);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m9847B12E4A6F740B85AAE030955D7C4DF9DE4852(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m9847B12E4A6F740B85AAE030955D7C4DF9DE4852_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tB53370F112232C997E1CF8D7D7E9BDAF24D1221A* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m5CBBC7E5001A81FB63D0053306B4BB77B5BE7C26(L_5, AsyncTaskMethodBuilder_1_get_Task_m5CBBC7E5001A81FB63D0053306B4BB77B5BE7C26_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void VRMShaders.MaterialFactory::SetTextureOffsetAndScale(UnityEngine.Material,System.String,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialFactory_SetTextureOffsetAndScale_m2C96D9B642C20094BF08043A7E759BFF4E3F8008 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, String_t* ___propertyName1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale3, const RuntimeMethod* method) 
{
	{
		// material.SetTextureOffset(propertyName, offset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		String_t* L_1 = ___propertyName1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___offset2;
		NullCheck(L_0);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_0, L_1, L_2, NULL);
		// material.SetTextureScale(propertyName, scale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		String_t* L_4 = ___propertyName1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___scale3;
		NullCheck(L_3);
		Material_SetTextureScale_m8DBD33DD5E1F19C75C9C022974B27C719E9C5F8D(L_3, L_4, L_5, NULL);
		// }
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


// Conversion methods for marshalling of: VRMShaders.MaterialFactory/MaterialLoadInfo
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_pinvoke(const MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC& unmarshaled, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Key_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Key' of type 'MaterialLoadInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Key_0Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_pinvoke_back(const MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_pinvoke& marshaled, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC& unmarshaled)
{
	Exception_t* ___Key_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Key' of type 'MaterialLoadInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Key_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.MaterialFactory/MaterialLoadInfo
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_pinvoke_cleanup(MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: VRMShaders.MaterialFactory/MaterialLoadInfo
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_com(const MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC& unmarshaled, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_com& marshaled)
{
	Exception_t* ___Key_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Key' of type 'MaterialLoadInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Key_0Exception, NULL);
}
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_com_back(const MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_com& marshaled, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC& unmarshaled)
{
	Exception_t* ___Key_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Key' of type 'MaterialLoadInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Key_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.MaterialFactory/MaterialLoadInfo
IL2CPP_EXTERN_C void MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshal_com_cleanup(MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC_marshaled_com& marshaled)
{
}
// System.Boolean VRMShaders.MaterialFactory/MaterialLoadInfo::get_IsSubAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialLoadInfo_get_IsSubAsset_m69D0DC45B5DDCF62549D48AB5D476C6E63B9C24E (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSubAsset => !UseExternal;
		bool L_0 = __this->___UseExternal_2;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool MaterialLoadInfo_get_IsSubAsset_m69D0DC45B5DDCF62549D48AB5D476C6E63B9C24E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialLoadInfo_get_IsSubAsset_m69D0DC45B5DDCF62549D48AB5D476C6E63B9C24E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.MaterialFactory/MaterialLoadInfo::.ctor(VRMShaders.SubAssetKey,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3 (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___asset1, bool ___useExternal2, const RuntimeMethod* method) 
{
	{
		// Key = key;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_0 = ___key0;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Key_0))->___Type_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Key_0))->___Name_3), (void*)NULL);
		#endif
		// Asset = asset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___asset1;
		__this->___Asset_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Asset_1), (void*)L_1);
		// UseExternal = useExternal;
		bool L_2 = ___useExternal2;
		__this->___UseExternal_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3_AdjustorThunk (RuntimeObject* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___asset1, bool ___useExternal2, const RuntimeMethod* method)
{
	MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC*>(__this + _offset);
	MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3(_thisAdjusted, ___key0, ___asset1, ___useExternal2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRMShaders.MaterialFactory/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8A1805A0701C2CB7E06EDEE20D0D872400748B64 (U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VRMShaders.MaterialFactory/<>c__DisplayClass7_0::<Remove>b__0(VRMShaders.MaterialFactory/MaterialLoadInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CRemoveU3Eb__0_m45BF5D752F596560394909369B914B578A419BCC (U3CU3Ec__DisplayClass7_0_t1957021775F6C6DB529345A265A2E0DB4CF3DF59* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var index = m_materials.FindIndex(x => x.Asset == material);
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_0 = ___x0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0.___Asset_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___material_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		return L_3;
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
// System.Void VRMShaders.MaterialFactory/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m152752CE299FAA405D7AACFB693C17DA7B8DC090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* L_0 = (U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484*)il2cpp_codegen_object_new(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m31AE0CCAFDD42BE7D2642E0B553DEE276E9BC941(L_0, NULL);
		((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void VRMShaders.MaterialFactory/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31AE0CCAFDD42BE7D2642E0B553DEE276E9BC941 (U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture> VRMShaders.MaterialFactory/<>c::<LoadAsync>b__11_0(VRMShaders.TextureDescriptor,VRMShaders.IAwaitCaller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* U3CU3Ec_U3CLoadAsyncU3Eb__11_0_m6D436ECD547B231CE092F9E98EB6855122C0F535 (U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m792BEB34B2E4463F88A7B18B6DB8170DE7175940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getTexture = (x, y) => Task.FromResult<Texture>(null);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* L_0;
		L_0 = Task_FromResult_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m792BEB34B2E4463F88A7B18B6DB8170DE7175940((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, Task_FromResult_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m792BEB34B2E4463F88A7B18B6DB8170DE7175940_RuntimeMethod_var);
		return L_0;
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
// System.Void VRMShaders.MaterialFactory/<LoadAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491 (U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m092114FC44FD3528526C38D395FEBF80EC906172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAA726334D3DFE03E62A79582EED2C176EAED531D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t429C26DEF4163186CF0A7500E45D444920BE8C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t69E9F2733C638F9AB9A6A675F0A59D898CF5DD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t94CF5C87D4739506C4D2C511FB9A469E94227D5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9989281527DA585C1345EDCD868B95045F9FB6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC553A7669449415558239639A6767294F3A7263C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3123A64882B39CB64BE9243C89A1E334790573A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6F4E675BB571FC2B1E700343333452C651CC5C0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F4A443ED1607A983618DFAA0A579693F9D16AE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCAAFFED05AC2EE13BCD0843BB6772D64C9812DB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD731BF0993C17F69DCC5B17173EB3BEDAC2BC127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t26866E77AEDAEA17BA4DDCE7E2D438A56CC460FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8D62DB0B47EAE697C8A45D6163F646C28DB3CCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m17D0E6AA6114D14507F66491AF38C3E874B64E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE30B4F79CBAD5023CA7429D70E18EB0F7DBD5B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF33995FEE2DB39F5D10B0080998A4C467A9BFF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m89386CB273679B04B7CA2F4650CC0BE8452F0792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadAsyncU3Eb__11_0_m6D436ECD547B231CE092F9E98EB6855122C0F535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D95C9038FADE61EAA402493C3AB02991DF2B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1CA336C835CAA266D3262B19A0CB700D38F07);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* V_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_5 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* V_10 = NULL;
	KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* G_B7_0 = NULL;
	U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* G_B7_1 = NULL;
	GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* G_B6_0 = NULL;
	U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_013c_1;
			}
		}
		{
			// if (m_externalMap.TryGetValue(matDesc.SubAssetKey, out Material material))
			MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___m_externalMap_0;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_5 = (&__this->___matDesc_3);
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_6;
			L_6 = MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054(L_5, NULL);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_7 = (&__this->___U3CmaterialU3E5__2_6);
			NullCheck(L_4);
			bool L_8;
			L_8 = InterfaceFuncInvoker2< bool, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Material>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t26866E77AEDAEA17BA4DDCE7E2D438A56CC460FB_il2cpp_TypeInfo_var, L_4, L_6, L_7);
			if (!L_8)
			{
				goto IL_0060_1;
			}
		}
		{
			// m_materials.Add(new MaterialLoadInfo(matDesc.SubAssetKey, material, true));
			MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* L_9 = V_1;
			NullCheck(L_9);
			List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_10 = L_9->___m_materials_2;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_11 = (&__this->___matDesc_3);
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_12;
			L_12 = MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054(L_11, NULL);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___U3CmaterialU3E5__2_6;
			MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_14;
			memset((&L_14), 0, sizeof(L_14));
			MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3((&L_14), L_12, L_13, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_10);
			List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_inline(L_10, L_14, List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_RuntimeMethod_var);
			// return material;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___U3CmaterialU3E5__2_6;
			V_2 = L_15;
			goto IL_040d;
		}

IL_0060_1:
		{
			// if (getTexture == null)
			GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_16 = __this->___getTexture_4;
			if (L_16)
			{
				goto IL_008d_1;
			}
		}
		{
			// getTexture = (x, y) => Task.FromResult<Texture>(null);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var);
			GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_17 = ((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
			GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_18 = L_17;
			G_B6_0 = L_18;
			G_B6_1 = __this;
			if (L_18)
			{
				G_B7_0 = L_18;
				G_B7_1 = __this;
				goto IL_0088_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var);
			U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484* L_19 = ((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_20 = (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3*)il2cpp_codegen_object_new(GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			GetTextureAsyncFunc__ctor_mDC2139E98FADF3D12C53F6F42BDEBEB262BAEEBC(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CLoadAsyncU3Eb__11_0_m6D436ECD547B231CE092F9E98EB6855122C0F535_RuntimeMethod_var), NULL);
			GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_21 = L_20;
			((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22B891B5192DADEB01A066117B80F0A4F068E484_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_21);
			G_B7_0 = L_21;
			G_B7_1 = G_B6_1;
		}

IL_0088_1:
		{
			G_B7_1->___getTexture_4 = G_B7_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___getTexture_4), (void*)G_B7_0);
		}

IL_008d_1:
		{
			// var shaderName = matDesc.ShaderName;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_22 = (&__this->___matDesc_3);
			String_t* L_23 = L_22->___ShaderName_1;
			V_3 = L_23;
			// if (String.IsNullOrEmpty(shaderName))
			String_t* L_24 = V_3;
			bool L_25;
			L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
			if (!L_25)
			{
				goto IL_00ac_1;
			}
		}
		{
			// throw new Exception("no shader name");
			Exception_t* L_26 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_26);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38593A33ADE66F6DD6980D5BCEDB5EDF31D076EA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491_RuntimeMethod_var)));
		}

IL_00ac_1:
		{
			// if (m_fallbackShaders.TryGetValue(shaderName, out string fallback))
			MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* L_27 = V_1;
			NullCheck(L_27);
			RuntimeObject* L_28 = L_27->___m_fallbackShaders_1;
			String_t* L_29 = V_3;
			NullCheck(L_28);
			bool L_30;
			L_30 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8_il2cpp_TypeInfo_var, L_28, L_29, (&V_4));
			if (!L_30)
			{
				goto IL_00d6_1;
			}
		}
		{
			// Debug.LogWarning($"fallback: {shaderName} => {fallback}");
			String_t* L_31 = V_3;
			String_t* L_32 = V_4;
			String_t* L_33;
			L_33 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralACA1CA336C835CAA266D3262B19A0CB700D38F07, L_31, _stringLiteral82D95C9038FADE61EAA402493C3AB02991DF2B25, L_32, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_33, NULL);
			// shaderName = fallback;
			String_t* L_34 = V_4;
			V_3 = L_34;
		}

IL_00d6_1:
		{
			// var shader = Shader.Find(shaderName);
			String_t* L_35 = V_3;
			Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_36;
			L_36 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_35, NULL);
			V_5 = L_36;
			// if (shader == null)
			Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_37 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_38;
			L_38 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_38)
			{
				goto IL_00fe_1;
			}
		}
		{
			// throw new Exception($"shader: {shaderName} not found");
			String_t* L_39 = V_3;
			String_t* L_40;
			L_40 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7C76C37AED068B0EB86A95803BCD751DA6BCAF0)), L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655)), NULL);
			Exception_t* L_41 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_41);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_41, L_40, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491_RuntimeMethod_var)));
		}

IL_00fe_1:
		{
			// material = new Material(shader);
			Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_42 = V_5;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_43, L_42, NULL);
			__this->___U3CmaterialU3E5__2_6 = L_43;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__2_6), (void*)L_43);
			// material.name = matDesc.SubAssetKey.Name;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___U3CmaterialU3E5__2_6;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_45 = (&__this->___matDesc_3);
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_46;
			L_46 = MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054(L_45, NULL);
			String_t* L_47 = L_46.___Name_3;
			NullCheck(L_44);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_44, L_47, NULL);
			// foreach (var kv in matDesc.TextureSlots)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_48 = (&__this->___matDesc_3);
			RuntimeObject* L_49 = L_48->___TextureSlots_3;
			NullCheck(L_49);
			RuntimeObject* L_50;
			L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>>::GetEnumerator() */, IEnumerable_1_t9989281527DA585C1345EDCD868B95045F9FB6A6_il2cpp_TypeInfo_var, L_49);
			__this->___U3CU3E7__wrap2_7 = L_50;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_7), (void*)L_50);
		}

IL_013c_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0242_1:
				{// begin finally (depth: 2)
					{
						int32_t L_51 = V_0;
						if ((((int32_t)L_51) >= ((int32_t)0)))
						{
							goto IL_0259_1;
						}
					}
					{
						RuntimeObject* L_52 = __this->___U3CU3E7__wrap2_7;
						if (!L_52)
						{
							goto IL_0259_1;
						}
					}
					{
						RuntimeObject* L_53 = __this->___U3CU3E7__wrap2_7;
						NullCheck(L_53);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
					}

IL_0259_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_54 = V_0;
					if (!L_54)
					{
						goto IL_01a6_2;
					}
				}
				{
					goto IL_0230_2;
				}

IL_0145_2:
				{
					// foreach (var kv in matDesc.TextureSlots)
					RuntimeObject* L_55 = __this->___U3CU3E7__wrap2_7;
					NullCheck(L_55);
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727 L_56;
					L_56 = InterfaceFuncInvoker0< KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,VRMShaders.TextureDescriptor>>::get_Current() */, IEnumerator_1_t6F4E675BB571FC2B1E700343333452C651CC5C0F_il2cpp_TypeInfo_var, L_55);
					__this->___U3CkvU3E5__4_8 = L_56;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CkvU3E5__4_8))->___key_0), (void*)NULL);
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___UnityObjectName_0), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index0_7), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index1_8), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index2_9), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index3_10), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index4_11), (void*)NULL);
					#endif
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CkvU3E5__4_8))->___value_1))->___Index5_12), (void*)NULL);
					#endif
					// var texture = await getTexture(kv.Value, awaitCaller);
					GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* L_57 = __this->___getTexture_4;
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_58 = (&__this->___U3CkvU3E5__4_8);
					TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_59;
					L_59 = KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_inline(L_58, KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_RuntimeMethod_var);
					RuntimeObject* L_60 = __this->___awaitCaller_5;
					NullCheck(L_57);
					Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* L_61;
					L_61 = GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_inline(L_57, L_59, L_60, NULL);
					NullCheck(L_61);
					TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD L_62;
					L_62 = Task_1_GetAwaiter_m89386CB273679B04B7CA2F4650CC0BE8452F0792(L_61, Task_1_GetAwaiter_m89386CB273679B04B7CA2F4650CC0BE8452F0792_RuntimeMethod_var);
					V_7 = L_62;
					bool L_63;
					L_63 = TaskAwaiter_1_get_IsCompleted_mF33995FEE2DB39F5D10B0080998A4C467A9BFF8A((&V_7), TaskAwaiter_1_get_IsCompleted_mF33995FEE2DB39F5D10B0080998A4C467A9BFF8A_RuntimeMethod_var);
					if (L_63)
					{
						goto IL_01c3_2;
					}
				}
				{
					int32_t L_64 = 0;
					V_0 = L_64;
					__this->___U3CU3E1__state_0 = L_64;
					TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD L_65 = V_7;
					__this->___U3CU3Eu__1_9 = L_65;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_66 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m092114FC44FD3528526C38D395FEBF80EC906172(L_66, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD_TisU3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195_m092114FC44FD3528526C38D395FEBF80EC906172_RuntimeMethod_var);
					goto IL_0428;
				}

IL_01a6_2:
				{
					TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD L_67 = __this->___U3CU3Eu__1_9;
					V_7 = L_67;
					TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD* L_68 = (&__this->___U3CU3Eu__1_9);
					il2cpp_codegen_initobj(L_68, sizeof(TaskAwaiter_1_t9F919266EFA2770F5F59B6366F83303C6F5EDFFD));
					int32_t L_69 = (-1);
					V_0 = L_69;
					__this->___U3CU3E1__state_0 = L_69;
				}

IL_01c3_2:
				{
					Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_70;
					L_70 = TaskAwaiter_1_GetResult_mE30B4F79CBAD5023CA7429D70E18EB0F7DBD5B03((&V_7), TaskAwaiter_1_GetResult_mE30B4F79CBAD5023CA7429D70E18EB0F7DBD5B03_RuntimeMethod_var);
					V_6 = L_70;
					// if (texture != null)
					Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_71 = V_6;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					bool L_72;
					L_72 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_71, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
					if (!L_72)
					{
						goto IL_0224_2;
					}
				}
				{
					// material.SetTexture(kv.Key, texture);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___U3CmaterialU3E5__2_6;
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_74 = (&__this->___U3CkvU3E5__4_8);
					String_t* L_75;
					L_75 = KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_inline(L_74, KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_RuntimeMethod_var);
					Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76 = V_6;
					NullCheck(L_73);
					Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_73, L_75, L_76, NULL);
					// SetTextureOffsetAndScale(material, kv.Key, kv.Value.Offset, kv.Value.Scale);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___U3CmaterialU3E5__2_6;
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_78 = (&__this->___U3CkvU3E5__4_8);
					String_t* L_79;
					L_79 = KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_inline(L_78, KeyValuePair_2_get_Key_m1C212DBBE3E56B2B207B82884443FB5275D50B2F_RuntimeMethod_var);
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_80 = (&__this->___U3CkvU3E5__4_8);
					TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_81;
					L_81 = KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_inline(L_80, KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_RuntimeMethod_var);
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = L_81.___Offset_1;
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_83 = (&__this->___U3CkvU3E5__4_8);
					TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_84;
					L_84 = KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_inline(L_83, KeyValuePair_2_get_Value_m3439D63C31E25A633733DB01D3C1428F86BB48E0_RuntimeMethod_var);
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = L_84.___Scale_2;
					MaterialFactory_SetTextureOffsetAndScale_m2C96D9B642C20094BF08043A7E759BFF4E3F8008(L_77, L_79, L_82, L_85, NULL);
				}

IL_0224_2:
				{
					// }
					KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727* L_86 = (&__this->___U3CkvU3E5__4_8);
					il2cpp_codegen_initobj(L_86, sizeof(KeyValuePair_2_t31557C0405CA92F39BA3BA5919F55942EFAC5727));
				}

IL_0230_2:
				{
					// foreach (var kv in matDesc.TextureSlots)
					RuntimeObject* L_87 = __this->___U3CU3E7__wrap2_7;
					NullCheck(L_87);
					bool L_88;
					L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_87);
					if (L_88)
					{
						goto IL_0145_2;
					}
				}
				{
					goto IL_025a_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_025a_1:
		{
			__this->___U3CU3E7__wrap2_7 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_7), (void*)(RuntimeObject*)NULL);
			// foreach (var kv in matDesc.Colors)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_89 = (&__this->___matDesc_3);
			RuntimeObject* L_90 = L_89->___Colors_5;
			NullCheck(L_90);
			RuntimeObject* L_91;
			L_91 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>>::GetEnumerator() */, IEnumerable_1_t69E9F2733C638F9AB9A6A675F0A59D898CF5DD14_il2cpp_TypeInfo_var, L_90);
			V_8 = L_91;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02a2_1:
				{// begin finally (depth: 2)
					{
						int32_t L_92 = V_0;
						if ((((int32_t)L_92) >= ((int32_t)0)))
						{
							goto IL_02b1_1;
						}
					}
					{
						RuntimeObject* L_93 = V_8;
						if (!L_93)
						{
							goto IL_02b1_1;
						}
					}
					{
						RuntimeObject* L_94 = V_8;
						NullCheck(L_94);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_94);
					}

IL_02b1_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0297_2;
				}

IL_0275_2:
				{
					// foreach (var kv in matDesc.Colors)
					RuntimeObject* L_95 = V_8;
					NullCheck(L_95);
					KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C L_96;
					L_96 = InterfaceFuncInvoker0< KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>>::get_Current() */, IEnumerator_1_t9F4A443ED1607A983618DFAA0A579693F9D16AE7_il2cpp_TypeInfo_var, L_95);
					V_9 = L_96;
					// material.SetColor(kv.Key, kv.Value);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = __this->___U3CmaterialU3E5__2_6;
					String_t* L_98;
					L_98 = KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_inline((&V_9), KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var);
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99;
					L_99 = KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_inline((&V_9), KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var);
					NullCheck(L_97);
					Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_97, L_98, L_99, NULL);
				}

IL_0297_2:
				{
					// foreach (var kv in matDesc.Colors)
					RuntimeObject* L_100 = V_8;
					NullCheck(L_100);
					bool L_101;
					L_101 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_100);
					if (L_101)
					{
						goto IL_0275_2;
					}
				}
				{
					goto IL_02b2_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_02b2_1:
		{
			// foreach (var kv in matDesc.Vectors)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_102 = (&__this->___matDesc_3);
			RuntimeObject* L_103 = L_102->___Vectors_6;
			NullCheck(L_103);
			RuntimeObject* L_104;
			L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Vector4>>::GetEnumerator() */, IEnumerable_1_t94CF5C87D4739506C4D2C511FB9A469E94227D5C_il2cpp_TypeInfo_var, L_103);
			V_10 = L_104;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02f3_1:
				{// begin finally (depth: 2)
					{
						int32_t L_105 = V_0;
						if ((((int32_t)L_105) >= ((int32_t)0)))
						{
							goto IL_0302_1;
						}
					}
					{
						RuntimeObject* L_106 = V_10;
						if (!L_106)
						{
							goto IL_0302_1;
						}
					}
					{
						RuntimeObject* L_107 = V_10;
						NullCheck(L_107);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_107);
					}

IL_0302_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_02e8_2;
				}

IL_02c6_2:
				{
					// foreach (var kv in matDesc.Vectors)
					RuntimeObject* L_108 = V_10;
					NullCheck(L_108);
					KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7 L_109;
					L_109 = InterfaceFuncInvoker0< KeyValuePair_2_tFB406C1CB2F14F833EBB4716541BF223B448ADD7 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Vector4>>::get_Current() */, IEnumerator_1_tCAAFFED05AC2EE13BCD0843BB6772D64C9812DB8_il2cpp_TypeInfo_var, L_108);
					V_11 = L_109;
					// material.SetVector(kv.Key, kv.Value);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110 = __this->___U3CmaterialU3E5__2_6;
					String_t* L_111;
					L_111 = KeyValuePair_2_get_Key_m8D62DB0B47EAE697C8A45D6163F646C28DB3CCAC_inline((&V_11), KeyValuePair_2_get_Key_m8D62DB0B47EAE697C8A45D6163F646C28DB3CCAC_RuntimeMethod_var);
					Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_112;
					L_112 = KeyValuePair_2_get_Value_m17D0E6AA6114D14507F66491AF38C3E874B64E70_inline((&V_11), KeyValuePair_2_get_Value_m17D0E6AA6114D14507F66491AF38C3E874B64E70_RuntimeMethod_var);
					NullCheck(L_110);
					Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_110, L_111, L_112, NULL);
				}

IL_02e8_2:
				{
					// foreach (var kv in matDesc.Vectors)
					RuntimeObject* L_113 = V_10;
					NullCheck(L_113);
					bool L_114;
					L_114 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_113);
					if (L_114)
					{
						goto IL_02c6_2;
					}
				}
				{
					goto IL_0303_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0303_1:
		{
			// foreach (var kv in matDesc.FloatValues)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_115 = (&__this->___matDesc_3);
			RuntimeObject* L_116 = L_115->___FloatValues_4;
			NullCheck(L_116);
			RuntimeObject* L_117;
			L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::GetEnumerator() */, IEnumerable_1_tC553A7669449415558239639A6767294F3A7263C_il2cpp_TypeInfo_var, L_116);
			V_12 = L_117;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0344_1:
				{// begin finally (depth: 2)
					{
						int32_t L_118 = V_0;
						if ((((int32_t)L_118) >= ((int32_t)0)))
						{
							goto IL_0353_1;
						}
					}
					{
						RuntimeObject* L_119 = V_12;
						if (!L_119)
						{
							goto IL_0353_1;
						}
					}
					{
						RuntimeObject* L_120 = V_12;
						NullCheck(L_120);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_120);
					}

IL_0353_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0339_2;
				}

IL_0317_2:
				{
					// foreach (var kv in matDesc.FloatValues)
					RuntimeObject* L_121 = V_12;
					NullCheck(L_121);
					KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 L_122;
					L_122 = InterfaceFuncInvoker0< KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::get_Current() */, IEnumerator_1_t3123A64882B39CB64BE9243C89A1E334790573A0_il2cpp_TypeInfo_var, L_121);
					V_13 = L_122;
					// material.SetFloat(kv.Key, kv.Value);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123 = __this->___U3CmaterialU3E5__2_6;
					String_t* L_124;
					L_124 = KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline((&V_13), KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
					float L_125;
					L_125 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_13), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
					NullCheck(L_123);
					Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_123, L_124, L_125, NULL);
				}

IL_0339_2:
				{
					// foreach (var kv in matDesc.FloatValues)
					RuntimeObject* L_126 = V_12;
					NullCheck(L_126);
					bool L_127;
					L_127 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_126);
					if (L_127)
					{
						goto IL_0317_2;
					}
				}
				{
					goto IL_0354_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0354_1:
		{
			// if (matDesc.RenderQueue.HasValue)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_128 = (&__this->___matDesc_3);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_129 = (&L_128->___RenderQueue_2);
			bool L_130;
			L_130 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_129, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
			if (!L_130)
			{
				goto IL_0381_1;
			}
		}
		{
			// material.renderQueue = matDesc.RenderQueue.Value;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131 = __this->___U3CmaterialU3E5__2_6;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_132 = (&__this->___matDesc_3);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_133 = (&L_132->___RenderQueue_2);
			int32_t L_134;
			L_134 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_133, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			NullCheck(L_131);
			Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_131, L_134, NULL);
		}

IL_0381_1:
		{
			// foreach (var action in matDesc.Actions)
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_135 = (&__this->___matDesc_3);
			RuntimeObject* L_136 = L_135->___Actions_7;
			NullCheck(L_136);
			RuntimeObject* L_137;
			L_137 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Action`1<UnityEngine.Material>>::GetEnumerator() */, IEnumerable_1_t429C26DEF4163186CF0A7500E45D444920BE8C7B_il2cpp_TypeInfo_var, L_136);
			V_14 = L_137;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_03b2_1:
				{// begin finally (depth: 2)
					{
						int32_t L_138 = V_0;
						if ((((int32_t)L_138) >= ((int32_t)0)))
						{
							goto IL_03c1_1;
						}
					}
					{
						RuntimeObject* L_139 = V_14;
						if (!L_139)
						{
							goto IL_03c1_1;
						}
					}
					{
						RuntimeObject* L_140 = V_14;
						NullCheck(L_140);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_140);
					}

IL_03c1_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_03a7_2;
				}

IL_0395_2:
				{
					// foreach (var action in matDesc.Actions)
					RuntimeObject* L_141 = V_14;
					NullCheck(L_141);
					Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* L_142;
					L_142 = InterfaceFuncInvoker0< Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Action`1<UnityEngine.Material>>::get_Current() */, IEnumerator_1_tD731BF0993C17F69DCC5B17173EB3BEDAC2BC127_il2cpp_TypeInfo_var, L_141);
					// action(material);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143 = __this->___U3CmaterialU3E5__2_6;
					NullCheck(L_142);
					Action_1_Invoke_m1960168077AF32A34C109932F39D6DED83A157AB_inline(L_142, L_143, NULL);
				}

IL_03a7_2:
				{
					// foreach (var action in matDesc.Actions)
					RuntimeObject* L_144 = V_14;
					NullCheck(L_144);
					bool L_145;
					L_145 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_144);
					if (L_145)
					{
						goto IL_0395_2;
					}
				}
				{
					goto IL_03c2_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_03c2_1:
		{
			// m_materials.Add(new MaterialLoadInfo(matDesc.SubAssetKey, material, false));
			MaterialFactory_tB6370E74610D7872D8B9C669FE2AA5F27D59F88F* L_146 = V_1;
			NullCheck(L_146);
			List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* L_147 = L_146->___m_materials_2;
			MaterialDescriptor_t34B16002D81383E6C7207C983A869479D8BCE8EF* L_148 = (&__this->___matDesc_3);
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_149;
			L_149 = MaterialDescriptor_get_SubAssetKey_mC81DDA9784CDCBE5B8590245412B721D53228054(L_148, NULL);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150 = __this->___U3CmaterialU3E5__2_6;
			MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_151;
			memset((&L_151), 0, sizeof(L_151));
			MaterialLoadInfo__ctor_mEEFD9F7B9A799FAD158134251C9A17A5A1D3EEE3((&L_151), L_149, L_150, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_147);
			List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_inline(L_147, L_151, List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_RuntimeMethod_var);
			// return material;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152 = __this->___U3CmaterialU3E5__2_6;
			V_2 = L_152;
			goto IL_040d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03ed;
		}
		throw e;
	}

CATCH_03ed:
	{// begin catch(System.Exception)
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmaterialU3E5__2_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__2_6), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_153 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_154 = V_15;
		AsyncTaskMethodBuilder_1_SetException_m94A24D634E94D8CB9B48E502AF60871745076334(L_153, L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m94A24D634E94D8CB9B48E502AF60871745076334_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0428;
	}// end catch (depth: 1)

IL_040d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmaterialU3E5__2_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaterialU3E5__2_6), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_155 = (&__this->___U3CU3Et__builder_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mAA726334D3DFE03E62A79582EED2C176EAED531D(L_155, L_156, AsyncTaskMethodBuilder_1_SetResult_mAA726334D3DFE03E62A79582EED2C176EAED531D_RuntimeMethod_var);
	}

IL_0428:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195*>(__this + _offset);
	U3CLoadAsyncU3Ed__11_MoveNext_m37F298A21FDB80D58D778923A140698FBEE5C491(_thisAdjusted, method);
}
// System.Void VRMShaders.MaterialFactory/<LoadAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__11_SetStateMachine_m836AFCAF5C72058E4DB2C9C069425E626508C210 (U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE9FEC7A547FFE114CF4F03B8AF4ED80B0E9C2378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tE3ADDA9867F26007F07B971D2E60886AC29FA2B4* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE9FEC7A547FFE114CF4F03B8AF4ED80B0E9C2378(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE9FEC7A547FFE114CF4F03B8AF4ED80B0E9C2378_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAsyncU3Ed__11_SetStateMachine_m836AFCAF5C72058E4DB2C9C069425E626508C210_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAsyncU3Ed__11_t87D45ECDD0CBFCC4EF8A5867D182953548797195*>(__this + _offset);
	U3CLoadAsyncU3Ed__11_SetStateMachine_m836AFCAF5C72058E4DB2C9C069425E626508C210(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRMShaders.PathObject
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_pinvoke(const PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B& unmarshaled, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CFullPathU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CFullPathU3Ek__BackingField_0);
}
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_pinvoke_back(const PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_pinvoke& marshaled, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B& unmarshaled)
{
	unmarshaled.___U3CFullPathU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CFullPathU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CFullPathU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CFullPathU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: VRMShaders.PathObject
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_pinvoke_cleanup(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CFullPathU3Ek__BackingField_0);
	marshaled.___U3CFullPathU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: VRMShaders.PathObject
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_com(const PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B& unmarshaled, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_com& marshaled)
{
	marshaled.___U3CFullPathU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CFullPathU3Ek__BackingField_0);
}
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_com_back(const PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_com& marshaled, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B& unmarshaled)
{
	unmarshaled.___U3CFullPathU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CFullPathU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CFullPathU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CFullPathU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: VRMShaders.PathObject
IL2CPP_EXTERN_C void PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshal_com_cleanup(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CFullPathU3Ek__BackingField_0);
	marshaled.___U3CFullPathU3Ek__BackingField_0 = NULL;
}
// System.String VRMShaders.PathObject::get_FullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	{
		// public string FullPath { get; }
		String_t* L_0 = __this->___U3CFullPathU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String VRMShaders.PathObject::get_Extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_Extension_m7C738BBD65735B0B9B27E430D1FB57CC60112E98 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Extension => Path.GetExtension(FullPath);
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PathObject_get_Extension_m7C738BBD65735B0B9B27E430D1FB57CC60112E98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PathObject_get_Extension_m7C738BBD65735B0B9B27E430D1FB57CC60112E98(_thisAdjusted, method);
	return _returnValue;
}
// System.String VRMShaders.PathObject::get_Stem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_Stem_m91492E9C2A76D9FA495EECE9D0DC79F267439350 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Stem => Path.GetFileNameWithoutExtension(FullPath);
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PathObject_get_Stem_m91492E9C2A76D9FA495EECE9D0DC79F267439350_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PathObject_get_Stem_m91492E9C2A76D9FA495EECE9D0DC79F267439350(_thisAdjusted, method);
	return _returnValue;
}
// VRMShaders.PathObject VRMShaders.PathObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_Parent_m2AC042A2F3B92BFBE931F980824B2D6D41618B7D (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PathObject Parent => FromFullPath(Path.GetDirectoryName(FullPath));
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_2;
		L_2 = PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_Parent_m2AC042A2F3B92BFBE931F980824B2D6D41618B7D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B _returnValue;
	_returnValue = PathObject_get_Parent_m2AC042A2F3B92BFBE931F980824B2D6D41618B7D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean VRMShaders.PathObject::get_IsUnderAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_get_IsUnderAsset_m2DE1A6BC1F37FC1436B07F64D048B1EA46B83E83 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsUnderAsset => IsDescendantOf(UnityAssets);
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0;
		L_0 = PathObject_get_UnityAssets_mF212A5E2B6684E37AD5CFD2F8DE7796CB87FFE8C_inline(NULL);
		bool L_1;
		L_1 = PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PathObject_get_IsUnderAsset_m2DE1A6BC1F37FC1436B07F64D048B1EA46B83E83_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	bool _returnValue;
	_returnValue = PathObject_get_IsUnderAsset_m2DE1A6BC1F37FC1436B07F64D048B1EA46B83E83(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean VRMShaders.PathObject::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_get_Exists_mDC954D6EF7B541BDA60094E710AAFEA27C98D103 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	{
		// public bool Exists => System.IO.File.Exists(FullPath);
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PathObject_get_Exists_mDC954D6EF7B541BDA60094E710AAFEA27C98D103_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	bool _returnValue;
	_returnValue = PathObject_get_Exists_mDC954D6EF7B541BDA60094E710AAFEA27C98D103(_thisAdjusted, method);
	return _returnValue;
}
// System.String VRMShaders.PathObject::get_UnityAssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var root = UnityRoot;
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0;
		L_0 = PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline(NULL);
		V_0 = L_0;
		// if (!IsDescendantOf(UnityRoot))
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_1;
		L_1 = PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline(NULL);
		bool L_2;
		L_2 = PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// throw new ArgumentException($"{FullPath} is not under UnityAssetPath");
		String_t* L_3;
		L_3 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8211A56C70251073C38D2535BC730C862BA0259)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2_RuntimeMethod_var)));
	}

IL_0029:
	{
		// return FullPath.Substring(root.FullPath.Length + 1);
		String_t* L_6;
		L_6 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_7;
		L_7 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline((&V_0), NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2(_thisAdjusted, method);
	return _returnValue;
}
// VRMShaders.PathObject VRMShaders.PathObject::get_UnityRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PathObject UnityRoot { get; } = FromFullPath(Path.GetDirectoryName(Application.dataPath));
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0 = ((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityRootU3Ek__BackingField_1;
		return L_0;
	}
}
// VRMShaders.PathObject VRMShaders.PathObject::get_UnityAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityAssets_mF212A5E2B6684E37AD5CFD2F8DE7796CB87FFE8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PathObject UnityAssets { get; } = UnityRoot.Child("Assets/");
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0 = ((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityAssetsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VRMShaders.PathObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, String_t* ___src0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(src))
		String_t* L_0 = ___src0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28_RuntimeMethod_var)));
	}

IL_000e:
	{
		// src = Path.GetFullPath(src).Replace('\\', '/');
		String_t* L_3 = ___src0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetFullPath_m17A1AD4E216D884E3DF3208BF44F4E40823BAA23(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_4, ((int32_t)92), ((int32_t)47), NULL);
		___src0 = L_5;
		// if (src.Length > 1 && src[src.Length - 1] == '/')
		String_t* L_6 = ___src0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8 = ___src0;
		String_t* L_9 = ___src0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004b;
		}
	}
	{
		// src = src.Substring(0, src.Length - 1);
		String_t* L_12 = ___src0;
		String_t* L_13 = ___src0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		NullCheck(L_12);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		___src0 = L_15;
	}

IL_004b:
	{
		// if (src[0] == '/')
		String_t* L_16 = ___src0;
		NullCheck(L_16);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, 0, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_005e;
		}
	}
	{
		// FullPath = src;
		String_t* L_18 = ___src0;
		__this->___U3CFullPathU3Ek__BackingField_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFullPathU3Ek__BackingField_0), (void*)L_18);
		return;
	}

IL_005e:
	{
		// if (src.Length >= 3 && src[1] == ':' && src[2] == '/')
		String_t* L_19 = ___src0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_20) < ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_21 = ___src0;
		NullCheck(L_21);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, 1, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_23 = ___src0;
		NullCheck(L_23);
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, 2, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0085;
		}
	}
	{
		// FullPath = src;
		String_t* L_25 = ___src0;
		__this->___U3CFullPathU3Ek__BackingField_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFullPathU3Ek__BackingField_0), (void*)L_25);
		return;
	}

IL_0085:
	{
		// throw new ArgumentException($"{src} is not fullpath");
		String_t* L_26 = ___src0;
		String_t* L_27;
		L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3164530FEB17F18B5B9F51B4B89A156DFA472E6E)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28_AdjustorThunk (RuntimeObject* __this, String_t* ___src0, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28(_thisAdjusted, ___src0, method);
}
// System.String VRMShaders.PathObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathObject_ToString_m7E60319427F6EC3250A7498E034D83460911F1F5 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92CB34CBB4170D92CCFD4D41A5A60079A1ABF4EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var assetPath = UnityAssetPath;
		String_t* L_0;
		L_0 = PathObject_get_UnityAssetPath_m1C03376E5F827A12265D44B1E9382E1B9DB225C2(__this, NULL);
		V_0 = L_0;
		// return $"<unity:{assetPath}>";
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral92CB34CBB4170D92CCFD4D41A5A60079A1ABF4EF, L_1, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_1 = L_2;
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// return $"<file:{FullPath}>";
		String_t* L_3;
		L_3 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DB00D9C0567BF63CF2B35250749ABD5A3DBB925)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), NULL);
		V_1 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0033;
	}// end catch (depth: 1)

IL_0033:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* PathObject_ToString_m7E60319427F6EC3250A7498E034D83460911F1F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PathObject_ToString_m7E60319427F6EC3250A7498E034D83460911F1F5(_thisAdjusted, method);
	return _returnValue;
}
// VRMShaders.PathObject VRMShaders.PathObject::FromFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8 (String_t* ___src0, const RuntimeMethod* method) 
{
	{
		// return new PathObject(src);
		String_t* L_0 = ___src0;
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_1;
		memset((&L_1), 0, sizeof(L_1));
		PathObject__ctor_mFFCCDDB253519D4BC71ADEA65F48B9AD32D72A28((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// VRMShaders.PathObject VRMShaders.PathObject::FromUnityAssetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_FromUnityAssetPath_mB3F6358659762F570F1BD373C8A93BF9EB6E2DCA (String_t* ___src0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return UnityRoot.Child(src);
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0;
		L_0 = PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline(NULL);
		V_0 = L_0;
		String_t* L_1 = ___src0;
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_2;
		L_2 = PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0((&V_0), L_1, NULL);
		return L_2;
	}
}
// System.Boolean VRMShaders.PathObject::TryGetFromEnvironmentVariable(System.String,VRMShaders.PathObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_TryGetFromEnvironmentVariable_m392E0F82090BC62FDE93F120DA52FE572078AC8F (String_t* ___key0, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* ___dst1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var value = System.Environment.GetEnvironmentVariable(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(L_0, NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(value))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// dst = default;
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* L_4 = ___dst1;
		il2cpp_codegen_initobj(L_4, sizeof(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B));
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// dst = PathObject.FromFullPath(value);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* L_5 = ___dst1;
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_7;
		L_7 = PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8(L_6, NULL);
		*(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*)L_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*)L_5)->___U3CFullPathU3Ek__BackingField_0), (void*)NULL);
		// return true;
		return (bool)1;
	}
}
// VRMShaders.PathObject VRMShaders.PathObject::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, String_t* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FromFullPath(Path.Combine(FullPath, child));
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_1 = ___child0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_3;
		L_3 = PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0_AdjustorThunk (RuntimeObject* __this, String_t* ___child0, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B _returnValue;
	_returnValue = PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0(_thisAdjusted, ___child0, method);
	return _returnValue;
}
// System.Boolean VRMShaders.PathObject::IsDescendantOf(VRMShaders.PathObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B ___ascendant0, const RuntimeMethod* method) 
{
	{
		// if (!FullPath.StartsWith(ascendant.FullPath))
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_1;
		L_1 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline((&___ascendant0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// if (FullPath.Length <= ascendant.FullPath.Length || FullPath[ascendant.FullPath.Length] != '/')
		String_t* L_3;
		L_3 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5;
		L_5 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline((&___ascendant0), NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_7;
		L_7 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		String_t* L_8;
		L_8 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline((&___ascendant0), NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		NullCheck(L_7);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_004c;
		}
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA_AdjustorThunk (RuntimeObject* __this, PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B ___ascendant0, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	bool _returnValue;
	_returnValue = PathObject_IsDescendantOf_mA5DDE643C8D3503EDEFD916AC82D74C39E24A1BA(_thisAdjusted, ___ascendant0, method);
	return _returnValue;
}
// System.Byte[] VRMShaders.PathObject::ReadAllBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PathObject_ReadAllBytes_m75FB512EC231DBF9586DBB8BC8E6E091B3B2FE8E (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	{
		// return File.ReadAllBytes(FullPath);
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PathObject_ReadAllBytes_m75FB512EC231DBF9586DBB8BC8E6E091B3B2FE8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = PathObject_ReadAllBytes_m75FB512EC231DBF9586DBB8BC8E6E091B3B2FE8E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.PathObject::WriteAllBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathObject_WriteAllBytes_mF84A5EF4A16B01826EB56CD39575BD6D25FE3272 (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// File.WriteAllBytes(FullPath, data);
		String_t* L_0;
		L_0 = PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PathObject_WriteAllBytes_mF84A5EF4A16B01826EB56CD39575BD6D25FE3272_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B*>(__this + _offset);
	PathObject_WriteAllBytes_mF84A5EF4A16B01826EB56CD39575BD6D25FE3272(_thisAdjusted, ___data0, method);
}
// System.Void VRMShaders.PathObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathObject__cctor_m484824D540D36DB57CE74C1A87C3D1C48E6BC53C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991);
		s_Il2CppMethodInitialized = true;
	}
	PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static PathObject UnityRoot { get; } = FromFullPath(Path.GetDirectoryName(Application.dataPath));
		String_t* L_0;
		L_0 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_2;
		L_2 = PathObject_FromFullPath_m2CC428545866A1A886F9D421BB342663CF47A4E8(L_1, NULL);
		((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityRootU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityRootU3Ek__BackingField_1))->___U3CFullPathU3Ek__BackingField_0), (void*)NULL);
		// public static PathObject UnityAssets { get; } = UnityRoot.Child("Assets/");
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_3;
		L_3 = PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline(NULL);
		V_0 = L_3;
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_4;
		L_4 = PathObject_Child_mC49F8ED2EDBD5DA12D9F61B8D63DE6E09F4447C0((&V_0), _stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991, NULL);
		((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityAssetsU3Ek__BackingField_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityAssetsU3Ek__BackingField_2))->___U3CFullPathU3Ek__BackingField_0), (void*)NULL);
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
// Conversion methods for marshalling of: VRMShaders.SubAssetKey
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'SubAssetKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_2Exception, NULL);
}
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke_back(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled)
{
	Exception_t* ___Type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'SubAssetKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.SubAssetKey
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_pinvoke_cleanup(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRMShaders.SubAssetKey
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled)
{
	Exception_t* ___Type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'SubAssetKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_2Exception, NULL);
}
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com_back(const SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB& unmarshaled)
{
	Exception_t* ___Type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'SubAssetKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: VRMShaders.SubAssetKey
IL2CPP_EXTERN_C void SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshal_com_cleanup(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_marshaled_com& marshaled)
{
}
// System.Void VRMShaders.SubAssetKey::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || string.IsNullOrEmpty(obj.name))
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___obj0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		// throw new System.ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341_RuntimeMethod_var)));
	}

IL_001c:
	{
		// Type = TextureType;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_6 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0;
		__this->___Type_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_2), (void*)L_6);
		// Name = obj.name;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___obj0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		__this->___Name_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_8);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341_AdjustorThunk (RuntimeObject* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___obj0, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	SubAssetKey__ctor_m83BBB70C1A30C7C5A37EC01DB952590A72CB6341(_thisAdjusted, ___obj0, method);
}
// System.Void VRMShaders.SubAssetKey::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || string.IsNullOrEmpty(obj.name))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___obj0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		// throw new System.ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C_RuntimeMethod_var)));
	}

IL_001c:
	{
		// Type = MaterialType;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_6 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___MaterialType_1;
		__this->___Type_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_2), (void*)L_6);
		// Name = obj.name;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___obj0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		__this->___Name_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_8);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C_AdjustorThunk (RuntimeObject* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___obj0, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	SubAssetKey__ctor_m83236ABA0B30C6A3C64AF8D844DBD9677500E80C(_thisAdjusted, ___obj0, method);
}
// System.Void VRMShaders.SubAssetKey::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == null)
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new System.ArgumentNullException("type");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// throw new System.ArgumentNullException("name");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (!type.IsSubclassOf(typeof(UnityEngine.Object)))
		Type_t* L_6 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_6, L_8);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		// throw new System.ArgumentException($"{type}:{name}");
		Type_t* L_10 = ___type0;
		String_t* L_11 = ___name1;
		String_t* L_12;
		L_12 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F)), L_10, L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9_RuntimeMethod_var)));
	}

IL_004b:
	{
		// if (type.IsSubclassOf(TextureType))
		Type_t* L_14 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_15 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_14, L_15);
		if (!L_16)
		{
			goto IL_005f;
		}
	}
	{
		// type = TextureType;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_17 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0;
		___type0 = L_17;
	}

IL_005f:
	{
		// Type = type;
		Type_t* L_18 = ___type0;
		__this->___Type_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Type_2), (void*)L_18);
		// Name = name;
		String_t* L_19 = ___name1;
		__this->___Name_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_3), (void*)L_19);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9_AdjustorThunk (RuntimeObject* __this, Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9(_thisAdjusted, ___type0, ___name1, method);
}
// System.String VRMShaders.SubAssetKey::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubAssetKey_ToString_m1F8484C5F2BE3576FF176C448256B3AFD3D22335 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{Type}:{Name}";
		Type_t* L_0 = __this->___Type_2;
		String_t* L_1 = __this->___Name_3;
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* SubAssetKey_ToString_m1F8484C5F2BE3576FF176C448256B3AFD3D22335_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SubAssetKey_ToString_m1F8484C5F2BE3576FF176C448256B3AFD3D22335(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean VRMShaders.SubAssetKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_Equals_m4A176AC100A717456097488AF6FA3937EFC2B63F (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (obj is SubAssetKey key)
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*)((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*)(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*)UnBox(L_1, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))));
		// return this == key;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_2 = (*(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*)__this);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SubAssetKey_op_Equality_mF67D177A7B2D114D7CBA6E4A31BD5A2808917E44(L_2, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool SubAssetKey_Equals_m4A176AC100A717456097488AF6FA3937EFC2B63F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	bool _returnValue;
	_returnValue = SubAssetKey_Equals_m4A176AC100A717456097488AF6FA3937EFC2B63F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean VRMShaders.SubAssetKey::Equals(VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_Equals_mB133BD474F6CDB7144F3C8C52BA444BCB839E38D (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Type == other.Type && Name == other.Name;
		Type_t* L_0 = __this->___Type_2;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_1 = ___other0;
		Type_t* L_2 = L_1.___Type_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = __this->___Name_3;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_5 = ___other0;
		String_t* L_6 = L_5.___Name_3;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SubAssetKey_Equals_mB133BD474F6CDB7144F3C8C52BA444BCB839E38D_AdjustorThunk (RuntimeObject* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___other0, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	bool _returnValue;
	_returnValue = SubAssetKey_Equals_mB133BD474F6CDB7144F3C8C52BA444BCB839E38D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean VRMShaders.SubAssetKey::op_Equality(VRMShaders.SubAssetKey,VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_op_Equality_mF67D177A7B2D114D7CBA6E4A31BD5A2808917E44 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___l0, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___r1, const RuntimeMethod* method) 
{
	{
		// return l.Equals(r);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_0 = ___r1;
		bool L_1;
		L_1 = SubAssetKey_Equals_mB133BD474F6CDB7144F3C8C52BA444BCB839E38D((&___l0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean VRMShaders.SubAssetKey::op_Inequality(VRMShaders.SubAssetKey,VRMShaders.SubAssetKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubAssetKey_op_Inequality_m6EDEA86202E6940FCF07A3546E368DBE64D5C748 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___l0, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(l == r);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_0 = ___l0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_1 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SubAssetKey_op_Equality_mF67D177A7B2D114D7CBA6E4A31BD5A2808917E44(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 VRMShaders.SubAssetKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubAssetKey_GetHashCode_mD73F3672BA05D8325171774B09197AE436334DD0 (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* __this, const RuntimeMethod* method) 
{
	{
		// return Name.GetHashCode();
		String_t* L_0 = __this->___Name_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SubAssetKey_GetHashCode_mD73F3672BA05D8325171774B09197AE436334DD0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SubAssetKey_GetHashCode_mD73F3672BA05D8325171774B09197AE436334DD0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.SubAssetKey::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubAssetKey__cctor_m0B8C92A301B000F3F232DFB2CD6EA19E639752A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Type TextureType = typeof(Texture);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0), (void*)L_1);
		// public static readonly Type MaterialType = typeof(Material);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___MaterialType_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___MaterialType_1), (void*)L_3);
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
// UnityEngine.Material VRMShaders.NormalConverter::get_Exporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NormalConverter_get_Exporter_m19EEE4C3F007BCAAA4F129C95C26A6287167EF90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4EC0F73BD52F5EF864C8A67D26C4ED242EEBC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_exporter == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_StaticFields*)il2cpp_codegen_static_fields_for(NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var))->____exporter_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _exporter = new Material(Shader.Find("Hidden/UniGLTF/NormalMapExporter"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteralCC4EC0F73BD52F5EF864C8A67D26C4ED242EEBC9, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_StaticFields*)il2cpp_codegen_static_fields_for(NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var))->____exporter_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_StaticFields*)il2cpp_codegen_static_fields_for(NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var))->____exporter_0), (void*)L_3);
	}

IL_0021:
	{
		// return _exporter;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_StaticFields*)il2cpp_codegen_static_fields_for(NormalConverter_tD1C4C3C5ACA04811E19A9DDE04501D117F6E4776_il2cpp_TypeInfo_var))->____exporter_0;
		return L_4;
	}
}
// UnityEngine.Texture2D VRMShaders.NormalConverter::Export(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NormalConverter_Export_mB3C96BB0035EACC2B2C5AA2E52CC0BF347AB26C5 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TextureConverter.CopyTexture(texture, ColorSpace.Linear, false, Exporter);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = NormalConverter_get_Exporter_m19EEE4C3F007BCAAA4F129C95C26A6287167EF90(NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696(L_0, 1, (bool)0, L_1, NULL);
		return L_2;
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
// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::get_Importer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E10CA065AD4490EC6112D24F68919B99B1491E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_importer == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____importer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _importer = new Material(Shader.Find("Hidden/UniGLTF/StandardMapImporter"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral6E10CA065AD4490EC6112D24F68919B99B1491E4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____importer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____importer_0), (void*)L_3);
	}

IL_0021:
	{
		// return _importer;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____importer_0;
		return L_4;
	}
}
// UnityEngine.Texture2D VRMShaders.OcclusionMetallicRoughnessConverter::Import(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* OcclusionMetallicRoughnessConverter_Import_m372DC2C9A6D8579D4E1DE3BC5B2F7179E28BED9E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___metallicRoughnessTexture0, float ___metallicFactor1, float ___roughnessFactor2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___occlusionTexture3, bool ___isLegacySquaredRoughness4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6785889D416105E7DDD3115A1E22FA4B60334C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890688A6DF52C1227DEF02446F5C2341CCB38DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5551C01F4DB21D8AE6E8A06CC59A39732D6BABD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEA98AECB3602533B47E8D1A8B989E18727CF9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18AD386E43F80BA1CE04FF20D80CCD7D3D3A155);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_2 = NULL;
	{
		// if (metallicRoughnessTexture == null && occlusionTexture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___metallicRoughnessTexture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___occlusionTexture3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentNullException("no texture");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF725264EE5C0635A0245C1282B6745789EFD9F1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcclusionMetallicRoughnessConverter_Import_m372DC2C9A6D8579D4E1DE3BC5B2F7179E28BED9E_RuntimeMethod_var)));
	}

IL_001d:
	{
		// var src = metallicRoughnessTexture != null ? metallicRoughnessTexture : occlusionTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___metallicRoughnessTexture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___occlusionTexture3;
		G_B6_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___metallicRoughnessTexture0;
		G_B6_0 = L_8;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		// Importer.mainTexture = src;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_0;
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_10, NULL);
		// Importer.SetTexture("_GltfMetallicRoughnessTexture", metallicRoughnessTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___metallicRoughnessTexture0;
		NullCheck(L_11);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_11, _stringLiteral890688A6DF52C1227DEF02446F5C2341CCB38DA2, L_12, NULL);
		// Importer.SetTexture("_GltfOcclusionTexture", occlusionTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___occlusionTexture3;
		NullCheck(L_13);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_13, _stringLiteralBEEA98AECB3602533B47E8D1A8B989E18727CF9E, L_14, NULL);
		// Importer.SetFloat("_GltfMetallicFactor", metallicFactor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		float L_16 = ___metallicFactor1;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteralD18AD386E43F80BA1CE04FF20D80CCD7D3D3A155, L_16, NULL);
		// Importer.SetFloat("_GltfRoughnessFactor", roughnessFactor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		float L_18 = ___roughnessFactor2;
		NullCheck(L_17);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_17, _stringLiteralB5551C01F4DB21D8AE6E8A06CC59A39732D6BABD, L_18, NULL);
		// Importer.SetFloat("_IsLegacySquaredRoughness", isLegacySquaredRoughness ? 1 : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		bool L_20 = ___isLegacySquaredRoughness4;
		G_B7_0 = _stringLiteral6785889D416105E7DDD3115A1E22FA4B60334C65;
		G_B7_1 = L_19;
		if (L_20)
		{
			G_B8_0 = _stringLiteral6785889D416105E7DDD3115A1E22FA4B60334C65;
			G_B8_1 = L_19;
			goto IL_0087;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0088;
	}

IL_0087:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0088:
	{
		NullCheck(G_B9_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B9_2, G_B9_1, ((float)G_B9_0), NULL);
		// var dst = TextureConverter.CopyTexture(src, ColorSpace.Linear, true, Importer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23;
		L_23 = TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696(L_21, 1, (bool)1, L_22, NULL);
		// Importer.mainTexture = null;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_24);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_24, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Importer.SetTexture("_GltfMetallicRoughnessTexture", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25;
		L_25 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_25);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_25, _stringLiteral890688A6DF52C1227DEF02446F5C2341CCB38DA2, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Importer.SetTexture("_GltfOcclusionTexture", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_26);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_26, _stringLiteralBEEA98AECB3602533B47E8D1A8B989E18727CF9E, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Importer.SetFloat("_GltfMetallicFactor", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteralD18AD386E43F80BA1CE04FF20D80CCD7D3D3A155, (0.0f), NULL);
		// Importer.SetFloat("_GltfRoughnessFactor", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_28);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_28, _stringLiteralB5551C01F4DB21D8AE6E8A06CC59A39732D6BABD, (0.0f), NULL);
		// Importer.SetFloat("_IsLegacySquaredRoughness", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29;
		L_29 = OcclusionMetallicRoughnessConverter_get_Importer_m9E1407AF071DF18AE63BA933066011EAE22E460F(NULL);
		NullCheck(L_29);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_29, _stringLiteral6785889D416105E7DDD3115A1E22FA4B60334C65, (0.0f), NULL);
		// return dst;
		return L_23;
	}
}
// UnityEngine.Material VRMShaders.OcclusionMetallicRoughnessConverter::get_Exporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8963AF5501E3EB9C69855DEE3C371A7CE17B9A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_exporter == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____exporter_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _exporter = new Material(Shader.Find("Hidden/UniGLTF/StandardMapExporter"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteralA8963AF5501E3EB9C69855DEE3C371A7CE17B9A4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____exporter_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____exporter_1), (void*)L_3);
	}

IL_0021:
	{
		// return _exporter;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_StaticFields*)il2cpp_codegen_static_fields_for(OcclusionMetallicRoughnessConverter_t9365E42627FE6C2964802653E175B578B359E3D3_il2cpp_TypeInfo_var))->____exporter_1;
		return L_4;
	}
}
// UnityEngine.Texture2D VRMShaders.OcclusionMetallicRoughnessConverter::Export(UnityEngine.Texture,System.Single,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* OcclusionMetallicRoughnessConverter_Export_mB6C9D0836C8C8D54F61DB52EC17DB96FD21C0C55 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicSmoothTexture0, float ___smoothness1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___occlusionTexture2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07532417683C25F02088439518E0FAA6418D412A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3320E33FE0DA73B071C48C69745380C235E943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45ACBCBB9C93ACCC10E325CCC09A7EFC9B9116E9);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B6_0 = NULL;
	{
		// if (metallicSmoothTexture == null && occlusionTexture == null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___metallicSmoothTexture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___occlusionTexture2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentNullException("no texture");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF725264EE5C0635A0245C1282B6745789EFD9F1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcclusionMetallicRoughnessConverter_Export_mB6C9D0836C8C8D54F61DB52EC17DB96FD21C0C55_RuntimeMethod_var)));
	}

IL_001d:
	{
		// var src = metallicSmoothTexture != null ? metallicSmoothTexture : occlusionTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___metallicSmoothTexture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___occlusionTexture2;
		G_B6_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___metallicSmoothTexture0;
		G_B6_0 = L_8;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		// Exporter.mainTexture = src;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = V_0;
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_10, NULL);
		// Exporter.SetTexture("_UnityMetallicSmoothTexture", metallicSmoothTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = ___metallicSmoothTexture0;
		NullCheck(L_11);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_11, _stringLiteral0C3320E33FE0DA73B071C48C69745380C235E943, L_12, NULL);
		// Exporter.SetTexture("_UnityOcclusionTexture", occlusionTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = ___occlusionTexture2;
		NullCheck(L_13);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_13, _stringLiteral07532417683C25F02088439518E0FAA6418D412A, L_14, NULL);
		// Exporter.SetFloat("_UnitySmoothness", smoothness);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		float L_16 = ___smoothness1;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral45ACBCBB9C93ACCC10E325CCC09A7EFC9B9116E9, L_16, NULL);
		// var dst = TextureConverter.CopyTexture(src, ColorSpace.Linear, true, Exporter);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696(L_17, 1, (bool)1, L_18, NULL);
		// Exporter.mainTexture = null;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		NullCheck(L_20);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_20, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Exporter.SetTexture("_UnityMetallicSmoothTexture", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
		L_21 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		NullCheck(L_21);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_21, _stringLiteral0C3320E33FE0DA73B071C48C69745380C235E943, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Exporter.SetTexture("_UnityOcclusionTexture", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		NullCheck(L_22);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_22, _stringLiteral07532417683C25F02088439518E0FAA6418D412A, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// Exporter.SetFloat("_UnitySmoothness", 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = OcclusionMetallicRoughnessConverter_get_Exporter_mF3FE6ECCA4152E96C4BE975723C03E5454A64A82(NULL);
		NullCheck(L_23);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_23, _stringLiteral45ACBCBB9C93ACCC10E325CCC09A7EFC9B9116E9, (0.0f), NULL);
		// return dst;
		return L_19;
	}
}
// UnityEngine.Color32 VRMShaders.OcclusionMetallicRoughnessConverter::ExportPixel(UnityEngine.Color32,System.Single,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B OcclusionMetallicRoughnessConverter_ExportPixel_m91ECB827C72EA3D2B01FF14ED61726C2E8B5A7D7 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___metallicSmooth0, float ___smoothness1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___occlusion2, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var dst = new Color32
		// {
		//     r = occlusion.g, // Occlusion
		//     g = (byte)(255 - metallicSmooth.a * smoothness), // Roughness from Smoothness
		//     b = metallicSmooth.r, // Metallic
		//     a = 255, // not used
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___occlusion2;
		uint8_t L_1 = L_0.___g_2;
		(&V_0)->___r_1 = L_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___metallicSmooth0;
		uint8_t L_3 = L_2.___a_4;
		float L_4 = ___smoothness1;
		(&V_0)->___g_2 = (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_subtract((255.0f), ((float)il2cpp_codegen_multiply(((float)L_3), L_4)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___metallicSmooth0;
		uint8_t L_6 = L_5.___r_1;
		(&V_0)->___b_3 = L_6;
		(&V_0)->___a_4 = (uint8_t)((int32_t)255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = V_0;
		// return dst;
		return L_7;
	}
}
// System.Void VRMShaders.OcclusionMetallicRoughnessConverter::DestroyTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcclusionMetallicRoughnessConverter_DestroyTexture_m719112E638CCE2E76FA0773298EE2F7B3B258B40 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UnityEngine.Object.Destroy(obj);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		return;
	}

IL_000e:
	{
		// UnityEngine.Object.DestroyImmediate(obj);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// }
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
// UnityEngine.Texture2D VRMShaders.TextureConverter::CreateEmptyTextureWithSettings(UnityEngine.Texture,VRMShaders.ColorSpace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureConverter_CreateEmptyTextureWithSettings_m5B239575ABA429F51E4317041B8BDDEB98E593D3 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___dstColorSpace1, bool ___dstNeedsAlpha2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// var texFormat = dstNeedsAlpha ? WithAlphaFormat : WithoutAlphaFormat;
		bool L_0 = ___dstNeedsAlpha2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_StaticFields*)il2cpp_codegen_static_fields_for(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var))->___WithoutAlphaFormat_1;
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_StaticFields*)il2cpp_codegen_static_fields_for(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var))->___WithAlphaFormat_0;
		G_B3_0 = L_2;
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var dst = new Texture2D(src.width, src.height, texFormat, src.HasMipMap(), dstColorSpace == ColorSpace.Linear);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___src0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___src0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___src0;
		bool L_9;
		L_9 = TextureExtensions_HasMipMap_m83BE937348B6D7A9B10E15A1A01F18D086E11C1D(L_8, NULL);
		int32_t L_10 = ___dstColorSpace1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_11, L_4, L_6, L_7, L_9, (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0), NULL);
		// dst.name = src.name;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___src0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_14, NULL);
		// dst.anisoLevel = src.anisoLevel;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = L_12;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = ___src0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Texture_get_anisoLevel_m49CB873A0A3A71281BAE34A9512803D76D2EA27F(L_16, NULL);
		NullCheck(L_15);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_15, L_17, NULL);
		// dst.filterMode = src.filterMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_15;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = ___src0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45(L_19, NULL);
		NullCheck(L_18);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_18, L_20, NULL);
		// dst.mipMapBias = src.mipMapBias;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = L_18;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22 = ___src0;
		NullCheck(L_22);
		float L_23;
		L_23 = Texture_get_mipMapBias_m83F116D84856F99AD09EE8D3701763EAA80F1FB1(L_22, NULL);
		NullCheck(L_21);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_21, L_23, NULL);
		// dst.wrapMode = src.wrapMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = L_21;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = ___src0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Texture_get_wrapMode_m1DE1C2813B72EDCCCEB396CFC91989358E8C3AD0(L_25, NULL);
		NullCheck(L_24);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_24, L_26, NULL);
		// dst.wrapModeU = src.wrapModeU;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = L_24;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_28 = ___src0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Texture_get_wrapModeU_m9217A53AC4A40DA2486AAD664F286C28A32D7716(L_28, NULL);
		NullCheck(L_27);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_27, L_29, NULL);
		// dst.wrapModeV = src.wrapModeV;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = L_27;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = ___src0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Texture_get_wrapModeV_mDD1FD069227720CAA9433145CDFBAD42E680A212(L_31, NULL);
		NullCheck(L_30);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_30, L_32, NULL);
		// dst.wrapModeW = src.wrapModeW;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = L_30;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34 = ___src0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Texture_get_wrapModeW_mE0C1A36F3EB7ABC2D4CD8CAB7BD0226E00229EB8(L_34, NULL);
		NullCheck(L_33);
		Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863(L_33, L_35, NULL);
		// return dst;
		return L_33;
	}
}
// UnityEngine.Texture2D VRMShaders.TextureConverter::CopyTexture(UnityEngine.Texture,VRMShaders.ColorSpace,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___dstColorSpace1, bool ___dstNeedsAlpha2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B11_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B10_0 = NULL;
	{
		int32_t L_0 = ___dstColorSpace1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___dstColorSpace1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0011;
	}

IL_0009:
	{
		// readWrite = RenderTextureReadWrite.sRGB;
		V_0 = 2;
		// break;
		goto IL_0023;
	}

IL_000d:
	{
		// readWrite = RenderTextureReadWrite.Linear;
		V_0 = 1;
		// break;
		goto IL_0023;
	}

IL_0011:
	{
		// throw new ArgumentOutOfRangeException(nameof(dstColorSpace), dstColorSpace, null);
		int32_t L_2 = ___dstColorSpace1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ColorSpace_t29C4C39B3D36807D40111F88691A51CA2203E8EA_il2cpp_TypeInfo_var)), &L_3);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0320CB48D6B5FC1A380252C97D75B50A8F28D1A6)), L_4, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696_RuntimeMethod_var)));
	}

IL_0023:
	{
		// var renderTexture = new RenderTexture(src.width, src.height, 0, RenderTextureFormat.ARGB32, readWrite);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___src0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___src0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		int32_t L_10 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RenderTexture__ctor_m68A1B9CAA1BE0B597C5F4895C296E21502D0C962(L_11, L_7, L_9, 0, 0, L_10, NULL);
		V_1 = L_11;
		// if (material != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___material3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_004b;
		}
	}
	{
		// Graphics.Blit(src, renderTexture, material);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = ___src0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___material3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_14, L_15, L_16, NULL);
		goto IL_0052;
	}

IL_004b:
	{
		// Graphics.Blit(src, renderTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = ___src0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_17, L_18, NULL);
	}

IL_0052:
	{
		// var dst = CreateEmptyTextureWithSettings(src, dstColorSpace, dstNeedsAlpha);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = ___src0;
		int32_t L_20 = ___dstColorSpace1;
		bool L_21 = ___dstNeedsAlpha2;
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22;
		L_22 = TextureConverter_CreateEmptyTextureWithSettings_m5B239575ABA429F51E4317041B8BDDEB98E593D3(L_19, L_20, L_21, NULL);
		// dst.ReadPixels(new Rect(0, 0, src.width, src.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = L_22;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24 = ___src0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_26 = ___src0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_28), (0.0f), (0.0f), ((float)L_25), ((float)L_27), /*hidden argument*/NULL);
		NullCheck(L_23);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_23, L_28, 0, 0, NULL);
		// dst.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = L_23;
		NullCheck(L_29);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_29, NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// if (Application.isEditor)
		bool L_30;
		L_30 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		G_B10_0 = L_29;
		if (!L_30)
		{
			G_B11_0 = L_29;
			goto IL_0099;
		}
	}
	{
		// GameObject.DestroyImmediate(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_31, NULL);
		return G_B10_0;
	}

IL_0099:
	{
		// GameObject.Destroy(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// return dst;
		return G_B11_0;
	}
}
// System.Void VRMShaders.TextureConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureConverter__cctor_m1C63CC7ED7BAC8C1B1094C09B0CCE96122363164 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TextureFormat WithAlphaFormat = TextureFormat.ARGB32;
		((TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_StaticFields*)il2cpp_codegen_static_fields_for(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var))->___WithAlphaFormat_0 = 5;
		// public static readonly TextureFormat WithoutAlphaFormat = TextureFormat.RGB24;
		((TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_StaticFields*)il2cpp_codegen_static_fields_for(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var))->___WithoutAlphaFormat_1 = 3;
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
// System.Boolean VRMShaders.RuntimeTextureSerializer::CanExportAsEditorAssetFile(UnityEngine.Texture,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTextureSerializer_CanExportAsEditorAssetFile_m29FB719AECD64847A11CEF455ACBACEB3E0ABFCF (RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int32_t ___exportColorSpace1, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.ValueTuple`2<System.Byte[],System.String> VRMShaders.RuntimeTextureSerializer::ExportBytesWithMime(UnityEngine.Texture2D,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 RuntimeTextureSerializer_ExportBytesWithMime_m4D086D4EA65D6E6510968A905C2CA4BB0E9258BF (RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, int32_t ___exportColorSpace1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// var png = texture.EncodeToPNG();
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
			L_1 = ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391(L_0, NULL);
			V_0 = L_1;
			// if (png != null)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018_1;
			}
		}
		{
			// return (png, "image/png");
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_4;
			memset((&L_4), 0, sizeof(L_4));
			ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47((&L_4), L_3, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, /*hidden argument*/ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47_RuntimeMethod_var);
			V_1 = L_4;
			goto IL_0031;
		}

IL_0018_1:
		{
			// return CopyTextureAndGetBytesWithMime(texture, exportColorSpace);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture0;
			int32_t L_6 = ___exportColorSpace1;
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_7;
			L_7 = RuntimeTextureSerializer_CopyTextureAndGetBytesWithMime_mF8AF557328E65B37730881CEA399E4E4391D237A(L_5, L_6, NULL);
			V_1 = L_7;
			goto IL_0031;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.ArgumentException)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)), NULL);
		// return CopyTextureAndGetBytesWithMime(texture, exportColorSpace);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
		int32_t L_9 = ___exportColorSpace1;
		ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_10;
		L_10 = RuntimeTextureSerializer_CopyTextureAndGetBytesWithMime_mF8AF557328E65B37730881CEA399E4E4391D237A(L_8, L_9, NULL);
		V_1 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_11 = V_1;
		return L_11;
	}
}
// System.Void VRMShaders.RuntimeTextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTextureSerializer_ModifyTextureAssetBeforeExporting_mE2C33DC621D49F4C1751BDD8D009096D9640BF62 (RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.ValueTuple`2<System.Byte[],System.String> VRMShaders.RuntimeTextureSerializer::CopyTextureAndGetBytesWithMime(UnityEngine.Texture2D,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 RuntimeTextureSerializer_CopyTextureAndGetBytesWithMime_mF8AF557328E65B37730881CEA399E4E4391D237A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, int32_t ___colorSpace1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	{
		// var needsAlpha = texture.format != TextureFormat.RGB24;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// var copiedTex = TextureConverter.CopyTexture(texture, colorSpace, needsAlpha, null);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		int32_t L_3 = ___colorSpace1;
		bool L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696(L_2, L_3, L_4, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		V_1 = L_5;
		// var bytes = copiedTex.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391(L_6, NULL);
		// if (Application.isPlaying)
		bool L_8;
		L_8 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		G_B1_0 = L_7;
		if (!L_8)
		{
			G_B2_0 = L_7;
			goto IL_002c;
		}
	}
	{
		// UnityEngine.Object.Destroy(copiedTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
		G_B3_0 = G_B1_0;
		goto IL_0032;
	}

IL_002c:
	{
		// UnityEngine.Object.DestroyImmediate(copiedTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_10, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0032:
	{
		// return (bytes, "image/png");
		ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47((&L_11), G_B3_0, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, /*hidden argument*/ValueTuple_2__ctor_mEEE21EA9C9A4CF2BBC07E5CFE5B8E414147EAE47_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void VRMShaders.RuntimeTextureSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeTextureSerializer__ctor_mEB717EAABA72B895C9F1C6C5E2834BCBF813854C (RuntimeTextureSerializer_t99334E27094AB3694EEFA4514CC4B3039710F4B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void VRMShaders.TextureExporter::.ctor(VRMShaders.ITextureSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExporter__ctor_mA6F4D3C2164636CFF1A9D18F6872E56945CF34A3 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, RuntimeObject* ___textureSerializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CD93AB6804CF54605296873190B2AA1B9CB9248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<TextureExportParam> _exportingList = new List<TextureExportParam>();
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_0 = (List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64*)il2cpp_codegen_object_new(List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4CD93AB6804CF54605296873190B2AA1B9CB9248(L_0, List_1__ctor_m4CD93AB6804CF54605296873190B2AA1B9CB9248_RuntimeMethod_var);
		__this->____exportingList_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____exportingList_1), (void*)L_0);
		// public TextureExporter(ITextureSerializer textureSerializer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _textureSerializer = textureSerializer;
		RuntimeObject* L_1 = ___textureSerializer0;
		__this->____textureSerializer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textureSerializer_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void VRMShaders.TextureExporter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExporter_Dispose_mC90AFF09C4DA3BCD5C7BB3FF186D7AB81F97513F (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.Texture2D,VRMShaders.ColorSpace>> VRMShaders.TextureExporter::Export()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* TextureExporter_Export_m01F3CD29CA5C0C7ECA9E567E2ED77DC99395FC4F (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC7EC904EAEE573DEE87C2C57A6538972CEC709BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD5D40B514D4FBB5950B696E35511CBA11CAB5508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m512348AB69774EFE6A10AB6467B1A02BF5E411FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* V_0 = NULL;
	int32_t V_1 = 0;
	TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* V_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	{
		// var exportedTextures = new List<(Texture2D, ColorSpace)>();
		List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* L_0 = (List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E*)il2cpp_codegen_object_new(List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD5D40B514D4FBB5950B696E35511CBA11CAB5508(L_0, List_1__ctor_mD5D40B514D4FBB5950B696E35511CBA11CAB5508_RuntimeMethod_var);
		V_0 = L_0;
		// for (var idx = 0; idx < _exportingList.Count; ++idx)
		V_1 = 0;
		goto IL_0039;
	}

IL_000a:
	{
		// var exporting = _exportingList[idx];
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_1 = __this->____exportingList_1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_3;
		L_3 = List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666(L_1, L_2, List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666_RuntimeMethod_var);
		V_2 = L_3;
		// var texture = exporting.Creator();
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_4 = V_2;
		NullCheck(L_4);
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_5;
		L_5 = TextureExportParam_get_Creator_mF2CC80F3E392CA4B2B851D6F886F3547E48EC7D9_inline(L_4, NULL);
		NullCheck(L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = Func_1_Invoke_m29A9BE613A7C896227B80E561BDD80B137492198_inline(L_5, NULL);
		V_3 = L_6;
		// exportedTextures.Add((texture, exporting.ExportColorSpace));
		List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* L_7 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = V_3;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TextureExportParam_get_ExportColorSpace_mDD3F70989428356E1206929057CC0BBBD7574CB7_inline(L_9, NULL);
		ValueTuple_2_tBFE10CA9A37F899B32ACB721F3EC23EE849EA430 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTuple_2__ctor_m512348AB69774EFE6A10AB6467B1A02BF5E411FA((&L_11), L_8, L_10, /*hidden argument*/ValueTuple_2__ctor_m512348AB69774EFE6A10AB6467B1A02BF5E411FA_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_Add_mC7EC904EAEE573DEE87C2C57A6538972CEC709BE_inline(L_7, L_11, List_1_Add_mC7EC904EAEE573DEE87C2C57A6538972CEC709BE_RuntimeMethod_var);
		// for (var idx = 0; idx < _exportingList.Count; ++idx)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0039:
	{
		// for (var idx = 0; idx < _exportingList.Count; ++idx)
		int32_t L_13 = V_1;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_14 = __this->____exportingList_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_inline(L_14, List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000a;
		}
	}
	{
		// return exportedTextures;
		List_1_tE5092CD9AAC1909CBC7AD21008D56D0BC692DD6E* L_16 = V_0;
		return L_16;
	}
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingAsSRgb(UnityEngine.Texture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingAsSRgb_mE75C2848D18474075A35C03B06BE0AB819E0119D (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, const RuntimeMethod* method) 
{
	{
		// return RegisterExportingSimple(src, needsAlpha, isLinear: false);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___src0;
		bool L_1 = ___needsAlpha1;
		int32_t L_2;
		L_2 = TextureExporter_RegisterExportingSimple_m2EF10D75480DFD0D346A059F8F23C9D08267F668(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingAsLinear(UnityEngine.Texture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingAsLinear_m92EF903E5D30CCECBF3F525BCC75DBD225FD9AB8 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, const RuntimeMethod* method) 
{
	{
		// return RegisterExportingSimple(src, needsAlpha, isLinear: true);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___src0;
		bool L_1 = ___needsAlpha1;
		int32_t L_2;
		L_2 = TextureExporter_RegisterExportingSimple_m2EF10D75480DFD0D346A059F8F23C9D08267F668(__this, L_0, L_1, (bool)1, NULL);
		return L_2;
	}
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingSimple(UnityEngine.Texture,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingSimple_m2EF10D75480DFD0D346A059F8F23C9D08267F668 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, bool ___isLinear2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mB73490C9393F38CE83CF33488D350D0EE98EFC41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CRegisterExportingSimpleU3Eb__0_m368C6BFEC44123B199CFD6DA1959216F694B792D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* V_0 = NULL;
	TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* V_1 = NULL;
	int32_t V_2 = 0;
	TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* V_3 = NULL;
	int32_t G_B5_0 = 0;
	U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	{
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_0 = (U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m7B87366FEB4B92685ED3AC6C69CD249C0A671536(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_2 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___src0;
		NullCheck(L_2);
		L_2->___src_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___src_1), (void*)L_3);
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_4 = V_0;
		bool L_5 = ___needsAlpha1;
		NullCheck(L_4);
		L_4->___needsAlpha_2 = L_5;
		// if (src == null)
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_6 = V_0;
		NullCheck(L_6);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = L_6->___src_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_002b:
	{
		// var exportType = isLinear ? TextureExportTypes.Linear : TextureExportTypes.Srgb;
		bool L_9 = ___isLinear2;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 1;
	}

IL_0032:
	{
		// var colorSpace = isLinear ? ColorSpace.Linear : ColorSpace.sRGB;
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_10 = V_0;
		bool L_11 = ___isLinear2;
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = G_B5_0;
			goto IL_0039;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_003a:
	{
		NullCheck(G_B8_1);
		G_B8_1->___colorSpace_3 = G_B8_0;
		// var param = new TextureExportParam(exportType, colorSpace, src, default, default,
		//     needsAlpha, () => ConvertTextureSimple(src, needsAlpha, colorSpace));
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___colorSpace_3;
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_14 = V_0;
		NullCheck(L_14);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = L_14->___src_1;
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___needsAlpha_2;
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_18 = V_0;
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_19 = (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3*)il2cpp_codegen_object_new(Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_1__ctor_mE45245356843E99B1B7DACA7142184A15D1E21E2(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CRegisterExportingSimpleU3Eb__0_m368C6BFEC44123B199CFD6DA1959216F694B792D_RuntimeMethod_var), NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_20 = (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8*)il2cpp_codegen_object_new(TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TextureExportParam__ctor_m7A7C93C8A3A26BEB875E5BAA6DF3F45E246E7170(L_20, G_B8_2, L_13, L_15, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, (0.0f), L_17, L_19, NULL);
		V_1 = L_20;
		// if (TryGetExistsParam(param, out var existsIdx))
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_21 = V_1;
		bool L_22;
		L_22 = TextureExporter_TryGetExistsParam_m3AB72331C8E3BFFD883D95366C1F5764C413EE6A(__this, L_21, (&V_2), NULL);
		if (!L_22)
		{
			goto IL_00a2;
		}
	}
	{
		// var cached = _exportingList[existsIdx];
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_23 = __this->____exportingList_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_25;
		L_25 = List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666(L_23, L_24, List_1_get_Item_m61664D4D35F3E9BA5E6FEEAF2CCA7269E676C666_RuntimeMethod_var);
		V_3 = L_25;
		// if (needsAlpha && !cached.NeedsAlpha)
		U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->___needsAlpha_2;
		if (!L_27)
		{
			goto IL_00a0;
		}
	}
	{
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_28 = V_3;
		NullCheck(L_28);
		bool L_29;
		L_29 = TextureExportParam_get_NeedsAlpha_m8BD690FE8D76AE3A0B7C6B00FC1B42A70D1DB5B5_inline(L_28, NULL);
		if (L_29)
		{
			goto IL_00a0;
		}
	}
	{
		// _exportingList[existsIdx] = param;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_30 = __this->____exportingList_1;
		int32_t L_31 = V_2;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_32 = V_1;
		NullCheck(L_30);
		List_1_set_Item_mB73490C9393F38CE83CF33488D350D0EE98EFC41(L_30, L_31, L_32, List_1_set_Item_mB73490C9393F38CE83CF33488D350D0EE98EFC41_RuntimeMethod_var);
		// return existsIdx;
		int32_t L_33 = V_2;
		return L_33;
	}

IL_00a0:
	{
		// return existsIdx;
		int32_t L_34 = V_2;
		return L_34;
	}

IL_00a2:
	{
		// _exportingList.Add(param);
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_35 = __this->____exportingList_1;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_36 = V_1;
		NullCheck(L_35);
		List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_inline(L_35, L_36, List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		// return _exportingList.Count - 1;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_37 = __this->____exportingList_1;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_inline(L_37, List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTextures(UnityEngine.Texture,System.Single,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTextures_mD03C9106B928D1ECE1A57AC9E527FAE12293821D (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___metallicSmoothTexture0, float ___smoothness1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___occlusionTexture2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CRegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTexturesU3Eb__0_m588107E9A8F70DE40E173FCC11C09DCF2C368DC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* V_0 = NULL;
	TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_0 = (U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m02971892B62BCED9CCE4F7A2EB52A3D911282D4D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_2 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___metallicSmoothTexture0;
		NullCheck(L_2);
		L_2->___metallicSmoothTexture_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___metallicSmoothTexture_1), (void*)L_3);
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_4 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___occlusionTexture2;
		NullCheck(L_4);
		L_4->___occlusionTexture_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___occlusionTexture_2), (void*)L_5);
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_6 = V_0;
		float L_7 = ___smoothness1;
		NullCheck(L_6);
		L_6->___smoothness_3 = L_7;
		// if (metallicSmoothTexture == null && occlusionTexture == null)
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_8 = V_0;
		NullCheck(L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = L_8->___metallicSmoothTexture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_11 = V_0;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = L_11->___occlusionTexture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0040:
	{
		// var param = new TextureExportParam(TextureExportTypes.OcclusionMetallicRoughness, ColorSpace.Linear,
		//     metallicSmoothTexture, occlusionTexture, smoothness, false,
		//     () =>
		//     {
		//         _textureSerializer.ModifyTextureAssetBeforeExporting(metallicSmoothTexture);
		//         _textureSerializer.ModifyTextureAssetBeforeExporting(occlusionTexture);
		//         return OcclusionMetallicRoughnessConverter.Export(metallicSmoothTexture, smoothness,
		//             occlusionTexture);
		//     });
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_14 = V_0;
		NullCheck(L_14);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = L_14->___metallicSmoothTexture_1;
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_16 = V_0;
		NullCheck(L_16);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = L_16->___occlusionTexture_2;
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_18 = V_0;
		NullCheck(L_18);
		float L_19 = L_18->___smoothness_3;
		U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* L_20 = V_0;
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_21 = (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3*)il2cpp_codegen_object_new(Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Func_1__ctor_mE45245356843E99B1B7DACA7142184A15D1E21E2(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CRegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTexturesU3Eb__0_m588107E9A8F70DE40E173FCC11C09DCF2C368DC3_RuntimeMethod_var), NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_22 = (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8*)il2cpp_codegen_object_new(TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		TextureExportParam__ctor_m7A7C93C8A3A26BEB875E5BAA6DF3F45E246E7170(L_22, 2, 1, L_15, L_17, L_19, (bool)0, L_21, NULL);
		V_1 = L_22;
		// if (TryGetExistsParam(param, out var existsIdx))
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_23 = V_1;
		bool L_24;
		L_24 = TextureExporter_TryGetExistsParam_m3AB72331C8E3BFFD883D95366C1F5764C413EE6A(__this, L_23, (&V_2), NULL);
		if (!L_24)
		{
			goto IL_0074;
		}
	}
	{
		// return existsIdx;
		int32_t L_25 = V_2;
		return L_25;
	}

IL_0074:
	{
		// _exportingList.Add(param);
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_26 = __this->____exportingList_1;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_27 = V_1;
		NullCheck(L_26);
		List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_inline(L_26, L_27, List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		// return _exportingList.Count - 1;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_28 = __this->____exportingList_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_inline(L_28, List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}
}
// System.Int32 VRMShaders.TextureExporter::RegisterExportingAsNormal(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExporter_RegisterExportingAsNormal_mC478AAA22E25ECC31E788628A8AC4A4CF4F29A05 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRegisterExportingAsNormalU3Eb__0_mAEEFD991DD48A76E7388D283DD9969310C952077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* V_0 = NULL;
	TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_0 = (U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mA5B9373932DACFC810450D881745AF775F9AC980(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_2 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___src0;
		NullCheck(L_2);
		L_2->___src_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___src_1), (void*)L_3);
		// if (src == null)
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_4 = V_0;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = L_4->___src_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// var param = new TextureExportParam(TextureExportTypes.Normal, ColorSpace.Linear, src, default, default,
		//     false, () =>
		//     {
		//         _textureSerializer.ModifyTextureAssetBeforeExporting(src);
		//         return NormalConverter.Export(src);
		//     });
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_7 = V_0;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = L_7->___src_1;
		U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* L_9 = V_0;
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_10 = (Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3*)il2cpp_codegen_object_new(Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_1__ctor_mE45245356843E99B1B7DACA7142184A15D1E21E2(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CRegisterExportingAsNormalU3Eb__0_mAEEFD991DD48A76E7388D283DD9969310C952077_RuntimeMethod_var), NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_11 = (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8*)il2cpp_codegen_object_new(TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TextureExportParam__ctor_m7A7C93C8A3A26BEB875E5BAA6DF3F45E246E7170(L_11, 3, 1, L_8, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, (0.0f), (bool)0, L_10, NULL);
		V_1 = L_11;
		// if (TryGetExistsParam(param, out var existsIdx))
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_12 = V_1;
		bool L_13;
		L_13 = TextureExporter_TryGetExistsParam_m3AB72331C8E3BFFD883D95366C1F5764C413EE6A(__this, L_12, (&V_2), NULL);
		if (!L_13)
		{
			goto IL_0052;
		}
	}
	{
		// return existsIdx;
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0052:
	{
		// _exportingList.Add(param);
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_15 = __this->____exportingList_1;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_inline(L_15, L_16, List_1_Add_mE7FEC032EB3E44F34E9BE66CF115397CF746C965_RuntimeMethod_var);
		// return _exportingList.Count - 1;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_17 = __this->____exportingList_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_inline(L_17, List_1_get_Count_mD098DB83F9B47D27A404AE8040392CD3F4B3F861_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}
}
// UnityEngine.Texture2D VRMShaders.TextureExporter::ConvertTextureSimple(UnityEngine.Texture,System.Boolean,VRMShaders.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureExporter_ConvertTextureSimple_m5B5C766C0A97E7F1D35FD6BB01219DAAB0E5A392 (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, bool ___needsAlpha1, int32_t ___exportColorSpace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// var texture2D = src as Texture2D;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___src0;
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// if (_textureSerializer.CanExportAsEditorAssetFile(texture2D, exportColorSpace))
		RuntimeObject* L_1 = __this->____textureSerializer_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		int32_t L_3 = ___exportColorSpace2;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t >::Invoke(0 /* System.Boolean VRMShaders.ITextureSerializer::CanExportAsEditorAssetFile(UnityEngine.Texture,VRMShaders.ColorSpace) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// _textureSerializer.ModifyTextureAssetBeforeExporting(src);
		RuntimeObject* L_5 = __this->____textureSerializer_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___src0;
		NullCheck(L_5);
		InterfaceActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(2 /* System.Void VRMShaders.ITextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_003a;
	}

IL_0024:
	{
		// _textureSerializer.ModifyTextureAssetBeforeExporting(src);
		RuntimeObject* L_7 = __this->____textureSerializer_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___src0;
		NullCheck(L_7);
		InterfaceActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(2 /* System.Void VRMShaders.ITextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_7, L_8);
		// texture2D = TextureConverter.CopyTexture(src, exportColorSpace, needsAlpha, null);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = ___src0;
		int32_t L_10 = ___exportColorSpace2;
		bool L_11 = ___needsAlpha1;
		il2cpp_codegen_runtime_class_init_inline(TextureConverter_t50120F5C1849AD4D6AF7FB485C6EF5E0D5BF6875_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = TextureConverter_CopyTexture_mE8975B88EA72FA9569560D5D9BBDDC82641D3696(L_9, L_10, L_11, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		V_0 = L_12;
	}

IL_003a:
	{
		// return texture2D;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		return L_13;
	}
}
// System.Boolean VRMShaders.TextureExporter::TryGetExistsParam(VRMShaders.TextureExportParam,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExporter_TryGetExistsParam_m3AB72331C8E3BFFD883D95366C1F5764C413EE6A (TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* __this, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* ___param0, int32_t* ___existsIdx1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m1C691E73B55BEA84C6E2CA3A14BFF1DCAE9863D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureExportParam_EqualsAsKey_m923145EA06F8FDE16A4864A40356E449C14F975D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// existsIdx = _exportingList.FindIndex(param.EqualsAsKey);
		int32_t* L_0 = ___existsIdx1;
		List_1_t57736CC0F897FDAEA33CA4C11177FC23B7899C64* L_1 = __this->____exportingList_1;
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_2 = ___param0;
		Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717* L_3 = (Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717*)il2cpp_codegen_object_new(Predicate_1_t87CCD46897D91B8F1BFCF0BC1D2EEF01D389C717_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Predicate_1__ctor_mF68C2F84CC8D3EE3321A455FB49A060E77EFC9B4(L_3, L_2, (intptr_t)((void*)TextureExportParam_EqualsAsKey_m923145EA06F8FDE16A4864A40356E449C14F975D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = List_1_FindIndex_m1C691E73B55BEA84C6E2CA3A14BFF1DCAE9863D6(L_1, L_3, List_1_FindIndex_m1C691E73B55BEA84C6E2CA3A14BFF1DCAE9863D6_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_4;
		// return existsIdx != -1;
		int32_t* L_5 = ___existsIdx1;
		int32_t L_6 = *((int32_t*)L_5);
		return (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m7B87366FEB4B92685ED3AC6C69CD249C0A671536 (U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Texture2D VRMShaders.TextureExporter/<>c__DisplayClass7_0::<RegisterExportingSimple>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* U3CU3Ec__DisplayClass7_0_U3CRegisterExportingSimpleU3Eb__0_m368C6BFEC44123B199CFD6DA1959216F694B792D (U3CU3Ec__DisplayClass7_0_t2D0D9378B0D0AC9686E6E0B413FF5ED96C5A63EA* __this, const RuntimeMethod* method) 
{
	{
		// needsAlpha, () => ConvertTextureSimple(src, needsAlpha, colorSpace));
		TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* L_0 = __this->___U3CU3E4__this_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___src_1;
		bool L_2 = __this->___needsAlpha_2;
		int32_t L_3 = __this->___colorSpace_3;
		NullCheck(L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = TextureExporter_ConvertTextureSimple_m5B5C766C0A97E7F1D35FD6BB01219DAAB0E5A392(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m02971892B62BCED9CCE4F7A2EB52A3D911282D4D (U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Texture2D VRMShaders.TextureExporter/<>c__DisplayClass8_0::<RegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTextures>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* U3CU3Ec__DisplayClass8_0_U3CRegisterExportingAsCombinedGltfPbrParameterTextureFromUnityStandardTexturesU3Eb__0_m588107E9A8F70DE40E173FCC11C09DCF2C368DC3 (U3CU3Ec__DisplayClass8_0_tC9914DACBC31A260B9213FF6597941B2A9C67E0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textureSerializer.ModifyTextureAssetBeforeExporting(metallicSmoothTexture);
		TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->____textureSerializer_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->___metallicSmoothTexture_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(2 /* System.Void VRMShaders.ITextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_1, L_2);
		// _textureSerializer.ModifyTextureAssetBeforeExporting(occlusionTexture);
		TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->____textureSerializer_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = __this->___occlusionTexture_2;
		NullCheck(L_4);
		InterfaceActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(2 /* System.Void VRMShaders.ITextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_4, L_5);
		// return OcclusionMetallicRoughnessConverter.Export(metallicSmoothTexture, smoothness,
		//     occlusionTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___metallicSmoothTexture_1;
		float L_7 = __this->___smoothness_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = __this->___occlusionTexture_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = OcclusionMetallicRoughnessConverter_Export_mB6C9D0836C8C8D54F61DB52EC17DB96FD21C0C55(L_6, L_7, L_8, NULL);
		return L_9;
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
// System.Void VRMShaders.TextureExporter/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA5B9373932DACFC810450D881745AF775F9AC980 (U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Texture2D VRMShaders.TextureExporter/<>c__DisplayClass9_0::<RegisterExportingAsNormal>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* U3CU3Ec__DisplayClass9_0_U3CRegisterExportingAsNormalU3Eb__0_mAEEFD991DD48A76E7388D283DD9969310C952077 (U3CU3Ec__DisplayClass9_0_tDF8D5DC45CED5803670A3DC979A6DDDAB77F605E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textureSerializer.ModifyTextureAssetBeforeExporting(src);
		TextureExporter_tE1314020E3E7CBB04F37EEDFAAF1524DBB19B534* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->____textureSerializer_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->___src_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(2 /* System.Void VRMShaders.ITextureSerializer::ModifyTextureAssetBeforeExporting(UnityEngine.Texture) */, ITextureSerializer_t1A6EEDC5F0AE36DE3D90A95BF10BFCA117B8AEB1_il2cpp_TypeInfo_var, L_1, L_2);
		// return NormalConverter.Export(src);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = __this->___src_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = NormalConverter_Export_mB3C96BB0035EACC2B2C5AA2E52CC0BF347AB26C5(L_3, NULL);
		return L_4;
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
// VRMShaders.TextureExportTypes VRMShaders.TextureExportParam::get_ExportType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public TextureExportTypes ExportType { get; }
		int32_t L_0 = __this->___U3CExportTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// VRMShaders.ColorSpace VRMShaders.TextureExportParam::get_ExportColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportColorSpace_mDD3F70989428356E1206929057CC0BBBD7574CB7 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public ColorSpace ExportColorSpace { get; }
		int32_t L_0 = __this->___U3CExportColorSpaceU3Ek__BackingField_1;
		return L_0;
	}
}
// UnityEngine.Texture VRMShaders.TextureExportParam::get_PrimaryTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Texture PrimaryTexture { get; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___U3CPrimaryTextureU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Texture VRMShaders.TextureExportParam::get_SecondaryTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_SecondaryTexture_m1991DF636235D83F5D3FDBF67C4C1D97DFBB7A06 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Texture SecondaryTexture { get; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___U3CSecondaryTextureU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Single VRMShaders.TextureExportParam::get_OptionFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextureExportParam_get_OptionFactor_m489263AA206FA7318D67C9E425E8DA197E7A3146 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public float OptionFactor { get; }
		float L_0 = __this->___U3COptionFactorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean VRMShaders.TextureExportParam::get_NeedsAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExportParam_get_NeedsAlpha_m8BD690FE8D76AE3A0B7C6B00FC1B42A70D1DB5B5 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public bool NeedsAlpha { get; set; }
		bool L_0 = __this->___U3CNeedsAlphaU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void VRMShaders.TextureExportParam::set_NeedsAlpha(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExportParam_set_NeedsAlpha_mD3AE6957BC080CBC5B613EA776865387958714DC (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NeedsAlpha { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNeedsAlphaU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Func`1<UnityEngine.Texture2D> VRMShaders.TextureExportParam::get_Creator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* TextureExportParam_get_Creator_mF2CC80F3E392CA4B2B851D6F886F3547E48EC7D9 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Func<Texture2D> Creator { get; set; }
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_0 = __this->___U3CCreatorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void VRMShaders.TextureExportParam::set_Creator(System.Func`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExportParam_set_Creator_m4D73C6589C8F6B730162AD9161B93909FC516A1E (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Func<Texture2D> Creator { get; set; }
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_0 = ___value0;
		__this->___U3CCreatorU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCreatorU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void VRMShaders.TextureExportParam::.ctor(VRMShaders.TextureExportTypes,VRMShaders.ColorSpace,UnityEngine.Texture,UnityEngine.Texture,System.Single,System.Boolean,System.Func`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExportParam__ctor_m7A7C93C8A3A26BEB875E5BAA6DF3F45E246E7170 (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, int32_t ___exportType0, int32_t ___exportColorSpace1, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___primaryTexture2, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___secondaryTexture3, float ___optionFactor4, bool ___needsAlpha5, Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___creator6, const RuntimeMethod* method) 
{
	{
		// public TextureExportParam(TextureExportTypes exportType, ColorSpace exportColorSpace, Texture primaryTexture, Texture secondaryTexture, float optionFactor, bool needsAlpha, Func<Texture2D> creator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ExportType = exportType;
		int32_t L_0 = ___exportType0;
		__this->___U3CExportTypeU3Ek__BackingField_0 = L_0;
		// ExportColorSpace = exportColorSpace;
		int32_t L_1 = ___exportColorSpace1;
		__this->___U3CExportColorSpaceU3Ek__BackingField_1 = L_1;
		// PrimaryTexture = primaryTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___primaryTexture2;
		__this->___U3CPrimaryTextureU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrimaryTextureU3Ek__BackingField_2), (void*)L_2);
		// SecondaryTexture = secondaryTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___secondaryTexture3;
		__this->___U3CSecondaryTextureU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecondaryTextureU3Ek__BackingField_3), (void*)L_3);
		// OptionFactor = optionFactor;
		float L_4 = ___optionFactor4;
		__this->___U3COptionFactorU3Ek__BackingField_4 = L_4;
		// NeedsAlpha = needsAlpha;
		bool L_5 = ___needsAlpha5;
		TextureExportParam_set_NeedsAlpha_mD3AE6957BC080CBC5B613EA776865387958714DC_inline(__this, L_5, NULL);
		// Creator = creator;
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_6 = ___creator6;
		TextureExportParam_set_Creator_m4D73C6589C8F6B730162AD9161B93909FC516A1E_inline(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean VRMShaders.TextureExportParam::EqualsAsKey(VRMShaders.TextureExportParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExportParam_EqualsAsKey_m923145EA06F8FDE16A4864A40356E449C14F975D (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ExportType != other.ExportType) return false;
		int32_t L_0;
		L_0 = TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5_inline(__this, NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5_inline(L_1, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (ExportType != other.ExportType) return false;
		return (bool)0;
	}

IL_0010:
	{
		// switch (ExportType)
		int32_t L_3;
		L_3 = TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_002f:
	{
		// return PrimaryTexture == other.PrimaryTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline(__this, NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_6 = ___other0;
		NullCheck(L_6);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7;
		L_7 = TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, L_7, NULL);
		return L_8;
	}

IL_0041:
	{
		// return PrimaryTexture == other.PrimaryTexture &&
		//        SecondaryTexture == other.SecondaryTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline(__this, NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_10 = ___other0;
		NullCheck(L_10);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11;
		L_11 = TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13;
		L_13 = TextureExportParam_get_SecondaryTexture_m1991DF636235D83F5D3FDBF67C4C1D97DFBB7A06_inline(__this, NULL);
		TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* L_14 = ___other0;
		NullCheck(L_14);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15;
		L_15 = TextureExportParam_get_SecondaryTexture_m1991DF636235D83F5D3FDBF67C4C1D97DFBB7A06_inline(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, L_15, NULL);
		return L_16;
	}

IL_0066:
	{
		return (bool)0;
	}

IL_0068:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureExportParam_EqualsAsKey_m923145EA06F8FDE16A4864A40356E449C14F975D_RuntimeMethod_var)));
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
// System.Byte[] VRMShaders.DeserializingTextureInfo::get_ImageData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeserializingTextureInfo_get_ImageData_m849A30088BD35D7738C8E40D514B72355E878AC0 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] ImageData { get; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CImageDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String VRMShaders.DeserializingTextureInfo::get_DataMimeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public string DataMimeType { get; }
		String_t* L_0 = __this->___U3CDataMimeTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// VRMShaders.ColorSpace VRMShaders.DeserializingTextureInfo::get_ColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_ColorSpace_m9854E04604D1193A5298FDF58BFE38AE6E8912AA (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public ColorSpace ColorSpace { get; }
		int32_t L_0 = __this->___U3CColorSpaceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean VRMShaders.DeserializingTextureInfo::get_UseMipmap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeserializingTextureInfo_get_UseMipmap_mE27396FDCFD6F9F47E37B4F62314B32E2B7F421C (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseMipmap { get; }
		bool L_0 = __this->___U3CUseMipmapU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.FilterMode VRMShaders.DeserializingTextureInfo::get_FilterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_FilterMode_m001BCDA1780DE3D353D755E4F43A74D252B98E81 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public FilterMode FilterMode { get; }
		int32_t L_0 = __this->___U3CFilterModeU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::get_WrapModeU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeU_mC29BB4ACDAD84E3640BB5964DAB40CB44BAB5E65 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModeU { get; }
		int32_t L_0 = __this->___U3CWrapModeUU3Ek__BackingField_5;
		return L_0;
	}
}
// UnityEngine.TextureWrapMode VRMShaders.DeserializingTextureInfo::get_WrapModeV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeV_m4BD882EC14CAB385FAB6DA794FBC77E62B482A86 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModeV { get; }
		int32_t L_0 = __this->___U3CWrapModeVU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void VRMShaders.DeserializingTextureInfo::.ctor(System.Byte[],System.String,VRMShaders.ColorSpace,System.Boolean,UnityEngine.FilterMode,UnityEngine.TextureWrapMode,UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializingTextureInfo__ctor_m2704DB12A6B9A2712DF9F5E76F4D1D476875E5C4 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___imageData0, String_t* ___dataMimeType1, int32_t ___colorSpace2, bool ___useMipmap3, int32_t ___filterMode4, int32_t ___wrapModeU5, int32_t ___wrapModeV6, const RuntimeMethod* method) 
{
	{
		// public DeserializingTextureInfo(byte[] imageData, string dataMimeType, ColorSpace colorSpace, bool useMipmap, FilterMode filterMode, TextureWrapMode wrapModeU, TextureWrapMode wrapModeV)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ImageData = imageData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___imageData0;
		__this->___U3CImageDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageDataU3Ek__BackingField_0), (void*)L_0);
		// DataMimeType = dataMimeType;
		String_t* L_1 = ___dataMimeType1;
		__this->___U3CDataMimeTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataMimeTypeU3Ek__BackingField_1), (void*)L_1);
		// ColorSpace = colorSpace;
		int32_t L_2 = ___colorSpace2;
		__this->___U3CColorSpaceU3Ek__BackingField_2 = L_2;
		// UseMipmap = useMipmap;
		bool L_3 = ___useMipmap3;
		__this->___U3CUseMipmapU3Ek__BackingField_3 = L_3;
		// FilterMode = filterMode;
		int32_t L_4 = ___filterMode4;
		__this->___U3CFilterModeU3Ek__BackingField_4 = L_4;
		// WrapModeU = wrapModeU;
		int32_t L_5 = ___wrapModeU5;
		__this->___U3CWrapModeUU3Ek__BackingField_5 = L_5;
		// WrapModeV = wrapModeV;
		int32_t L_6 = ___wrapModeV6;
		__this->___U3CWrapModeVU3Ek__BackingField_6 = L_6;
		// }
		return;
	}
}
// System.Void VRMShaders.DeserializingTextureInfo::.ctor(System.Byte[],System.String,VRMShaders.ColorSpace,VRMShaders.SamplerParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8 (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___imageData0, String_t* ___dataMimeType1, int32_t ___colorSpace2, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___samplerParam3, const RuntimeMethod* method) 
{
	{
		// public DeserializingTextureInfo(byte[] imageData, string dataMimeType, ColorSpace colorSpace, SamplerParam samplerParam)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ImageData = imageData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___imageData0;
		__this->___U3CImageDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageDataU3Ek__BackingField_0), (void*)L_0);
		// DataMimeType = dataMimeType;
		String_t* L_1 = ___dataMimeType1;
		__this->___U3CDataMimeTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataMimeTypeU3Ek__BackingField_1), (void*)L_1);
		// ColorSpace = colorSpace;
		int32_t L_2 = ___colorSpace2;
		__this->___U3CColorSpaceU3Ek__BackingField_2 = L_2;
		// UseMipmap = samplerParam.EnableMipMap;
		bool L_3;
		L_3 = SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06_inline((&___samplerParam3), NULL);
		__this->___U3CUseMipmapU3Ek__BackingField_3 = L_3;
		// FilterMode = samplerParam.FilterMode;
		int32_t L_4;
		L_4 = SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_inline((&___samplerParam3), NULL);
		__this->___U3CFilterModeU3Ek__BackingField_4 = L_4;
		// WrapModeU = samplerParam.WrapModesU;
		int32_t L_5;
		L_5 = SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_inline((&___samplerParam3), NULL);
		__this->___U3CWrapModeUU3Ek__BackingField_5 = L_5;
		// WrapModeV = samplerParam.WrapModesV;
		int32_t L_6;
		L_6 = SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_inline((&___samplerParam3), NULL);
		__this->___U3CWrapModeVU3Ek__BackingField_6 = L_6;
		// }
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
// Conversion methods for marshalling of: VRMShaders.SamplerParam
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CWrapModesUU3Ek__BackingField_0 = unmarshaled.___U3CWrapModesUU3Ek__BackingField_0;
	marshaled.___U3CWrapModesVU3Ek__BackingField_1 = unmarshaled.___U3CWrapModesVU3Ek__BackingField_1;
	marshaled.___U3CFilterModeU3Ek__BackingField_2 = unmarshaled.___U3CFilterModeU3Ek__BackingField_2;
	marshaled.___U3CEnableMipMapU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CEnableMipMapU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_back(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled)
{
	int32_t unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0 = marshaled.___U3CWrapModesUU3Ek__BackingField_0;
	unmarshaled.___U3CWrapModesUU3Ek__BackingField_0 = unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1 = marshaled.___U3CWrapModesVU3Ek__BackingField_1;
	unmarshaled.___U3CWrapModesVU3Ek__BackingField_1 = unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1;
	int32_t unmarshaledU3CFilterModeU3Ek__BackingField_temp_2 = 0;
	unmarshaledU3CFilterModeU3Ek__BackingField_temp_2 = marshaled.___U3CFilterModeU3Ek__BackingField_2;
	unmarshaled.___U3CFilterModeU3Ek__BackingField_2 = unmarshaledU3CFilterModeU3Ek__BackingField_temp_2;
	bool unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CEnableMipMapU3Ek__BackingField_3);
	unmarshaled.___U3CEnableMipMapU3Ek__BackingField_3 = unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: VRMShaders.SamplerParam
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_cleanup(SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRMShaders.SamplerParam
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled)
{
	marshaled.___U3CWrapModesUU3Ek__BackingField_0 = unmarshaled.___U3CWrapModesUU3Ek__BackingField_0;
	marshaled.___U3CWrapModesVU3Ek__BackingField_1 = unmarshaled.___U3CWrapModesVU3Ek__BackingField_1;
	marshaled.___U3CFilterModeU3Ek__BackingField_2 = unmarshaled.___U3CFilterModeU3Ek__BackingField_2;
	marshaled.___U3CEnableMipMapU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CEnableMipMapU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_back(const SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6& unmarshaled)
{
	int32_t unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0 = marshaled.___U3CWrapModesUU3Ek__BackingField_0;
	unmarshaled.___U3CWrapModesUU3Ek__BackingField_0 = unmarshaledU3CWrapModesUU3Ek__BackingField_temp_0;
	int32_t unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1 = marshaled.___U3CWrapModesVU3Ek__BackingField_1;
	unmarshaled.___U3CWrapModesVU3Ek__BackingField_1 = unmarshaledU3CWrapModesVU3Ek__BackingField_temp_1;
	int32_t unmarshaledU3CFilterModeU3Ek__BackingField_temp_2 = 0;
	unmarshaledU3CFilterModeU3Ek__BackingField_temp_2 = marshaled.___U3CFilterModeU3Ek__BackingField_2;
	unmarshaled.___U3CFilterModeU3Ek__BackingField_2 = unmarshaledU3CFilterModeU3Ek__BackingField_temp_2;
	bool unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CEnableMipMapU3Ek__BackingField_3);
	unmarshaled.___U3CEnableMipMapU3Ek__BackingField_3 = unmarshaledU3CEnableMipMapU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: VRMShaders.SamplerParam
IL2CPP_EXTERN_C void SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_cleanup(SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshaled_com& marshaled)
{
}
// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::get_WrapModesU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModesU { get; }
		int32_t L_0 = __this->___U3CWrapModesUU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.TextureWrapMode VRMShaders.SamplerParam::get_WrapModesV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModesV { get; }
		int32_t L_0 = __this->___U3CWrapModesVU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.FilterMode VRMShaders.SamplerParam::get_FilterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public FilterMode FilterMode { get; }
		int32_t L_0 = __this->___U3CFilterModeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean VRMShaders.SamplerParam::get_EnableMipMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableMipMap { get; }
		bool L_0 = __this->___U3CEnableMipMapU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6*>(__this + _offset);
	bool _returnValue;
	_returnValue = SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.SamplerParam::.ctor(UnityEngine.TextureWrapMode,UnityEngine.TextureWrapMode,UnityEngine.FilterMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplerParam__ctor_mE36D8C781F96A64CCDCCB85F9E3069986F906C36 (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, int32_t ___wrapModesU0, int32_t ___wrapModesV1, int32_t ___filterMode2, bool ___enableMipMap3, const RuntimeMethod* method) 
{
	{
		// WrapModesU = wrapModesU;
		int32_t L_0 = ___wrapModesU0;
		__this->___U3CWrapModesUU3Ek__BackingField_0 = L_0;
		// WrapModesV = wrapModesV;
		int32_t L_1 = ___wrapModesV1;
		__this->___U3CWrapModesVU3Ek__BackingField_1 = L_1;
		// FilterMode = filterMode;
		int32_t L_2 = ___filterMode2;
		__this->___U3CFilterModeU3Ek__BackingField_2 = L_2;
		// EnableMipMap = enableMipMap;
		bool L_3 = ___enableMipMap3;
		__this->___U3CEnableMipMapU3Ek__BackingField_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SamplerParam__ctor_mE36D8C781F96A64CCDCCB85F9E3069986F906C36_AdjustorThunk (RuntimeObject* __this, int32_t ___wrapModesU0, int32_t ___wrapModesV1, int32_t ___filterMode2, bool ___enableMipMap3, const RuntimeMethod* method)
{
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6*>(__this + _offset);
	SamplerParam__ctor_mE36D8C781F96A64CCDCCB85F9E3069986F906C36(_thisAdjusted, ___wrapModesU0, ___wrapModesV1, ___filterMode2, ___enableMipMap3, method);
}
// VRMShaders.SamplerParam VRMShaders.SamplerParam::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 SamplerParam_get_Default_mF4F3A8359889638D9865E0609DF781175521D3F7 (const RuntimeMethod* method) 
{
	{
		// public static SamplerParam Default => new SamplerParam(
		//     TextureWrapMode.Repeat,
		//     TextureWrapMode.Repeat,
		//     FilterMode.Bilinear,
		//     true
		// );
		SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		SamplerParam__ctor_mE36D8C781F96A64CCDCCB85F9E3069986F906C36((&L_0), 0, 0, 1, (bool)1, /*hidden argument*/NULL);
		return L_0;
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
Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_Multicast(GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* currentDelegate = reinterpret_cast<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B*>(delegatesToInvoke[i]);
		typedef Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_OpenInst(GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method)
{
	typedef Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_OpenStatic(GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method)
{
	typedef Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_OpenStaticInvoker(GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* >::Invoke(__this->___method_ptr_0, method, NULL);
}
Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_ClosedStaticInvoker(GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void VRMShaders.GetTextureBytesAsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetTextureBytesAsync__ctor_mC8D6989AF7DABF7E60D265F5DDA98A524599B039 (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_Multicast;
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>> VRMShaders.GetTextureBytesAsync::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615 (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method) 
{
	typedef Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VRMShaders.GetTextureBytesAsync::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetTextureBytesAsync_BeginInvoke_mA927FFCC5B47D322FC5E0D094C52C982F78FBA6E (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.ValueTuple`2<System.Byte[],System.String>>> VRMShaders.GetTextureBytesAsync::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_EndInvoke_mECF4BF8B6994851108D94E1330975CA40D031F84 (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: VRMShaders.TextureDescriptor
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_pinvoke(const TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D& unmarshaled, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_pinvoke& marshaled)
{
	marshaled.___UnityObjectName_0 = il2cpp_codegen_marshal_string(unmarshaled.___UnityObjectName_0);
	marshaled.___Offset_1 = unmarshaled.___Offset_1;
	marshaled.___Scale_2 = unmarshaled.___Scale_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke(unmarshaled.___Sampler_3, marshaled.___Sampler_3);
	marshaled.___TextureType_4 = unmarshaled.___TextureType_4;
	marshaled.___MetallicFactor_5 = unmarshaled.___MetallicFactor_5;
	marshaled.___RoughnessFactor_6 = unmarshaled.___RoughnessFactor_6;
	marshaled.___Index0_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index0_7));
	marshaled.___Index1_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index1_8));
	marshaled.___Index2_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index2_9));
	marshaled.___Index3_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index3_10));
	marshaled.___Index4_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index4_11));
	marshaled.___Index5_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index5_12));
}
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_pinvoke_back(const TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_pinvoke& marshaled, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___UnityObjectName_0 = il2cpp_codegen_marshal_string_result(marshaled.___UnityObjectName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityObjectName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___UnityObjectName_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledOffset_temp_1;
	memset((&unmarshaledOffset_temp_1), 0, sizeof(unmarshaledOffset_temp_1));
	unmarshaledOffset_temp_1 = marshaled.___Offset_1;
	unmarshaled.___Offset_1 = unmarshaledOffset_temp_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledScale_temp_2;
	memset((&unmarshaledScale_temp_2), 0, sizeof(unmarshaledScale_temp_2));
	unmarshaledScale_temp_2 = marshaled.___Scale_2;
	unmarshaled.___Scale_2 = unmarshaledScale_temp_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 unmarshaledSampler_temp_3;
	memset((&unmarshaledSampler_temp_3), 0, sizeof(unmarshaledSampler_temp_3));
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_back(marshaled.___Sampler_3, unmarshaledSampler_temp_3);
	unmarshaled.___Sampler_3 = unmarshaledSampler_temp_3;
	int32_t unmarshaledTextureType_temp_4 = 0;
	unmarshaledTextureType_temp_4 = marshaled.___TextureType_4;
	unmarshaled.___TextureType_4 = unmarshaledTextureType_temp_4;
	float unmarshaledMetallicFactor_temp_5 = 0.0f;
	unmarshaledMetallicFactor_temp_5 = marshaled.___MetallicFactor_5;
	unmarshaled.___MetallicFactor_5 = unmarshaledMetallicFactor_temp_5;
	float unmarshaledRoughnessFactor_temp_6 = 0.0f;
	unmarshaledRoughnessFactor_temp_6 = marshaled.___RoughnessFactor_6;
	unmarshaled.___RoughnessFactor_6 = unmarshaledRoughnessFactor_temp_6;
	unmarshaled.___Index0_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index0_7, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index0_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index0_7, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index1_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index1_8, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index1_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index1_8, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index2_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index2_9, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index2_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index2_9, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index3_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index3_10, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index3_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index3_10, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index4_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index4_11, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index4_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index4_11, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index5_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index5_12, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index5_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index5_12, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: VRMShaders.TextureDescriptor
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_pinvoke_cleanup(TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___UnityObjectName_0);
	marshaled.___UnityObjectName_0 = NULL;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_pinvoke_cleanup(marshaled.___Sampler_3);
}


// Conversion methods for marshalling of: VRMShaders.TextureDescriptor
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_com(const TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D& unmarshaled, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_com& marshaled)
{
	marshaled.___UnityObjectName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___UnityObjectName_0);
	marshaled.___Offset_1 = unmarshaled.___Offset_1;
	marshaled.___Scale_2 = unmarshaled.___Scale_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com(unmarshaled.___Sampler_3, marshaled.___Sampler_3);
	marshaled.___TextureType_4 = unmarshaled.___TextureType_4;
	marshaled.___MetallicFactor_5 = unmarshaled.___MetallicFactor_5;
	marshaled.___RoughnessFactor_6 = unmarshaled.___RoughnessFactor_6;
	marshaled.___Index0_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index0_7));
	marshaled.___Index1_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index1_8));
	marshaled.___Index2_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index2_9));
	marshaled.___Index3_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index3_10));
	marshaled.___Index4_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index4_11));
	marshaled.___Index5_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Index5_12));
}
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_com_back(const TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_com& marshaled, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___UnityObjectName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___UnityObjectName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityObjectName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___UnityObjectName_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledOffset_temp_1;
	memset((&unmarshaledOffset_temp_1), 0, sizeof(unmarshaledOffset_temp_1));
	unmarshaledOffset_temp_1 = marshaled.___Offset_1;
	unmarshaled.___Offset_1 = unmarshaledOffset_temp_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledScale_temp_2;
	memset((&unmarshaledScale_temp_2), 0, sizeof(unmarshaledScale_temp_2));
	unmarshaledScale_temp_2 = marshaled.___Scale_2;
	unmarshaled.___Scale_2 = unmarshaledScale_temp_2;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 unmarshaledSampler_temp_3;
	memset((&unmarshaledSampler_temp_3), 0, sizeof(unmarshaledSampler_temp_3));
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_back(marshaled.___Sampler_3, unmarshaledSampler_temp_3);
	unmarshaled.___Sampler_3 = unmarshaledSampler_temp_3;
	int32_t unmarshaledTextureType_temp_4 = 0;
	unmarshaledTextureType_temp_4 = marshaled.___TextureType_4;
	unmarshaled.___TextureType_4 = unmarshaledTextureType_temp_4;
	float unmarshaledMetallicFactor_temp_5 = 0.0f;
	unmarshaledMetallicFactor_temp_5 = marshaled.___MetallicFactor_5;
	unmarshaled.___MetallicFactor_5 = unmarshaledMetallicFactor_temp_5;
	float unmarshaledRoughnessFactor_temp_6 = 0.0f;
	unmarshaledRoughnessFactor_temp_6 = marshaled.___RoughnessFactor_6;
	unmarshaled.___RoughnessFactor_6 = unmarshaledRoughnessFactor_temp_6;
	unmarshaled.___Index0_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index0_7, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index0_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index0_7, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index1_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index1_8, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index1_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index1_8, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index2_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index2_9, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index2_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index2_9, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index3_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index3_10, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index3_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index3_10, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index4_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index4_11, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index4_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index4_11, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
	unmarshaled.___Index5_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index5_12, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Index5_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B>(marshaled.___Index5_12, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: VRMShaders.TextureDescriptor
IL2CPP_EXTERN_C void TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshal_com_cleanup(TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___UnityObjectName_0);
	marshaled.___UnityObjectName_0 = NULL;
	SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6_marshal_com_cleanup(marshaled.___Sampler_3);
}
// VRMShaders.SubAssetKey VRMShaders.TextureDescriptor::get_SubAssetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401 (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SubAssetKey SubAssetKey => new SubAssetKey(SubAssetKey.TextureType, UnityObjectName);
		il2cpp_codegen_runtime_class_init_inline(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var);
		Type_t* L_0 = ((SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_StaticFields*)il2cpp_codegen_static_fields_for(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB_il2cpp_TypeInfo_var))->___TextureType_0;
		String_t* L_1 = __this->___UnityObjectName_0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_2;
		memset((&L_2), 0, sizeof(L_2));
		SubAssetKey__ctor_mC1E0487CAD08419F1FD93EBC2AFB612FA4AAC4D9((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D*>(__this + _offset);
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB _returnValue;
	_returnValue = TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRMShaders.TextureDescriptor::.ctor(System.String,UnityEngine.Vector2,UnityEngine.Vector2,VRMShaders.SamplerParam,VRMShaders.TextureImportTypes,System.Single,System.Single,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync,VRMShaders.GetTextureBytesAsync)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2 (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___sampler3, int32_t ___textureType4, float ___metallicFactor5, float ___roughnessFactor6, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i07, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i18, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i29, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i310, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i411, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i512, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(name));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2_RuntimeMethod_var)));
	}

IL_0013:
	{
		// UnityObjectName = name;
		String_t* L_3 = ___name0;
		__this->___UnityObjectName_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityObjectName_0), (void*)L_3);
		// Offset = offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___offset1;
		__this->___Offset_1 = L_4;
		// Scale = scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___scale2;
		__this->___Scale_2 = L_5;
		// Sampler = sampler;
		SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_6 = ___sampler3;
		__this->___Sampler_3 = L_6;
		// TextureType = textureType;
		int32_t L_7 = ___textureType4;
		__this->___TextureType_4 = L_7;
		// MetallicFactor = metallicFactor;
		float L_8 = ___metallicFactor5;
		__this->___MetallicFactor_5 = L_8;
		// RoughnessFactor = roughnessFactor;
		float L_9 = ___roughnessFactor6;
		__this->___RoughnessFactor_6 = L_9;
		// Index0 = i0;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_10 = ___i07;
		__this->___Index0_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index0_7), (void*)L_10);
		// Index1 = i1;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_11 = ___i18;
		__this->___Index1_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index1_8), (void*)L_11);
		// Index2 = i2;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_12 = ___i29;
		__this->___Index2_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index2_9), (void*)L_12);
		// Index3 = i3;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_13 = ___i310;
		__this->___Index3_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index3_10), (void*)L_13);
		// Index4 = i4;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_14 = ___i411;
		__this->___Index4_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index4_11), (void*)L_14);
		// Index5 = i5;
		GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_15 = ___i512;
		__this->___Index5_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Index5_12), (void*)L_15);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 ___sampler3, int32_t ___textureType4, float ___metallicFactor5, float ___roughnessFactor6, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i07, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i18, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i29, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i310, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i411, GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* ___i512, const RuntimeMethod* method)
{
	TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D*>(__this + _offset);
	TextureDescriptor__ctor_m3A49AFB0C9B6C93D71D2E96F63F7FD08072F78E2(_thisAdjusted, ___name0, ___offset1, ___scale2, ___sampler3, ___textureType4, ___metallicFactor5, ___roughnessFactor6, ___i07, ___i18, ___i29, ___i310, ___i411, ___i512, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRMShaders.TextureDescriptorSet::Add(VRMShaders.TextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDescriptorSet_Add_m81F6D767B481F4270AE3A7418265A92FC355035D (TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texDescDict.ContainsKey(texDesc.SubAssetKey)) return;
		Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* L_0 = __this->____texDescDict_0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_1;
		L_1 = TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401((&___texDesc0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F(L_0, L_1, Dictionary_2_ContainsKey_m94850294B38E1572F42EDD3050166E88EBEF105F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (_texDescDict.ContainsKey(texDesc.SubAssetKey)) return;
		return;
	}

IL_0015:
	{
		// _texDescDict.Add(texDesc.SubAssetKey, texDesc);
		Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* L_3 = __this->____texDescDict_0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_4;
		L_4 = TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401((&___texDesc0), NULL);
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_5 = ___texDesc0;
		NullCheck(L_3);
		Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24(L_3, L_4, L_5, Dictionary_2_Add_m543277046C06C1EBE9A56F9548CBED7EEC5F9B24_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<VRMShaders.TextureDescriptor> VRMShaders.TextureDescriptorSet::GetEnumerable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureDescriptorSet_GetEnumerable_m181DF5B18263DD84BA110F9E4C8D806DC05D3765 (TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* L_0 = (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E*)il2cpp_codegen_object_new(U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumerableU3Ed__2__ctor_mD37786100B244E4FE6249A90F6D3A68694361F4F(L_0, ((int32_t)-2), NULL);
		U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void VRMShaders.TextureDescriptorSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDescriptorSet__ctor_mFD3797D8AF4363E4746900BF523916CE9257A090 (TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<SubAssetKey, TextureDescriptor> _texDescDict = new Dictionary<SubAssetKey, TextureDescriptor>();
		Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* L_0 = (Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9*)il2cpp_codegen_object_new(Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8(L_0, Dictionary_2__ctor_m45C314CAABBDB622E1B238D37623E51CDA31CCA8_RuntimeMethod_var);
		__this->____texDescDict_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texDescDict_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2__ctor_mD37786100B244E4FE6249A90F6D3A68694361F4F (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2_System_IDisposable_Dispose_m60DB92951B01BDBF4CF1BE71E98D2EC7B41B9152 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetEnumerableU3Ed__2_U3CU3Em__Finally1_m002E619D6E2073E1C6F7A3FCB6BE8860104BA549(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumerableU3Ed__2_MoveNext_m11AF4D0AC08D0AEC9C52B7D204CE98DA992E917F (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* V_2 = NULL;
	KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008a:
			{// begin fault (depth: 1)
				U3CGetEnumerableU3Ed__2_System_IDisposable_Dispose_m60DB92951B01BDBF4CF1BE71E98D2EC7B41B9152(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0091;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var kv in _texDescDict)
				TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t8C35923440C0BD73C69E000735A5943CFA79F5C9* L_5 = L_4->____texDescDict_0;
				NullCheck(L_5);
				Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90 L_6;
				L_6 = Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC(L_5, Dictionary_2_GetEnumerator_m53ADD12568F29E43BC72036EF7903CBD060CA0DC_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___key_0))->___Type_2), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___key_0))->___Name_3), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___UnityObjectName_0), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index0_7), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index1_8), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index2_9), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index3_10), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index4_11), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1))->___Index5_12), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0067_1;
			}

IL_003b_1:
			{
				// foreach (var kv in _texDescDict)
				Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* L_7 = (&__this->___U3CU3E7__wrap1_4);
				KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 L_8;
				L_8 = Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_inline(L_7, Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_RuntimeMethod_var);
				V_3 = L_8;
				// yield return kv.Value;
				TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_9;
				L_9 = KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_inline((&V_3), KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___UnityObjectName_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index0_7), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index1_8), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index2_9), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index3_10), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index4_11), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Index5_12), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0091;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0067_1:
			{
				// foreach (var kv in _texDescDict)
				Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55(L_10, Enumerator_MoveNext_m9E21463A51CD88B3871899A247B07AFC69EEEE55_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CGetEnumerableU3Ed__2_U3CU3Em__Finally1_m002E619D6E2073E1C6F7A3FCB6BE8860104BA549(__this, NULL);
				Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90));
				// }
				V_0 = (bool)0;
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2_U3CU3Em__Finally1_m002E619D6E2073E1C6F7A3FCB6BE8860104BA549 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD(L_0, Enumerator_Dispose_m5C9637135C2FC2BD392813EC64D99A9ABEBC4EBD_RuntimeMethod_var);
		return;
	}
}
// VRMShaders.TextureDescriptor VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.Generic.IEnumerator<VRMShaders.TextureDescriptor>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D U3CGetEnumerableU3Ed__2_System_Collections_Generic_IEnumeratorU3CVRMShaders_TextureDescriptorU3E_get_Current_m34DF263E72BEB51989D471D28BAEDCC88AC6E37F (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	{
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_mE840B33E606A70BF6A66D3A642DF5F1E147CF893 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_mE840B33E606A70BF6A66D3A642DF5F1E147CF893_RuntimeMethod_var)));
	}
}
// System.Object VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumerableU3Ed__2_System_Collections_IEnumerator_get_Current_m2469482CC744D6B772FEE53A01C9315A254F8487 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_0 = __this->___U3CU3E2__current_1;
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_1 = L_0;
		RuntimeObject* L_2 = Box(TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<VRMShaders.TextureDescriptor> VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.Generic.IEnumerable<VRMShaders.TextureDescriptor>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CVRMShaders_TextureDescriptorU3E_GetEnumerator_m0CE91616EEF2296343D02237090379F336984D62 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* L_3 = (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E*)il2cpp_codegen_object_new(U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetEnumerableU3Ed__2__ctor_mD37786100B244E4FE6249A90F6D3A68694361F4F(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* L_4 = V_0;
		TextureDescriptorSet_tF35AD1CF046AC0874A69C04CEDA64CD63F3E58E7* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator VRMShaders.TextureDescriptorSet/<GetEnumerable>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumerableU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mC99951C163C6220B9BD9615CE98D0E33EDBD6AF7 (U3CGetEnumerableU3Ed__2_tA09930377B75A007B8DB915E56C27D89A9E5940E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CVRMShaders_TextureDescriptorU3E_GetEnumerator_m0CE91616EEF2296343D02237090379F336984D62(__this, NULL);
		return L_0;
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
// VRMShaders.ITextureDeserializer VRMShaders.TextureFactory::get_TextureDeserializer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) 
{
	{
		// public ITextureDeserializer TextureDeserializer { get; }
		RuntimeObject* L_0 = __this->___U3CTextureDeserializerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture> VRMShaders.TextureFactory::get_ConvertedTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureFactory_get_ConvertedTextures_mF64CB04930CBCE18D60599DE38E46AE9EBDD4A48 (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<SubAssetKey, Texture> ConvertedTextures => _textureCache;
		Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_0 = __this->____textureCache_2;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture> VRMShaders.TextureFactory::get_ExternalTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureFactory_get_ExternalTextures_m6E8ED18C7F8E2AD6C53455B7FC7BFDEECBD6186B (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<SubAssetKey, Texture> ExternalTextures => _externalMap;
		RuntimeObject* L_0 = __this->____externalMap_0;
		return L_0;
	}
}
// System.Void VRMShaders.TextureFactory::.ctor(VRMShaders.ITextureDeserializer,System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFactory__ctor_mDA224172E0D9BF6574DD84FEEB1FEA2AE6EF722C (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, RuntimeObject* ___textureDeserializer0, RuntimeObject* ___externalTextures1, bool ___isLegacySquaredRoughness2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m57141BE2AA4931D7ADE4A1AB19B20877C3BA1A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<SubAssetKey, Texture> _textureCache = new Dictionary<SubAssetKey, Texture>();
		Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_0 = (Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9*)il2cpp_codegen_object_new(Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m57141BE2AA4931D7ADE4A1AB19B20877C3BA1A7B(L_0, Dictionary_2__ctor_m57141BE2AA4931D7ADE4A1AB19B20877C3BA1A7B_RuntimeMethod_var);
		__this->____textureCache_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textureCache_2), (void*)L_0);
		// public TextureFactory(
		//     ITextureDeserializer textureDeserializer,
		//     IReadOnlyDictionary<SubAssetKey, Texture> externalTextures,
		//     bool isLegacySquaredRoughness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// TextureDeserializer = textureDeserializer;
		RuntimeObject* L_1 = ___textureDeserializer0;
		__this->___U3CTextureDeserializerU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureDeserializerU3Ek__BackingField_3), (void*)L_1);
		// _externalMap = externalTextures;
		RuntimeObject* L_2 = ___externalTextures1;
		__this->____externalMap_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____externalMap_0), (void*)L_2);
		// _isLegacySquaredRoughness = isLegacySquaredRoughness;
		bool L_3 = ___isLegacySquaredRoughness2;
		__this->____isLegacySquaredRoughness_1 = L_3;
		// }
		return;
	}
}
// System.Void VRMShaders.TextureFactory::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFactory_Dispose_mF08B3E12879979325322001A0A3B243BD8E605FB (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC6905DC706A69FD31C153FF3A6DABAC9B11F2340_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textureCache.Clear();
		Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_0 = __this->____textureCache_2;
		NullCheck(L_0);
		Dictionary_2_Clear_mC6905DC706A69FD31C153FF3A6DABAC9B11F2340(L_0, Dictionary_2_Clear_mC6905DC706A69FD31C153FF3A6DABAC9B11F2340_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRMShaders.TextureFactory::TransferOwnership(VRMShaders.TakeResponsibilityForDestroyObjectFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFactory_TransferOwnership_m74140E9F558FE709725E3367397A7CD86B8DB8C1 (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7790456B1DDB14EB1475A6EE63A7D922B0A12744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisKeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD_m473696F6A443AB17179BE66F988EB2440C30F9CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_Deconstruct_m8D863C313D199F9D6E2C11B8EBAA9BE57EC89736_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* V_0 = NULL;
	int32_t V_1 = 0;
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_3 = NULL;
	KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD V_4;
	memset((&V_4), 0, sizeof(V_4));
	SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB V_5;
	memset((&V_5), 0, sizeof(V_5));
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_6 = NULL;
	{
		// foreach (var (k, v) in _textureCache.ToArray())
		Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_0 = __this->____textureCache_2;
		KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* L_1;
		L_1 = Enumerable_ToArray_TisKeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD_m473696F6A443AB17179BE66F988EB2440C30F9CC(L_0, Enumerable_ToArray_TisKeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD_m473696F6A443AB17179BE66F988EB2440C30F9CC_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0043;
	}

IL_0010:
	{
		// foreach (var (k, v) in _textureCache.ToArray())
		KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		KeyValuePair_2_tFFE886101C0CDF7684B66397DA8F31E21F8770DD L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		KeyValuePair_2_Deconstruct_m8D863C313D199F9D6E2C11B8EBAA9BE57EC89736((&V_4), (&V_5), (&V_6), KeyValuePair_2_Deconstruct_m8D863C313D199F9D6E2C11B8EBAA9BE57EC89736_RuntimeMethod_var);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_6 = V_5;
		V_2 = L_6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = V_6;
		V_3 = L_7;
		// take(k, v);
		TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* L_8 = ___take0;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_9 = V_2;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = V_3;
		NullCheck(L_8);
		TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_inline(L_8, L_9, L_10, NULL);
		// _textureCache.Remove(k);
		Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_11 = __this->____textureCache_2;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_m7790456B1DDB14EB1475A6EE63A7D922B0A12744(L_11, L_12, Dictionary_2_Remove_m7790456B1DDB14EB1475A6EE63A7D922B0A12744_RuntimeMethod_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		// foreach (var (k, v) in _textureCache.ToArray())
		int32_t L_15 = V_1;
		KeyValuePair_2U5BU5D_t558D51D6FF5F970E036F608F148F8D037040CEA1* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture> VRMShaders.TextureFactory::GetTextureAsync(VRMShaders.TextureDescriptor,VRMShaders.IAwaitCaller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* TextureFactory_GetTextureAsync_mAB44838DB3F94CE6BE9FF054E6CA10CE5FF71CFF (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mD2DB64A27E5E976307A021010EB9FAB5C7BB339E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m8F04329184D143B1C451F9C3492E97306351A01C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE4704D087AF95816B490025308CD8CEE558C81A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mD2DB64A27E5E976307A021010EB9FAB5C7BB339E(AsyncTaskMethodBuilder_1_Create_mD2DB64A27E5E976307A021010EB9FAB5C7BB339E_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_1 = ___texDesc0;
		(&V_0)->___texDesc_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___UnityObjectName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index0_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index1_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index2_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index3_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index4_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___texDesc_2))->___Index5_12), (void*)NULL);
		#endif
		RuntimeObject* L_2 = ___awaitCaller1;
		(&V_0)->___awaitCaller_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___awaitCaller_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m8F04329184D143B1C451F9C3492E97306351A01C(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_m8F04329184D143B1C451F9C3492E97306351A01C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mE4704D087AF95816B490025308CD8CEE558C81A0(L_4, AsyncTaskMethodBuilder_1_get_Task_mE4704D087AF95816B490025308CD8CEE558C81A0_RuntimeMethod_var);
		return L_5;
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
// System.Void VRMShaders.TextureFactory/<GetTextureAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1 (U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m397D77518B5E87582D6628397D5EC380E3D6B7B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m57504ACDBB1FBD467D66E1B415485C87F78E847D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t20066CF49149BEEC544379F7CD8EC6C47B0CA535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* V_1 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_2 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_3 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	int32_t V_5 = 0;
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_7 = NULL;
	TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B V_9;
	memset((&V_9), 0, sizeof(V_9));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_10 = NULL;
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_12 = NULL;
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_15 = NULL;
	Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_17 = NULL;
	Exception_t* V_18 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	String_t* G_B18_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B29_0 = NULL;
	RuntimeObject* G_B29_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B31_0 = NULL;
	RuntimeObject* G_B31_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B30_0 = NULL;
	RuntimeObject* G_B30_1 = NULL;
	String_t* G_B32_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B32_1 = NULL;
	RuntimeObject* G_B32_2 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B43_0 = NULL;
	RuntimeObject* G_B43_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B45_0 = NULL;
	RuntimeObject* G_B45_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B44_0 = NULL;
	RuntimeObject* G_B44_1 = NULL;
	String_t* G_B46_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B46_1 = NULL;
	RuntimeObject* G_B46_2 = NULL;
	RuntimeObject* G_B56_0 = NULL;
	RuntimeObject* G_B55_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B57_0 = NULL;
	RuntimeObject* G_B57_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B59_0 = NULL;
	RuntimeObject* G_B59_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B58_0 = NULL;
	RuntimeObject* G_B58_1 = NULL;
	String_t* G_B60_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B60_1 = NULL;
	RuntimeObject* G_B60_2 = NULL;
	RuntimeObject* G_B69_0 = NULL;
	RuntimeObject* G_B68_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B70_0 = NULL;
	RuntimeObject* G_B70_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B72_0 = NULL;
	RuntimeObject* G_B72_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B71_0 = NULL;
	RuntimeObject* G_B71_1 = NULL;
	String_t* G_B73_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B73_1 = NULL;
	RuntimeObject* G_B73_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00fb_1;
				}
				case 1:
				{
					goto IL_01a7_1;
				}
				case 2:
				{
					goto IL_025c_1;
				}
				case 3:
				{
					goto IL_0308_1;
				}
				case 4:
				{
					goto IL_038a_1;
				}
				case 5:
				{
					goto IL_0436_1;
				}
				case 6:
				{
					goto IL_052c_1;
				}
				case 7:
				{
					goto IL_05d8_1;
				}
				case 8:
				{
					goto IL_066f_1;
				}
				case 9:
				{
					goto IL_071c_1;
				}
			}
		}
		{
			// var subAssetKey = texDesc.SubAssetKey;
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_3 = (&__this->___texDesc_2);
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_4;
			L_4 = TextureDescriptor_get_SubAssetKey_mA5112E483E84B37D0028FE02EB16BD48498C2401(L_3, NULL);
			__this->___U3CsubAssetKeyU3E5__2_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CsubAssetKeyU3E5__2_5))->___Type_2), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CsubAssetKeyU3E5__2_5))->___Name_3), (void*)NULL);
			#endif
			// if (_externalMap != null && _externalMap.TryGetValue(subAssetKey, out var externalTexture))
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->____externalMap_0;
			if (!L_6)
			{
				goto IL_0071_1;
			}
		}
		{
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject* L_8 = L_7->____externalMap_0;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_9 = __this->___U3CsubAssetKeyU3E5__2_5;
			NullCheck(L_8);
			bool L_10;
			L_10 = InterfaceFuncInvoker2< bool, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<VRMShaders.SubAssetKey,UnityEngine.Texture>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t20066CF49149BEEC544379F7CD8EC6C47B0CA535_il2cpp_TypeInfo_var, L_8, L_9, (&V_3));
			if (!L_10)
			{
				goto IL_0071_1;
			}
		}
		{
			// return externalTexture;
			Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = V_3;
			V_2 = L_11;
			goto IL_0797;
		}

IL_0071_1:
		{
			// if (_textureCache.TryGetValue(subAssetKey, out var cachedTexture))
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_12 = V_1;
			NullCheck(L_12);
			Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_13 = L_12->____textureCache_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_14 = __this->___U3CsubAssetKeyU3E5__2_5;
			NullCheck(L_13);
			bool L_15;
			L_15 = Dictionary_2_TryGetValue_m57504ACDBB1FBD467D66E1B415485C87F78E847D(L_13, L_14, (&V_4), Dictionary_2_TryGetValue_m57504ACDBB1FBD467D66E1B415485C87F78E847D_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_008e_1;
			}
		}
		{
			// return cachedTexture;
			Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = V_4;
			V_2 = L_16;
			goto IL_0797;
		}

IL_008e_1:
		{
			// switch (texDesc.TextureType)
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_17 = (&__this->___texDesc_2);
			int32_t L_18 = L_17->___TextureType_4;
			V_5 = L_18;
			int32_t L_19 = V_5;
			switch (L_19)
			{
				case 0:
				{
					goto IL_04e8_1;
				}
				case 1:
				{
					goto IL_00b7_1;
				}
				case 2:
				{
					goto IL_01fa_1;
				}
				case 3:
				{
					goto IL_062b_1;
				}
			}
		}
		{
			goto IL_076c_1;
		}

IL_00b7_1:
		{
			// var data0 = await texDesc.Index0();
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_20 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_21 = L_20->___Index0_7;
			NullCheck(L_21);
			Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* L_22;
			L_22 = GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline(L_21, NULL);
			NullCheck(L_22);
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_23;
			L_23 = Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA(L_22, Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
			V_8 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA((&V_8), TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0118_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_26 = V_8;
			__this->___U3CU3Eu__1_6 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0(L_27, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_00fb_1:
		{
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_28 = __this->___U3CU3Eu__1_6;
			V_8 = L_28;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* L_29 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_0118_1:
		{
			Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 L_31;
			L_31 = TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70((&V_8), TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
			V_6 = L_31;
			// var rawTexture = await TextureDeserializer.LoadTextureAsync(
			//     new DeserializingTextureInfo(data0?.binary, data0?.mimeType, ColorSpace.Linear, texDesc.Sampler),
			//     awaitCaller);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_32 = V_1;
			NullCheck(L_32);
			RuntimeObject* L_33;
			L_33 = TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline(L_32, NULL);
			bool L_34;
			L_34 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_6), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B13_0 = L_33;
			if (L_34)
			{
				G_B14_0 = L_33;
				goto IL_0133_1;
			}
		}
		{
			G_B15_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
			G_B15_1 = G_B13_0;
			goto IL_013f_1;
		}

IL_0133_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_35;
			L_35 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_6), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35.___Item1_0;
			G_B15_0 = L_36;
			G_B15_1 = G_B14_0;
		}

IL_013f_1:
		{
			bool L_37;
			L_37 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_6), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B16_0 = G_B15_0;
			G_B16_1 = G_B15_1;
			if (L_37)
			{
				G_B17_0 = G_B15_0;
				G_B17_1 = G_B15_1;
				goto IL_014b_1;
			}
		}
		{
			G_B18_0 = ((String_t*)(NULL));
			G_B18_1 = G_B16_0;
			G_B18_2 = G_B16_1;
			goto IL_0157_1;
		}

IL_014b_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_38;
			L_38 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_6), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			String_t* L_39 = L_38.___Item2_1;
			G_B18_0 = L_39;
			G_B18_1 = G_B17_0;
			G_B18_2 = G_B17_1;
		}

IL_0157_1:
		{
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_40 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_41 = L_40->___Sampler_3;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_42 = (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*)il2cpp_codegen_object_new(DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
			NullCheck(L_42);
			DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8(L_42, G_B18_1, G_B18_0, 1, L_41, NULL);
			RuntimeObject* L_43 = __this->___awaitCaller_4;
			NullCheck(G_B18_2);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_44;
			L_44 = InterfaceFuncInvoker2< Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*, RuntimeObject* >::Invoke(0 /* System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.ITextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller) */, ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var, G_B18_2, L_42, L_43);
			NullCheck(L_44);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_45;
			L_45 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_44, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_9 = L_45;
			bool L_46;
			L_46 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_9), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_01c4_1;
			}
		}
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_48 = V_9;
			__this->___U3CU3Eu__2_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_49 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B(L_49, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_01a7_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_50 = __this->___U3CU3Eu__2_7;
			V_9 = L_50;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_51 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_01c4_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53;
			L_53 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_9), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_7 = L_53;
			// rawTexture.name = subAssetKey.Name;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_54 = V_7;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_55 = (&__this->___U3CsubAssetKeyU3E5__2_5);
			String_t* L_56 = L_55->___Name_3;
			NullCheck(L_54);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_54, L_56, NULL);
			// _textureCache.Add(subAssetKey, rawTexture);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_57 = V_1;
			NullCheck(L_57);
			Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_58 = L_57->____textureCache_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_59 = __this->___U3CsubAssetKeyU3E5__2_5;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = V_7;
			NullCheck(L_58);
			Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7(L_58, L_59, L_60, Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var);
			// return rawTexture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_61 = V_7;
			V_2 = L_61;
			goto IL_0797;
		}

IL_01fa_1:
		{
			// Texture2D metallicRoughnessTexture = default;
			__this->___U3CmetallicRoughnessTextureU3E5__3_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmetallicRoughnessTextureU3E5__3_8), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			// Texture2D occlusionTexture = default;
			__this->___U3CocclusionTextureU3E5__4_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CocclusionTextureU3E5__4_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			// if (texDesc.Index0 != null)
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_62 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_63 = L_62->___Index0_7;
			if (!L_63)
			{
				goto IL_0336_1;
			}
		}
		{
			// var data0 = await texDesc.Index0();
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_64 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_65 = L_64->___Index0_7;
			NullCheck(L_65);
			Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* L_66;
			L_66 = GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline(L_65, NULL);
			NullCheck(L_66);
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_67;
			L_67 = Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA(L_66, Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
			V_8 = L_67;
			bool L_68;
			L_68 = TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA((&V_8), TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_0279_1;
			}
		}
		{
			int32_t L_69 = 2;
			V_0 = L_69;
			__this->___U3CU3E1__state_0 = L_69;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_70 = V_8;
			__this->___U3CU3Eu__1_6 = L_70;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_71 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0(L_71, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_025c_1:
		{
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_72 = __this->___U3CU3Eu__1_6;
			V_8 = L_72;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* L_73 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_73, sizeof(TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F));
			int32_t L_74 = (-1);
			V_0 = L_74;
			__this->___U3CU3E1__state_0 = L_74;
		}

IL_0279_1:
		{
			Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 L_75;
			L_75 = TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70((&V_8), TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
			V_11 = L_75;
			// metallicRoughnessTexture = await TextureDeserializer.LoadTextureAsync(
			//     new DeserializingTextureInfo(data0?.binary, data0?.mimeType, ColorSpace.Linear, texDesc.Sampler),
			//     awaitCaller);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_76 = V_1;
			NullCheck(L_76);
			RuntimeObject* L_77;
			L_77 = TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline(L_76, NULL);
			bool L_78;
			L_78 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_11), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B27_0 = L_77;
			if (L_78)
			{
				G_B28_0 = L_77;
				goto IL_0294_1;
			}
		}
		{
			G_B29_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
			G_B29_1 = G_B27_0;
			goto IL_02a0_1;
		}

IL_0294_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_79;
			L_79 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_11), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = L_79.___Item1_0;
			G_B29_0 = L_80;
			G_B29_1 = G_B28_0;
		}

IL_02a0_1:
		{
			bool L_81;
			L_81 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_11), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B30_0 = G_B29_0;
			G_B30_1 = G_B29_1;
			if (L_81)
			{
				G_B31_0 = G_B29_0;
				G_B31_1 = G_B29_1;
				goto IL_02ac_1;
			}
		}
		{
			G_B32_0 = ((String_t*)(NULL));
			G_B32_1 = G_B30_0;
			G_B32_2 = G_B30_1;
			goto IL_02b8_1;
		}

IL_02ac_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_82;
			L_82 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_11), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			String_t* L_83 = L_82.___Item2_1;
			G_B32_0 = L_83;
			G_B32_1 = G_B31_0;
			G_B32_2 = G_B31_1;
		}

IL_02b8_1:
		{
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_84 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_85 = L_84->___Sampler_3;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_86 = (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*)il2cpp_codegen_object_new(DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
			NullCheck(L_86);
			DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8(L_86, G_B32_1, G_B32_0, 1, L_85, NULL);
			RuntimeObject* L_87 = __this->___awaitCaller_4;
			NullCheck(G_B32_2);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_88;
			L_88 = InterfaceFuncInvoker2< Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*, RuntimeObject* >::Invoke(0 /* System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.ITextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller) */, ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var, G_B32_2, L_86, L_87);
			NullCheck(L_88);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_89;
			L_89 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_88, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_9 = L_89;
			bool L_90;
			L_90 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_9), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_90)
			{
				goto IL_0325_1;
			}
		}
		{
			int32_t L_91 = 3;
			V_0 = L_91;
			__this->___U3CU3E1__state_0 = L_91;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_92 = V_9;
			__this->___U3CU3Eu__2_7 = L_92;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_93 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B(L_93, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_0308_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_94 = __this->___U3CU3Eu__2_7;
			V_9 = L_94;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_95 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_95, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_96 = (-1);
			V_0 = L_96;
			__this->___U3CU3E1__state_0 = L_96;
		}

IL_0325_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_97;
			L_97 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_9), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_12 = L_97;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_98 = V_12;
			__this->___U3CmetallicRoughnessTextureU3E5__3_8 = L_98;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmetallicRoughnessTextureU3E5__3_8), (void*)L_98);
		}

IL_0336_1:
		{
			// if (texDesc.Index1 != null)
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_99 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_100 = L_99->___Index1_8;
			if (!L_100)
			{
				goto IL_0464_1;
			}
		}
		{
			// var data1 = await texDesc.Index1();
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_101 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_102 = L_101->___Index1_8;
			NullCheck(L_102);
			Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* L_103;
			L_103 = GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline(L_102, NULL);
			NullCheck(L_103);
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_104;
			L_104 = Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA(L_103, Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
			V_8 = L_104;
			bool L_105;
			L_105 = TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA((&V_8), TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
			if (L_105)
			{
				goto IL_03a7_1;
			}
		}
		{
			int32_t L_106 = 4;
			V_0 = L_106;
			__this->___U3CU3E1__state_0 = L_106;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_107 = V_8;
			__this->___U3CU3Eu__1_6 = L_107;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_108 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0(L_108, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_038a_1:
		{
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_109 = __this->___U3CU3Eu__1_6;
			V_8 = L_109;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* L_110 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_110, sizeof(TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F));
			int32_t L_111 = (-1);
			V_0 = L_111;
			__this->___U3CU3E1__state_0 = L_111;
		}

IL_03a7_1:
		{
			Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 L_112;
			L_112 = TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70((&V_8), TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
			V_13 = L_112;
			// occlusionTexture = await TextureDeserializer.LoadTextureAsync(
			//     new DeserializingTextureInfo(data1?.binary, data1?.mimeType, ColorSpace.Linear, texDesc.Sampler),
			//     awaitCaller);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_113 = V_1;
			NullCheck(L_113);
			RuntimeObject* L_114;
			L_114 = TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline(L_113, NULL);
			bool L_115;
			L_115 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_13), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B41_0 = L_114;
			if (L_115)
			{
				G_B42_0 = L_114;
				goto IL_03c2_1;
			}
		}
		{
			G_B43_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
			G_B43_1 = G_B41_0;
			goto IL_03ce_1;
		}

IL_03c2_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_116;
			L_116 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_13), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = L_116.___Item1_0;
			G_B43_0 = L_117;
			G_B43_1 = G_B42_0;
		}

IL_03ce_1:
		{
			bool L_118;
			L_118 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_13), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B44_0 = G_B43_0;
			G_B44_1 = G_B43_1;
			if (L_118)
			{
				G_B45_0 = G_B43_0;
				G_B45_1 = G_B43_1;
				goto IL_03da_1;
			}
		}
		{
			G_B46_0 = ((String_t*)(NULL));
			G_B46_1 = G_B44_0;
			G_B46_2 = G_B44_1;
			goto IL_03e6_1;
		}

IL_03da_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_119;
			L_119 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_13), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			String_t* L_120 = L_119.___Item2_1;
			G_B46_0 = L_120;
			G_B46_1 = G_B45_0;
			G_B46_2 = G_B45_1;
		}

IL_03e6_1:
		{
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_121 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_122 = L_121->___Sampler_3;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_123 = (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*)il2cpp_codegen_object_new(DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
			NullCheck(L_123);
			DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8(L_123, G_B46_1, G_B46_0, 1, L_122, NULL);
			RuntimeObject* L_124 = __this->___awaitCaller_4;
			NullCheck(G_B46_2);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_125;
			L_125 = InterfaceFuncInvoker2< Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*, RuntimeObject* >::Invoke(0 /* System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.ITextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller) */, ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var, G_B46_2, L_123, L_124);
			NullCheck(L_125);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_126;
			L_126 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_125, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_9 = L_126;
			bool L_127;
			L_127 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_9), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_127)
			{
				goto IL_0453_1;
			}
		}
		{
			int32_t L_128 = 5;
			V_0 = L_128;
			__this->___U3CU3E1__state_0 = L_128;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_129 = V_9;
			__this->___U3CU3Eu__2_7 = L_129;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_130 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B(L_130, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_0436_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_131 = __this->___U3CU3Eu__2_7;
			V_9 = L_131;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_132 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_132, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_133 = (-1);
			V_0 = L_133;
			__this->___U3CU3E1__state_0 = L_133;
		}

IL_0453_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_134;
			L_134 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_9), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_12 = L_134;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_135 = V_12;
			__this->___U3CocclusionTextureU3E5__4_9 = L_135;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CocclusionTextureU3E5__4_9), (void*)L_135);
		}

IL_0464_1:
		{
			// var combinedTexture = OcclusionMetallicRoughnessConverter.Import(metallicRoughnessTexture,
			//     texDesc.MetallicFactor, texDesc.RoughnessFactor, occlusionTexture, _isLegacySquaredRoughness);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_136 = __this->___U3CmetallicRoughnessTextureU3E5__3_8;
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_137 = (&__this->___texDesc_2);
			float L_138 = L_137->___MetallicFactor_5;
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_139 = (&__this->___texDesc_2);
			float L_140 = L_139->___RoughnessFactor_6;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_141 = __this->___U3CocclusionTextureU3E5__4_9;
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_142 = V_1;
			NullCheck(L_142);
			bool L_143 = L_142->____isLegacySquaredRoughness_1;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_144;
			L_144 = OcclusionMetallicRoughnessConverter_Import_m372DC2C9A6D8579D4E1DE3BC5B2F7179E28BED9E(L_136, L_138, L_140, L_141, L_143, NULL);
			V_10 = L_144;
			// combinedTexture.name = subAssetKey.Name;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_145 = V_10;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_146 = (&__this->___U3CsubAssetKeyU3E5__2_5);
			String_t* L_147 = L_146->___Name_3;
			NullCheck(L_145);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_145, L_147, NULL);
			// combinedTexture.SetSampler(texDesc.Sampler);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_148 = V_10;
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_149 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* L_150 = (&L_149->___Sampler_3);
			TextureExtensions_SetSampler_m58D7FBA605BB18338B95B946DF1ADCF40652F760(L_148, L_150, NULL);
			// _textureCache.Add(subAssetKey, combinedTexture);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_151 = V_1;
			NullCheck(L_151);
			Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_152 = L_151->____textureCache_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_153 = __this->___U3CsubAssetKeyU3E5__2_5;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_154 = V_10;
			NullCheck(L_152);
			Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7(L_152, L_153, L_154, Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var);
			// UnityObjectDestroyer.DestroyRuntimeOrEditor(metallicRoughnessTexture);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_155 = __this->___U3CmetallicRoughnessTextureU3E5__3_8;
			UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D(L_155, NULL);
			// UnityObjectDestroyer.DestroyRuntimeOrEditor(occlusionTexture);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_156 = __this->___U3CocclusionTextureU3E5__4_9;
			UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D(L_156, NULL);
			// return combinedTexture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_157 = V_10;
			V_2 = L_157;
			goto IL_0797;
		}

IL_04e8_1:
		{
			// var data0 = await texDesc.Index0();
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_158 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_159 = L_158->___Index0_7;
			NullCheck(L_159);
			Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* L_160;
			L_160 = GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline(L_159, NULL);
			NullCheck(L_160);
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_161;
			L_161 = Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA(L_160, Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
			V_8 = L_161;
			bool L_162;
			L_162 = TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA((&V_8), TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
			if (L_162)
			{
				goto IL_0549_1;
			}
		}
		{
			int32_t L_163 = 6;
			V_0 = L_163;
			__this->___U3CU3E1__state_0 = L_163;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_164 = V_8;
			__this->___U3CU3Eu__1_6 = L_164;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_165 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0(L_165, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_052c_1:
		{
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_166 = __this->___U3CU3Eu__1_6;
			V_8 = L_166;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* L_167 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_167, sizeof(TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F));
			int32_t L_168 = (-1);
			V_0 = L_168;
			__this->___U3CU3E1__state_0 = L_168;
		}

IL_0549_1:
		{
			Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 L_169;
			L_169 = TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70((&V_8), TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
			V_14 = L_169;
			// var rawTexture = await TextureDeserializer.LoadTextureAsync(
			//     new DeserializingTextureInfo(data0?.binary, data0?.mimeType, ColorSpace.sRGB, texDesc.Sampler),
			//     awaitCaller);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_170 = V_1;
			NullCheck(L_170);
			RuntimeObject* L_171;
			L_171 = TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline(L_170, NULL);
			bool L_172;
			L_172 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_14), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B55_0 = L_171;
			if (L_172)
			{
				G_B56_0 = L_171;
				goto IL_0564_1;
			}
		}
		{
			G_B57_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
			G_B57_1 = G_B55_0;
			goto IL_0570_1;
		}

IL_0564_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_173;
			L_173 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_14), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = L_173.___Item1_0;
			G_B57_0 = L_174;
			G_B57_1 = G_B56_0;
		}

IL_0570_1:
		{
			bool L_175;
			L_175 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_14), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B58_0 = G_B57_0;
			G_B58_1 = G_B57_1;
			if (L_175)
			{
				G_B59_0 = G_B57_0;
				G_B59_1 = G_B57_1;
				goto IL_057c_1;
			}
		}
		{
			G_B60_0 = ((String_t*)(NULL));
			G_B60_1 = G_B58_0;
			G_B60_2 = G_B58_1;
			goto IL_0588_1;
		}

IL_057c_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_176;
			L_176 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_14), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			String_t* L_177 = L_176.___Item2_1;
			G_B60_0 = L_177;
			G_B60_1 = G_B59_0;
			G_B60_2 = G_B59_1;
		}

IL_0588_1:
		{
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_178 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_179 = L_178->___Sampler_3;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_180 = (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*)il2cpp_codegen_object_new(DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
			NullCheck(L_180);
			DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8(L_180, G_B60_1, G_B60_0, 0, L_179, NULL);
			RuntimeObject* L_181 = __this->___awaitCaller_4;
			NullCheck(G_B60_2);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_182;
			L_182 = InterfaceFuncInvoker2< Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*, RuntimeObject* >::Invoke(0 /* System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.ITextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller) */, ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var, G_B60_2, L_180, L_181);
			NullCheck(L_182);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_183;
			L_183 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_182, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_9 = L_183;
			bool L_184;
			L_184 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_9), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_184)
			{
				goto IL_05f5_1;
			}
		}
		{
			int32_t L_185 = 7;
			V_0 = L_185;
			__this->___U3CU3E1__state_0 = L_185;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_186 = V_9;
			__this->___U3CU3Eu__2_7 = L_186;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_187 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B(L_187, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_05d8_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_188 = __this->___U3CU3Eu__2_7;
			V_9 = L_188;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_189 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_189, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_190 = (-1);
			V_0 = L_190;
			__this->___U3CU3E1__state_0 = L_190;
		}

IL_05f5_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_191;
			L_191 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_9), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_15 = L_191;
			// rawTexture.name = subAssetKey.Name;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_192 = V_15;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_193 = (&__this->___U3CsubAssetKeyU3E5__2_5);
			String_t* L_194 = L_193->___Name_3;
			NullCheck(L_192);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_192, L_194, NULL);
			// _textureCache.Add(subAssetKey, rawTexture);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_195 = V_1;
			NullCheck(L_195);
			Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_196 = L_195->____textureCache_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_197 = __this->___U3CsubAssetKeyU3E5__2_5;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_198 = V_15;
			NullCheck(L_196);
			Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7(L_196, L_197, L_198, Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var);
			// return rawTexture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_199 = V_15;
			V_2 = L_199;
			goto IL_0797;
		}

IL_062b_1:
		{
			// var data0 = await texDesc.Index0();
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_200 = (&__this->___texDesc_2);
			GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* L_201 = L_200->___Index0_7;
			NullCheck(L_201);
			Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* L_202;
			L_202 = GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline(L_201, NULL);
			NullCheck(L_202);
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_203;
			L_203 = Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA(L_202, Task_1_GetAwaiter_m13D6272147CE3D4F00A60E65A373BC47BC0727BA_RuntimeMethod_var);
			V_8 = L_203;
			bool L_204;
			L_204 = TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA((&V_8), TaskAwaiter_1_get_IsCompleted_mEACF28EC861C56E3C8432F2ED029D3B28FF959EA_RuntimeMethod_var);
			if (L_204)
			{
				goto IL_068c_1;
			}
		}
		{
			int32_t L_205 = 8;
			V_0 = L_205;
			__this->___U3CU3E1__state_0 = L_205;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_206 = V_8;
			__this->___U3CU3Eu__1_6 = L_206;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_207 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0(L_207, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mA3AA94B300AA84C699CC345C6DF2FAA4ABFBC3D0_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_066f_1:
		{
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F L_208 = __this->___U3CU3Eu__1_6;
			V_8 = L_208;
			TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F* L_209 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_209, sizeof(TaskAwaiter_1_t94A259BC076FE77A0A760E408422889317BF015F));
			int32_t L_210 = (-1);
			V_0 = L_210;
			__this->___U3CU3E1__state_0 = L_210;
		}

IL_068c_1:
		{
			Nullable_1_t1EE325B4E83A539E1B208555ECCD310D363CF806 L_211;
			L_211 = TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70((&V_8), TaskAwaiter_1_GetResult_m6D37F8DBE15CDAE1CAD194AE7DE6123DE75A7A70_RuntimeMethod_var);
			V_16 = L_211;
			// var rawTexture = await TextureDeserializer.LoadTextureAsync(
			//     new DeserializingTextureInfo(data0?.binary, data0?.mimeType, ColorSpace.Linear, texDesc.Sampler),
			//     awaitCaller);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_212 = V_1;
			NullCheck(L_212);
			RuntimeObject* L_213;
			L_213 = TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline(L_212, NULL);
			bool L_214;
			L_214 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_16), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B68_0 = L_213;
			if (L_214)
			{
				G_B69_0 = L_213;
				goto IL_06a7_1;
			}
		}
		{
			G_B70_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
			G_B70_1 = G_B68_0;
			goto IL_06b3_1;
		}

IL_06a7_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_215;
			L_215 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_16), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = L_215.___Item1_0;
			G_B70_0 = L_216;
			G_B70_1 = G_B69_0;
		}

IL_06b3_1:
		{
			bool L_217;
			L_217 = Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_inline((&V_16), Nullable_1_get_HasValue_mC997684B6C72D806B7F8F4BE20B28A0848FD1FBB_RuntimeMethod_var);
			G_B71_0 = G_B70_0;
			G_B71_1 = G_B70_1;
			if (L_217)
			{
				G_B72_0 = G_B70_0;
				G_B72_1 = G_B70_1;
				goto IL_06bf_1;
			}
		}
		{
			G_B73_0 = ((String_t*)(NULL));
			G_B73_1 = G_B71_0;
			G_B73_2 = G_B71_1;
			goto IL_06cb_1;
		}

IL_06bf_1:
		{
			ValueTuple_2_t2927518EAB42CE110A919F7726DE6BFF9B83D669 L_218;
			L_218 = Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_inline((&V_16), Nullable_1_GetValueOrDefault_m97F6887A1B928DC66049D3418808C89618110E45_RuntimeMethod_var);
			String_t* L_219 = L_218.___Item2_1;
			G_B73_0 = L_219;
			G_B73_1 = G_B72_0;
			G_B73_2 = G_B72_1;
		}

IL_06cb_1:
		{
			TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D* L_220 = (&__this->___texDesc_2);
			SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6 L_221 = L_220->___Sampler_3;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_222 = (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*)il2cpp_codegen_object_new(DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9_il2cpp_TypeInfo_var);
			NullCheck(L_222);
			DeserializingTextureInfo__ctor_mFF7110AF845BB6731A8A0913D2DE167127DBA2D8(L_222, G_B73_1, G_B73_0, 1, L_221, NULL);
			RuntimeObject* L_223 = __this->___awaitCaller_4;
			NullCheck(G_B73_2);
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_224;
			L_224 = InterfaceFuncInvoker2< Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9*, RuntimeObject* >::Invoke(0 /* System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.ITextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller) */, ITextureDeserializer_t16E9590568D2073D89ABC7AA3240283B2AE5F298_il2cpp_TypeInfo_var, G_B73_2, L_222, L_223);
			NullCheck(L_224);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_225;
			L_225 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_224, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_9 = L_225;
			bool L_226;
			L_226 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_9), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_226)
			{
				goto IL_0739_1;
			}
		}
		{
			int32_t L_227 = ((int32_t)9);
			V_0 = L_227;
			__this->___U3CU3E1__state_0 = L_227;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_228 = V_9;
			__this->___U3CU3Eu__2_7 = L_228;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_229 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B(L_229, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33_mFB45A382963E8A305B11D9D6E44E5BC9AAFA733B_RuntimeMethod_var);
			goto IL_07b7;
		}

IL_071c_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_230 = __this->___U3CU3Eu__2_7;
			V_9 = L_230;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_231 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_231, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_232 = (-1);
			V_0 = L_232;
			__this->___U3CU3E1__state_0 = L_232;
		}

IL_0739_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_233;
			L_233 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_9), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_17 = L_233;
			// rawTexture.name = subAssetKey.Name;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_234 = V_17;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_235 = (&__this->___U3CsubAssetKeyU3E5__2_5);
			String_t* L_236 = L_235->___Name_3;
			NullCheck(L_234);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_234, L_236, NULL);
			// _textureCache.Add(subAssetKey, rawTexture);
			TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* L_237 = V_1;
			NullCheck(L_237);
			Dictionary_2_t0213BCC0714FBE0516B675D06FB97F8F8C5365F9* L_238 = L_237->____textureCache_2;
			SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_239 = __this->___U3CsubAssetKeyU3E5__2_5;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_240 = V_17;
			NullCheck(L_238);
			Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7(L_238, L_239, L_240, Dictionary_2_Add_mC1C4A2B9BBC05C1212F490506752882EDD4D37A7_RuntimeMethod_var);
			// return rawTexture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_241 = V_17;
			V_2 = L_241;
			goto IL_0797;
		}

IL_076c_1:
		{
			// throw new ArgumentOutOfRangeException();
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_242 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
			NullCheck(L_242);
			ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_242, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_242, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1_RuntimeMethod_var)));
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0772;
		}
		throw e;
	}

CATCH_0772:
	{// begin catch(System.Exception)
		V_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_243 = (&__this->___U3CsubAssetKeyU3E5__2_5);
		il2cpp_codegen_initobj(L_243, sizeof(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB));
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_244 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_245 = V_18;
		AsyncTaskMethodBuilder_1_SetException_m69B9E671DDED5917ADE05CE0BA8116E64981B1B7(L_244, L_245, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m69B9E671DDED5917ADE05CE0BA8116E64981B1B7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_07b7;
	}// end catch (depth: 1)

IL_0797:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB* L_246 = (&__this->___U3CsubAssetKeyU3E5__2_5);
		il2cpp_codegen_initobj(L_246, sizeof(SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB));
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_247 = (&__this->___U3CU3Et__builder_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_248 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m397D77518B5E87582D6628397D5EC380E3D6B7B5(L_247, L_248, AsyncTaskMethodBuilder_1_SetResult_m397D77518B5E87582D6628397D5EC380E3D6B7B5_RuntimeMethod_var);
	}

IL_07b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33*>(__this + _offset);
	U3CGetTextureAsyncU3Ed__13_MoveNext_mE0A868CC0D513A64A8BA848D7C10604D3DD404C1(_thisAdjusted, method);
}
// System.Void VRMShaders.TextureFactory/<GetTextureAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureAsyncU3Ed__13_SetStateMachine_m988A2C53D5D30F9288328809C68A2BFA7C92C1DF (U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0BA4ACB7B5DE9C3DE968DD0CC8EA3FCA0AF46679_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t28FBA55A059622AD5899638F5C8B1FBAAD6604B3* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0BA4ACB7B5DE9C3DE968DD0CC8EA3FCA0AF46679(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0BA4ACB7B5DE9C3DE968DD0CC8EA3FCA0AF46679_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTextureAsyncU3Ed__13_SetStateMachine_m988A2C53D5D30F9288328809C68A2BFA7C92C1DF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTextureAsyncU3Ed__13_t48A31C8FDE21D8C592F6A947FE122F444472FA33*>(__this + _offset);
	U3CGetTextureAsyncU3Ed__13_SetStateMachine_m988A2C53D5D30F9288328809C68A2BFA7C92C1DF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String VRMShaders.TextureImportName::GetUnityObjectName(VRMShaders.TextureImportTypes,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureImportName_GetUnityObjectName_m3C4B4527571B2BAD43DB1FB86364917F22DE23FC (int32_t ___type0, String_t* ___gltfName1, String_t* ___uri2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral481434F40349BFBE0F26719A1A61E9A29E760BB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == TextureImportTypes.StandardMap)
		int32_t L_0 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		// return $"{gltfName}{STANDARD_SUFFIX}";
		String_t* L_1 = ___gltfName1;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487, NULL);
		return L_2;
	}

IL_0010:
	{
		// else if (type == TextureImportTypes.NormalMap)
		int32_t L_3 = ___type0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// return $"{gltfName}{NORMAL_SUFFIX}";
		String_t* L_4 = ___gltfName1;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392, NULL);
		return L_5;
	}

IL_0020:
	{
		// else if (type == TextureImportTypes.Linear)
		int32_t L_6 = ___type0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0030;
		}
	}
	{
		// return $"{gltfName}{LINEAR_SUFFIX}";
		String_t* L_7 = ___gltfName1;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F, NULL);
		return L_8;
	}

IL_0030:
	{
		// if (!string.IsNullOrEmpty(uri) && !uri.StartsWith("data:", StringComparison.Ordinal))
		String_t* L_9 = ___uri2;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_11 = ___uri2;
		NullCheck(L_11);
		bool L_12;
		L_12 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_11, _stringLiteral481434F40349BFBE0F26719A1A61E9A29E760BB1, 4, NULL);
		if (L_12)
		{
			goto IL_004d;
		}
	}
	{
		// return Path.GetFileNameWithoutExtension(uri);
		String_t* L_13 = ___uri2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_13, NULL);
		return L_14;
	}

IL_004d:
	{
		// return gltfName;
		String_t* L_15 = ___gltfName1;
		return L_15;
	}
}
// System.String VRMShaders.TextureImportName::RemoveSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureImportName_RemoveSuffix_m3BE07B4D4C56CE6339B41148BA09A2B1D7D099F3 (String_t* ___src0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (src.EndsWith(NORMAL_SUFFIX))
		String_t* L_0 = ___src0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_0, _stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// return src.Substring(0, src.Length - NORMAL_SUFFIX.Length);
		String_t* L_2 = ___src0;
		String_t* L_3 = ___src0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		NullCheck(_stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral5F21B08C57F893E277EF49594A1E8B9FF65EC392, NULL);
		NullCheck(L_2);
		String_t* L_6;
		L_6 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_0026:
	{
		// else if (src.EndsWith(STANDARD_SUFFIX))
		String_t* L_7 = ___src0;
		NullCheck(L_7);
		bool L_8;
		L_8 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_7, _stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// return src.Substring(0, src.Length - STANDARD_SUFFIX.Length);
		String_t* L_9 = ___src0;
		String_t* L_10 = ___src0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		NullCheck(_stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA56D9F53834D23E8ADCD023B0A8045368F8D9487, NULL);
		NullCheck(L_9);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
		return L_13;
	}

IL_004c:
	{
		// else if (src.EndsWith(LINEAR_SUFFIX))
		String_t* L_14 = ___src0;
		NullCheck(L_14);
		bool L_15;
		L_15 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_14, _stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F, NULL);
		if (!L_15)
		{
			goto IL_0072;
		}
	}
	{
		// return src.Substring(0, src.Length - LINEAR_SUFFIX.Length);
		String_t* L_16 = ___src0;
		String_t* L_17 = ___src0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		NullCheck(_stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9CE7B0C419F87D800DD25CDB2B389F916A60337F, NULL);
		NullCheck(L_16);
		String_t* L_20;
		L_20 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, 0, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
		return L_20;
	}

IL_0072:
	{
		// return src;
		String_t* L_21 = ___src0;
		return L_21;
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
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> VRMShaders.UnityTextureDeserializer::LoadTextureAsync(VRMShaders.DeserializingTextureInfo,VRMShaders.IAwaitCaller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* UnityTextureDeserializer_LoadTextureAsync_mA95ECAC695761BFDC6A28201B9ACE5A4C0476CEB (UnityTextureDeserializer_t2E435F41E8E79458542EE60D96D0118C97D7955D* __this, DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* ___textureInfo0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4BA37483E577200CFCDF06019DD0F8A8BD587736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mEDFC6DA4B7E247B34DE3FE7547704DD61857A87A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4BA37483E577200CFCDF06019DD0F8A8BD587736(AsyncTaskMethodBuilder_1_Create_m4BA37483E577200CFCDF06019DD0F8A8BD587736_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_1 = ___textureInfo0;
		(&V_0)->___textureInfo_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___textureInfo_2), (void*)L_1);
		RuntimeObject* L_2 = ___awaitCaller1;
		(&V_0)->___awaitCaller_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___awaitCaller_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mEDFC6DA4B7E247B34DE3FE7547704DD61857A87A(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_mEDFC6DA4B7E247B34DE3FE7547704DD61857A87A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_4, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void VRMShaders.UnityTextureDeserializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTextureDeserializer__ctor_m85CE6B807ED137070E8C9E7607AE9954ACADE8D4 (UnityTextureDeserializer_t2E435F41E8E79458542EE60D96D0118C97D7955D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__0_MoveNext_m19A37D650915BE1184FEFD56C75481AB49AC0633 (U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m204FCAB80E4785657550AFD7C876ECAF5BD2D7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAwaitCaller_t30AB7C9A0B7F4815BA5CA7329E5F5559BCCB6CFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D998FE0F5158B156E3B0EEB64D2AF317061DF68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7715703D94D995D0A3A453958D77D8836741DD1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B404A52E1ED7B7D61F2DA69459D9316C69C18D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_013a_1;
			}
		}
		{
			// switch (textureInfo.DataMimeType)
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_2 = __this->___textureInfo_2;
			NullCheck(L_2);
			String_t* L_3;
			L_3 = DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301_inline(L_2, NULL);
			V_2 = L_3;
			String_t* L_4 = V_2;
			bool L_5;
			L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, NULL);
			if (L_5)
			{
				goto IL_0070_1;
			}
		}
		{
			String_t* L_6 = V_2;
			bool L_7;
			L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC, NULL);
			if (L_7)
			{
				goto IL_0070_1;
			}
		}
		{
			// if (string.IsNullOrEmpty(textureInfo.DataMimeType))
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_8 = __this->___textureInfo_2;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301_inline(L_8, NULL);
			bool L_10;
			L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
			if (!L_10)
			{
				goto IL_0051_1;
			}
		}
		{
			// Debug.Log($"Texture image MIME type is empty.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral86B404A52E1ED7B7D61F2DA69459D9316C69C18D, NULL);
			goto IL_0070_1;
		}

IL_0051_1:
		{
			// Debug.Log($"Texture image MIME type `{textureInfo.DataMimeType}` is not supported.");
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_11 = __this->___textureInfo_2;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301_inline(L_11, NULL);
			String_t* L_13;
			L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7715703D94D995D0A3A453958D77D8836741DD1D, L_12, _stringLiteral2D998FE0F5158B156E3B0EEB64D2AF317061DF68, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		}

IL_0070_1:
		{
			// var texture = new Texture2D(2, 2, TextureFormat.ARGB32, textureInfo.UseMipmap, textureInfo.ColorSpace == ColorSpace.Linear);
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_14 = __this->___textureInfo_2;
			NullCheck(L_14);
			bool L_15;
			L_15 = DeserializingTextureInfo_get_UseMipmap_mE27396FDCFD6F9F47E37B4F62314B32E2B7F421C_inline(L_14, NULL);
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_16 = __this->___textureInfo_2;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = DeserializingTextureInfo_get_ColorSpace_m9854E04604D1193A5298FDF58BFE38AE6E8912AA_inline(L_16, NULL);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_18, 2, 2, 5, L_15, (bool)((((int32_t)L_17) == ((int32_t)1))? 1 : 0), NULL);
			__this->___U3CtextureU3E5__2_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__2_4), (void*)L_18);
			// if (textureInfo.ImageData != null)
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_19 = __this->___textureInfo_2;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
			L_20 = DeserializingTextureInfo_get_ImageData_m849A30088BD35D7738C8E40D514B72355E878AC0_inline(L_19, NULL);
			if (!L_20)
			{
				goto IL_015d_1;
			}
		}
		{
			// texture.LoadImage(textureInfo.ImageData);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = __this->___U3CtextureU3E5__2_4;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_22 = __this->___textureInfo_2;
			NullCheck(L_22);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
			L_23 = DeserializingTextureInfo_get_ImageData_m849A30088BD35D7738C8E40D514B72355E878AC0_inline(L_22, NULL);
			bool L_24;
			L_24 = ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC(L_21, L_23, NULL);
			// texture.wrapModeU = textureInfo.WrapModeU;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = __this->___U3CtextureU3E5__2_4;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_26 = __this->___textureInfo_2;
			NullCheck(L_26);
			int32_t L_27;
			L_27 = DeserializingTextureInfo_get_WrapModeU_mC29BB4ACDAD84E3640BB5964DAB40CB44BAB5E65_inline(L_26, NULL);
			NullCheck(L_25);
			Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_25, L_27, NULL);
			// texture.wrapModeV = textureInfo.WrapModeV;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___U3CtextureU3E5__2_4;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_29 = __this->___textureInfo_2;
			NullCheck(L_29);
			int32_t L_30;
			L_30 = DeserializingTextureInfo_get_WrapModeV_m4BD882EC14CAB385FAB6DA794FBC77E62B482A86_inline(L_29, NULL);
			NullCheck(L_28);
			Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_28, L_30, NULL);
			// texture.filterMode = textureInfo.FilterMode;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___U3CtextureU3E5__2_4;
			DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* L_32 = __this->___textureInfo_2;
			NullCheck(L_32);
			int32_t L_33;
			L_33 = DeserializingTextureInfo_get_FilterMode_m001BCDA1780DE3D353D755E4F43A74D252B98E81_inline(L_32, NULL);
			NullCheck(L_31);
			Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_31, L_33, NULL);
			// await awaitCaller.NextFrame();
			RuntimeObject* L_34 = __this->___awaitCaller_3;
			NullCheck(L_34);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_35;
			L_35 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(0 /* System.Threading.Tasks.Task VRMShaders.IAwaitCaller::NextFrame() */, IAwaitCaller_t30AB7C9A0B7F4815BA5CA7329E5F5559BCCB6CFC_il2cpp_TypeInfo_var, L_34);
			NullCheck(L_35);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36;
			L_36 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_35, NULL);
			V_3 = L_36;
			bool L_37;
			L_37 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_37)
			{
				goto IL_0156_1;
			}
		}
		{
			int32_t L_38 = 0;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_39 = V_3;
			__this->___U3CU3Eu__1_5 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_40 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m204FCAB80E4785657550AFD7C876ECAF5BD2D7FD(L_40, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E_m204FCAB80E4785657550AFD7C876ECAF5BD2D7FD_RuntimeMethod_var);
			goto IL_01a1;
		}

IL_013a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_41 = __this->___U3CU3Eu__1_5;
			V_3 = L_41;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_42 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_42, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_0156_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
		}

IL_015d_1:
		{
			// return texture;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->___U3CtextureU3E5__2_4;
			V_1 = L_44;
			goto IL_0186;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0166;
		}
		throw e;
	}

CATCH_0166:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CtextureU3E5__2_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__2_4), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_45 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_46 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_45, L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a1;
	}// end catch (depth: 1)

IL_0186:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CtextureU3E5__2_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__2_4), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_47 = (&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_47, L_48, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_01a1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureAsyncU3Ed__0_MoveNext_m19A37D650915BE1184FEFD56C75481AB49AC0633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E*>(__this + _offset);
	U3CLoadTextureAsyncU3Ed__0_MoveNext_m19A37D650915BE1184FEFD56C75481AB49AC0633(_thisAdjusted, method);
}
// System.Void VRMShaders.UnityTextureDeserializer/<LoadTextureAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadTextureAsyncU3Ed__0_SetStateMachine_mE2AA27E80F27CFE14286F8C1455087B474E84B86 (U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadTextureAsyncU3Ed__0_SetStateMachine_mE2AA27E80F27CFE14286F8C1455087B474E84B86_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadTextureAsyncU3Ed__0_t5924350F4ECD1CA1DD2086B2E7EBEDDFCCC3F42E*>(__this + _offset);
	U3CLoadTextureAsyncU3Ed__0_SetStateMachine_mE2AA27E80F27CFE14286F8C1455087B474E84B86(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean VRMShaders.TextureExtensions::HasMipMap(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureExtensions_HasMipMap_m83BE937348B6D7A9B10E15A1A01F18D086E11C1D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	{
		// if (texture is Texture2D t2)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return t2.mipmapCount > 1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)1))? 1 : 0);
	}

IL_0014:
	{
		// else if (texture is RenderTexture rt)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture0;
		V_1 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_4, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// return rt.useMipMap;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = RenderTexture_get_useMipMap_m76150AD5CF0192BC8DAC05522302D9C13ECD07D7(L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void VRMShaders.TextureExtensions::SetSampler(UnityEngine.Texture2D,VRMShaders.SamplerParam&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_SetSampler_m58D7FBA605BB18338B95B946DF1ADCF40652F760 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (texture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// texture.wrapModeU = param.WrapModesU;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* L_3 = ___param1;
		int32_t L_4;
		L_4 = SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_inline(L_3, NULL);
		NullCheck(L_2);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_2, L_4, NULL);
		// texture.wrapModeV = param.WrapModesV;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture0;
		SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* L_6 = ___param1;
		int32_t L_7;
		L_7 = SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_inline(L_6, NULL);
		NullCheck(L_5);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_5, L_7, NULL);
		// texture.filterMode = param.FilterMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
		SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* L_9 = ___param1;
		int32_t L_10;
		L_10 = SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_inline(L_9, NULL);
		NullCheck(L_8);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, L_10, NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean VRMShaders.Symbols::get_VRM_DEVELOP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbols_get_VRM_DEVELOP_mA2DB22931C6D86F506450079D6479258FA46148B (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean VRMShaders.Symbols::get_VRM_NORMALIZE_BLENDSHAPE_TANGENT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Symbols_get_VRM_NORMALIZE_BLENDSHAPE_TANGENT_m8B1548ED76CBD9C87D10E61EFFE712FF8951B9A4 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
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
// System.Void VRMShaders.UnityObjectDestroyer::DestroyRuntimeOrEditor(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectDestroyer_DestroyRuntimeOrEditor_mC11BF43DC4B1986036A229D44ECB721308983B6D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UnityEngine.Object.Destroy(o);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		return;
	}

IL_000e:
	{
		// UnityEngine.Object.DestroyImmediate(o);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeResponsibilityForDestroyObjectFunc_Invoke_mF6161718610356939CA124E0CCCC41C98C7301C8_inline (TakeResponsibilityForDestroyObjectFunc_t6D2FFD4CEE5D03F205AB2875F0B43B0A161DF8BD* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___key0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___key0, ___obj1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* UnityLoopTaskScheduler_get_Scheduler_m83E131DE075E9689458CAF05C3AEC3881E06EA30_inline (UnityLoopTaskScheduler_t637D0D12B72775A67B0F7AC1BD83157F97C0CCD7* __this, const RuntimeMethod* method) 
{
	{
		// public TinyManagedTaskScheduler Scheduler { get; } = new TinyManagedTaskScheduler();
		TinyManagedTaskScheduler_t4D184BB4ACEE12C5BD62C8A740EA99E09DC71C61* L_0 = __this->___U3CSchedulerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* GetTextureAsyncFunc_Invoke_mCD857C28E067A575CB765CBDAB4C7A8A935CBCAA_inline (GetTextureAsyncFunc_tE17293FB27DFC0EF64BC92AF32006D20C5BBF0B3* __this, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D ___texDesc0, RuntimeObject* ___awaitCaller1, const RuntimeMethod* method) 
{
	typedef Task_1_tAE3580031834C793688B3B00005C66DC69CA7807* (*FunctionPointerType) (RuntimeObject*, TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___texDesc0, ___awaitCaller1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PathObject_get_FullPath_mBDE0D0C674AA87D0AD32CA7A5EB25AA989B00674_inline (PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B* __this, const RuntimeMethod* method) 
{
	{
		// public string FullPath { get; }
		String_t* L_0 = __this->___U3CFullPathU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityAssets_mF212A5E2B6684E37AD5CFD2F8DE7796CB87FFE8C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PathObject UnityAssets { get; } = UnityRoot.Child("Assets/");
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0 = ((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityAssetsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B PathObject_get_UnityRoot_mCB9BDEC4389A398B40958DCEB8A02126A74A83CB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PathObject UnityRoot { get; } = FromFullPath(Path.GetDirectoryName(Application.dataPath));
		il2cpp_codegen_runtime_class_init_inline(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var);
		PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B L_0 = ((PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_StaticFields*)il2cpp_codegen_static_fields_for(PathObject_tA700A94F7EDDDB530E83C78C664805079D967C2B_il2cpp_TypeInfo_var))->___U3CUnityRootU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* TextureExportParam_get_Creator_mF2CC80F3E392CA4B2B851D6F886F3547E48EC7D9_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Func<Texture2D> Creator { get; set; }
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_0 = __this->___U3CCreatorU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportColorSpace_mDD3F70989428356E1206929057CC0BBBD7574CB7_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public ColorSpace ExportColorSpace { get; }
		int32_t L_0 = __this->___U3CExportColorSpaceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextureExportParam_get_NeedsAlpha_m8BD690FE8D76AE3A0B7C6B00FC1B42A70D1DB5B5_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public bool NeedsAlpha { get; set; }
		bool L_0 = __this->___U3CNeedsAlphaU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureExportParam_set_NeedsAlpha_mD3AE6957BC080CBC5B613EA776865387958714DC_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool NeedsAlpha { get; set; }
		bool L_0 = ___value0;
		__this->___U3CNeedsAlphaU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureExportParam_set_Creator_m4D73C6589C8F6B730162AD9161B93909FC516A1E_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Func<Texture2D> Creator { get; set; }
		Func_1_t0141C0EAF63F91A5CB28EE61D3C5E191DBDE41E3* L_0 = ___value0;
		__this->___U3CCreatorU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCreatorU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureExportParam_get_ExportType_m6AE328BAF644DE3C7D19EBAEFF44DE0AE67BE0E5_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public TextureExportTypes ExportType { get; }
		int32_t L_0 = __this->___U3CExportTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_PrimaryTexture_m248C596CF006B31D6E789946452390116D807AE9_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Texture PrimaryTexture { get; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___U3CPrimaryTextureU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureExportParam_get_SecondaryTexture_m1991DF636235D83F5D3FDBF67C4C1D97DFBB7A06_inline (TextureExportParam_tA4B8EB3B21388E94C29B2803FE6CD1A6509B2BC8* __this, const RuntimeMethod* method) 
{
	{
		// public Texture SecondaryTexture { get; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___U3CSecondaryTextureU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SamplerParam_get_EnableMipMap_mB327092CB272E8362DDE40A1238812D810A02B06_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableMipMap { get; }
		bool L_0 = __this->___U3CEnableMipMapU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_FilterMode_m1FB96A13694CE166CB326C6FB8126A41B8312FE4_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public FilterMode FilterMode { get; }
		int32_t L_0 = __this->___U3CFilterModeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesU_m3C0A57CC41AA950CB65A4FB20F58A0A608882219_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModesU { get; }
		int32_t L_0 = __this->___U3CWrapModesUU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SamplerParam_get_WrapModesV_mB526C8C28CFB57CD6A23C6370BFAC564A51F88A7_inline (SamplerParam_t6D32BD61A8B8CAA918854CA0043CDF291FC37EB6* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModesV { get; }
		int32_t L_0 = __this->___U3CWrapModesVU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* GetTextureBytesAsync_Invoke_m1CF8B0AFD357F0D3C3878174946B35A2562E4615_inline (GetTextureBytesAsync_t127F890F4C396657A4FC663545BDB5ECC045B11B* __this, const RuntimeMethod* method) 
{
	typedef Task_1_t879E0B408DBE4A8E23F06040139FB8A178EA6078* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TextureFactory_get_TextureDeserializer_m6EC6A79B02CA72EA780A6B37AB365E827F2A9E8D_inline (TextureFactory_t664B20816D572381EB86E26A9015CA3B3A0F5B1D* __this, const RuntimeMethod* method) 
{
	{
		// public ITextureDeserializer TextureDeserializer { get; }
		RuntimeObject* L_0 = __this->___U3CTextureDeserializerU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializingTextureInfo_get_DataMimeType_mCE2C772D0AFFDF8DE899FA2DB328E6A8A4510301_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public string DataMimeType { get; }
		String_t* L_0 = __this->___U3CDataMimeTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeserializingTextureInfo_get_UseMipmap_mE27396FDCFD6F9F47E37B4F62314B32E2B7F421C_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseMipmap { get; }
		bool L_0 = __this->___U3CUseMipmapU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_ColorSpace_m9854E04604D1193A5298FDF58BFE38AE6E8912AA_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public ColorSpace ColorSpace { get; }
		int32_t L_0 = __this->___U3CColorSpaceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeserializingTextureInfo_get_ImageData_m849A30088BD35D7738C8E40D514B72355E878AC0_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] ImageData { get; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CImageDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeU_mC29BB4ACDAD84E3640BB5964DAB40CB44BAB5E65_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModeU { get; }
		int32_t L_0 = __this->___U3CWrapModeUU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_WrapModeV_m4BD882EC14CAB385FAB6DA794FBC77E62B482A86_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public TextureWrapMode WrapModeV { get; }
		int32_t L_0 = __this->___U3CWrapModeVU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeserializingTextureInfo_get_FilterMode_m001BCDA1780DE3D353D755E4F43A74D252B98E81_inline (DeserializingTextureInfo_tD1B40014551833DC74AF03AA753CD8E896FEC8E9* __this, const RuntimeMethod* method) 
{
	{
		// public FilterMode FilterMode { get; }
		int32_t L_0 = __this->___U3CFilterModeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986 Enumerator_get_Current_m6CF6A6C22C19A82E8DED886B58887E20F10032C8_gshared_inline (Enumerator_tEF0FA454A871DD93A33580AB7E5E7A3116F584A0* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986 L_0 = (KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mF3EE6AC5AC83FF4C8A4C5BB05E2D12D87821B5D9_gshared_inline (KeyValuePair_2_t92246CBEB4CB7BF1C3BDAF16333DA0D297EED986* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0AD7D13C492182CB1B406A888B5D3AA2966F7ADE_gshared_inline (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F* __this, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB ___item0, const RuntimeMethod* method) 
{
	SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* L_1 = (SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SubAssetKeyU5BU5D_t322D447441EF79F9EB640879E233578309281950* L_6 = V_0;
		int32_t L_7 = V_1;
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB)L_8);
		return;
	}

IL_0034:
	{
		SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB L_9 = ___item0;
		((  void (*) (List_1_t8E0E096F4FF4FA2D9245EB57B480DFEA74A45F4F*, SubAssetKey_t967FF027464BE1A80F87E1A8343D2B650439DCCB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC Enumerator_get_Current_m278554343E8DD8E2342D93F956F1CEABBE66426E_gshared_inline (Enumerator_t71A00152454E041D7F6550B7D9F995C99D511B13* __this, const RuntimeMethod* method) 
{
	{
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_0 = (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6B6ECF8CC56592AB9EA47BD7A20DCE1745DE0E59_gshared_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m910B4FEB205C073BC693FC8AA18CEFAD481BB10B_gshared_inline (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181* __this, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC ___item0, const RuntimeMethod* method) 
{
	MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_1 = (MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MaterialLoadInfoU5BU5D_t29D8AC6FF0C172480E4B0D2A7FAF0808A71A25C0* L_6 = V_0;
		int32_t L_7 = V_1;
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC)L_8);
		return;
	}

IL_0034:
	{
		MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC L_9 = ___item0;
		((  void (*) (List_1_t7CA56C7E47656B3C672E61EE17609E0BF2623181*, MaterialLoadInfo_t70440D4174EE2C95A51082CBA1654659BE8CCEDC, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_mA7D8986F71B806E9A95E20A5D5FEBB81AA88E223_gshared_inline (KeyValuePair_2_t796983C488716EBD0A7B2F81880C6F60EDAB1AB4* __this, const RuntimeMethod* method) 
{
	{
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_0 = (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0842A0499476FBD4C818EEF67EE6FDB06EF2C2B9_gshared_inline (KeyValuePair_2_t796983C488716EBD0A7B2F81880C6F60EDAB1AB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m6E28093B229E73823CBAA1C3A178F33BA94DDC7B_gshared_inline (KeyValuePair_2_tC0541F0661306527FB49D9D6653274DCFE2EE125* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_mD45B58EB40362D3F8E92FE11643718AE2E67314B_gshared_inline (KeyValuePair_2_tC0541F0661306527FB49D9D6653274DCFE2EE125* __this, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m0B6F02450AE5541F7814A6C8C48B92F6D992762E_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float KeyValuePair_2_get_Value_mA5BE7C11B215197C303FBF99576CBDE919413929_gshared_inline (KeyValuePair_2_tA76653DFC8A4C9B07EC11B4FF878E42681D3EACE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAC985A3824A4305BEC2B381B9868C73202BB5863_gshared_inline (List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A* __this, ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 ___item0, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* L_1 = (ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ValueTuple_2U5BU5D_t32916B5B614C13F8EC1BD07CF7A3E110BB3A0EA4* L_6 = V_0;
		int32_t L_7 = V_1;
		ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49)L_8);
		return;
	}

IL_0034:
	{
		ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49 L_9 = ___item0;
		((  void (*) (List_1_tE21A12F547379B96D6C8DC4BA28CFB760476AC0A*, ValueTuple_2_tDFEF5D5D0F51624CEA17371BAD6D70276931BC49, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 Enumerator_get_Current_mCC38F6755247283DA0481B57DC457663EAA8A871_gshared_inline (Enumerator_t277143F7C60292D45EB4DF344011265D145B3B90* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168 L_0 = (KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D KeyValuePair_2_get_Value_mEACBB3E53916AEFB63D4BB39FEE8DC573736AE68_gshared_inline (KeyValuePair_2_t214E76CE74B4F3FBBA8B9F8F07A75A8D56390168* __this, const RuntimeMethod* method) 
{
	{
		TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D L_0 = (TextureDescriptor_t3BF64E2D198E59439AF2E472BA98AEF2C858258D)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m163BBAC499296BBC70BE048FC4C9C61A0CECFECC_gshared_inline (Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Nullable_1_GetValueOrDefault_m6AFFEE188D1F30878F0D93176575235674EC59E3_gshared_inline (Nullable_1_t78313DA63ED88B37D2AD9B414A1BDF46BDD712C4* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___value_1;
		return L_0;
	}
}
