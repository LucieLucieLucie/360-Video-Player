#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConditionSelector
struct ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MySnapTurn
struct MySnapTurn_t59978D195C014329EBCAE72955B489BD0900AD66;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// VideoController/<WaitForVideoToLoad>d__13
struct U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral38B4E5EDC9BEFA3B3EED5E7D066FCF7BF46E6331;
IL2CPP_EXTERN_C String_t* _stringLiteral39E78794D7BC38EB8F39EDAEC7C66A96C223D732;
IL2CPP_EXTERN_C String_t* _stringLiteral4D06EA08BCE6B5C4CA588716A8CE817EFE6756BC;
IL2CPP_EXTERN_C String_t* _stringLiteral541F942C87D31908FE91B2D5578CFA8B0FA54BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral654B7F6EEF4C8971A591777D2099771799F0011B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974;
IL2CPP_EXTERN_C String_t* _stringLiteral886CD6D492B3D127035E3D95AE5935261965E3CC;
IL2CPP_EXTERN_C String_t* _stringLiteral8C3B70E83C7218A9D138DE6BC08309342B11C6BD;
IL2CPP_EXTERN_C String_t* _stringLiteral983212FF0B8C6210BBEA32526E7611558233602A;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD1C5F6BF5DA191F08483D0C56FDA8BD6ED803D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2E47A448F52BA8BBA24B66988996A0691985798;
IL2CPP_EXTERN_C String_t* _stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E0C841793B499A0E1E19B4CFEC337AB654A861;
IL2CPP_EXTERN_C String_t* _stringLiteralDC8C788C1DD2C5887C1010430D291B620A1E56ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE571EE687479023B09D30B043730F289E71A8960;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BF23FE1319984587B83F85136C3E8BC98B2743;
IL2CPP_EXTERN_C String_t* _stringLiteralF4780B10DE6BFB0EABBA777C638697064265B4F6;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForVideoToLoadU3Ed__13_System_Collections_IEnumerator_Reset_m4F03D2EC32331300B22B487487339BBF2E2E32B2_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
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

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// VideoController/<WaitForVideoToLoad>d__13
struct U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057  : public RuntimeObject
{
	// System.Int32 VideoController/<WaitForVideoToLoad>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VideoController/<WaitForVideoToLoad>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VideoController VideoController/<WaitForVideoToLoad>d__13::<>4__this
	VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// ConditionSelector
struct ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> ConditionSelector::inputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices_4;
	// UnityEngine.UI.Image ConditionSelector::buttonA
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonA_5;
	// UnityEngine.UI.Image ConditionSelector::buttonB
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonB_6;
	// UnityEngine.UI.Image ConditionSelector::buttonC
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___buttonC_7;
	// System.Int32 ConditionSelector::currentCondition
	int32_t ___currentCondition_8;
	// System.Boolean ConditionSelector::selectionBlocked
	bool ___selectionBlocked_9;
	// VideoController ConditionSelector::videoController
	VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* ___videoController_10;
};

// MySnapTurn
struct MySnapTurn_t59978D195C014329EBCAE72955B489BD0900AD66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> MySnapTurn::inputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices_4;
	// UnityEngine.Transform MySnapTurn::XROrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___XROrigin_5;
	// System.Single MySnapTurn::snapAmount
	float ___snapAmount_6;
	// System.Boolean MySnapTurn::rotationBlocked
	bool ___rotationBlocked_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] VideoController::allVideos
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allVideos_4;
	// UnityEngine.Video.VideoPlayer VideoController::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> VideoController::inputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices_6;
	// System.Int32 VideoController::currentVideoIndex
	int32_t ___currentVideoIndex_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> VideoController::rotationsForVideo
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___rotationsForVideo_8;
	// UnityEngine.Transform VideoController::userCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___userCamera_9;
	// UnityEngine.Transform VideoController::XRRig
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___XRRig_10;
	// UnityEngine.GameObject VideoController::blackScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blackScreen_11;
	// System.Int32 VideoController::condition
	int32_t ___condition_12;
	// System.Boolean VideoController::conditionHasBeenSelected
	bool ___conditionHasBeenSelected_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> VideoController::videoSequences
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___videoSequences_14;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VideoController/<WaitForVideoToLoad>d__13

