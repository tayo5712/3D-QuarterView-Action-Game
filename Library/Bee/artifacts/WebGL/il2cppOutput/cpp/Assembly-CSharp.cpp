#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ReadmeBE5/Section[]
struct SectionU5BU5D_t01C69851079165D4F334B0DADC97D2759FF5CD63;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35;
// BossMissile
struct BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718;
// BossRock
struct BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// Follow
struct Follow_t9EB6C12C0BC19035C9BBB04919C7E8CE8B4D97E6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Grenade
struct Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Missile
struct Missile_t90162A6942CD1312522BE2AD40697A397C004B4A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Orbit
struct Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// ReadmeBE5
struct ReadmeBE5_t4A222BDDC257D10D0E68D94B60DE5C819CFBC59D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartZone
struct StartZone_t5F1D2065E03FA89A350AFBFD90887FFD83E129A5;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302;
// rigid
struct rigid_t3F780D40A0951CDD2B25D9BD232672950A5492DC;
// Boss/<MissileShot>d__9
struct U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B;
// Boss/<RockShot>d__10
struct U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A;
// Boss/<Taunt>d__11
struct U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5;
// Boss/<Think>d__8
struct U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3;
// BossRock/<GainPower>d__6
struct U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E;
// BossRock/<GainPowerTimer>d__5
struct U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Enemy/<Attack>d__23
struct U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB;
// Enemy/<OnDamage>d__27
struct U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486;
// GameManager/<InBattle>d__44
struct U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC;
// Grenade/<Explosion>d__4
struct U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Player/<OnDamage>d__66
struct U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA;
// ReadmeBE5/Section
struct Section_t7F50F8F811C18D0482D07EEB37AD0E7B0C37C2AC;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Shop/<Talk>d__11
struct U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC;
// Weapon/<Shot>d__14
struct U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE;
// Weapon/<Swing>d__13
struct U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01D65976C9CD9FF7A318C0182FDB99BEAE05BC07;
IL2CPP_EXTERN_C String_t* _stringLiteral06D9F75935A55E6C2BE6C0E2BB3F7FC0718E1BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBBE43D8603637C8BC7497B233B7251C9EBA86E;
IL2CPP_EXTERN_C String_t* _stringLiteral12342AD759EBB3B35F861DA14C9C61EC392F413F;
IL2CPP_EXTERN_C String_t* _stringLiteral193897C0A7AE36F5DEBD303E916AB4490FDFA486;
IL2CPP_EXTERN_C String_t* _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6;
IL2CPP_EXTERN_C String_t* _stringLiteral264DABDACF6E3DE73326156D352D688001661423;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral285B5D999BB18B957C4E2E692A07A3A629685F59;
IL2CPP_EXTERN_C String_t* _stringLiteral28C775528D6D2BC81F7378DCD2D27C6E7C959F34;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral33AC51276E45A530663AECEA3890F1CB38981763;
IL2CPP_EXTERN_C String_t* _stringLiteral39993ED16CB41E8118DC703F8C71AE7D8A9846FF;
IL2CPP_EXTERN_C String_t* _stringLiteral39C8972FB856FBD6BE4919640D8EE868A2D4F540;
IL2CPP_EXTERN_C String_t* _stringLiteral445D50624499064CEC474817352A7667AF68F0CB;
IL2CPP_EXTERN_C String_t* _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73;
IL2CPP_EXTERN_C String_t* _stringLiteral52CA48F97B05A63B8BE5ED86E88EBCEEA726CB3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0B155CE21132052016F1BF60ACCCE200D612C8;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5;
IL2CPP_EXTERN_C String_t* _stringLiteral61677E5B04B0811C4D6B5EE66EFFBBB3FAC9CD97;
IL2CPP_EXTERN_C String_t* _stringLiteral63E719C60DF72872866FEB938FA72652CD17D324;
IL2CPP_EXTERN_C String_t* _stringLiteral68C6874BDEFB54DC42857E9B238335C62222E9F2;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD0385B623BE99C504AE36B4C986124898DB08401;
IL2CPP_EXTERN_C String_t* _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0;
IL2CPP_EXTERN_C String_t* _stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81;
IL2CPP_EXTERN_C String_t* _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF47F704757751555EDC32F435CFA62269BD7AC95;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_m8E6E2A53CA2682AD8983B9921D11717FB223A8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_m58B00A218A5E57EFC8B6AF09B431748AB8ACD0C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35_m9577C4DFC83E667884E77E17BEA9A325DC1A410F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_mA958DAFBF81129D3363FC9FC560F157BC3A520BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_m3A1121D828D0D04C100454F4812080CD4BACAF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExplosionU3Ed__4_System_Collections_IEnumerator_Reset_m40229AA278920FFF3DF275E55DAB3F1E0B07BEE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGainPowerTimerU3Ed__5_System_Collections_IEnumerator_Reset_m6D5EDB9495868D558CAB12818991E769787EF71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGainPowerU3Ed__6_System_Collections_IEnumerator_Reset_m54E95B81B4C81FE693345196ECFDD79F968C600C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInBattleU3Ed__44_System_Collections_IEnumerator_Reset_mF5B3729E6092044A0F1D8B3DB0364E59D2B157FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMissileShotU3Ed__9_System_Collections_IEnumerator_Reset_mD1065EEE53E275BB69DC504A1B589E6684D0E75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnDamageU3Ed__27_System_Collections_IEnumerator_Reset_m823FE523A3C84CA377529F5397D8C0DD20B236D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnDamageU3Ed__66_System_Collections_IEnumerator_Reset_m191F61E24C744D121AE3101DFA49794617DDA85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRockShotU3Ed__10_System_Collections_IEnumerator_Reset_mBAFFAAE2D93DAB54E768D8C685B37CF7FEC620F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShotU3Ed__14_System_Collections_IEnumerator_Reset_m9AC853D971A20A3586C07742AABBAD08AD495855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwingU3Ed__13_System_Collections_IEnumerator_Reset_mAEC7FC2A23CDFE6A520FFD5DD3F5AA86CB90A963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTalkU3Ed__11_System_Collections_IEnumerator_Reset_mF7C980DCE741E5FA1ED6DCE9E2E5AB22EB1ED24F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTauntU3Ed__11_System_Collections_IEnumerator_Reset_mC326DD45CBA1DF7B1B6AFA540333A6CBE36A132B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CThinkU3Ed__8_System_Collections_IEnumerator_Reset_mD471180B63C2FF9EA5B10C26D59B2E1F0017AA42_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// Boss/<MissileShot>d__9
struct U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B  : public RuntimeObject
{
	// System.Int32 Boss/<MissileShot>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<MissileShot>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Boss Boss/<MissileShot>d__9::<>4__this
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___U3CU3E4__this_2;
};

// Boss/<RockShot>d__10
struct U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A  : public RuntimeObject
{
	// System.Int32 Boss/<RockShot>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<RockShot>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Boss Boss/<RockShot>d__10::<>4__this
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___U3CU3E4__this_2;
};

// Boss/<Taunt>d__11
struct U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5  : public RuntimeObject
{
	// System.Int32 Boss/<Taunt>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<Taunt>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Boss Boss/<Taunt>d__11::<>4__this
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___U3CU3E4__this_2;
};

// Boss/<Think>d__8
struct U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3  : public RuntimeObject
{
	// System.Int32 Boss/<Think>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<Think>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Boss Boss/<Think>d__8::<>4__this
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___U3CU3E4__this_2;
};

// BossRock/<GainPower>d__6
struct U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E  : public RuntimeObject
{
	// System.Int32 BossRock/<GainPower>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BossRock/<GainPower>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BossRock BossRock/<GainPower>d__6::<>4__this
	BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* ___U3CU3E4__this_2;
};

// BossRock/<GainPowerTimer>d__5
struct U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A  : public RuntimeObject
{
	// System.Int32 BossRock/<GainPowerTimer>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BossRock/<GainPowerTimer>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BossRock BossRock/<GainPowerTimer>d__5::<>4__this
	BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* ___U3CU3E4__this_2;
};

// Enemy/<Attack>d__23
struct U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB  : public RuntimeObject
{
	// System.Int32 Enemy/<Attack>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Attack>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<Attack>d__23::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
};

// GameManager/<InBattle>d__44
struct U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC  : public RuntimeObject
{
	// System.Int32 GameManager/<InBattle>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<InBattle>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<InBattle>d__44::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// Grenade/<Explosion>d__4
struct U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED  : public RuntimeObject
{
	// System.Int32 Grenade/<Explosion>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Grenade/<Explosion>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Grenade Grenade/<Explosion>d__4::<>4__this
	Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* ___U3CU3E4__this_2;
};

// Player/<OnDamage>d__66
struct U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA  : public RuntimeObject
{
	// System.Int32 Player/<OnDamage>d__66::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<OnDamage>d__66::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Player Player/<OnDamage>d__66::<>4__this
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___U3CU3E4__this_2;
	// System.Boolean Player/<OnDamage>d__66::isBossAtk
	bool ___isBossAtk_3;
};

// ReadmeBE5/Section
struct Section_t7F50F8F811C18D0482D07EEB37AD0E7B0C37C2AC  : public RuntimeObject
{
	// System.String ReadmeBE5/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE5/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE5/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE5/Section::url
	String_t* ___url_3;
};

// Shop/<Talk>d__11
struct U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC  : public RuntimeObject
{
	// System.Int32 Shop/<Talk>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Shop/<Talk>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Shop Shop/<Talk>d__11::<>4__this
	Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* ___U3CU3E4__this_2;
};

// Weapon/<Shot>d__14
struct U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE  : public RuntimeObject
{
	// System.Int32 Weapon/<Shot>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Weapon/<Shot>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Weapon Weapon/<Shot>d__14::<>4__this
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* ___U3CU3E4__this_2;
	// UnityEngine.GameObject Weapon/<Shot>d__14::<intantBullet>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CintantBulletU3E5__2_3;
};

// Weapon/<Swing>d__13
struct U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF  : public RuntimeObject
{
	// System.Int32 Weapon/<Swing>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Weapon/<Swing>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Weapon Weapon/<Swing>d__13::<>4__this
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* ___U3CU3E4__this_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Enemy/<OnDamage>d__27
struct U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486  : public RuntimeObject
{
	// System.Int32 Enemy/<OnDamage>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<OnDamage>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<OnDamage>d__27::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
	// System.Boolean Enemy/<OnDamage>d__27::isGrenade
	bool ___isGrenade_3;
	// UnityEngine.Vector3 Enemy/<OnDamage>d__27::reactVec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___reactVec_4;
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ReadmeBE5
struct ReadmeBE5_t4A222BDDC257D10D0E68D94B60DE5C819CFBC59D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D ReadmeBE5::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String ReadmeBE5::title
	String_t* ___title_5;
	// ReadmeBE5/Section[] ReadmeBE5::sections
	SectionU5BU5D_t01C69851079165D4F334B0DADC97D2759FF5CD63* ___sections_6;
	// System.Boolean ReadmeBE5::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Bullet::damage
	int32_t ___damage_4;
	// System.Boolean Bullet::isMelee
	bool ___isMelee_5;
	// System.Boolean Bullet::isRock
	bool ___isRock_6;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Enemy/Type Enemy::enemyType
	int32_t ___enemyType_4;
	// System.Int32 Enemy::maxHealth
	int32_t ___maxHealth_5;
	// System.Int32 Enemy::curHealth
	int32_t ___curHealth_6;
	// System.Int32 Enemy::score
	int32_t ___score_7;
	// GameManager Enemy::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_8;
	// UnityEngine.GameObject[] Enemy::coins
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___coins_9;
	// UnityEngine.Transform Enemy::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_10;
	// UnityEngine.BoxCollider Enemy::meleeArea
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___meleeArea_11;
	// UnityEngine.GameObject Enemy::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_12;
	// System.Boolean Enemy::isChase
	bool ___isChase_13;
	// System.Boolean Enemy::isAttack
	bool ___isAttack_14;
	// System.Boolean Enemy::isDead
	bool ___isDead_15;
	// UnityEngine.Rigidbody Enemy::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_16;
	// UnityEngine.BoxCollider Enemy::boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider_17;
	// UnityEngine.MeshRenderer[] Enemy::meshes
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___meshes_18;
	// UnityEngine.AI.NavMeshAgent Enemy::nav
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___nav_19;
	// UnityEngine.Animator Enemy::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_20;
};

// Follow
struct Follow_t9EB6C12C0BC19035C9BBB04919C7E8CE8B4D97E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Follow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Vector3 Follow::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::menuCam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuCam_4;
	// UnityEngine.GameObject GameManager::gameCam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameCam_5;
	// Player GameManager::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_6;
	// Boss GameManager::boss
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___boss_7;
	// UnityEngine.GameObject GameManager::itemShop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemShop_8;
	// UnityEngine.GameObject GameManager::weaponShop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weaponShop_9;
	// UnityEngine.GameObject GameManager::startZone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startZone_10;
	// System.Int32 GameManager::stage
	int32_t ___stage_11;
	// System.Single GameManager::playTime
	float ___playTime_12;
	// System.Boolean GameManager::isBattle
	bool ___isBattle_13;
	// System.Int32 GameManager::enemyCntA
	int32_t ___enemyCntA_14;
	// System.Int32 GameManager::enemyCntB
	int32_t ___enemyCntB_15;
	// System.Int32 GameManager::enemyCntC
	int32_t ___enemyCntC_16;
	// System.Int32 GameManager::enemyCntD
	int32_t ___enemyCntD_17;
	// UnityEngine.Transform[] GameManager::enemyZones
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___enemyZones_18;
	// UnityEngine.GameObject[] GameManager::enemies
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemies_19;
	// System.Collections.Generic.List`1<System.Int32> GameManager::enemyList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___enemyList_20;
	// UnityEngine.GameObject GameManager::menuPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuPanel_21;
	// UnityEngine.GameObject GameManager::gamePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gamePanel_22;
	// UnityEngine.GameObject GameManager::overPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___overPanel_23;
	// UnityEngine.UI.Text GameManager::maxScoreTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___maxScoreTxt_24;
	// UnityEngine.UI.Text GameManager::scoreTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreTxt_25;
	// UnityEngine.UI.Text GameManager::stageTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___stageTxt_26;
	// UnityEngine.UI.Text GameManager::playTimeTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playTimeTxt_27;
	// UnityEngine.UI.Text GameManager::playerHealthTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playerHealthTxt_28;
	// UnityEngine.UI.Text GameManager::playerAmmoTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playerAmmoTxt_29;
	// UnityEngine.UI.Text GameManager::playerCoinTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playerCoinTxt_30;
	// UnityEngine.UI.Image GameManager::weapon1Img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___weapon1Img_31;
	// UnityEngine.UI.Image GameManager::weapon2Img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___weapon2Img_32;
	// UnityEngine.UI.Image GameManager::weapon3Img
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___weapon3Img_33;
	// UnityEngine.UI.Image GameManager::weaponRImg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___weaponRImg_34;
	// UnityEngine.UI.Text GameManager::enemyATxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___enemyATxt_35;
	// UnityEngine.UI.Text GameManager::enemyBTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___enemyBTxt_36;
	// UnityEngine.UI.Text GameManager::enemyCTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___enemyCTxt_37;
	// UnityEngine.RectTransform GameManager::bossHealthGroup
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bossHealthGroup_38;
	// UnityEngine.RectTransform GameManager::bossHealthBar
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bossHealthBar_39;
	// UnityEngine.UI.Text GameManager::curScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___curScoreText_40;
	// UnityEngine.UI.Text GameManager::bestText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bestText_41;
};

// Grenade
struct Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Grenade::meshObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshObj_4;
	// UnityEngine.GameObject Grenade::effectObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effectObj_5;
	// UnityEngine.Rigidbody Grenade::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_6;
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item/Type Item::type
	int32_t ___type_4;
	// System.Int32 Item::value
	int32_t ___value_5;
	// UnityEngine.Rigidbody Item::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_6;
	// UnityEngine.SphereCollider Item::sphereCollider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ___sphereCollider_7;
};

// Missile
struct Missile_t90162A6942CD1312522BE2AD40697A397C004B4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Orbit
struct Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Orbit::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single Orbit::orbitSpeed
	float ___orbitSpeed_5;
	// UnityEngine.Vector3 Orbit::offSet
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offSet_6;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::speed
	float ___speed_4;
	// UnityEngine.GameObject[] Player::weapons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___weapons_5;
	// System.Boolean[] Player::hasWeapons
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___hasWeapons_6;
	// UnityEngine.GameObject[] Player::grenades
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___grenades_7;
	// System.Int32 Player::hasGrenades
	int32_t ___hasGrenades_8;
	// UnityEngine.GameObject Player::grenadeObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grenadeObj_9;
	// UnityEngine.Camera Player::followCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___followCamera_10;
	// GameManager Player::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_11;
	// System.Int32 Player::ammo
	int32_t ___ammo_12;
	// System.Int32 Player::coin
	int32_t ___coin_13;
	// System.Int32 Player::health
	int32_t ___health_14;
	// System.Int32 Player::maxAmmo
	int32_t ___maxAmmo_15;
	// System.Int32 Player::maxCoin
	int32_t ___maxCoin_16;
	// System.Int32 Player::maxHealth
	int32_t ___maxHealth_17;
	// System.Int32 Player::maxHasGrenades
	int32_t ___maxHasGrenades_18;
	// System.Int32 Player::score
	int32_t ___score_19;
	// System.Single Player::hAxis
	float ___hAxis_20;
	// System.Single Player::vAxis
	float ___vAxis_21;
	// System.Boolean Player::wDown
	bool ___wDown_22;
	// System.Boolean Player::jDown
	bool ___jDown_23;
	// System.Boolean Player::fDown
	bool ___fDown_24;
	// System.Boolean Player::gDown
	bool ___gDown_25;
	// System.Boolean Player::rDown
	bool ___rDown_26;
	// System.Boolean Player::iDown
	bool ___iDown_27;
	// System.Boolean Player::sDown1
	bool ___sDown1_28;
	// System.Boolean Player::sDown2
	bool ___sDown2_29;
	// System.Boolean Player::sDown3
	bool ___sDown3_30;
	// System.Boolean Player::isJump
	bool ___isJump_31;
	// System.Boolean Player::isDodge
	bool ___isDodge_32;
	// System.Boolean Player::isSwap
	bool ___isSwap_33;
	// System.Boolean Player::isFireReady
	bool ___isFireReady_34;
	// System.Boolean Player::isReload
	bool ___isReload_35;
	// System.Boolean Player::isBorder
	bool ___isBorder_36;
	// System.Boolean Player::isDamage
	bool ___isDamage_37;
	// System.Boolean Player::isShop
	bool ___isShop_38;
	// System.Boolean Player::isDead
	bool ___isDead_39;
	// UnityEngine.Vector3 Player::moveVec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveVec_40;
	// UnityEngine.Vector3 Player::dodgeVec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dodgeVec_41;
	// UnityEngine.Animator Player::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_42;
	// UnityEngine.Rigidbody Player::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_43;
	// UnityEngine.MeshRenderer[] Player::meshs
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___meshs_44;
	// UnityEngine.GameObject Player::nearObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nearObject_45;
	// Weapon Player::equipWeapon
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* ___equipWeapon_46;
	// System.Int32 Player::equipWeaponIndex
	int32_t ___equipWeaponIndex_47;
	// System.Single Player::fireDelay
	float ___fireDelay_48;
};

// Shop
struct Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Shop::uiGroup
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___uiGroup_4;
	// UnityEngine.Animator Shop::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
	// UnityEngine.GameObject[] Shop::itemObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___itemObj_6;
	// System.Int32[] Shop::itemPrice
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemPrice_7;
	// UnityEngine.Transform[] Shop::itemPos
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___itemPos_8;
	// System.String[] Shop::talkData
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___talkData_9;
	// UnityEngine.UI.Text Shop::talkText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___talkText_10;
	// Player Shop::enterPlayer
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___enterPlayer_11;
};

// StartZone
struct StartZone_t5F1D2065E03FA89A350AFBFD90887FFD83E129A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager StartZone::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Weapon/Type Weapon::type
	int32_t ___type_4;
	// System.Int32 Weapon::damage
	int32_t ___damage_5;
	// System.Single Weapon::rate
	float ___rate_6;
	// System.Int32 Weapon::maxAmmo
	int32_t ___maxAmmo_7;
	// System.Int32 Weapon::curAmmo
	int32_t ___curAmmo_8;
	// UnityEngine.BoxCollider Weapon::meleeArea
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___meleeArea_9;
	// UnityEngine.TrailRenderer Weapon::trailEffect
	TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* ___trailEffect_10;
	// UnityEngine.Transform Weapon::bulletPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletPos_11;
	// UnityEngine.GameObject Weapon::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_12;
	// UnityEngine.Transform Weapon::bulletCasePos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletCasePos_13;
	// UnityEngine.GameObject Weapon::bulletCase
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletCase_14;
};

// rigid
struct rigid_t3F780D40A0951CDD2B25D9BD232672950A5492DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// UnityEngine.GameObject Boss::missile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missile_21;
	// UnityEngine.Transform Boss::missilePortA
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___missilePortA_22;
	// UnityEngine.Transform Boss::missilePortB
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___missilePortB_23;
	// System.Boolean Boss::isLook
	bool ___isLook_24;
	// UnityEngine.Vector3 Boss::lookVec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookVec_25;
	// UnityEngine.Vector3 Boss::tauntVec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tauntVec_26;
};

// BossMissile
struct BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718  : public Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344
{
	// UnityEngine.Transform BossMissile::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
	// UnityEngine.AI.NavMeshAgent BossMissile::nav
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___nav_8;
};