// VideoController/<WaitForVideoToLoad>d__13

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.Video.VideoPlayer

// UnityEngine.Video.VideoPlayer

// ConditionSelector

// ConditionSelector

// MySnapTurn

// MySnapTurn

// VideoController

// VideoController

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD455094771BC3694A38416DA70E16A5B6A7E510D_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.InputDevices::GetDevices(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___0_inputDevices, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void VideoController::StartNextVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_StartNextVideo_m1659969BA8DD8BEB2923DBB03F2ABD24BAFB60E3 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void ConditionSelector::ChangeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionSelector_ChangeSelection_m4ED0B94D803EE0357A6F786DB517CAC00D42F3C6 (ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
inline void Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, float, const RuntimeMethod*))Dictionary_2_Add_mD455094771BC3694A38416DA70E16A5B6A7E510D_gshared)(__this, ___0_key, ___1_value, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::get_Item(System.Int32)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3 (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void VideoController::ShuffleList(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_ShuffleList_m71AA42D456BB6842AE93AD0BCAA89ED918E1EBA2 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_alpha, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
inline float Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m592530FB0319E03D62CA02B0349798F60BC09A31_gshared)(__this, ___0_key, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void VideoController/<WaitForVideoToLoad>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForVideoToLoadU3Ed__13__ctor_m0F7193DD4AFE193A1CDC92C7203EC27ECFE34D47 (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VideoController::WaitForVideoToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoController_WaitForVideoToLoad_m102D337C85139B782D05DDC3A1508DA95BD40D5A (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, float ___1_volume, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2 (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::Add(T)
inline void List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void VideoController::RotatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_RotatePlayer_m2E4D5A4CDAF0A861897F16A8BCB04971DD7280F2 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void ConditionSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionSelector_Start_mA9595E84861D256512FD0587F77EE101AC1A4CA3 (ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527* __this, const RuntimeMethod* method) 
{
	{
		// UnityEngine.XR.InputDevices.GetDevices(inputDevices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = __this->___inputDevices_4;
		InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26(L_0, NULL);
		// }
		return;
	}
}
// System.Void ConditionSelector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionSelector_Update_m2721160EB830458D30262ECE6A7E458138F77464 (ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C3B70E83C7218A9D138DE6BC08309342B11C6BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("XRI_Right_SecondaryButton") || Input.GetKeyDown(KeyCode.B))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral8C3B70E83C7218A9D138DE6BC08309342B11C6BD, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)98), NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}

IL_0015:
	{
		// videoController.condition = currentCondition;
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_2 = __this->___videoController_10;
		int32_t L_3 = __this->___currentCondition_8;
		NullCheck(L_2);
		L_2->___condition_12 = L_3;
		// videoController.StartNextVideo();
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_4 = __this->___videoController_10;
		NullCheck(L_4);
		VideoController_StartNextVideo_m1659969BA8DD8BEB2923DBB03F2ABD24BAFB60E3(L_4, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_003d:
	{
		// if (!selectionBlocked)
		bool L_6 = __this->___selectionBlocked_9;
		if (L_6)
		{
			goto IL_00c3;
		}
	}
	{
		// if (Input.GetAxis("XRI_Right_Primary2DAxis_Vertical") > 0.5f)
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD, NULL);
		if ((!(((float)L_7) > ((float)(0.5f)))))
		{
			goto IL_0084;
		}
	}
	{
		// if (currentCondition < 2)
		int32_t L_8 = __this->___currentCondition_8;
		if ((((int32_t)L_8) >= ((int32_t)2)))
		{
			goto IL_006f;
		}
	}
	{
		// currentCondition++;
		int32_t L_9 = __this->___currentCondition_8;
		__this->___currentCondition_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0076;
	}

IL_006f:
	{
		// currentCondition = 0;
		__this->___currentCondition_8 = 0;
	}

IL_0076:
	{
		// selectionBlocked = true;
		__this->___selectionBlocked_9 = (bool)1;
		// ChangeSelection();
		ConditionSelector_ChangeSelection_m4ED0B94D803EE0357A6F786DB517CAC00D42F3C6(__this, NULL);
		return;
	}

IL_0084:
	{
		// else if (Input.GetAxis("XRI_Right_Primary2DAxis_Vertical") < -0.5f)
		float L_10;
		L_10 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD, NULL);
		if ((!(((float)L_10) < ((float)(-0.5f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// if (currentCondition > 0)
		int32_t L_11 = __this->___currentCondition_8;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// currentCondition--;
		int32_t L_12 = __this->___currentCondition_8;
		__this->___currentCondition_8 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_00b5;
	}

IL_00ae:
	{
		// currentCondition = 2;
		__this->___currentCondition_8 = 2;
	}

IL_00b5:
	{
		// selectionBlocked = true;
		__this->___selectionBlocked_9 = (bool)1;
		// ChangeSelection();
		ConditionSelector_ChangeSelection_m4ED0B94D803EE0357A6F786DB517CAC00D42F3C6(__this, NULL);
		return;
	}

IL_00c3:
	{
		// if (Input.GetAxis("XRI_Right_Primary2DAxis_Vertical") > -0.05f && Input.GetAxis("XRI_Right_Primary2DAxis_Vertical") < 0.05f)
		float L_13;
		L_13 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD, NULL);
		if ((!(((float)L_13) > ((float)(-0.0500000007f)))))
		{
			goto IL_00ec;
		}
	}
	{
		float L_14;
		L_14 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralC559548865710BD0A9EAD127A1CD3D4891F0A8AD, NULL);
		if ((!(((float)L_14) < ((float)(0.0500000007f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// selectionBlocked = false;
		__this->___selectionBlocked_9 = (bool)0;
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void ConditionSelector::ChangeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionSelector_ChangeSelection_m4ED0B94D803EE0357A6F786DB517CAC00D42F3C6 (ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527* __this, const RuntimeMethod* method) 
{
	{
		// if (currentCondition == 0)
		int32_t L_0 = __this->___currentCondition_8;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// buttonA.color = Color.green;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___buttonA_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// buttonB.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___buttonB_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// buttonC.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___buttonC_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		return;
	}

IL_0039:
	{
		// else if (currentCondition == 1)
		int32_t L_7 = __this->___currentCondition_8;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		// buttonA.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___buttonA_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// buttonB.color = Color.green;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___buttonB_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// buttonC.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___buttonC_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		return;
	}

IL_0073:
	{
		// else if (currentCondition == 2)
		int32_t L_14 = __this->___currentCondition_8;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00ac;
		}
	}
	{
		// buttonA.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___buttonA_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		// buttonB.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___buttonB_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// buttonC.color = Color.green;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___buttonC_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void ConditionSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionSelector__ctor_m21DD6CFBD746326567AC140E94630F73B485C454 (ConditionSelector_t05A02BF1420A9F9C2A59B59721BE74F53C39E527* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___inputDevices_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDevices_4), (void*)L_0);
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
// System.Void MySnapTurn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySnapTurn_Start_mFF9AD10A401F0336131F21DC61E13973691FCBCA (MySnapTurn_t59978D195C014329EBCAE72955B489BD0900AD66* __this, const RuntimeMethod* method) 
{
	{
		// UnityEngine.XR.InputDevices.GetDevices(inputDevices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = __this->___inputDevices_4;
		InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26(L_0, NULL);
		// }
		return;
	}
}
// System.Void MySnapTurn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySnapTurn_Update_m7AE7A56D07969D6E7FCEF31BD0799944FF2E3C00 (MySnapTurn_t59978D195C014329EBCAE72955B489BD0900AD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!rotationBlocked)
		bool L_0 = __this->___rotationBlocked_7;
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		// if (Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") > 0.5f)
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974, NULL);
		if ((!(((float)L_1) > ((float)(0.5f)))))
		{
			goto IL_003b;
		}
	}
	{
		// XROrigin.Rotate(0, 45, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___XROrigin_5;
		NullCheck(L_2);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_2, (0.0f), (45.0f), (0.0f), NULL);
		// rotationBlocked = true;
		__this->___rotationBlocked_7 = (bool)1;
		return;
	}

IL_003b:
	{
		// else if (Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") < -0.5f)
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974, NULL);
		if ((!(((float)L_3) < ((float)(-0.5f)))))
		{
			goto IL_0097;
		}
	}
	{
		// XROrigin.Rotate(0, -45, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___XROrigin_5;
		NullCheck(L_4);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_4, (0.0f), (-45.0f), (0.0f), NULL);
		// rotationBlocked = true;
		__this->___rotationBlocked_7 = (bool)1;
		return;
	}

IL_006e:
	{
		// if(Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") > -0.05f && Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") < 0.05f)
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974, NULL);
		if ((!(((float)L_5) > ((float)(-0.0500000007f)))))
		{
			goto IL_0097;
		}
	}
	{
		float L_6;
		L_6 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7D8B993272E5DD8C673A69056D307F330D0FE974, NULL);
		if ((!(((float)L_6) < ((float)(0.0500000007f)))))
		{
			goto IL_0097;
		}
	}
	{
		// rotationBlocked = false;
		__this->___rotationBlocked_7 = (bool)0;
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void MySnapTurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySnapTurn__ctor_m03C22EEFB2776A351FC7BC440C7C0A51773FF9C5 (MySnapTurn_t59978D195C014329EBCAE72955B489BD0900AD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___inputDevices_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDevices_4), (void*)L_0);
		// public float snapAmount = 45f;
		__this->___snapAmount_6 = (45.0f);
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
// System.Void VideoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Start_m61AD2CF792C1B5615D6837402CF12DE7F9587842 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B4E5EDC9BEFA3B3EED5E7D066FCF7BF46E6331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D06EA08BCE6B5C4CA588716A8CE817EFE6756BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541F942C87D31908FE91B2D5578CFA8B0FA54BFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral654B7F6EEF4C8971A591777D2099771799F0011B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral886CD6D492B3D127035E3D95AE5935261965E3CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD1C5F6BF5DA191F08483D0C56FDA8BD6ED803D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2E47A448F52BA8BBA24B66988996A0691985798);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E0C841793B499A0E1E19B4CFEC337AB654A861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC8C788C1DD2C5887C1010430D291B620A1E56ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE571EE687479023B09D30B043730F289E71A8960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BF23FE1319984587B83F85136C3E8BC98B2743);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4780B10DE6BFB0EABBA777C638697064265B4F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotationsForVideo.Add("Botanical Gardens 1_20230316182651.mp4", 0);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_0 = __this->___rotationsForVideo_8;
		NullCheck(L_0);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_0, _stringLiteral4D06EA08BCE6B5C4CA588716A8CE817EFE6756BC, (0.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Art Museum 1_20230316182241.mp4", -30f);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_1 = __this->___rotationsForVideo_8;
		NullCheck(L_1);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_1, _stringLiteralE571EE687479023B09D30B043730F289E71A8960, (-30.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Birds_20230316182638.mp4", 0);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_2 = __this->___rotationsForVideo_8;
		NullCheck(L_2);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_2, _stringLiteralE9BF23FE1319984587B83F85136C3E8BC98B2743, (0.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Botanical Gardens Water 3_20230316185641.mp4", -200);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_3 = __this->___rotationsForVideo_8;
		NullCheck(L_3);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_3, _stringLiteralDC8C788C1DD2C5887C1010430D291B620A1E56ED, (-200.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Darling Harbour 2_20230316185707.mp4", -220);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_4 = __this->___rotationsForVideo_8;
		NullCheck(L_4);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_4, _stringLiteralC2E47A448F52BA8BBA24B66988996A0691985798, (-220.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Hyde Park 2_20230316185752.mp4", -175);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_5 = __this->___rotationsForVideo_8;
		NullCheck(L_5);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_5, _stringLiteral38B4E5EDC9BEFA3B3EED5E7D066FCF7BF46E6331, (-175.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Luna Park 1_20230316185853.mp4", -300);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_6 = __this->___rotationsForVideo_8;
		NullCheck(L_6);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_6, _stringLiteral541F942C87D31908FE91B2D5578CFA8B0FA54BFA, (-300.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Opera 1_20230316191413.mp4", -220);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_7 = __this->___rotationsForVideo_8;
		NullCheck(L_7);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_7, _stringLiteral886CD6D492B3D127035E3D95AE5935261965E3CC, (-220.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Park Near Opera 2_20230316191419.mp4", -240);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_8 = __this->___rotationsForVideo_8;
		NullCheck(L_8);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_8, _stringLiteralF4780B10DE6BFB0EABBA777C638697064265B4F6, (-240.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Queen Victoria 2_20230316191426.mp4", -280);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_9 = __this->___rotationsForVideo_8;
		NullCheck(L_9);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_9, _stringLiteralBDD1C5F6BF5DA191F08483D0C56FDA8BD6ED803D, (-280.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Secret Garden_20230316143022.mp4", 0);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_10 = __this->___rotationsForVideo_8;
		NullCheck(L_10);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_10, _stringLiteralC8E0C841793B499A0E1E19B4CFEC337AB654A861, (0.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// rotationsForVideo.Add("Water 2_20230316191452.mp4", 180);
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_11 = __this->___rotationsForVideo_8;
		NullCheck(L_11);
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_11, _stringLiteral654B7F6EEF4C8971A591777D2099771799F0011B, (180.0f), Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		// UnityEngine.XR.InputDevices.GetDevices(inputDevices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_12 = __this->___inputDevices_6;
		InputDevices_GetDevices_mDB6E1E057DC81A1833AEB55B62FA22228D6EFA26(L_12, NULL);
		// ShuffleList(videoSequences[0]);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_13 = __this->___videoSequences_14;
		NullCheck(L_13);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14;
		L_14 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_13, 0, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		VideoController_ShuffleList_m71AA42D456BB6842AE93AD0BCAA89ED918E1EBA2(__this, L_14, NULL);
		// ShuffleList(videoSequences[1]);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_15 = __this->___videoSequences_14;
		NullCheck(L_15);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16;
		L_16 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_15, 1, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		VideoController_ShuffleList_m71AA42D456BB6842AE93AD0BCAA89ED918E1EBA2(__this, L_16, NULL);
		// ShuffleList(videoSequences[2]);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_17 = __this->___videoSequences_14;
		NullCheck(L_17);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18;
		L_18 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_17, 2, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		VideoController_ShuffleList_m71AA42D456BB6842AE93AD0BCAA89ED918E1EBA2(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void VideoController::RotatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_RotatePlayer_m2E4D5A4CDAF0A861897F16A8BCB04971DD7280F2 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float yRotation = rotationsForVideo[allVideos[(videoSequences[condition])[currentVideoIndex]]] - userCamera.localRotation.eulerAngles.y;
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_0 = __this->___rotationsForVideo_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___allVideos_4;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_2 = __this->___videoSequences_14;
		int32_t L_3 = __this->___condition_12;
		NullCheck(L_2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4;
		L_4 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_2, L_3, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		int32_t L_5 = __this->___currentVideoIndex_7;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_4, L_5, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_0);
		float L_9;
		L_9 = Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC(L_0, L_8, Dictionary_2_get_Item_m10492B8BDAD4A67A649123E4D6A966788F5934EC_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___userCamera_9;
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		V_1 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_13 = L_12.___y_3;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, L_13));
		// XRRig.rotation = Quaternion.Euler(new Vector3(0,yRotation,0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___XRRig_10;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_16, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_17, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VideoController::WaitForVideoToLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoController_WaitForVideoToLoad_m102D337C85139B782D05DDC3A1508DA95BD40D5A (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* L_0 = (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057*)il2cpp_codegen_object_new(U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForVideoToLoadU3Ed__13__ctor_m0F7193DD4AFE193A1CDC92C7203EC27ECFE34D47(L_0, 0, NULL);
		U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VideoController::StartNextVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_StartNextVideo_m1659969BA8DD8BEB2923DBB03F2ABD24BAFB60E3 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B4E5EDC9BEFA3B3EED5E7D066FCF7BF46E6331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral983212FF0B8C6210BBEA32526E7611558233602A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD1C5F6BF5DA191F08483D0C56FDA8BD6ED803D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayer.url = Application.persistentDataPath + "/videos/" + allVideos[(videoSequences[condition])[currentVideoIndex]];
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_5;
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___allVideos_4;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_3 = __this->___videoSequences_14;
		int32_t L_4 = __this->___condition_12;
		NullCheck(L_3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5;
		L_5 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_3, L_4, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		int32_t L_6 = __this->___currentVideoIndex_7;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, L_6, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral983212FF0B8C6210BBEA32526E7611558233602A, L_9, NULL);
		NullCheck(L_0);
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_0, L_10, NULL);
		// StartCoroutine(WaitForVideoToLoad());
		RuntimeObject* L_11;
		L_11 = VideoController_WaitForVideoToLoad_m102D337C85139B782D05DDC3A1508DA95BD40D5A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// if (allVideos[(videoSequences[condition])[currentVideoIndex]].Equals("Hyde Park 2_20230316185752.mp4") || allVideos[(videoSequences[condition])[currentVideoIndex]].Equals("Queen Victoria 2_20230316191426.mp4"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___allVideos_4;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_14 = __this->___videoSequences_14;
		int32_t L_15 = __this->___condition_12;
		NullCheck(L_14);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16;
		L_16 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_14, L_15, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		int32_t L_17 = __this->___currentVideoIndex_7;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_16, L_17, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		bool L_21;
		L_21 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_20, _stringLiteral38B4E5EDC9BEFA3B3EED5E7D066FCF7BF46E6331, NULL);
		if (L_21)
		{
			goto IL_00a8;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = __this->___allVideos_4;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_23 = __this->___videoSequences_14;
		int32_t L_24 = __this->___condition_12;
		NullCheck(L_23);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25;
		L_25 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_23, L_24, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		int32_t L_26 = __this->___currentVideoIndex_7;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_25, L_26, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		bool L_30;
		L_30 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_29, _stringLiteralBDD1C5F6BF5DA191F08483D0C56FDA8BD6ED803D, NULL);
		if (!L_30)
		{
			goto IL_00bb;
		}
	}

IL_00a8:
	{
		// videoPlayer.SetDirectAudioVolume(0, 0.05f);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_31 = __this->___videoPlayer_5;
		NullCheck(L_31);
		VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8(L_31, (uint16_t)0, (0.0500000007f), NULL);
		goto IL_00cc;
	}

IL_00bb:
	{
		// videoPlayer.SetDirectAudioVolume(0, 1f);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_32 = __this->___videoPlayer_5;
		NullCheck(L_32);
		VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8(L_32, (uint16_t)0, (1.0f), NULL);
	}

IL_00cc:
	{
		// conditionHasBeenSelected = true;
		__this->___conditionHasBeenSelected_13 = (bool)1;
		// }
		return;
	}
}
// System.Void VideoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Update_mFC5171B82B3810F717DC3DB1CA0879B1A642F542 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E78794D7BC38EB8F39EDAEC7C66A96C223D732);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Input.GetButtonDown("XRI_Right_PrimaryButton") || Input.GetKeyDown(KeyCode.A)) && conditionHasBeenSelected)
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral39E78794D7BC38EB8F39EDAEC7C66A96C223D732, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}

IL_0015:
	{
		bool L_2 = __this->___conditionHasBeenSelected_13;
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// if (currentVideoIndex < (videoSequences[condition].Count - 1))
		int32_t L_3 = __this->___currentVideoIndex_7;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_4 = __this->___videoSequences_14;
		int32_t L_5 = __this->___condition_12;
		NullCheck(L_4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6;
		L_6 = List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3(L_4, L_5, List_1_get_Item_mE36D65E025A32CC675A5B41B4FDAAFCFBDD70DE3_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_6, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_004d;
		}
	}
	{
		// currentVideoIndex++;
		int32_t L_8 = __this->___currentVideoIndex_7;
		__this->___currentVideoIndex_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		goto IL_0054;
	}

IL_004d:
	{
		// currentVideoIndex = 0;
		__this->___currentVideoIndex_7 = 0;
	}

IL_0054:
	{
		// StartNextVideo();
		VideoController_StartNextVideo_m1659969BA8DD8BEB2923DBB03F2ABD24BAFB60E3(__this, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void VideoController::ShuffleList(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_ShuffleList_m71AA42D456BB6842AE93AD0BCAA89ED918E1EBA2 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < alpha.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		// int temp = alpha[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_alpha;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_0, L_1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_2;
		// int randomIndex = Random.Range(i, alpha.Count);
		int32_t L_3 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___0_alpha;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_4, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_3, L_5, NULL);
		V_2 = L_6;
		// alpha[i] = alpha[randomIndex];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = ___0_alpha;
		int32_t L_8 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = ___0_alpha;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_9, L_10, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_7, L_8, L_11, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// alpha[randomIndex] = temp;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = ___0_alpha;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_12, L_13, L_14, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// for (int i = 0; i < alpha.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < alpha.Count; i++)
		int32_t L_16 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = ___0_alpha;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_17, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController__ctor_m103EB9AC18E394EF526FBFAD32074E59551F3F06 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___inputDevices_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDevices_6), (void*)L_0);
		// private Dictionary<string, float> rotationsForVideo = new Dictionary<string, float>();
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_1 = (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*)il2cpp_codegen_object_new(Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED(L_1, Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		__this->___rotationsForVideo_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rotationsForVideo_8), (void*)L_1);
		// public List<List<int>> videoSequences = new List<List<int>> {
		// new List<int>{0,1,4,5},
		// new List<int>{2,8,6,7},
		// new List<int>{3,9,10,11}
		// };
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_2 = (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*)il2cpp_codegen_object_new(List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2(L_2, List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_3 = L_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_4, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, 0, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, 5, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline(L_3, L_8, List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_9 = L_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_10, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_11, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, 8, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_13, 6, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, 7, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline(L_9, L_14, List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_15 = L_9;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_16, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_17, 3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, ((int32_t)9), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = L_18;
		NullCheck(L_19);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_19, ((int32_t)10), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline(L_15, L_20, List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		__this->___videoSequences_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoSequences_14), (void*)L_15);
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
// System.Void VideoController/<WaitForVideoToLoad>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForVideoToLoadU3Ed__13__ctor_m0F7193DD4AFE193A1CDC92C7203EC27ECFE34D47 (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VideoController/<WaitForVideoToLoad>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForVideoToLoadU3Ed__13_System_IDisposable_Dispose_mD1618F0C718B1ED7A6D43495BD52F376E05DAC5F (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VideoController/<WaitForVideoToLoad>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForVideoToLoadU3Ed__13_MoveNext_m1B43B15241D6AE9A57F4B326930CA6E45646F26C (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// blackScreen.SetActive(true);
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___blackScreen_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// RotatePlayer();
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_7 = V_1;
		NullCheck(L_7);
		VideoController_RotatePlayer_m2E4D5A4CDAF0A861897F16A8BCB04971DD7280F2(L_7, NULL);
		// blackScreen.SetActive(false);
		VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___blackScreen_11;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VideoController/<WaitForVideoToLoad>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForVideoToLoadU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m51E789919673ED43EE5F68741320F75E100DEDF6 (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VideoController/<WaitForVideoToLoad>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForVideoToLoadU3Ed__13_System_Collections_IEnumerator_Reset_m4F03D2EC32331300B22B487487339BBF2E2E32B2 (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForVideoToLoadU3Ed__13_System_Collections_IEnumerator_Reset_m4F03D2EC32331300B22B487487339BBF2E2E32B2_RuntimeMethod_var)));
	}
}
// System.Object VideoController/<WaitForVideoToLoad>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForVideoToLoadU3Ed__13_System_Collections_IEnumerator_get_Current_mD6EEAA489874A42C1D6B9E72DEFDBF4B6BEEF0C9 (U3CWaitForVideoToLoadU3Ed__13_t9DEF204B82DE48BD4D56506F15317B2989AB8057* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