// BossRock
struct BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF  : public Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344
{
	// UnityEngine.Rigidbody BossRock::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_7;
	// System.Single BossRock::angularPower
	float ___angularPower_8;
	// System.Single BossRock::scaleValue
	float ___scaleValue_9;
	// System.Boolean BossRock::isShoot
	bool ___isShoot_10;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Boss::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Void Boss/<Think>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThinkU3Ed__8__ctor_m81C27CAC9841E03FDEF95E5A1E1B6E7D7BEBA0A4 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Boss/<MissileShot>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMissileShotU3Ed__9__ctor_m922C40F6AC2600B626A4412369803B900F16D70D (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Boss/<RockShot>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRockShotU3Ed__10__ctor_mC1DD5AE8F278768E0A702DD121F9B3E3D9781525 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Boss/<Taunt>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTauntU3Ed__11__ctor_m73EFB4E949A9423AFA8B4C718B9197E350B9415E (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Boss::MissileShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_MissileShot_m814A90C79DE23CE78E120B71A14B7FAEFBBA310D (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Boss::RockShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_RockShot_m953444476A16664F484657D7BA28E9650DDE79C6 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Boss::Taunt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_Taunt_mDA0BE7076F3F5239CDE730688ED7ECFEE5BD569D (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<BossMissile>()
inline BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BossRock::GainPowerTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BossRock_GainPowerTimer_m24F37AE875C2BDE1EFAE10F26471187211002A9A (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BossRock::GainPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BossRock_GainPower_mE5069C09C3C48116FA34893860D3BA446CE2978C (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) ;
// System.Void BossRock/<GainPowerTimer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerTimerU3Ed__5__ctor_m7BB68B148FBDE1267A3D4DD1E2399470A68B656A (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BossRock/<GainPower>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerU3Ed__6__ctor_m648EE55A67BF444E44E27EB98467B97A1BB8C7B7 (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_m25687FC02567C1138B9588148AA2578764CD8424 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m37267A9E66DD42FF73ABA177FD2A25D87D6301A6 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void Enemy/<Attack>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23__ctor_m433C9189529AA5397239AF9E4158E16174DEF3FD (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Enemy::Targeting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Targeting_mCE3EFCBE054AAB4CB9BE979849A91C143362FEFC (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void Enemy::FreezeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FreezeVelocity_m87BB076C4A17CC3FA68ABB059E77311EA46C72B3 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Weapon>()
inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* Component_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_m58B00A218A5E57EFC8B6AF09B431748AB8ACD0C6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::OnDamage(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_OnDamage_mD831F6C9DEDC523EA5D6A0D57666DF94AEACE055 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___reactVec0, bool ___isGrenade1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Bullet>()
inline Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Enemy/<OnDamage>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__27__ctor_mC5FD34C9AF992B9ED81C9F9C6CF4E8C4CCCC9098 (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::InBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_InBattle_mA121B7070BA2B2A0E72504A413940725A0020C9B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<InBattle>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInBattleU3Ed__44__ctor_m82E7610CC6BF38194217F0E33B7D8D6F21CD43C7 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Boss>()
inline Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* GameObject_GetComponent_TisBoss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35_m9577C4DFC83E667884E77E17BEA9A325DC1A410F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void GameManager::StageEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageEnd_mAB55AA5E29B8682678A7CDA3FB98DAA77D7375E9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Grenade::Explosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Grenade_Explosion_mBF32F8E5862C16F1E00D8FC005D631D23536DF9B (Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* __this, const RuntimeMethod* method) ;
// System.Void Grenade/<Explosion>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplosionU3Ed__4__ctor_m2A867E2814C1431F992FA82E5D49ED3B06C5EEAA (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Enemy::HitByGrenade(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HitByGrenade_m1A79795FC8992A52D584884DF45ABCEC0B0939DD (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPos0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void Player::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetInput_mEF896C3364A1BF3C0075A72544333473EBC87496 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Turn_mA794509CBADE09352CC96840F495562A666E1DD7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Attack_mAB0DACE399FC87488FC13DC026FC6CB8B7FD86F2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Grenade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Grenade_m6C48146F04423459E3519A7C265C6F7948DD1F2A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_m19EAF87FA8C3AA9E31DF98ABA41A60632947C14B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Dodge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Dodge_m5011BE8D0C3855E285E107079EA267C676D85321 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Interaction_m47741A4E0A887A5D383F02D2B42CDA087F023BFA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Swap_m87187362D955B6C45D73442301CA5EC37238B09B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Weapon::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Use_m35B572FC1E2B9563907D42A66906B81C5295642C (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Weapon>()
inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* GameObject_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_mA958DAFBF81129D3363FC9FC560F157BC3A520BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Item>()
inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Shop>()
inline Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Shop::Enter(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Enter_mDE9F264522CE67AD0D6254471A6F3B861F9F7FD5 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void Player::StopToWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StopToWall_mAE32F205EA627749839513D56003874A58EAA9E0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::FreezeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FreezeRotation_m138DB64BDC75B87AEA968C87A82B3C45349D59C9 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Item>()
inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* Component_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_m8E6E2A53CA2682AD8983B9921D11717FB223A8FD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Player::OnDamage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_OnDamage_m9F5957D292D8623F55F0B480CED789CF2BA7921C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___isBossAtk0, const RuntimeMethod* method) ;
// System.Void Player/<OnDamage>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__66__ctor_m56CDC43D66F711B2B178567D7AB7786F94BE8DF2 (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Shop::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Exit_m9C7786793607C2DA829ABFEED1AFAB9E3FF8CFDF (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void Player::OnDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDie_m5B6904B1766BFB1A2C31CE7DAA7B6441CB02C954 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Shop::Talk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shop_Talk_mB81E2FCACFFBAC56AE42FA359067AC9F5DBB5AC2 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void Shop/<Talk>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__11__ctor_mD6B7999F64277240B8B06E920B8A27B645F18023 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager::StageStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageStart_m30DCC674CE251E720F27B419FC5AA77F7FA3CEDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void Weapon/<Swing>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwingU3Ed__13__ctor_mF09EC7A12C0E90ABCEA34BDDF1EE66E34D6F5539 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Weapon/<Shot>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__14__ctor_m8C40C641D2E6BEF43443B60FA315747E21AD7962 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void ReadmeBE5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE5__ctor_m71C6FFD77D5ADF5FC565367667B9BB191A55267F (ReadmeBE5_t4A222BDDC257D10D0E68D94B60DE5C819CFBC59D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ReadmeBE5/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m0541DE4FAA7D2E7B756EA5E5C610248FE5CE7DA7 (Section_t7F50F8F811C18D0482D07EEB37AD0E7B0C37C2AC* __this, const RuntimeMethod* method) 
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
// System.Void rigid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rigid_Start_m379E3CB4F5732DBC2DCCC53BA4626494B8A84D38 (rigid_t3F780D40A0951CDD2B25D9BD232672950A5492DC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rigid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rigid_Update_m9E05302F80D32A92A2C6C9AF3D693F3078F394BC (rigid_t3F780D40A0951CDD2B25D9BD232672950A5492DC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rigid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rigid__ctor_m5C67628CC14D91B27946D6E2571293774ECCD94C (rigid_t3F780D40A0951CDD2B25D9BD232672950A5492DC* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Boss::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Awake_mEF74D6D04EADA66FB78DE4C392525562C1930F2B (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___rigid_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___rigid_16), (void*)L_0);
		// boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1;
		L_1 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___boxCollider_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___boxCollider_17), (void*)L_1);
		// meshes = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_2;
		L_2 = Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243(__this, Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___meshes_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___meshes_18), (void*)L_2);
		// nav = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3;
		L_3 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___nav_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___nav_19), (void*)L_3);
		// anim = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___anim_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___anim_20), (void*)L_4);
		// nav.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_5 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___nav_19;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_5, (bool)1, NULL);
		// StartCoroutine(Think());
		RuntimeObject* L_6;
		L_6 = Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Boss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Update_m1E41F05CD2AB4872C884423060661BF3EDDAAFB8 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (isDead)
		bool L_0 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___isDead_15;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (isLook)
		bool L_1 = __this->___isLook_24;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// float h = Input.GetAxisRaw("Horizontal");
		float L_2;
		L_2 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_2;
		// float v = Input.GetAxisRaw("Vertical");
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_3;
		// lookVec = new Vector3(h, 0, v) * 5f; // ?????? ???????? ???? ????? ????
		float L_4 = V_0;
		float L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_4, (0.0f), L_5, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (5.0f), NULL);
		__this->___lookVec_25 = L_7;
		// transform.LookAt(target.position + lookVec);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___target_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___lookVec_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_8, L_12, NULL);
		return;
	}

IL_006b:
	{
		// nav.SetDestination(tauntVec); // ???????? ?? ?? ??????????? ???????? ???? ???
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_13 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___nav_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___tauntVec_26;
		bool L_15;
		L_15 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* L_0 = (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3*)il2cpp_codegen_object_new(U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3_il2cpp_TypeInfo_var);
		U3CThinkU3Ed__8__ctor_m81C27CAC9841E03FDEF95E5A1E1B6E7D7BEBA0A4(L_0, 0, NULL);
		U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::MissileShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_MissileShot_m814A90C79DE23CE78E120B71A14B7FAEFBBA310D (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* L_0 = (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B*)il2cpp_codegen_object_new(U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B_il2cpp_TypeInfo_var);
		U3CMissileShotU3Ed__9__ctor_m922C40F6AC2600B626A4412369803B900F16D70D(L_0, 0, NULL);
		U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::RockShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_RockShot_m953444476A16664F484657D7BA28E9650DDE79C6 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* L_0 = (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A*)il2cpp_codegen_object_new(U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A_il2cpp_TypeInfo_var);
		U3CRockShotU3Ed__10__ctor_mC1DD5AE8F278768E0A702DD121F9B3E3D9781525(L_0, 0, NULL);
		U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::Taunt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_Taunt_mDA0BE7076F3F5239CDE730688ED7ECFEE5BD569D (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* L_0 = (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5*)il2cpp_codegen_object_new(U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5_il2cpp_TypeInfo_var);
		U3CTauntU3Ed__11__ctor_m73EFB4E949A9423AFA8B4C718B9197E350B9415E(L_0, 0, NULL);
		U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss__ctor_m000CFB50E293CE96995ADD0E5395D4B830DF7EAF (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	{
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
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
// System.Void Boss/<Think>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThinkU3Ed__8__ctor_m81C27CAC9841E03FDEF95E5A1E1B6E7D7BEBA0A4 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Boss/<Think>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThinkU3Ed__8_System_IDisposable_Dispose_m5FBE8C7A8A91E07D86B05676B53BE3BB7B85F7CF (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Boss/<Think>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CThinkU3Ed__8_MoveNext_m15A532999D5E43B0609C4B88F4146E85BE5FF886 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int ranAction = Random.Range(0, 5);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 5, NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0062:
	{
		// StartCoroutine(MissileShot());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_7 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = Boss_MissileShot_m814A90C79DE23CE78E120B71A14B7FAEFBBA310D(L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		// break;
		goto IL_008d;
	}

IL_0071:
	{
		// StartCoroutine(RockShot());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_11 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Boss_RockShot_m953444476A16664F484657D7BA28E9650DDE79C6(L_12, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
		// break;
		goto IL_008d;
	}

IL_0080:
	{
		// StartCoroutine(Taunt());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_15 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = Boss_Taunt_mDA0BE7076F3F5239CDE730688ED7ECFEE5BD569D(L_16, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
		L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_15, L_17, NULL);
	}

IL_008d:
	{
		// }
		return (bool)0;
	}
}
// System.Object Boss/<Think>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CThinkU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48E1ECAF440FE81598F2D41EF241AD7C71AA73A5 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Boss/<Think>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThinkU3Ed__8_System_Collections_IEnumerator_Reset_mD471180B63C2FF9EA5B10C26D59B2E1F0017AA42 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CThinkU3Ed__8_System_Collections_IEnumerator_Reset_mD471180B63C2FF9EA5B10C26D59B2E1F0017AA42_RuntimeMethod_var)));
	}
}
// System.Object Boss/<Think>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CThinkU3Ed__8_System_Collections_IEnumerator_get_Current_m8DC98C489CDE2239D62F3B6D778F1DB2480D1172 (U3CThinkU3Ed__8_tEC187F6A3984E9BA520153AD836229C9FAED52F3* __this, const RuntimeMethod* method) 
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
// System.Void Boss/<MissileShot>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMissileShotU3Ed__9__ctor_m922C40F6AC2600B626A4412369803B900F16D70D (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Boss/<MissileShot>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMissileShotU3Ed__9_System_IDisposable_Dispose_m9EFF60C345E438D4968CFE2FDCD4B5765E6A3919 (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Boss/<MissileShot>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMissileShotU3Ed__9_MoveNext_m22C8F9D41CD71560EEF393E5DBBB7B400CC824A7 (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CA48F97B05A63B8BE5ED86E88EBCEEA726CB3C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* V_1 = NULL;
	BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_00b4;
			}
			case 3:
			{
				goto IL_0110;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetTrigger("doShot");
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_3 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_3)->___anim_20;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral52CA48F97B05A63B8BE5ED86E88EBCEEA726CB3C, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject instantMissileA = Instantiate(missile, missilePortA.position, missilePortA.rotation);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___missile_21;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_8 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___missilePortA_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___missilePortA_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_10, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// BossMissile bossMissileA = instantMissileA.GetComponent<BossMissile>(); // ????? ?????????? ??????? ????? ?????????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14;
		BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* L_16;
		L_16 = GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617(L_15, GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617_RuntimeMethod_var);
		V_2 = L_16;
		// Destroy(instantMissileA, 6f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_15, (6.0f), NULL);
		// bossMissileA.target = target;
		BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* L_17 = V_2;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_18)->___target_10;
		L_17->___target_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___target_7), (void*)L_19);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (0.300000012f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject instantMissileB = Instantiate(missile, missilePortB.position, missilePortB.rotation);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_21 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___missile_21;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_23 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___missilePortB_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_26 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = L_26->___missilePortB_23;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_25, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// BossMissile bossMissileB = instantMissileB.GetComponent<BossMissile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29;
		BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* L_31;
		L_31 = GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617(L_30, GameObject_GetComponent_TisBossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718_m81B494C4D27569D7224327E5B7CFC5D604F8D617_RuntimeMethod_var);
		// bossMissileB.target = target;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_32 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_32)->___target_10;
		L_31->___target_7 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___target_7), (void*)L_33);
		// Destroy(instantMissileB, 6f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_30, (6.0f), NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0110:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(Think());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_35 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2(L_36, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_35, L_37, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<MissileShot>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMissileShotU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2B0AE0F3C75E0193D778EF2FE231CDB88569DB2 (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Boss/<MissileShot>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMissileShotU3Ed__9_System_Collections_IEnumerator_Reset_mD1065EEE53E275BB69DC504A1B589E6684D0E75B (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMissileShotU3Ed__9_System_Collections_IEnumerator_Reset_mD1065EEE53E275BB69DC504A1B589E6684D0E75B_RuntimeMethod_var)));
	}
}
// System.Object Boss/<MissileShot>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMissileShotU3Ed__9_System_Collections_IEnumerator_get_Current_mF9F6AA5C68C5D438242BB38335B08D0BF2FC3A55 (U3CMissileShotU3Ed__9_tF86DF66F491E692C2952EDCDBF5B7EF598E7045B* __this, const RuntimeMethod* method) 
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
// System.Void Boss/<RockShot>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRockShotU3Ed__10__ctor_mC1DD5AE8F278768E0A702DD121F9B3E3D9781525 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Boss/<RockShot>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRockShotU3Ed__10_System_IDisposable_Dispose_m9F04406CD6F9D72AE0287ABA2C662DD55A7EEF5D (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Boss/<RockShot>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRockShotU3Ed__10_MoveNext_mA313500828269A1FE9B81DD0E84AD69AAB32F740 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61677E5B04B0811C4D6B5EE66EFFBBB3FAC9CD97);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isLook = false; // ?? ???? ???? ????? ????
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_4 = V_1;
		L_4->___isLook_24 = (bool)0;
		// anim.SetTrigger("doBigShot");
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_5 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_5)->___anim_20;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral61677E5B04B0811C4D6B5EE66EFFBBB3FAC9CD97, NULL);
		// Instantiate(bullet, transform.position, transform.rotation);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_7 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_7)->___bullet_12;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_11, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0070:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isLook = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_17 = V_1;
		L_17->___isLook_24 = (bool)1;
		// StartCoroutine(Think());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_18 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2(L_19, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_18, L_20, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<RockShot>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRockShotU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m60CB53849AF8029EA0E60B5245BB874F74846FE8 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Boss/<RockShot>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRockShotU3Ed__10_System_Collections_IEnumerator_Reset_mBAFFAAE2D93DAB54E768D8C685B37CF7FEC620F1 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRockShotU3Ed__10_System_Collections_IEnumerator_Reset_mBAFFAAE2D93DAB54E768D8C685B37CF7FEC620F1_RuntimeMethod_var)));
	}
}
// System.Object Boss/<RockShot>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRockShotU3Ed__10_System_Collections_IEnumerator_get_Current_mF1BB1A3FE951678CA46DFB86DA1AD032346137E1 (U3CRockShotU3Ed__10_tE1B2BB70F855AC174E846336E1870C206BEE0F0A* __this, const RuntimeMethod* method) 
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
// System.Void Boss/<Taunt>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTauntU3Ed__11__ctor_m73EFB4E949A9423AFA8B4C718B9197E350B9415E (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Boss/<Taunt>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTauntU3Ed__11_System_IDisposable_Dispose_mDC6F9679DE3512C2C0C13F503786C2307C7946B1 (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Boss/<Taunt>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTauntU3Ed__11_MoveNext_mBE1E4B984E0836B75A7CC39FC95770AB1176ECB1 (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39993ED16CB41E8118DC703F8C71AE7D8A9846FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_00bd;
			}
			case 3:
			{
				goto IL_00e9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// tauntVec = target.position + lookVec;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_3 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_4)->___target_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___lookVec_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		L_3->___tauntVec_26 = L_9;
		// isLook = false;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_10 = V_1;
		L_10->___isLook_24 = (bool)0;
		// nav.isStopped = false;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_11 = V_1;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_12 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_11)->___nav_19;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_12, (bool)0, NULL);
		// boxCollider.enabled = false; // ?????? ??????? ????? ???? ???? ????? ?????? ???????? ????
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_13 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_14 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_13)->___boxCollider_17;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_14, (bool)0, NULL);
		// anim.SetTrigger("doTaunt");
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_15 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_15)->___anim_20;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_16, _stringLiteral39993ED16CB41E8118DC703F8C71AE7D8A9846FF, NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0091:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_18 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_19 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_18)->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_19, (bool)1, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00bd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = false;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_21 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_22 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_21)->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_22, (bool)0, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isLook = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_24 = V_1;
		L_24->___isLook_24 = (bool)1;
		// nav.isStopped = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_25 = V_1;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_26 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_25)->___nav_19;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_26, (bool)1, NULL);
		// boxCollider.enabled = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_27 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_28 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_27)->___boxCollider_17;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_28, (bool)1, NULL);
		// StartCoroutine(Think());
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_29 = V_1;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_30 = V_1;
		RuntimeObject* L_31;
		L_31 = Boss_Think_m35B2E92136E9BD2632418DDACAEAD2E8A66A05E2(L_30, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_29, L_31, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<Taunt>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTauntU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1BA17CF243BA78D0140311E6331B494E62CA407A (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Boss/<Taunt>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTauntU3Ed__11_System_Collections_IEnumerator_Reset_mC326DD45CBA1DF7B1B6AFA540333A6CBE36A132B (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTauntU3Ed__11_System_Collections_IEnumerator_Reset_mC326DD45CBA1DF7B1B6AFA540333A6CBE36A132B_RuntimeMethod_var)));
	}
}
// System.Object Boss/<Taunt>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTauntU3Ed__11_System_Collections_IEnumerator_get_Current_mDAFE2ACD31BC8F12408AAB3420B4A45B42A2D318 (U3CTauntU3Ed__11_tE42B959B19385C5B11AC2DFF8AF531C79131F3D5* __this, const RuntimeMethod* method) 
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
// System.Void BossMissile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossMissile_Awake_m0168D19A44D6D94841FDF7A190BF4464B6C26D57 (BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nav = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___nav_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nav_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void BossMissile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossMissile_Update_m7C3933A4A9A15D54651B1470A15DC4BA35D0556B (BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* __this, const RuntimeMethod* method) 
{
	{
		// nav.SetDestination(target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___nav_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void BossMissile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossMissile__ctor_m8E9BB92C812E369C6F4376B41205BBD863AB6A44 (BossMissile_tCCF914731B8943107E0EA9DD8A136FD725B41718* __this, const RuntimeMethod* method) 
{
	{
		Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA(__this, NULL);
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
// System.Void BossRock::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossRock_Awake_m749216920326D90B8ECD37B2FB3FE596792A1134 (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_7), (void*)L_0);
		// StartCoroutine(GainPowerTimer());
		RuntimeObject* L_1;
		L_1 = BossRock_GainPowerTimer_m24F37AE875C2BDE1EFAE10F26471187211002A9A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// StartCoroutine(GainPower());
		RuntimeObject* L_3;
		L_3 = BossRock_GainPower_mE5069C09C3C48116FA34893860D3BA446CE2978C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BossRock::GainPowerTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BossRock_GainPowerTimer_m24F37AE875C2BDE1EFAE10F26471187211002A9A (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* L_0 = (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A*)il2cpp_codegen_object_new(U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A_il2cpp_TypeInfo_var);
		U3CGainPowerTimerU3Ed__5__ctor_m7BB68B148FBDE1267A3D4DD1E2399470A68B656A(L_0, 0, NULL);
		U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BossRock::GainPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BossRock_GainPower_mE5069C09C3C48116FA34893860D3BA446CE2978C (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* L_0 = (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E*)il2cpp_codegen_object_new(U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E_il2cpp_TypeInfo_var);
		U3CGainPowerU3Ed__6__ctor_m648EE55A67BF444E44E27EB98467B97A1BB8C7B7(L_0, 0, NULL);
		U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BossRock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossRock__ctor_m4826138AC62FCD4EF581A2D09457E79419D968E1 (BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* __this, const RuntimeMethod* method) 
{
	{
		// float angularPower = 2;
		__this->___angularPower_8 = (2.0f);
		// float scaleValue = 0.1f;
		__this->___scaleValue_9 = (0.100000001f);
		Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA(__this, NULL);
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
// System.Void BossRock/<GainPowerTimer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerTimerU3Ed__5__ctor_m7BB68B148FBDE1267A3D4DD1E2399470A68B656A (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BossRock/<GainPowerTimer>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerTimerU3Ed__5_System_IDisposable_Dispose_mBC94A1066EFD136DB99F3A9509F7C482E81AB89A (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BossRock/<GainPowerTimer>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGainPowerTimerU3Ed__5_MoveNext_m6B96B798ADB481B0058FFA68A994EEF18C455902 (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.20000005f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShoot = true;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_5 = V_1;
		L_5->___isShoot_10 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object BossRock/<GainPowerTimer>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGainPowerTimerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65D7216C5B78A7E98BB246025EE830A05774325C (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BossRock/<GainPowerTimer>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerTimerU3Ed__5_System_Collections_IEnumerator_Reset_m6D5EDB9495868D558CAB12818991E769787EF71B (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGainPowerTimerU3Ed__5_System_Collections_IEnumerator_Reset_m6D5EDB9495868D558CAB12818991E769787EF71B_RuntimeMethod_var)));
	}
}
// System.Object BossRock/<GainPowerTimer>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGainPowerTimerU3Ed__5_System_Collections_IEnumerator_get_Current_m554084589953184E831684120439ABDC0723A80D (U3CGainPowerTimerU3Ed__5_t0A90110C8BC52BB7EFD2E5DEBB6C802478EF632A* __this, const RuntimeMethod* method) 
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
// System.Void BossRock/<GainPower>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerU3Ed__6__ctor_m648EE55A67BF444E44E27EB98467B97A1BB8C7B7 (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BossRock/<GainPower>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerU3Ed__6_System_IDisposable_Dispose_m2EDF3E5882CD3320F6804019B37F025C8D3B6CEC (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BossRock/<GainPower>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGainPowerU3Ed__6_MoveNext_mD5C360DEA9C6B5F6EC7F94B0045D0AB853F16882 (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0091;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0098;
	}

IL_0020:
	{
		// angularPower += 0.02f;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_4 = V_1;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_5 = V_1;
		float L_6 = L_5->___angularPower_8;
		L_4->___angularPower_8 = ((float)il2cpp_codegen_add(L_6, (0.0199999996f)));
		// scaleValue += 0.002f;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_7 = V_1;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_8 = V_1;
		float L_9 = L_8->___scaleValue_9;
		L_7->___scaleValue_9 = ((float)il2cpp_codegen_add(L_9, (0.00200000009f)));
		// transform.localScale = Vector3.one * scaleValue; // While?????? ?????? ???? ???????, ???????? ????
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_10 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_13 = V_1;
		float L_14 = L_13->___scaleValue_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_14, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_15, NULL);
		// rigid.AddTorque(transform.right * angularPower, ForceMode.Acceleration);
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_16 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = L_16->___rigid_7;
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_19, NULL);
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_21 = V_1;
		float L_22 = L_21->___angularPower_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_17, L_23, 5, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0091:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0098:
	{
		// while (!isShoot)
		BossRock_t0A823C85259DE4FD6CA66A54822C7031C2AC8CBF* L_24 = V_1;
		bool L_25 = L_24->___isShoot_10;
		if (!L_25)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object BossRock/<GainPower>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGainPowerU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BB7024B84EEEC2E6A28613B608D02976F8D4D3C (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BossRock/<GainPower>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGainPowerU3Ed__6_System_Collections_IEnumerator_Reset_m54E95B81B4C81FE693345196ECFDD79F968C600C (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGainPowerU3Ed__6_System_Collections_IEnumerator_Reset_m54E95B81B4C81FE693345196ECFDD79F968C600C_RuntimeMethod_var)));
	}
}
// System.Object BossRock/<GainPower>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGainPowerU3Ed__6_System_Collections_IEnumerator_get_Current_m0CC815C5C391B1C5A4DF1328C2B922FA15B86E0B (U3CGainPowerU3Ed__6_t1DEDDE801E9452EECCD2E765E59AB9FBDA00131E* __this, const RuntimeMethod* method) 
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
// System.Void Bullet::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnCollisionEnter_m72CBCABC68C9C953EF4E3CB20C4E083FDB541E54 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isRock && collision.gameObject.tag == "Floor")
		bool L_0 = __this->___isRock_6;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(gameObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_5, (3.0f), NULL);
		return;
	}

IL_0030:
	{
		// else if (collision.gameObject.tag == "Wall")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_6, NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Bullet::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter_m0EFCBDB1D5C31549CEA14C46C869D823DE1D18D8 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isMelee)
		bool L_0 = __this->___isMelee_5;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		// if (other.gameObject.tag == "Enemy" || other.gameObject.tag == "Wall")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
	}

IL_0041:
	{
		// if (other.gameObject.tag == "Floor")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		String_t* L_12;
		L_12 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		// Destroy(gameObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_14, (3.0f), NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445D50624499064CEC474817352A7667AF68F0CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_16), (void*)L_0);
		// boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1;
		L_1 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___boxCollider_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_17), (void*)L_1);
		// meshes = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_2;
		L_2 = Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243(__this, Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		__this->___meshes_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshes_18), (void*)L_2);
		// nav = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3;
		L_3 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___nav_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nav_19), (void*)L_3);
		// anim = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___anim_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_20), (void*)L_4);
		// if (enemyType != Type.D)
		int32_t L_5 = __this->___enemyType_4;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0055;
		}
	}
	{
		// Invoke("ChaseStart", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral445D50624499064CEC474817352A7667AF68F0CB, (2.0f), NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Enemy::ChaseStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ChaseStart_m0EBBFF3A66B9FE80A5B262D9EF865E1DD5C7E1E4 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isChase = true;
		__this->___isChase_13 = (bool)1;
		// anim.SetBool("isWalk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_20;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// if(nav.enabled && enemyType != Type.D) {
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___nav_19;
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_2 = __this->___enemyType_4;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0041;
		}
	}
	{
		// nav.SetDestination(target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->___nav_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		bool L_6;
		L_6 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_3, L_5, NULL);
		// nav.isStopped = !isChase; // ???? ?????? ?????? ?????? ????
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_7 = __this->___nav_19;
		bool L_8 = __this->___isChase_13;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_7, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Enemy::FreezeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FreezeVelocity_m87BB076C4A17CC3FA68ABB059E77311EA46C72B3 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// if (isChase)
		bool L_0 = __this->___isChase_13;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// rigid.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// rigid.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_3, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Enemy::Targeting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Targeting_mCE3EFCBE054AAB4CB9BE979849A91C143362FEFC (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if(!isDead && enemyType != Type.D)
		bool L_0 = __this->___isDead_15;
		if (L_0)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_1 = __this->___enemyType_4;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_00ae;
		}
	}
	{
		// float targetRadius = 0;
		V_0 = (0.0f);
		// float targetRange = 0;
		V_1 = (0.0f);
		// switch (enemyType)
		int32_t L_2 = __this->___enemyType_4;
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003e:
	{
		// targetRadius = 1.5f;
		V_0 = (1.5f);
		// targetRange = 3f;
		V_1 = (3.0f);
		// break;
		goto IL_0066;
	}

IL_004c:
	{
		// targetRadius = 1f;
		V_0 = (1.0f);
		// targetRange = 6f;
		V_1 = (6.0f);
		// break;
		goto IL_0066;
	}

IL_005a:
	{
		// targetRadius = 0.5f;
		V_0 = (0.5f);
		// targetRange = 25f;
		V_1 = (25.0f);
	}

IL_0066:
	{
		// RaycastHit[] rayHits = Physics.SphereCastAll(transform.position, targetRadius, transform.forward, targetRange, LayerMask.GetMask("Player"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13;
		L_13 = Physics_SphereCastAll_m25687FC02567C1138B9588148AA2578764CD8424(L_5, L_6, L_8, L_9, L_12, NULL);
		// if (rayHits.Length > 0 && !isAttack) // rayHit ?????? ??????? ?????? ???? ???? ????
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_00ae;
		}
	}
	{
		bool L_14 = __this->___isAttack_14;
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// StartCoroutine(Attack());
		RuntimeObject* L_15;
		L_15 = Enemy_Attack_m37267A9E66DD42FF73ABA177FD2A25D87D6301A6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m37267A9E66DD42FF73ABA177FD2A25D87D6301A6 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* L_0 = (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB*)il2cpp_codegen_object_new(U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__23__ctor_m433C9189529AA5397239AF9E4158E16174DEF3FD(L_0, 0, NULL);
		U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_mC96E5B789335D23FC34546AD504EEBB0F054490B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// Targeting();
		Enemy_Targeting_mCE3EFCBE054AAB4CB9BE979849A91C143362FEFC(__this, NULL);
		// FreezeVelocity();
		Enemy_FreezeVelocity_m87BB076C4A17CC3FA68ABB059E77311EA46C72B3(__this, NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter_m46AB50D33A3CEA54D6DF6FCF4A5AAFE0C7A60B4B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_m58B00A218A5E57EFC8B6AF09B431748AB8ACD0C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4);
		s_Il2CppMethodInitialized = true;
	}
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!isDead)
		bool L_0 = __this->___isDead_15;
		if (L_0)
		{
			goto IL_00ba;
		}
	}
	{
		// if (other.tag == "Melee")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4, NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		// Weapon weapon = other.GetComponent<Weapon>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_5;
		L_5 = Component_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_m58B00A218A5E57EFC8B6AF09B431748AB8ACD0C6(L_4, Component_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_m58B00A218A5E57EFC8B6AF09B431748AB8ACD0C6_RuntimeMethod_var);
		V_0 = L_5;
		// curHealth -= weapon.damage;
		int32_t L_6 = __this->___curHealth_6;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_7 = V_0;
		int32_t L_8 = L_7->___damage_5;
		__this->___curHealth_6 = ((int32_t)il2cpp_codegen_subtract(L_6, L_8));
		// Vector3 reactVec = transform.position - other.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_13, NULL);
		V_1 = L_14;
		// StartCoroutine(OnDamage(reactVec, false));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		RuntimeObject* L_16;
		L_16 = Enemy_OnDamage_mD831F6C9DEDC523EA5D6A0D57666DF94AEACE055(__this, L_15, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
		return;
	}

IL_0063:
	{
		// else if (other.tag == "Bullet")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = ___other0;
		String_t* L_19;
		L_19 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_18, NULL);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		// Bullet bullet = other.GetComponent<Bullet>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = ___other0;
		Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* L_22;
		L_22 = Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165(L_21, Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165_RuntimeMethod_var);
		V_2 = L_22;
		// curHealth -= bullet.damage;
		int32_t L_23 = __this->___curHealth_6;
		Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* L_24 = V_2;
		int32_t L_25 = L_24->___damage_4;
		__this->___curHealth_6 = ((int32_t)il2cpp_codegen_subtract(L_23, L_25));
		// Vector3 reactVec = transform.position - other.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_30, NULL);
		V_3 = L_31;
		// StartCoroutine(OnDamage(reactVec, false));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		RuntimeObject* L_33;
		L_33 = Enemy_OnDamage_mD831F6C9DEDC523EA5D6A0D57666DF94AEACE055(__this, L_32, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_34;
		L_34 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_33, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Enemy::HitByGrenade(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HitByGrenade_m1A79795FC8992A52D584884DF45ABCEC0B0939DD (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPos0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// curHealth -= 200;
		int32_t L_0 = __this->___curHealth_6;
		__this->___curHealth_6 = ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)200)));
		// Vector3 reactVec = transform.position - explosionPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___explosionPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// StartCoroutine(OnDamage(reactVec, true));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = Enemy_OnDamage_mD831F6C9DEDC523EA5D6A0D57666DF94AEACE055(__this, L_5, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::OnDamage(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_OnDamage_mD831F6C9DEDC523EA5D6A0D57666DF94AEACE055 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___reactVec0, bool ___isGrenade1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* L_0 = (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486*)il2cpp_codegen_object_new(U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486_il2cpp_TypeInfo_var);
		U3COnDamageU3Ed__27__ctor_mC5FD34C9AF992B9ED81C9F9C6CF4E8C4CCCC9098(L_0, 0, NULL);
		U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___reactVec0;
		L_2->___reactVec_4 = L_3;
		U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* L_4 = L_2;
		bool L_5 = ___isGrenade1;
		L_4->___isGrenade_3 = L_5;
		return L_4;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Enemy/<Attack>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23__ctor_m433C9189529AA5397239AF9E4158E16174DEF3FD (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<Attack>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23_System_IDisposable_Dispose_m4338E7116F021ACF4F013A934ECB628790F3A7B7 (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<Attack>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__23_MoveNext_mA99216B4511460D603BC996EEB7396A4D8707492 (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0097;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_00ef;
			}
			case 4:
			{
				goto IL_0114;
			}
			case 5:
			{
				goto IL_0161;
			}
			case 6:
			{
				goto IL_019d;
			}
			case 7:
			{
				goto IL_01c2;
			}
			case 8:
			{
				goto IL_0223;
			}
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isChase = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3 = V_1;
		L_3->___isChase_13 = (bool)0;
		// isAttack = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = V_1;
		L_4->___isAttack_14 = (bool)1;
		// anim.SetBool("isAttack", true);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___anim_20;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73, (bool)1, NULL);
		// switch (enemyType)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = V_1;
		int32_t L_8 = L_7->___enemyType_4;
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_00fb;
			}
			case 2:
			{
				goto IL_01a9;
			}
		}
	}
	{
		goto IL_022a;
	}

IL_007e:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0097:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_11 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_12 = L_11->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_12, (bool)1, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_14 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_15 = L_14->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_15, (bool)0, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00ef:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// break;
		goto IL_022a;
	}

IL_00fb:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0114:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rigid.AddForce(transform.forward * 20, ForceMode.Impulse); // AddForce()?? ???? ????
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_18 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = L_18->___rigid_16;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_20 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, (20.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_19, L_23, 1, NULL);
		// meleeArea.enabled = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_24 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_25 = L_24->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_25, (bool)1, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0161:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rigid.velocity = Vector3.zero; // velocity?? Vector3.zero?? ??? ????
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_27 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = L_27->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_28, L_29, NULL);
		// meleeArea.enabled = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_30 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_31 = L_30->___meleeArea_11;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_31, (bool)0, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_32 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_32, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_32);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_019d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// break;
		goto IL_022a;
	}

IL_01a9:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_33 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_33, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_01c2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject instantBullet = Instantiate(bullet, transform.position, transform.rotation);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_34 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___bullet_12;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_36 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_39 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_35, L_38, L_41, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43;
		L_43 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_42, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rigidBullet.AddForce(transform.forward * 20, ForceMode.Impulse);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_44 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, (20.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_43, L_47, 1, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_48 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_48, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_48);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_0223:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_022a:
	{
		// isChase = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_49 = V_1;
		L_49->___isChase_13 = (bool)1;
		// isAttack = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_50 = V_1;
		L_50->___isAttack_14 = (bool)0;
		// anim.SetBool("isAttack", false);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_51 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_52 = L_51->___anim_20;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_52, _stringLiteral49CA9A7910CC74ECF7FAC8756E774E0CA98DAD73, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Attack>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF28535B6DE840BD0B2B8C12B26E39301D695C925 (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<Attack>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_m3A1121D828D0D04C100454F4812080CD4BACAF3F (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__23_System_Collections_IEnumerator_Reset_m3A1121D828D0D04C100454F4812080CD4BACAF3F_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Attack>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__23_System_Collections_IEnumerator_get_Current_mCEBB7A1648D1E2875BC8C30547F5AAEEFBE1B54C (U3CAttackU3Ed__23_tE25167D2412E7ECD42D743CFA8CF50C4DFB3A0AB* __this, const RuntimeMethod* method) 
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
// System.Void Enemy/<OnDamage>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__27__ctor_mC5FD34C9AF992B9ED81C9F9C6CF4E8C4CCCC9098 (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<OnDamage>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__27_System_IDisposable_Dispose_mE9FFEB61AB0C20FE2BB9EF73E93A903D99E76A69 (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<OnDamage>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnDamageU3Ed__27_MoveNext_m70AED559CF78E3BA62A31413134688A7C1100FFD (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_1 = NULL;
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!isDead)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = V_1;
		bool L_5 = L_4->___isDead_15;
		if (L_5)
		{
			goto IL_0299;
		}
	}
	{
		// if (curHealth > 0)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_6 = V_1;
		int32_t L_7 = L_6->___curHealth_6;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		// foreach (MeshRenderer mesh in meshes)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_8 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_9 = L_8->___meshes_18;
		V_2 = L_9;
		V_3 = 0;
		goto IL_0053;
	}

IL_003d:
	{
		// foreach (MeshRenderer mesh in meshes)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_10 = V_2;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		// mesh.material.color = Color.red;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_14, L_15, NULL);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0053:
	{
		// foreach (MeshRenderer mesh in meshes)
		int32_t L_17 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (MeshRenderer mesh in meshes)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_20 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_21 = L_20->___meshes_18;
		V_2 = L_21;
		V_3 = 0;
		goto IL_009a;
	}

IL_0084:
	{
		// foreach (MeshRenderer mesh in meshes)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_22 = V_2;
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		// mesh.material.color = Color.white;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_26, L_27, NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009a:
	{
		// foreach (MeshRenderer mesh in meshes)
		int32_t L_29 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0299;
	}

IL_00a5:
	{
		// foreach (MeshRenderer mesh in meshes)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_31 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_32 = L_31->___meshes_18;
		V_2 = L_32;
		V_3 = 0;
		goto IL_00c6;
	}

IL_00b0:
	{
		// foreach (MeshRenderer mesh in meshes)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		// mesh.material.color = Color.gray;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_37, L_38, NULL);
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c6:
	{
		// foreach (MeshRenderer mesh in meshes)
		int32_t L_40 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00b0;
		}
	}
	{
		// gameObject.layer = 14;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_42 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_43, ((int32_t)14), NULL);
		// isDead = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_44 = V_1;
		L_44->___isDead_15 = (bool)1;
		// isChase = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_45 = V_1;
		L_45->___isChase_13 = (bool)0;
		// rigid.isKinematic = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_46 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_47 = L_46->___rigid_16;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_47, (bool)0, NULL);
		// nav.enabled = false; // ??? ??????? ??????? ???? NavAgent ?????
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_48 = V_1;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_49 = L_48->___nav_19;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_49, (bool)0, NULL);
		// anim.SetTrigger("doDie");
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_50 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_51 = L_50->___anim_20;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_51, _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5, NULL);
		// Player player = target.GetComponent<Player>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_52 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = L_52->___target_10;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_54;
		L_54 = Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3(L_53, Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		// player.score += score;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_55 = L_54;
		int32_t L_56 = L_55->___score_19;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_57 = V_1;
		int32_t L_58 = L_57->___score_7;
		L_55->___score_19 = ((int32_t)il2cpp_codegen_add(L_56, L_58));
		// int ranCoin = Random.Range(0, 3);
		int32_t L_59;
		L_59 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_4 = L_59;
		// Instantiate(coins[ranCoin], transform.position, Quaternion.identity);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_60 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = L_60->___coins_9;
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_65 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_68;
		L_68 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_64, L_67, L_68, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// switch (enemyType)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_70 = V_1;
		int32_t L_71 = L_70->___enemyType_4;
		V_5 = L_71;
		int32_t L_72 = V_5;
		switch (L_72)
		{
			case 0:
			{
				goto IL_0175;
			}
			case 1:
			{
				goto IL_018a;
			}
			case 2:
			{
				goto IL_019f;
			}
			case 3:
			{
				goto IL_01b4;
			}
		}
	}
	{
		goto IL_01c7;
	}

IL_0175:
	{
		// manager.enemyCntA--;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_73 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_74 = L_73->___manager_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_75 = L_74;
		int32_t L_76 = L_75->___enemyCntA_14;
		L_75->___enemyCntA_14 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
		// break;
		goto IL_01c7;
	}

IL_018a:
	{
		// manager.enemyCntB--;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_77 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_78 = L_77->___manager_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_79 = L_78;
		int32_t L_80 = L_79->___enemyCntB_15;
		L_79->___enemyCntB_15 = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
		// break;
		goto IL_01c7;
	}

IL_019f:
	{
		// manager.enemyCntC--;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_81 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_82 = L_81->___manager_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_83 = L_82;
		int32_t L_84 = L_83->___enemyCntC_16;
		L_83->___enemyCntC_16 = ((int32_t)il2cpp_codegen_subtract(L_84, 1));
		// break;
		goto IL_01c7;
	}

IL_01b4:
	{
		// manager.enemyCntD--;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_85 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_86 = L_85->___manager_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_87 = L_86;
		int32_t L_88 = L_87->___enemyCntD_17;
		L_87->___enemyCntD_17 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
	}

IL_01c7:
	{
		// if (isGrenade)
		bool L_89 = __this->___isGrenade_3;
		if (!L_89)
		{
			goto IL_0246;
		}
	}
	{
		// reactVec = reactVec.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = (&__this->___reactVec_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_90, NULL);
		__this->___reactVec_4 = L_91;
		// reactVec += Vector3.up * 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = __this->___reactVec_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_93, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_92, L_94, NULL);
		__this->___reactVec_4 = L_95;
		// rigid.freezeRotation = false; // ?????? ??? ???
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_96 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_97 = L_96->___rigid_16;
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_97, (bool)0, NULL);
		// rigid.AddForce(reactVec * 5, ForceMode.Impulse);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_98 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_99 = L_98->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = __this->___reactVec_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_100, (5.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_99, L_101, 1, NULL);
		// rigid.AddTorque(reactVec * 15, ForceMode.Impulse);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_102 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_103 = L_102->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = __this->___reactVec_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_104, (15.0f), NULL);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_103, L_105, 1, NULL);
		goto IL_0289;
	}

IL_0246:
	{
		// reactVec = reactVec.normalized; // ?? ????
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = (&__this->___reactVec_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_106, NULL);
		__this->___reactVec_4 = L_107;
		// reactVec += Vector3.up; // ???? ??? ????? up ???????
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = __this->___reactVec_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_108, L_109, NULL);
		__this->___reactVec_4 = L_110;
		// rigid.AddForce(reactVec * 5, ForceMode.Impulse);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_111 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_112 = L_111->___rigid_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = __this->___reactVec_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_113, (5.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_112, L_114, 1, NULL);
	}

IL_0289:
	{
		// Destroy(gameObject, 4);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_115 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116;
		L_116 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_115, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_116, (4.0f), NULL);
	}

IL_0299:
	{
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<OnDamage>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53B64FD7A4EAAEAC4DE00E48B68E988FED841F83 (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<OnDamage>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__27_System_Collections_IEnumerator_Reset_m823FE523A3C84CA377529F5397D8C0DD20B236D3 (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnDamageU3Ed__27_System_Collections_IEnumerator_Reset_m823FE523A3C84CA377529F5397D8C0DD20B236D3_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<OnDamage>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageU3Ed__27_System_Collections_IEnumerator_get_Current_m901827A382843664C0C4F51F6F3A84E99428D13C (U3COnDamageU3Ed__27_t2655FB4A6CC33C90020B5C9FACA1E9F8B3B3D486* __this, const RuntimeMethod* method) 
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
// System.Void Follow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow_Update_m5BE569B368CD73650494F6E4F22D9B612589E220 (Follow_t9EB6C12C0BC19035C9BBB04919C7E8CE8B4D97E6* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Follow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow__ctor_m7748C4BA7548A163F57B2692830B4FCEFB223B03 (Follow_t9EB6C12C0BC19035C9BBB04919C7E8CE8B4D97E6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___enemyList_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyList_20), (void*)L_0);
		// maxScoreTxt.text = string.Format("{0:n0}", PlayerPrefs.GetInt("MaxScore"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___maxScoreTxt_24;
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// if (PlayerPrefs.HasKey("MaxScore"))
		bool L_6;
		L_6 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// PlayerPrefs.SetInt("MaxScore", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, 0, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void GameManager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameStart_m13D7CF637F648EE27334A03FF9B2132DA21A643B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// menuCam.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menuCam_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// gameCam.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameCam_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// menuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuPanel_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// gamePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___gamePanel_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// player.gameObject.SetActive(true);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gamePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gamePanel_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// overPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___overPanel_23;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// curScoreText.text = scoreTxt.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___curScoreText_40;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___scoreTxt_25;
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// int maxScore = PlayerPrefs.GetInt("MaxScore");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, NULL);
		V_0 = L_5;
		// if(player.score > maxScore)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = __this->___player_6;
		int32_t L_7 = L_6->___score_19;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_006d;
		}
	}
	{
		// bestText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___bestText_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// PlayerPrefs.SetInt("MaxScore", player.score);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = __this->___player_6;
		int32_t L_12 = L_11->___score_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralF22B0F04E5799D11A8C07A1A569FD3A0E5C9FC81, L_12, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::StageStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageStart_m30DCC674CE251E720F27B419FC5AA77F7FA3CEDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// stage++;
		int32_t L_0 = __this->___stage_11;
		__this->___stage_11 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// itemShop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___itemShop_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// weaponShop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___weaponShop_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// startZone.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___startZone_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// foreach(Transform zone in enemyZones)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___enemyZones_18;
		V_0 = L_4;
		V_1 = 0;
		goto IL_004f;
	}

IL_003d:
	{
		// foreach(Transform zone in enemyZones)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		// zone.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004f:
	{
		// foreach(Transform zone in enemyZones)
		int32_t L_11 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		// isBattle = true;
		__this->___isBattle_13 = (bool)1;
		// StartCoroutine(InBattle());
		RuntimeObject* L_13;
		L_13 = GameManager_InBattle_mA121B7070BA2B2A0E72504A413940725A0020C9B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void GameManager::StageEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StageEnd_mAB55AA5E29B8682678A7CDA3FB98DAA77D7375E9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// player.transform.position = Vector3.up * 0.8f;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = __this->___player_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.800000012f), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// itemShop.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___itemShop_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// weaponShop.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___weaponShop_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// startZone.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___startZone_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// foreach (Transform zone in enemyZones)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___enemyZones_18;
		V_0 = L_7;
		V_1 = 0;
		goto IL_0060;
	}

IL_004e:
	{
		// foreach (Transform zone in enemyZones)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		// zone.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0060:
	{
		// foreach (Transform zone in enemyZones)
		int32_t L_14 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		// isBattle = false;
		__this->___isBattle_13 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::InBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_InBattle_mA121B7070BA2B2A0E72504A413940725A0020C9B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* L_0 = (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC*)il2cpp_codegen_object_new(U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC_il2cpp_TypeInfo_var);
		U3CInBattleU3Ed__44__ctor_m82E7610CC6BF38194217F0E33B7D8D6F21CD43C7(L_0, 0, NULL);
		U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if(isBattle)
		bool L_0 = __this->___isBattle_13;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// playTime += Time.deltaTime;
		float L_1 = __this->___playTime_12;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___playTime_12 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GameManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LateUpdate_m1A2595D1FD7E271BE4213CE7602FF7F2E9F80B95 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C775528D6D2BC81F7378DCD2D27C6E7C959F34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF47F704757751555EDC32F435CFA62269BD7AC95);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	float G_B8_1 = 0.0f;
	float G_B8_2 = 0.0f;
	float G_B8_3 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B8_4 = NULL;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B10_3 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B11_3 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B11_4 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float G_B13_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B13_3 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B12_3 = NULL;
	int32_t G_B14_0 = 0;
	float G_B14_1 = 0.0f;
	float G_B14_2 = 0.0f;
	float G_B14_3 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B14_4 = NULL;
	float G_B16_0 = 0.0f;
	float G_B16_1 = 0.0f;
	float G_B16_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B16_3 = NULL;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	float G_B15_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_3 = NULL;
	int32_t G_B17_0 = 0;
	float G_B17_1 = 0.0f;
	float G_B17_2 = 0.0f;
	float G_B17_3 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B17_4 = NULL;
	{
		// scoreTxt.text = string.Format("{0:n0}", player.score);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreTxt_25;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_6;
		int32_t L_2 = L_1->___score_19;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// stageTxt.text = "STAGE " + stage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___stageTxt_26;
		int32_t* L_7 = (&__this->___stage_11);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral28C775528D6D2BC81F7378DCD2D27C6E7C959F34, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// int hour = (int)(playTime / 3600);
		float L_10 = __this->___playTime_12;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_10/(3600.0f))));
		// int min = (int)((playTime - hour * 3600) / 60);
		float L_11 = __this->___playTime_12;
		int32_t L_12 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)il2cpp_codegen_subtract(L_11, ((float)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)3600))))))/(60.0f))));
		// int second = (int)(playTime % 60);
		float L_13 = __this->___playTime_12;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>((fmodf(L_13, (60.0f))));
		// playTimeTxt.text = string.Format("{0:00}", hour) + ":" + string.Format("{0:00}", min) + ":" + string.Format("{0:00}", second);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___playTimeTxt_27;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_19, NULL);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_16;
		ArrayElementTypeCheck (L_21, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_25, NULL);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_22;
		ArrayElementTypeCheck (L_27, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_31, NULL);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_32);
		String_t* L_33;
		L_33 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_33);
		// playerHealthTxt.text = player.health + " / " + player.maxHealth;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->___playerHealthTxt_28;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_35 = __this->___player_6;
		int32_t* L_36 = (&L_35->___health_14);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_38 = __this->___player_6;
		int32_t* L_39 = (&L_38->___maxHealth_17);
		String_t* L_40;
		L_40 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_39, NULL);
		String_t* L_41;
		L_41 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_37, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_40, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_41);
		// playerCoinTxt.text = string.Format("{0:n0}", player.coin);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___playerCoinTxt_30;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_43 = __this->___player_6;
		int32_t L_44 = L_43->___coin_13;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0, L_46, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_47);
		// if (player.equipWeapon == null)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_48 = __this->___player_6;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_49 = L_48->___equipWeapon_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_016b;
		}
	}
	{
		// playerAmmoTxt.text = "- / " + player.ammo;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___playerAmmoTxt_29;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_52 = __this->___player_6;
		int32_t* L_53 = (&L_52->___ammo_12);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_53, NULL);
		String_t* L_55;
		L_55 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF47F704757751555EDC32F435CFA62269BD7AC95, L_54, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_55);
		goto IL_01de;
	}

IL_016b:
	{
		// else if (player.equipWeapon.type == Weapon.Type.Melee)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_56 = __this->___player_6;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_57 = L_56->___equipWeapon_46;
		int32_t L_58 = L_57->___type_4;
		if (L_58)
		{
			goto IL_01a4;
		}
	}
	{
		// playerAmmoTxt.text = "- / " + player.ammo;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = __this->___playerAmmoTxt_29;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_60 = __this->___player_6;
		int32_t* L_61 = (&L_60->___ammo_12);
		String_t* L_62;
		L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_61, NULL);
		String_t* L_63;
		L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF47F704757751555EDC32F435CFA62269BD7AC95, L_62, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, L_63);
		goto IL_01de;
	}

IL_01a4:
	{
		// playerAmmoTxt.text = player.equipWeapon.curAmmo + " / " + player.ammo;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = __this->___playerAmmoTxt_29;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_65 = __this->___player_6;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_66 = L_65->___equipWeapon_46;
		int32_t* L_67 = (&L_66->___curAmmo_8);
		String_t* L_68;
		L_68 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_67, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_69 = __this->___player_6;
		int32_t* L_70 = (&L_69->___ammo_12);
		String_t* L_71;
		L_71 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_70, NULL);
		String_t* L_72;
		L_72 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_68, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_71, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_64, L_72);
	}

IL_01de:
	{
		// weapon1Img.color = new Color(1, 1, 1, player.hasWeapons[0] ? 1 : 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___weapon1Img_31;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_74 = __this->___player_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_75 = L_74->___hasWeapons_6;
		int32_t L_76 = 0;
		uint8_t L_77 = (uint8_t)(L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		G_B6_0 = (1.0f);
		G_B6_1 = (1.0f);
		G_B6_2 = (1.0f);
		G_B6_3 = L_73;
		if (L_77)
		{
			G_B7_0 = (1.0f);
			G_B7_1 = (1.0f);
			G_B7_2 = (1.0f);
			G_B7_3 = L_73;
			goto IL_0205;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0206;
	}

IL_0205:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0206:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_78;
		memset((&L_78), 0, sizeof(L_78));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_78), G_B8_3, G_B8_2, G_B8_1, ((float)G_B8_0), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B8_4, L_78);
		// weapon2Img.color = new Color(1, 1, 1, player.hasWeapons[1] ? 1 : 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___weapon2Img_32;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_80 = __this->___player_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_81 = L_80->___hasWeapons_6;
		int32_t L_82 = 1;
		uint8_t L_83 = (uint8_t)(L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		G_B9_0 = (1.0f);
		G_B9_1 = (1.0f);
		G_B9_2 = (1.0f);
		G_B9_3 = L_79;
		if (L_83)
		{
			G_B10_0 = (1.0f);
			G_B10_1 = (1.0f);
			G_B10_2 = (1.0f);
			G_B10_3 = L_79;
			goto IL_0238;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_0239;
	}

IL_0238:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_0239:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		memset((&L_84), 0, sizeof(L_84));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_84), G_B11_3, G_B11_2, G_B11_1, ((float)G_B11_0), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B11_4, L_84);
		// weapon3Img.color = new Color(1, 1, 1, player.hasWeapons[2] ? 1 : 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___weapon3Img_33;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_86 = __this->___player_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_87 = L_86->___hasWeapons_6;
		int32_t L_88 = 2;
		uint8_t L_89 = (uint8_t)(L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		G_B12_0 = (1.0f);
		G_B12_1 = (1.0f);
		G_B12_2 = (1.0f);
		G_B12_3 = L_85;
		if (L_89)
		{
			G_B13_0 = (1.0f);
			G_B13_1 = (1.0f);
			G_B13_2 = (1.0f);
			G_B13_3 = L_85;
			goto IL_026b;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_026c;
	}

IL_026b:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_026c:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
		memset((&L_90), 0, sizeof(L_90));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_90), G_B14_3, G_B14_2, G_B14_1, ((float)G_B14_0), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B14_4, L_90);
		// weaponRImg.color = new Color(1, 1, 1, player.hasGrenades > 0 ? 1 : 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___weaponRImg_34;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_92 = __this->___player_6;
		int32_t L_93 = L_92->___hasGrenades_8;
		G_B15_0 = (1.0f);
		G_B15_1 = (1.0f);
		G_B15_2 = (1.0f);
		G_B15_3 = L_91;
		if ((((int32_t)L_93) > ((int32_t)0)))
		{
			G_B16_0 = (1.0f);
			G_B16_1 = (1.0f);
			G_B16_2 = (1.0f);
			G_B16_3 = L_91;
			goto IL_029d;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		G_B17_4 = G_B15_3;
		goto IL_029e;
	}

IL_029d:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}

IL_029e:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_94;
		memset((&L_94), 0, sizeof(L_94));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_94), G_B17_3, G_B17_2, G_B17_1, ((float)G_B17_0), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B17_4, L_94);
		// enemyATxt.text = enemyCntA.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_95 = __this->___enemyATxt_35;
		int32_t* L_96 = (&__this->___enemyCntA_14);
		String_t* L_97;
		L_97 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_96, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_95, L_97);
		// enemyBTxt.text = enemyCntB.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_98 = __this->___enemyBTxt_36;
		int32_t* L_99 = (&__this->___enemyCntB_15);
		String_t* L_100;
		L_100 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_99, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_98, L_100);
		// enemyCTxt.text = enemyCntC.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_101 = __this->___enemyCTxt_37;
		int32_t* L_102 = (&__this->___enemyCntC_16);
		String_t* L_103;
		L_103 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_102, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_101, L_103);
		// if(boss != null) // ???? ?????? ??????? ?? UI ??????? ????????? ???? ???
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_104 = __this->___boss_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_104, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_105)
		{
			goto IL_034c;
		}
	}
	{
		// bossHealthGroup.anchoredPosition = Vector3.down * 30;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_106 = __this->___bossHealthGroup_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_107, (30.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		L_109 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_108, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_106, L_109, NULL);
		// bossHealthBar.localScale = new Vector3((float)boss.curHealth / boss.maxHealth, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_110 = __this->___bossHealthBar_39;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_111 = __this->___boss_7;
		int32_t L_112 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_111)->___curHealth_6;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_113 = __this->___boss_7;
		int32_t L_114 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_113)->___maxHealth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_115), ((float)(((float)L_112)/((float)L_114))), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_110, L_115, NULL);
		return;
	}

IL_034c:
	{
		// bossHealthGroup.anchoredPosition = Vector3.up * 200;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_116 = __this->___bossHealthGroup_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_117, (200.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119;
		L_119 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_118, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_116, L_119, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void GameManager/<InBattle>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInBattleU3Ed__44__ctor_m82E7610CC6BF38194217F0E33B7D8D6F21CD43C7 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<InBattle>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInBattleU3Ed__44_System_IDisposable_Dispose_m1D8E7A6B8A635191810EDFE599C81927C0D1AA38 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<InBattle>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInBattleU3Ed__44_MoveNext_m49B5D544DC421FC35CB7DF8DDBD324D08A3C6D86 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35_m9577C4DFC83E667884E77E17BEA9A325DC1A410F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0188;
			}
			case 2:
			{
				goto IL_01b2;
			}
			case 3:
			{
				goto IL_01f0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(stage % 5 == 0) // ???? ???????? ???? ???? ???
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = V_1;
		int32_t L_4 = L_3->___stage_11;
		if (((int32_t)(L_4%5)))
		{
			goto IL_009b;
		}
	}
	{
		// enemyCntD++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		int32_t L_7 = L_6->___enemyCntD_17;
		L_5->___enemyCntD_17 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// GameObject instantEnemy = Instantiate(enemies[3], enemyZones[0].position, enemyZones[0].rotation);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = L_8->___enemies_19;
		int32_t L_10 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = L_12->___enemyZones_18;
		int32_t L_14 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = L_17->___enemyZones_18;
		int32_t L_19 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_16, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_22;
		// Enemy enemy = instantEnemy.GetComponent<Enemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_24;
		L_24 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_23, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		// enemy.target = player.transform;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_25 = L_24;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26 = V_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_27 = L_26->___player_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		L_25->___target_10 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___target_10), (void*)L_28);
		// enemy.manager = this;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = V_1;
		L_25->___manager_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___manager_8), (void*)L_29);
		// boss = instantEnemy.GetComponent<Boss>();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_30 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_32;
		L_32 = GameObject_GetComponent_TisBoss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35_m9577C4DFC83E667884E77E17BEA9A325DC1A410F(L_31, GameObject_GetComponent_TisBoss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35_m9577C4DFC83E667884E77E17BEA9A325DC1A410F_RuntimeMethod_var);
		L_30->___boss_7 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___boss_7), (void*)L_32);
		goto IL_01b9;
	}

IL_009b:
	{
		// for (int index = 0; index < stage; index++)
		V_3 = 0;
		goto IL_00fc;
	}

IL_009f:
	{
		// int ran = Random.Range(0, 3);
		int32_t L_33;
		L_33 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_4 = L_33;
		// enemyList.Add(ran);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_34 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = L_34->___enemyList_20;
		int32_t L_36 = V_4;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_35, L_36, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		int32_t L_37 = V_4;
		switch (L_37)
		{
			case 0:
			{
				goto IL_00ca;
			}
			case 1:
			{
				goto IL_00da;
			}
			case 2:
			{
				goto IL_00ea;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_00ca:
	{
		// enemyCntA++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_39 = V_1;
		int32_t L_40 = L_39->___enemyCntA_14;
		L_38->___enemyCntA_14 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		// break;
		goto IL_00f8;
	}

IL_00da:
	{
		// enemyCntB++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_41 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_42 = V_1;
		int32_t L_43 = L_42->___enemyCntB_15;
		L_41->___enemyCntB_15 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		// break;
		goto IL_00f8;
	}

IL_00ea:
	{
		// enemyCntC++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_44 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_45 = V_1;
		int32_t L_46 = L_45->___enemyCntC_16;
		L_44->___enemyCntC_16 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f8:
	{
		// for (int index = 0; index < stage; index++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00fc:
	{
		// for (int index = 0; index < stage; index++)
		int32_t L_48 = V_3;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_49 = V_1;
		int32_t L_50 = L_49->___stage_11;
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_018f;
	}

IL_010a:
	{
		// int ranZone = Random.Range(0, 4);
		int32_t L_51;
		L_51 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		V_5 = L_51;
		// GameObject instantEnemy = Instantiate(enemies[enemyList[0]], enemyZones[ranZone].position, enemyZones[ranZone].rotation);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_52 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = L_52->___enemies_19;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_54 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = L_54->___enemyList_20;
		int32_t L_56;
		L_56 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_55, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int32_t L_57 = L_56;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_59 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_60 = L_59->___enemyZones_18;
		int32_t L_61 = V_5;
		int32_t L_62 = L_61;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_65 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_66 = L_65->___enemyZones_18;
		int32_t L_67 = V_5;
		int32_t L_68 = L_67;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		L_70 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_69, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_58, L_64, L_70, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Enemy enemy = instantEnemy.GetComponent<Enemy>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_72;
		L_72 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_71, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		// enemy.target = player.transform;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_73 = L_72;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_74 = V_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_75 = L_74->___player_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		L_73->___target_10 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___target_10), (void*)L_76);
		// enemy.manager = this;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_77 = V_1;
		L_73->___manager_8 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___manager_8), (void*)L_77);
		// enemyList.RemoveAt(0);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_78 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_79 = L_78->___enemyList_20;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_79, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_80 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_80, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_80);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0188:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_018f:
	{
		// while (enemyList.Count > 0)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_81 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_82 = L_81->___enemyList_20;
		int32_t L_83;
		L_83 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_82, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			goto IL_010a;
		}
	}
	{
		goto IL_01b9;
	}

IL_01a2:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01b9:
	{
		// while (enemyCntA + enemyCntB + enemyCntC + enemyCntD > 0) // ???? ???? ????? ?????? while??
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_84 = V_1;
		int32_t L_85 = L_84->___enemyCntA_14;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_86 = V_1;
		int32_t L_87 = L_86->___enemyCntB_15;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_88 = V_1;
		int32_t L_89 = L_88->___enemyCntC_16;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_90 = V_1;
		int32_t L_91 = L_90->___enemyCntD_17;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_85, L_87)), L_89)), L_91))) > ((int32_t)0)))
		{
			goto IL_01a2;
		}
	}
	{
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_92 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_92, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_92);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01f0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// boss = null;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_93 = V_1;
		L_93->___boss_7 = (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_93->___boss_7), (void*)(Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35*)NULL);
		// StageEnd();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_94 = V_1;
		GameManager_StageEnd_mAB55AA5E29B8682678A7CDA3FB98DAA77D7375E9(L_94, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<InBattle>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInBattleU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m769B03854F83C56216208BE5F8F42A2EDD1623D8 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<InBattle>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInBattleU3Ed__44_System_Collections_IEnumerator_Reset_mF5B3729E6092044A0F1D8B3DB0364E59D2B157FB (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInBattleU3Ed__44_System_Collections_IEnumerator_Reset_mF5B3729E6092044A0F1D8B3DB0364E59D2B157FB_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<InBattle>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInBattleU3Ed__44_System_Collections_IEnumerator_get_Current_mD97795F366E097DEAA0E465CEEA239904CDE1386 (U3CInBattleU3Ed__44_t83FE7F9688B31E6F90542DC3C6452CDA71F6EECC* __this, const RuntimeMethod* method) 
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
// System.Void Grenade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grenade_Start_mB720555EF16F75104FBF0500262FC015CE4CFAAC (Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Explosion());
		RuntimeObject* L_0;
		L_0 = Grenade_Explosion_mBF32F8E5862C16F1E00D8FC005D631D23536DF9B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Grenade::Explosion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Grenade_Explosion_mBF32F8E5862C16F1E00D8FC005D631D23536DF9B (Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* L_0 = (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED*)il2cpp_codegen_object_new(U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED_il2cpp_TypeInfo_var);
		U3CExplosionU3Ed__4__ctor_m2A867E2814C1431F992FA82E5D49ED3B06C5EEAA(L_0, 0, NULL);
		U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Grenade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grenade__ctor_mB5C0B0C3DA6B1CD3D501DD35450C70CDBC5514D5 (Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Grenade/<Explosion>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplosionU3Ed__4__ctor_m2A867E2814C1431F992FA82E5D49ED3B06C5EEAA (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Grenade/<Explosion>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplosionU3Ed__4_System_IDisposable_Dispose_m5074084FF2308DCBAE6A07FE3A6F2C56B90634E9 (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Grenade/<Explosion>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExplosionU3Ed__4_MoveNext_m68D4B8A69B0B9A26664E072D80F5CC3957249E5F (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* V_1 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_2 = NULL;
	int32_t V_3 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rigid.velocity = Vector3.zero;
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_5 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = L_5->___rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_7, NULL);
		// rigid.angularVelocity = Vector3.zero;
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_8 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = L_8->___rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_9, L_10, NULL);
		// meshObj.SetActive(false);
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___meshObj_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// effectObj.SetActive(true);
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___effectObj_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// RaycastHit[] rayHits = Physics.SphereCastAll(transform.position,
		//     15,
		//     Vector3.up,
		//     0f,
		//     LayerMask.GetMask("Enemy"));
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		ArrayElementTypeCheck (L_20, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		int32_t L_21;
		L_21 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_20, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_22;
		L_22 = Physics_SphereCastAll_m25687FC02567C1138B9588148AA2578764CD8424(L_17, (15.0f), L_18, (0.0f), L_21, NULL);
		// foreach(RaycastHit hitObj in rayHits)
		V_2 = L_22;
		V_3 = 0;
		goto IL_00d6;
	}

IL_00ad:
	{
		// foreach(RaycastHit hitObj in rayHits)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_4 = L_26;
		// hitObj.transform.GetComponent<Enemy>().HitByGrenade(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_4), NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_28;
		L_28 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(L_27, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_29 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Enemy_HitByGrenade_m1A79795FC8992A52D584884DF45ABCEC0B0939DD(L_28, L_31, NULL);
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00d6:
	{
		// foreach(RaycastHit hitObj in rayHits)
		int32_t L_33 = V_3;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00ad;
		}
	}
	{
		// Destroy(gameObject, 5);
		Grenade_tC1EC92A9482C95871AD10641DF9F48B222A13B62* L_35 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_36, (5.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object Grenade/<Explosion>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExplosionU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0497FC257A62AAF52C277460D58455995F95429D (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Grenade/<Explosion>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplosionU3Ed__4_System_Collections_IEnumerator_Reset_m40229AA278920FFF3DF275E55DAB3F1E0B07BEE3 (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExplosionU3Ed__4_System_Collections_IEnumerator_Reset_m40229AA278920FFF3DF275E55DAB3F1E0B07BEE3_RuntimeMethod_var)));
	}
}
// System.Object Grenade/<Explosion>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExplosionU3Ed__4_System_Collections_IEnumerator_get_Current_m191C36666E2F85DD69698707B6312DD5085A6C9F (U3CExplosionU3Ed__4_t323EB9DF368F2350E8D886E98547B395CDDB59ED* __this, const RuntimeMethod* method) 
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
// System.Void Item::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Awake_m70FFBC1022548D82C7E37D465AE48D7052299214 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_6), (void*)L_0);
		// sphereCollider = GetComponent<SphereCollider>();
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_1;
		L_1 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(__this, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		__this->___sphereCollider_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sphereCollider_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Item::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Update_m321607B5029856E4D4919213FDD9001A1C448E47 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.down * 20 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (20.0f), NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Item::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnCollisionEnter_mC516A8F00187E35B75BAA50CE594C906F94D8B90 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Floor")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// rigid.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rigid_6;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_4, (bool)1, NULL);
		// sphereCollider.enabled = false;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_5 = __this->___sphereCollider_7;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m741D59B05082743C60D2F1149112B571E89CAFAF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Missile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Missile_Update_m29D19FEA584820673D4A1AF8D39EC30775150EEC (Missile_t90162A6942CD1312522BE2AD40697A397C004B4A* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.right * 30 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (30.0f), NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Missile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Missile__ctor_m5D749F34166F3148A1242D17A5BAF8698F11A30F (Missile_t90162A6942CD1312522BE2AD40697A397C004B4A* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Orbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit_Start_m609B37BF506370FFEC305148C441F757EF8A75DF (Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E* __this, const RuntimeMethod* method) 
{
	{
		// offSet = transform.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->___offSet_6 = L_4;
		// }
		return;
	}
}
// System.Void Orbit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit_Update_m08E209C0A52E9EA24A47B07D623FFC589DCA64C8 (Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = target.position + offSet;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___offSet_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// transform.RotateAround(target.position, Vector3.up, orbitSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_9 = __this->___orbitSpeed_5;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_5, L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		// offSet = transform.position - target.position; // RotateAround() ???? ????? ?????? ??????? ????? ????
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		__this->___offSet_6 = L_15;
		// }
		return;
	}
}
// System.Void Orbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit__ctor_mB9C36D43297D4CB0E1959C2F08AC002C06772FED (Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___anim_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_42), (void*)L_0);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_43 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_43), (void*)L_1);
		// meshs = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_2;
		L_2 = Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243(__this, Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		__this->___meshs_44 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshs_44), (void*)L_2);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// GetInput();
		Player_GetInput_mEF896C3364A1BF3C0075A72544333473EBC87496(__this, NULL);
		// Move();
		Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17(__this, NULL);
		// Turn();
		Player_Turn_mA794509CBADE09352CC96840F495562A666E1DD7(__this, NULL);
		// Jump();
		Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374(__this, NULL);
		// Attack();
		Player_Attack_mAB0DACE399FC87488FC13DC026FC6CB8B7FD86F2(__this, NULL);
		// Grenade();
		Player_Grenade_m6C48146F04423459E3519A7C265C6F7948DD1F2A(__this, NULL);
		// Reload();
		Player_Reload_m19EAF87FA8C3AA9E31DF98ABA41A60632947C14B(__this, NULL);
		// Dodge();
		Player_Dodge_m5011BE8D0C3855E285E107079EA267C676D85321(__this, NULL);
		// Interaction();
		Player_Interaction_m47741A4E0A887A5D383F02D2B42CDA087F023BFA(__this, NULL);
		// Swap(); // ???? ??? ???
		Player_Swap_m87187362D955B6C45D73442301CA5EC37238B09B(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetInput_mEF896C3364A1BF3C0075A72544333473EBC87496 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E719C60DF72872866FEB938FA72652CD17D324);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68C6874BDEFB54DC42857E9B238335C62222E9F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0385B623BE99C504AE36B4C986124898DB08401);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hAxis = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___hAxis_20 = L_0;
		// vAxis = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___vAxis_21 = L_1;
		// wDown = Input.GetButton("Walk");
		bool L_2;
		L_2 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		__this->___wDown_22 = L_2;
		// jDown = Input.GetButtonDown("Jump");
		bool L_3;
		L_3 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___jDown_23 = L_3;
		// fDown = Input.GetButton("Fire1");
		bool L_4;
		L_4 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		__this->___fDown_24 = L_4;
		// gDown = Input.GetButtonDown("Fire2");
		bool L_5;
		L_5 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03, NULL);
		__this->___gDown_25 = L_5;
		// rDown = Input.GetButtonDown("Reload");
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16, NULL);
		__this->___rDown_26 = L_6;
		// iDown = Input.GetButtonDown("Interaction");
		bool L_7;
		L_7 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, NULL);
		__this->___iDown_27 = L_7;
		// sDown1 = Input.GetButtonDown("Swap1");
		bool L_8;
		L_8 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralD0385B623BE99C504AE36B4C986124898DB08401, NULL);
		__this->___sDown1_28 = L_8;
		// sDown2 = Input.GetButtonDown("Swap2");
		bool L_9;
		L_9 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral68C6874BDEFB54DC42857E9B238335C62222E9F2, NULL);
		__this->___sDown2_29 = L_9;
		// sDown3 = Input.GetButtonDown("Swap3");
		bool L_10;
		L_10 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral63E719C60DF72872866FEB938FA72652CD17D324, NULL);
		__this->___sDown3_30 = L_10;
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_3 = NULL;
	{
		// moveVec = new Vector3(hAxis, 0, vAxis).normalized;
		float L_0 = __this->___hAxis_20;
		float L_1 = __this->___vAxis_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___moveVec_40 = L_3;
		// if (isDodge) // ??? ????? ?????? ???? -> ?????? ????? ????? ????
		bool L_4 = __this->___isDodge_32;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// moveVec = dodgeVec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___dodgeVec_41;
		__this->___moveVec_40 = L_5;
	}

IL_0038:
	{
		// if (isSwap || isReload || !isFireReady || isDead) // ???? ?????? ???? ????? ????????
		bool L_6 = __this->___isSwap_33;
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		bool L_7 = __this->___isReload_35;
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		bool L_8 = __this->___isFireReady_34;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		bool L_9 = __this->___isDead_39;
		if (!L_9)
		{
			goto IL_0063;
		}
	}

IL_0058:
	{
		// moveVec = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___moveVec_40 = L_10;
	}

IL_0063:
	{
		// if (!isBorder)  // ???? ??? ??????
		bool L_11 = __this->___isBorder_36;
		if (L_11)
		{
			goto IL_00b5;
		}
	}
	{
		// transform.position += moveVec * speed * (wDown ? 0.3f : 1f) * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___moveVec_40;
		float L_16 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		bool L_18 = __this->___wDown_22;
		G_B9_0 = L_17;
		G_B9_1 = L_14;
		G_B9_2 = L_13;
		if (L_18)
		{
			G_B10_0 = L_17;
			G_B10_1 = L_14;
			G_B10_2 = L_13;
			goto IL_0097;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_009c;
	}

IL_0097:
	{
		G_B11_0 = (0.300000012f);
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_009c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B11_1, G_B11_0, NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B11_2, L_21, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B11_3, L_22, NULL);
	}

IL_00b5:
	{
		// anim.SetBool("isRun", moveVec != Vector3.zero);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___anim_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___moveVec_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_26;
		L_26 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_24, L_25, NULL);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, L_26, NULL);
		// anim.SetBool("isWalk", wDown);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___anim_42;
		bool L_28 = __this->___wDown_22;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_27, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, L_28, NULL);
		// }
		return;
	}
}
// System.Void Player::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Turn_mA794509CBADE09352CC96840F495562A666E1DD7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.LookAt(transform.position + moveVec);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___moveVec_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_4, NULL);
		// if (fDown && !isDead)
		bool L_5 = __this->___fDown_24;
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		bool L_6 = __this->___isDead_39;
		if (L_6)
		{
			goto IL_008f;
		}
	}
	{
		// Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___followCamera_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9;
		L_9 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_8, NULL);
		// if (Physics.Raycast(ray, out rayHit, 100))
		bool L_10;
		L_10 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_9, (&V_0), (100.0f), NULL);
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		// Vector3 nextVec = rayHit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		V_1 = L_14;
		// nextVec.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// transform.LookAt(transform.position + nextVec);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_15, L_19, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jDown && moveVec == Vector3.zero && !isJump && !isDodge && !isSwap && !isDead)
		bool L_0 = __this->___jDown_23;
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___moveVec_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		bool L_4 = __this->___isJump_31;
		if (L_4)
		{
			goto IL_007d;
		}
	}
	{
		bool L_5 = __this->___isDodge_32;
		if (L_5)
		{
			goto IL_007d;
		}
	}
	{
		bool L_6 = __this->___isSwap_33;
		if (L_6)
		{
			goto IL_007d;
		}
	}
	{
		bool L_7 = __this->___isDead_39;
		if (L_7)
		{
			goto IL_007d;
		}
	}
	{
		// rigid.AddForce(Vector3.up * 15, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rigid_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (15.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_8, L_10, 1, NULL);
		// anim.SetBool("isJump", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___anim_42;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)1, NULL);
		// anim.SetTrigger("doJump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___anim_42;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteralB5D23000F8763AC5BFD2F47B9CFDF05506D5284C, NULL);
		// isJump = true;
		__this->___isJump_31 = (bool)1;
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Player::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Attack_mAB0DACE399FC87488FC13DC026FC6CB8B7FD86F2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39C8972FB856FBD6BE4919640D8EE868A2D4F540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CA48F97B05A63B8BE5ED86E88EBCEEA726CB3C);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B11_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B12_1 = NULL;
	{
		// if (equipWeapon == null)
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_0 = __this->___equipWeapon_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// fireDelay += Time.deltaTime;
		float L_2 = __this->___fireDelay_48;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fireDelay_48 = ((float)il2cpp_codegen_add(L_2, L_3));
		// isFireReady = equipWeapon.rate < fireDelay;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_4 = __this->___equipWeapon_46;
		float L_5 = L_4->___rate_6;
		float L_6 = __this->___fireDelay_48;
		__this->___isFireReady_34 = (bool)((((float)L_5) < ((float)L_6))? 1 : 0);
		// if (fDown && isFireReady && !isDodge && !isSwap && !isReload && !isShop && !isDead)
		bool L_7 = __this->___fDown_24;
		if (!L_7)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_8 = __this->___isFireReady_34;
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_9 = __this->___isDodge_32;
		if (L_9)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_10 = __this->___isSwap_33;
		if (L_10)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_11 = __this->___isReload_35;
		if (L_11)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_12 = __this->___isShop_38;
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_13 = __this->___isDead_39;
		if (L_13)
		{
			goto IL_00ac;
		}
	}
	{
		// equipWeapon.Use();
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_14 = __this->___equipWeapon_46;
		Weapon_Use_m35B572FC1E2B9563907D42A66906B81C5295642C(L_14, NULL);
		// anim.SetTrigger(
		//     equipWeapon.type == Weapon.Type.Melee ? "doSwing" : "doShot"
		//     );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___anim_42;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_16 = __this->___equipWeapon_46;
		int32_t L_17 = L_16->___type_4;
		G_B10_0 = L_15;
		if (!L_17)
		{
			G_B11_0 = L_15;
			goto IL_0097;
		}
	}
	{
		G_B12_0 = _stringLiteral52CA48F97B05A63B8BE5ED86E88EBCEEA726CB3C;
		G_B12_1 = G_B10_0;
		goto IL_009c;
	}

IL_0097:
	{
		G_B12_0 = _stringLiteral39C8972FB856FBD6BE4919640D8EE868A2D4F540;
		G_B12_1 = G_B11_0;
	}

IL_009c:
	{
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(G_B12_1, G_B12_0, NULL);
		// fireDelay = 0;  // ?????????? 0???? ?????? ???? ??????? ???????? ???
		__this->___fireDelay_48 = (0.0f);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void Player::Grenade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Grenade_m6C48146F04423459E3519A7C265C6F7948DD1F2A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (hasGrenades == 0)
		int32_t L_0 = __this->___hasGrenades_8;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (gDown && !isReload && !isSwap && !isShop && !isDead) // ???? ???????? ????? ??????
		bool L_1 = __this->___gDown_25;
		if (!L_1)
		{
			goto IL_00e9;
		}
	}
	{
		bool L_2 = __this->___isReload_35;
		if (L_2)
		{
			goto IL_00e9;
		}
	}
	{
		bool L_3 = __this->___isSwap_33;
		if (L_3)
		{
			goto IL_00e9;
		}
	}
	{
		bool L_4 = __this->___isShop_38;
		if (L_4)
		{
			goto IL_00e9;
		}
	}
	{
		bool L_5 = __this->___isDead_39;
		if (L_5)
		{
			goto IL_00e9;
		}
	}
	{
		// Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___followCamera_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_6, L_7, NULL);
		// if (Physics.Raycast(ray, out rayHit, 100))
		bool L_9;
		L_9 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_8, (&V_0), (100.0f), NULL);
		if (!L_9)
		{
			goto IL_00e9;
		}
	}
	{
		// Vector3 nextVec = rayHit.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_12, NULL);
		V_1 = L_13;
		// nextVec.y = 10;
		(&V_1)->___y_3 = (10.0f);
		// GameObject instantGrenade = Instantiate(grenadeObj, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___grenadeObj_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_16, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody rigidGrenade = instantGrenade.GetComponent<Rigidbody>();  // ?????? ??????? ???????? ?????? ?????? ???? ????
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20;
		L_20 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_19, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rigidGrenade.AddForce(nextVec, ForceMode.Impulse); // ?????? ????
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_22, 1, NULL);
		// rigidGrenade.AddTorque(Vector3.back * 10, ForceMode.Impulse); // ???
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, (10.0f), NULL);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_21, L_24, 1, NULL);
		// hasGrenades--;
		int32_t L_25 = __this->___hasGrenades_8;
		__this->___hasGrenades_8 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		// grenades[hasGrenades].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___grenades_7;
		int32_t L_27 = __this->___hasGrenades_8;
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_m19EAF87FA8C3AA9E31DF98ABA41A60632947C14B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FBBE43D8603637C8BC7497B233B7251C9EBA86E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral264DABDACF6E3DE73326156D352D688001661423);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (equipWeapon == null || equipWeapon.type == Weapon.Type.Melee || ammo == 0)
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_0 = __this->___equipWeapon_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_2 = __this->___equipWeapon_46;
		int32_t L_3 = L_2->___type_4;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = __this->___ammo_12;
		if (L_4)
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		// return;
		return;
	}

IL_0024:
	{
		// if (rDown && !isJump && !isDodge && !isSwap && isFireReady && !isDead)
		bool L_5 = __this->___rDown_26;
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		bool L_6 = __this->___isJump_31;
		if (L_6)
		{
			goto IL_007b;
		}
	}
	{
		bool L_7 = __this->___isDodge_32;
		if (L_7)
		{
			goto IL_007b;
		}
	}
	{
		bool L_8 = __this->___isSwap_33;
		if (L_8)
		{
			goto IL_007b;
		}
	}
	{
		bool L_9 = __this->___isFireReady_34;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		bool L_10 = __this->___isDead_39;
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		// isReload = true;
		__this->___isReload_35 = (bool)1;
		// anim.SetTrigger("doReload");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___anim_42;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteral264DABDACF6E3DE73326156D352D688001661423, NULL);
		// Invoke("ReloadOut", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0FBBE43D8603637C8BC7497B233B7251C9EBA86E, (1.0f), NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void Player::ReloadOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ReloadOut_m5E2F7DC47D3DE480B8EFA27BF0DD9AB9C36E7A7D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int reAmmo = ammo < equipWeapon.maxAmmo ? ammo : equipWeapon.maxAmmo;
		int32_t L_0 = __this->___ammo_12;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_1 = __this->___equipWeapon_46;
		int32_t L_2 = L_1->___maxAmmo_7;
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_3 = __this->___equipWeapon_46;
		int32_t L_4 = L_3->___maxAmmo_7;
		G_B3_0 = L_4;
		goto IL_0026;
	}

IL_0020:
	{
		int32_t L_5 = __this->___ammo_12;
		G_B3_0 = L_5;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// equipWeapon.curAmmo = reAmmo;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_6 = __this->___equipWeapon_46;
		int32_t L_7 = V_0;
		L_6->___curAmmo_8 = L_7;
		// ammo -= reAmmo;
		int32_t L_8 = __this->___ammo_12;
		int32_t L_9 = V_0;
		__this->___ammo_12 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		// isReload = false;
		__this->___isReload_35 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::Dodge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Dodge_m5011BE8D0C3855E285E107079EA267C676D85321 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D9F75935A55E6C2BE6C0E2BB3F7FC0718E1BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193897C0A7AE36F5DEBD303E916AB4490FDFA486);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jDown && moveVec != Vector3.zero && !isJump && !isDodge && !isSwap && !isDead)
		bool L_0 = __this->___jDown_23;
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___moveVec_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		bool L_4 = __this->___isJump_31;
		if (L_4)
		{
			goto IL_007f;
		}
	}
	{
		bool L_5 = __this->___isDodge_32;
		if (L_5)
		{
			goto IL_007f;
		}
	}
	{
		bool L_6 = __this->___isSwap_33;
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		bool L_7 = __this->___isDead_39;
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		// dodgeVec = moveVec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___moveVec_40;
		__this->___dodgeVec_41 = L_8;
		// speed *= 2;
		float L_9 = __this->___speed_4;
		__this->___speed_4 = ((float)il2cpp_codegen_multiply(L_9, (2.0f)));
		// anim.SetTrigger("doDodge");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_42;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_10, _stringLiteral193897C0A7AE36F5DEBD303E916AB4490FDFA486, NULL);
		// isDodge = true;
		__this->___isDodge_32 = (bool)1;
		// Invoke("DodgeOut", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral06D9F75935A55E6C2BE6C0E2BB3F7FC0718E1BF6, (0.5f), NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Player::DodgeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DodgeOut_m23F633938FDB48266939C921B3C27C8DAEBF5192 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// speed *= 0.5f;
		float L_0 = __this->___speed_4;
		__this->___speed_4 = ((float)il2cpp_codegen_multiply(L_0, (0.5f)));
		// isDodge = false;
		__this->___isDodge_32 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::SwapOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SwapOut_m6B4FF31745C025C4E74122D60D74F0D828FC9D80 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// isSwap = false;
		__this->___isSwap_33 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Swap_m87187362D955B6C45D73442301CA5EC37238B09B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_mA958DAFBF81129D3363FC9FC560F157BC3A520BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33AC51276E45A530663AECEA3890F1CB38981763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F0B155CE21132052016F1BF60ACCCE200D612C8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!isSwap && !isDead)
		bool L_0 = __this->___isSwap_33;
		if (L_0)
		{
			goto IL_0125;
		}
	}
	{
		bool L_1 = __this->___isDead_39;
		if (L_1)
		{
			goto IL_0125;
		}
	}
	{
		// if (sDown1 && (!hasWeapons[0] || equipWeaponIndex == 0))
		bool L_2 = __this->___sDown1_28;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->___hasWeapons_6;
		int32_t L_4 = 0;
		uint8_t L_5 = (uint8_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = __this->___equipWeaponIndex_47;
		if (L_6)
		{
			goto IL_0031;
		}
	}

IL_0030:
	{
		// return;
		return;
	}

IL_0031:
	{
		// if (sDown2 && (!hasWeapons[1] || equipWeaponIndex == 1))
		bool L_7 = __this->___sDown2_29;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->___hasWeapons_6;
		int32_t L_9 = 1;
		uint8_t L_10 = (uint8_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = __this->___equipWeaponIndex_47;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}

IL_004c:
	{
		// return;
		return;
	}

IL_004d:
	{
		// if (sDown3 && (!hasWeapons[2] || equipWeaponIndex == 2))
		bool L_12 = __this->___sDown3_30;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = __this->___hasWeapons_6;
		int32_t L_14 = 2;
		uint8_t L_15 = (uint8_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_16 = __this->___equipWeaponIndex_47;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0069;
		}
	}

IL_0068:
	{
		// return;
		return;
	}

IL_0069:
	{
		// int weaponIndex = -1;
		V_0 = (-1);
		// if (sDown1) weaponIndex = 0;
		bool L_17 = __this->___sDown1_28;
		if (!L_17)
		{
			goto IL_0075;
		}
	}
	{
		// if (sDown1) weaponIndex = 0;
		V_0 = 0;
	}

IL_0075:
	{
		// if (sDown2) weaponIndex = 1;
		bool L_18 = __this->___sDown2_29;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		// if (sDown2) weaponIndex = 1;
		V_0 = 1;
	}

IL_007f:
	{
		// if (sDown3) weaponIndex = 2;
		bool L_19 = __this->___sDown3_30;
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// if (sDown3) weaponIndex = 2;
		V_0 = 2;
	}

IL_0089:
	{
		// if ((sDown1 || sDown2 || sDown3) && !isJump && !isDodge)
		bool L_20 = __this->___sDown1_28;
		if (L_20)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_21 = __this->___sDown2_29;
		if (L_21)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_22 = __this->___sDown3_30;
		if (!L_22)
		{
			goto IL_0125;
		}
	}

IL_00a4:
	{
		bool L_23 = __this->___isJump_31;
		if (L_23)
		{
			goto IL_0125;
		}
	}
	{
		bool L_24 = __this->___isDodge_32;
		if (L_24)
		{
			goto IL_0125;
		}
	}
	{
		// if (equipWeapon != null) // ?? ???? ???
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_25 = __this->___equipWeapon_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		// equipWeapon.gameObject.SetActive(false);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_27 = __this->___equipWeapon_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
	}

IL_00d3:
	{
		// equipWeaponIndex = weaponIndex;
		int32_t L_29 = V_0;
		__this->___equipWeaponIndex_47 = L_29;
		// equipWeapon = weapons[weaponIndex].GetComponent<Weapon>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->___weapons_5;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_34;
		L_34 = GameObject_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_mA958DAFBF81129D3363FC9FC560F157BC3A520BF(L_33, GameObject_GetComponent_TisWeapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_mA958DAFBF81129D3363FC9FC560F157BC3A520BF_RuntimeMethod_var);
		__this->___equipWeapon_46 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___equipWeapon_46), (void*)L_34);
		// equipWeapon.gameObject.SetActive(true);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_35 = __this->___equipWeapon_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// anim.SetTrigger("doSwap");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___anim_42;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_37, _stringLiteral5F0B155CE21132052016F1BF60ACCCE200D612C8, NULL);
		// isSwap = true;
		__this->___isSwap_33 = (bool)1;
		// Invoke("SwapOut", 0.4f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral33AC51276E45A530663AECEA3890F1CB38981763, (0.400000006f), NULL);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void Player::Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Interaction_m47741A4E0A887A5D383F02D2B42CDA087F023BFA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (iDown && nearObject != null && !isJump && !isDodge && !isDead)
		bool L_0 = __this->___iDown_27;
		if (!L_0)
		{
			goto IL_00a0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___nearObject_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_3 = __this->___isJump_31;
		if (L_3)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_4 = __this->___isDodge_32;
		if (L_4)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_5 = __this->___isDead_39;
		if (L_5)
		{
			goto IL_00a0;
		}
	}
	{
		// if (nearObject.tag == "Weapon")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___nearObject_45;
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (!L_8)
		{
			goto IL_0071;
		}
	}
	{
		// Item item = nearObject.GetComponent<Item>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___nearObject_45;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_10;
		L_10 = GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05(L_9, GameObject_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_mBD5FC8B6FD30DD0E1AACB9B22E736084D9442C05_RuntimeMethod_var);
		// int weaponIndex = item.value;
		int32_t L_11 = L_10->___value_5;
		V_0 = L_11;
		// hasWeapons[weaponIndex] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->___hasWeapons_6;
		int32_t L_13 = V_0;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (bool)1);
		// Destroy(nearObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___nearObject_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_14, NULL);
		return;
	}

IL_0071:
	{
		// else if (nearObject.tag == "Shop")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___nearObject_45;
		String_t* L_16;
		L_16 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_15, NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		// Shop shop = nearObject.GetComponent<Shop>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___nearObject_45;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_19;
		L_19 = GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325(L_18, GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325_RuntimeMethod_var);
		// shop.Enter(this); // ??? ???? ?????? ???? this ????? ???
		Shop_Enter_mDE9F264522CE67AD0D6254471A6F3B861F9F7FD5(L_19, __this, NULL);
		// isShop = true;
		__this->___isShop_38 = (bool)1;
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Player::StopToWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StopToWall_mAE32F205EA627749839513D56003874A58EAA9E0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawRay(transform.position, transform.forward * 5, Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (5.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_1, L_4, L_5, NULL);
		// isBorder = Physics.Raycast(transform.position, transform.forward, 5, LayerMask.GetMask("Wall"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		bool L_13;
		L_13 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_7, L_9, (5.0f), L_12, NULL);
		__this->___isBorder_36 = L_13;
		// }
		return;
	}
}
// System.Void Player::FreezeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FreezeRotation_m138DB64BDC75B87AEA968C87A82B3C45349D59C9 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// rigid.angularVelocity = Vector3.zero; // ??? ??????? 0???? ????? ?????? ???? ???? ?????? ?????? ???? ????
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigid_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mEDDB0539FCD5145298CB87D4592DFFF98503AF9B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// StopToWall();
		Player_StopToWall_mAE32F205EA627749839513D56003874A58EAA9E0(__this, NULL);
		// FreezeRotation();
		Player_FreezeRotation_m138DB64BDC75B87AEA968C87A82B3C45349D59C9(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter_mD8FFD58F1755BCB20B74ECDD0BB365677FA639EE (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Floor")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// anim.SetBool("isJump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_42;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)0, NULL);
		// isJump = false;
		__this->___isJump_31 = (bool)0;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter_m51AE06A67257AFF378594339C9D53201B6104650 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_m8E6E2A53CA2682AD8983B9921D11717FB223A8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12342AD759EBB3B35F861DA14C9C61EC392F413F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_0 = NULL;
	int32_t V_1 = 0;
	Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* V_2 = NULL;
	bool V_3 = false;
	{
		// if(other.tag == "Item")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (!L_2)
		{
			goto IL_011d;
		}
	}
	{
		// Item item = other.GetComponent<Item>(); // ?????? ?????? ????????
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_4;
		L_4 = Component_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_m8E6E2A53CA2682AD8983B9921D11717FB223A8FD(L_3, Component_GetComponent_TisItem_tFAF77888D49883A321EB596A7D93CB5615D37E95_m8E6E2A53CA2682AD8983B9921D11717FB223A8FD_RuntimeMethod_var);
		V_0 = L_4;
		// switch (item.type)
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = V_0;
		int32_t L_6 = L_5->___type_4;
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_0111;
	}

IL_003e:
	{
		// ammo += item.value;
		int32_t L_8 = __this->___ammo_12;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_9 = V_0;
		int32_t L_10 = L_9->___value_5;
		__this->___ammo_12 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
		// if (ammo > maxAmmo)
		int32_t L_11 = __this->___ammo_12;
		int32_t L_12 = __this->___maxAmmo_15;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0111;
		}
	}
	{
		// ammo = maxAmmo;
		int32_t L_13 = __this->___maxAmmo_15;
		__this->___ammo_12 = L_13;
		// break;
		goto IL_0111;
	}

IL_0073:
	{
		// coin += item.value;
		int32_t L_14 = __this->___coin_13;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_15 = V_0;
		int32_t L_16 = L_15->___value_5;
		__this->___coin_13 = ((int32_t)il2cpp_codegen_add(L_14, L_16));
		// if (coin > maxCoin)
		int32_t L_17 = __this->___coin_13;
		int32_t L_18 = __this->___maxCoin_16;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0111;
		}
	}
	{
		// coin = maxCoin;
		int32_t L_19 = __this->___maxCoin_16;
		__this->___coin_13 = L_19;
		// break;
		goto IL_0111;
	}

IL_00a2:
	{
		// health += item.value;
		int32_t L_20 = __this->___health_14;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_21 = V_0;
		int32_t L_22 = L_21->___value_5;
		__this->___health_14 = ((int32_t)il2cpp_codegen_add(L_20, L_22));
		// if (health > maxHealth)
		int32_t L_23 = __this->___health_14;
		int32_t L_24 = __this->___maxHealth_17;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0111;
		}
	}
	{
		// health = maxHealth;
		int32_t L_25 = __this->___maxHealth_17;
		__this->___health_14 = L_25;
		// break;
		goto IL_0111;
	}

IL_00d1:
	{
		// grenades[hasGrenades].SetActive(true); // ????? ??????? ??????? ???? ????? ????
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___grenades_7;
		int32_t L_27 = __this->___hasGrenades_8;
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// hasGrenades += item.value;
		int32_t L_30 = __this->___hasGrenades_8;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_31 = V_0;
		int32_t L_32 = L_31->___value_5;
		__this->___hasGrenades_8 = ((int32_t)il2cpp_codegen_add(L_30, L_32));
		// if (hasGrenades > maxHasGrenades)
		int32_t L_33 = __this->___hasGrenades_8;
		int32_t L_34 = __this->___maxHasGrenades_18;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_0111;
		}
	}
	{
		// hasGrenades = maxHasGrenades;
		int32_t L_35 = __this->___maxHasGrenades_18;
		__this->___hasGrenades_8 = L_35;
	}

IL_0111:
	{
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_37, NULL);
		return;
	}

IL_011d:
	{
		// else if (other.tag == "EnemyBullet")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_38 = ___other0;
		String_t* L_39;
		L_39 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_38, NULL);
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6, NULL);
		if (!L_40)
		{
			goto IL_0189;
		}
	}
	{
		// if (!isDamage)
		bool L_41 = __this->___isDamage_37;
		if (L_41)
		{
			goto IL_0170;
		}
	}
	{
		// Bullet enemyBullet = other.GetComponent<Bullet>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_42 = ___other0;
		Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* L_43;
		L_43 = Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165(L_42, Component_GetComponent_TisBullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344_m2D564DED8B5090C087E02EE7C12D32A610BDD165_RuntimeMethod_var);
		V_2 = L_43;
		// health -= enemyBullet.damage;
		int32_t L_44 = __this->___health_14;
		Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* L_45 = V_2;
		int32_t L_46 = L_45->___damage_4;
		__this->___health_14 = ((int32_t)il2cpp_codegen_subtract(L_44, L_46));
		// bool isBossAtk = other.name == "Boss Melee Area";
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_47 = ___other0;
		String_t* L_48;
		L_48 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_47, NULL);
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral12342AD759EBB3B35F861DA14C9C61EC392F413F, NULL);
		V_3 = L_49;
		// StartCoroutine(OnDamage(isBossAtk));
		bool L_50 = V_3;
		RuntimeObject* L_51;
		L_51 = Player_OnDamage_m9F5957D292D8623F55F0B480CED789CF2BA7921C(__this, L_50, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_52;
		L_52 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_51, NULL);
	}

IL_0170:
	{
		// if (other.GetComponent<Rigidbody>() != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_53 = ___other0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54;
		L_54 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_53, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_0189;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_56 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_56, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_57, NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::OnDamage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_OnDamage_m9F5957D292D8623F55F0B480CED789CF2BA7921C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___isBossAtk0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* L_0 = (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA*)il2cpp_codegen_object_new(U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA_il2cpp_TypeInfo_var);
		U3COnDamageU3Ed__66__ctor_m56CDC43D66F711B2B178567D7AB7786F94BE8DF2(L_0, 0, NULL);
		U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* L_2 = L_1;
		bool L_3 = ___isBossAtk0;
		L_2->___isBossAtk_3 = L_3;
		return L_2;
	}
}
// System.Void Player::OnDie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDie_m5B6904B1766BFB1A2C31CE7DAA7B6441CB02C954 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("doDie");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_42;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5, NULL);
		// isDead = true;
		__this->___isDead_39 = (bool)1;
		// manager.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___manager_11;
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerStay_mF4B6519400EDB5066F17248EDBA0D09C014689A7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Weapon" || other.tag == "Shop")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0024:
	{
		// nearObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		__this->___nearObject_45 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nearObject_45), (void*)L_7);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerExit_m7F6117F3D4761F354D3C6554ECF41A101CE4E178 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Weapon")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// nearObject = null;
		__this->___nearObject_45 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nearObject_45), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		return;
	}

IL_001a:
	{
		// } else if (other.tag == "Shop")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Shop shop = nearObject.GetComponent<Shop>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___nearObject_45;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_7;
		L_7 = GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325(L_6, GameObject_GetComponent_TisShop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3_mE2822D6ADCD9D17AABEA18822F60E4EB7D63F325_RuntimeMethod_var);
		// shop.Exit();
		Shop_Exit_m9C7786793607C2DA829ABFEED1AFAB9E3FF8CFDF(L_7, NULL);
		// isShop = false;
		__this->___isShop_38 = (bool)0;
		// nearObject = null;
		__this->___nearObject_45 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nearObject_45), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// bool isFireReady = true;
		__this->___isFireReady_34 = (bool)1;
		// int equipWeaponIndex = -1;
		__this->___equipWeaponIndex_47 = (-1);
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
// System.Void Player/<OnDamage>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__66__ctor_m56CDC43D66F711B2B178567D7AB7786F94BE8DF2 (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Player/<OnDamage>d__66::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__66_System_IDisposable_Dispose_m99FD02B19E9FE1DE0231AA322CE975FC7295F40E (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Player/<OnDamage>d__66::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnDamageU3Ed__66_MoveNext_mD57FA562B5952E74891274B9EA6DB56F8582A08B (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_1 = NULL;
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isDamage = true;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = V_1;
		L_4->___isDamage_37 = (bool)1;
		// foreach(MeshRenderer mesh in meshs)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_6 = L_5->___meshs_44;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0049;
	}

IL_0033:
	{
		// foreach(MeshRenderer mesh in meshs)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		// mesh.material.color = Color.yellow;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_12, NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0049:
	{
		// foreach(MeshRenderer mesh in meshs)
		int32_t L_14 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		// if (isBossAtk)
		bool L_16 = __this->___isBossAtk_3;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// rigid.AddForce(transform.forward * -25, ForceMode.Impulse); // ???? ???????? ???? ?? ?????? ??? ??? ????
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = L_17->___rigid_43;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (-25.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_18, L_22, 1, NULL);
	}

IL_0078:
	{
		// if (health <= 0 && !isDead)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_23 = V_1;
		int32_t L_24 = L_23->___health_14;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_25 = V_1;
		bool L_26 = L_25->___isDead_39;
		if (L_26)
		{
			goto IL_008f;
		}
	}
	{
		// OnDie();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_27 = V_1;
		Player_OnDie_m5B6904B1766BFB1A2C31CE7DAA7B6441CB02C954(L_27, NULL);
	}

IL_008f:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_28 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_28, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isDamage = false;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_29 = V_1;
		L_29->___isDamage_37 = (bool)0;
		// foreach(MeshRenderer mesh in meshs)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_30 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_31 = L_30->___meshs_44;
		V_2 = L_31;
		V_3 = 0;
		goto IL_00d7;
	}

IL_00c1:
	{
		// foreach(MeshRenderer mesh in meshs)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = L_33;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		// mesh.material.color = Color.white;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36;
		L_36 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_35, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_36, L_37, NULL);
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d7:
	{
		// foreach(MeshRenderer mesh in meshs)
		int32_t L_39 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00c1;
		}
	}
	{
		// if (isBossAtk)
		bool L_41 = __this->___isBossAtk_3;
		if (!L_41)
		{
			goto IL_00f5;
		}
	}
	{
		// rigid.velocity = Vector3.zero;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_42 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43 = L_42->___rigid_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_43, L_44, NULL);
	}

IL_00f5:
	{
		// }
		return (bool)0;
	}
}
// System.Object Player/<OnDamage>d__66::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageU3Ed__66_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5EE88DCE3C0BC78136063B78FAC6787180190987 (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Player/<OnDamage>d__66::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageU3Ed__66_System_Collections_IEnumerator_Reset_m191F61E24C744D121AE3101DFA49794617DDA85D (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnDamageU3Ed__66_System_Collections_IEnumerator_Reset_m191F61E24C744D121AE3101DFA49794617DDA85D_RuntimeMethod_var)));
	}
}
// System.Object Player/<OnDamage>d__66::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageU3Ed__66_System_Collections_IEnumerator_get_Current_m25202C7F971C5F7CA667E6D196D5938BC44FDE18 (U3COnDamageU3Ed__66_tA7BAFAF439A430EFD6C9E10183042A9BDD64C8DA* __this, const RuntimeMethod* method) 
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
// System.Void Shop::Enter(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Enter_mDE9F264522CE67AD0D6254471A6F3B861F9F7FD5 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player0, const RuntimeMethod* method) 
{
	{
		// enterPlayer = player;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ___player0;
		__this->___enterPlayer_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enterPlayer_11), (void*)L_0);
		// uiGroup.anchoredPosition = Vector3.zero; // ??? ???? ui ??? ?????
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___uiGroup_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Shop::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Exit_m9C7786793607C2DA829ABFEED1AFAB9E3FF8CFDF (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01D65976C9CD9FF7A318C0182FDB99BEAE05BC07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("doHello");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral01D65976C9CD9FF7A318C0182FDB99BEAE05BC07, NULL);
		// uiGroup.anchoredPosition = Vector3.down * 1000; // ???? ??, ui ??? ?????? ??????.
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___uiGroup_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (1000.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Shop::Buy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Buy_m27C987CC6077E310E99B46F33BEE072FC48902F1 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int price = itemPrice[index];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___itemPrice_7;
		int32_t L_1 = ___index0;
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (price > enterPlayer.coin)
		int32_t L_4 = V_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___enterPlayer_11;
		int32_t L_6 = L_5->___coin_13;
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		// StopCoroutine(Talk()); // ?????? ??? ???? ??? ???? ?? ??? ?????? ???? ???? ??? ????.
		RuntimeObject* L_7;
		L_7 = Shop_Talk_mB81E2FCACFFBAC56AE42FA359067AC9F5DBB5AC2(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_7, NULL);
		// StartCoroutine(Talk());
		RuntimeObject* L_8;
		L_8 = Shop_Talk_mB81E2FCACFFBAC56AE42FA359067AC9F5DBB5AC2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// enterPlayer.coin -= price;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___enterPlayer_11;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = L_10;
		int32_t L_12 = L_11->___coin_13;
		int32_t L_13 = V_0;
		L_11->___coin_13 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		// Vector3 ranVec = Vector3.right * Random.Range(-3, 3) + Vector3.forward * Random.Range(-3, 3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-3), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, ((float)L_15), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		int32_t L_18;
		L_18 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-3), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, ((float)L_18), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_19, NULL);
		V_1 = L_20;
		// Instantiate(itemObj[index], itemPos[index].position + ranVec, itemPos[index].rotation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___itemObj_6;
		int32_t L_22 = ___index0;
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = __this->___itemPos_8;
		int32_t L_26 = ___index0;
		int32_t L_27 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_30, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___itemPos_8;
		int32_t L_33 = ___index0;
		int32_t L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_24, L_31, L_36, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator Shop::Talk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shop_Talk_mB81E2FCACFFBAC56AE42FA359067AC9F5DBB5AC2 (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* L_0 = (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC*)il2cpp_codegen_object_new(U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC_il2cpp_TypeInfo_var);
		U3CTalkU3Ed__11__ctor_mD6B7999F64277240B8B06E920B8A27B645F18023(L_0, 0, NULL);
		U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m7BDEDC38368666EB9081CB3C46CE0BDB7380566E (Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Shop/<Talk>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__11__ctor_mD6B7999F64277240B8B06E920B8A27B645F18023 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Shop/<Talk>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__11_System_IDisposable_Dispose_m2B7858956C3AC7AB18FF8D489FE63DB88FC58775 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Shop/<Talk>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTalkU3Ed__11_MoveNext_m747CB85F7A67493A28B66D956F8C727510FA9786 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// talkText.text = talkData[1];
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_4 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___talkText_10;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_6 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6->___talkData_9;
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// talkText.text = talkData[0];
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_11 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___talkText_10;
		Shop_t8B1A82F6B39FDC982B3A8F8CC2226916FC9036E3* L_13 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13->___talkData_9;
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		// }
		return (bool)0;
	}
}
// System.Object Shop/<Talk>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTalkU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43587AD1EC1082B2F97B8AFFDD4BB3479BCD6E25 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Shop/<Talk>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTalkU3Ed__11_System_Collections_IEnumerator_Reset_mF7C980DCE741E5FA1ED6DCE9E2E5AB22EB1ED24F (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTalkU3Ed__11_System_Collections_IEnumerator_Reset_mF7C980DCE741E5FA1ED6DCE9E2E5AB22EB1ED24F_RuntimeMethod_var)));
	}
}
// System.Object Shop/<Talk>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTalkU3Ed__11_System_Collections_IEnumerator_get_Current_m93CEFBABD9EA45F475BA5B0CDC2A524869E06EE3 (U3CTalkU3Ed__11_tFD9CC4D3F6FCEB65A3B970926EF8F1F7A86464BC* __this, const RuntimeMethod* method) 
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
// System.Void StartZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartZone_OnTriggerEnter_m59C4C4893E35FB2F9A45B7B57F9CD848755CC261 (StartZone_t5F1D2065E03FA89A350AFBFD90887FFD83E129A5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// manager.StageStart();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = __this->___manager_4;
		GameManager_StageStart_m30DCC674CE251E720F27B419FC5AA77F7FA3CEDD(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void StartZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartZone__ctor_m1AE0880C5B92A484D0737CB13B9B172CFE8DE7CE (StartZone_t5F1D2065E03FA89A350AFBFD90887FFD83E129A5* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Weapon::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Use_m35B572FC1E2B9563907D42A66906B81C5295642C (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285B5D999BB18B957C4E2E692A07A3A629685F59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(type == Type.Melee)
		int32_t L_0 = __this->___type_4;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// StopCoroutine("Swing");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral285B5D999BB18B957C4E2E692A07A3A629685F59, NULL);
		// StartCoroutine("Swing");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral285B5D999BB18B957C4E2E692A07A3A629685F59, NULL);
		return;
	}

IL_0020:
	{
		// else if (type == Type.Range && curAmmo > 0) // ?????? ??????? ?????? ??? ??? ???? ???????
		int32_t L_2 = __this->___type_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_3 = __this->___curAmmo_8;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// curAmmo--;
		int32_t L_4 = __this->___curAmmo_8;
		__this->___curAmmo_8 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// StartCoroutine("Shot");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Weapon::Swing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weapon_Swing_mBCE038B712940CF49239B31F89F826791FDDAD4D (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* L_0 = (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF*)il2cpp_codegen_object_new(U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF_il2cpp_TypeInfo_var);
		U3CSwingU3Ed__13__ctor_mF09EC7A12C0E90ABCEA34BDDF1EE66E34D6F5539(L_0, 0, NULL);
		U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Weapon::Shot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weapon_Shot_mE240B206D2F9402944E14A458D7BD5903606BB93 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* L_0 = (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE*)il2cpp_codegen_object_new(U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE_il2cpp_TypeInfo_var);
		U3CShotU3Ed__14__ctor_m8C40C641D2E6BEF43443B60FA315747E21AD7962(L_0, 0, NULL);
		U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m6F053F0444AE8DF68EDA99C92CF944903C784332 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Weapon/<Swing>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwingU3Ed__13__ctor_mF09EC7A12C0E90ABCEA34BDDF1EE66E34D6F5539 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Weapon/<Swing>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwingU3Ed__13_System_IDisposable_Dispose_mA015D0B9F0833D85357B10E69FDE8925F0D12BE6 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Weapon/<Swing>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwingU3Ed__13_MoveNext_mC0A7AC8D9F8A7BB6CE550DE83BA0BCF5EEE45685 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_00aa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f); // 0.1?? ???
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = true;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_4 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_5 = L_4->___meleeArea_9;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)1, NULL);
		// trailEffect.enabled = true;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_6 = V_1;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_7 = L_6->___trailEffect_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
		// yield return new WaitForSeconds(0.4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.400000006f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeArea.enabled = false;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_9 = V_1;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = L_9->___meleeArea_9;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.300000012f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// trailEffect.enabled = false;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_12 = V_1;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_13 = L_12->___trailEffect_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Weapon/<Swing>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwingU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEE653DD3EF0F276E97636EDEC30BF70D297A8DFC (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Weapon/<Swing>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwingU3Ed__13_System_Collections_IEnumerator_Reset_mAEC7FC2A23CDFE6A520FFD5DD3F5AA86CB90A963 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwingU3Ed__13_System_Collections_IEnumerator_Reset_mAEC7FC2A23CDFE6A520FFD5DD3F5AA86CB90A963_RuntimeMethod_var)));
	}
}
// System.Object Weapon/<Swing>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwingU3Ed__13_System_Collections_IEnumerator_get_Current_mA2BCBA5676158D4C122F149C21E9B99D1DBA9A11 (U3CSwingU3Ed__13_tE0AE535EDDD93A7D0E49D2D728DB34929B84D8CF* __this, const RuntimeMethod* method) 
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
// System.Void Weapon/<Shot>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__14__ctor_m8C40C641D2E6BEF43443B60FA315747E21AD7962 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Weapon/<Shot>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__14_System_IDisposable_Dispose_mBD7DC601B715788A455023BE18039310349C1CD7 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Weapon/<Shot>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShotU3Ed__14_MoveNext_mF231C8B592C6A5AE6139E6B2853F78FCE5FC6B93 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_007a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject intantBullet = Instantiate(bullet, bulletPos.position, bulletPos.rotation);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___bullet_12;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___bulletPos_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___bulletPos_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_8, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___U3CintantBulletU3E5__2_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CintantBulletU3E5__2_3), (void*)L_12);
		// Rigidbody bulletRigid = intantBullet.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___U3CintantBulletU3E5__2_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_13, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// bulletRigid.velocity = bulletPos.forward * 50;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___bulletPos_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (50.0f), NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_14, L_18, NULL);
		// yield return null; // ?? ?????? ???
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject intantCase = Instantiate(bulletCase, bulletCasePos.position, bulletCasePos.rotation);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_19 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___bulletCase_14;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_21 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___bulletCasePos_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_24 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___bulletCasePos_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_23, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody caseRigid = intantBullet.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___U3CintantBulletU3E5__2_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29;
		L_29 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_28, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// Vector3 caseVec = bulletCasePos.forward * Random.Range(-3, -2) + Vector3.up * Random.Range(2, 3);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_30 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30->___bulletCasePos_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_31, NULL);
		int32_t L_33;
		L_33 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-3), ((int32_t)-2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, ((float)L_33), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		int32_t L_36;
		L_36 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(2, 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, ((float)L_36), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_37, NULL);
		V_2 = L_38;
		// caseRigid.AddForce(caseVec, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_39, L_40, 1, NULL);
		// caseRigid.AddTorque(Vector3.up * 10, ForceMode.Impulse);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, (10.0f), NULL);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_39, L_42, 1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Weapon/<Shot>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShotU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57BF70A09EA28079F784B05ABBF577674022032B (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Weapon/<Shot>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__14_System_Collections_IEnumerator_Reset_m9AC853D971A20A3586C07742AABBAD08AD495855 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShotU3Ed__14_System_Collections_IEnumerator_Reset_m9AC853D971A20A3586C07742AABBAD08AD495855_RuntimeMethod_var)));
	}
}
// System.Object Weapon/<Shot>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShotU3Ed__14_System_Collections_IEnumerator_get_Current_mB29758A8FA9B95013FE20A108C727AEBB2766C53 (U3CShotU3Ed__14_t68BF7E96BA939B7CA7323932DA89402192DF15FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
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
		int32_t L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
