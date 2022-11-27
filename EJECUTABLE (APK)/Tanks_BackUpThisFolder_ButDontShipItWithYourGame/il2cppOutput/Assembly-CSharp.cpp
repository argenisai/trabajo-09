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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TankManager[]
struct TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1;
// Complete.TankManager[]
struct TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraControl
struct CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE;
// Complete.CameraControl
struct CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// Complete.GameManager
struct GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputController
struct InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Move
struct Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Reverse
struct Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShellExplosion
struct ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348;
// Complete.ShellExplosion
struct ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TankHealth
struct TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1;
// Complete.TankHealth
struct TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A;
// TankManager
struct TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF;
// Complete.TankManager
struct TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A;
// TankMovement
struct TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55;
// Complete.TankMovement
struct TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A;
// TankShooting
struct TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8;
// Complete.TankShooting
struct TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIDirectionControl
struct UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450;
// Complete.UIDirectionControl
struct UIDirectionControl_t2A8F33103425708E58A800F9D50F589F087832AC;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// GameManager/<GameLoop>d__16
struct U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8;
// GameManager/<RoundEnding>d__19
struct U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77;
// GameManager/<RoundPlaying>d__18
struct U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B;
// GameManager/<RoundStarting>d__17
struct U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F;
// Complete.GameManager/<GameLoop>d__15
struct U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0;
// Complete.GameManager/<RoundEnding>d__18
struct U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627;
// Complete.GameManager/<RoundPlaying>d__17
struct U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8;
// Complete.GameManager/<RoundStarting>d__16
struct U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B91FF744F525ABB88D3B74A29B82B3461601889;
IL2CPP_EXTERN_C String_t* _stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A78859121D68B22A32F6F0DA04A7DDD4BC5E27C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB27A6CC0206AE51F39F86F2C522F7CB8C768B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7E11E375E33878494B9015A6937D5A5A032D9962;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED;
IL2CPP_EXTERN_C String_t* _stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC;
IL2CPP_EXTERN_C String_t* _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA2085729353EAEB87B3AB05409A69B023603596C;
IL2CPP_EXTERN_C String_t* _stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615;
IL2CPP_EXTERN_C String_t* _stringLiteralB0316CC057E4784984E4D9497F8C2EEAF7793307;
IL2CPP_EXTERN_C String_t* _stringLiteralBA992D14278C34E0419012B69CF439462A590A46;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A_m2849F5EF655DF777A480DCC70A1E1F18A4969DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1_m4331DDED79CB2A7595DBCE02CA181916946538E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55_m07E7FAFCF86B05CF1419950E6FE30D47EC97F929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A_m6971FD55B8E6A1CF2E52C4670D4C06FE187F90FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8_m1A62EA61B4A6574AEAC080A803E4E751826D5E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1_m30D52907C1A638D60E5DBB6FAF5343ACBCCD5FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_mCFE3FE3CDBBA0F66DBD7A99ED276992E0D670FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameLoopU3Ed__16_System_Collections_IEnumerator_Reset_m2D4396004A3ED9F93600F79DA68CF71C50795FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_m79E995BE1659D9EFA172EB0335247F68034C8FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundEndingU3Ed__19_System_Collections_IEnumerator_Reset_mDCBF3096946E2973E21BF047270D637C513450ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_mFC481FB780F4A778D17660216435C6C633228E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundPlayingU3Ed__18_System_Collections_IEnumerator_Reset_m9EF00C229529AD0E6773290C11DB63B86EC904F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m83C27E621BE79CDDB7AB992C42A323D4F90E7C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundStartingU3Ed__17_System_Collections_IEnumerator_Reset_m9435D4290B8B4B978A276545BC7C6D2D2F568AD3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1;
struct TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
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

// GameManager/<GameLoop>d__16
struct U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8  : public RuntimeObject
{
	// System.Int32 GameManager/<GameLoop>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameLoop>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<GameLoop>d__16::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<RoundEnding>d__19
struct U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77  : public RuntimeObject
{
	// System.Int32 GameManager/<RoundEnding>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundEnding>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundEnding>d__19::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<RoundPlaying>d__18
struct U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B  : public RuntimeObject
{
	// System.Int32 GameManager/<RoundPlaying>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundPlaying>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundPlaying>d__18::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<RoundStarting>d__17
struct U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F  : public RuntimeObject
{
	// System.Int32 GameManager/<RoundStarting>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundStarting>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundStarting>d__17::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// Complete.GameManager/<GameLoop>d__15
struct U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0  : public RuntimeObject
{
	// System.Int32 Complete.GameManager/<GameLoop>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Complete.GameManager/<GameLoop>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Complete.GameManager Complete.GameManager/<GameLoop>d__15::<>4__this
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* ___U3CU3E4__this_2;
};

// Complete.GameManager/<RoundEnding>d__18
struct U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627  : public RuntimeObject
{
	// System.Int32 Complete.GameManager/<RoundEnding>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Complete.GameManager/<RoundEnding>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Complete.GameManager Complete.GameManager/<RoundEnding>d__18::<>4__this
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* ___U3CU3E4__this_2;
};

// Complete.GameManager/<RoundPlaying>d__17
struct U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8  : public RuntimeObject
{
	// System.Int32 Complete.GameManager/<RoundPlaying>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Complete.GameManager/<RoundPlaying>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Complete.GameManager Complete.GameManager/<RoundPlaying>d__17::<>4__this
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* ___U3CU3E4__this_2;
};

// Complete.GameManager/<RoundStarting>d__16
struct U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C  : public RuntimeObject
{
	// System.Int32 Complete.GameManager/<RoundStarting>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Complete.GameManager/<RoundStarting>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Complete.GameManager Complete.GameManager/<RoundStarting>d__16::<>4__this
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* ___U3CU3E4__this_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TankManager
struct TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF  : public RuntimeObject
{
	// UnityEngine.Color TankManager::m_PlayerColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PlayerColor_0;
	// UnityEngine.Transform TankManager::m_SpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SpawnPoint_1;
	// System.Int32 TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject TankManager::m_Instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Instance_4;
	// System.Int32 TankManager::m_Wins
	int32_t ___m_Wins_5;
	// TankMovement TankManager::m_Movement
	TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* ___m_Movement_6;
	// TankShooting TankManager::m_Shooting
	TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* ___m_Shooting_7;
	// UnityEngine.GameObject TankManager::m_CanvasGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CanvasGameObject_8;
};

// Complete.TankManager
struct TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A  : public RuntimeObject
{
	// UnityEngine.Color Complete.TankManager::m_PlayerColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PlayerColor_0;
	// UnityEngine.Transform Complete.TankManager::m_SpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SpawnPoint_1;
	// System.Int32 Complete.TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String Complete.TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject Complete.TankManager::m_Instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Instance_4;
	// System.Int32 Complete.TankManager::m_Wins
	int32_t ___m_Wins_5;
	// Complete.TankMovement Complete.TankManager::m_Movement
	TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* ___m_Movement_6;
	// Complete.TankShooting Complete.TankManager::m_Shooting
	TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* ___m_Shooting_7;
	// UnityEngine.GameObject Complete.TankManager::m_CanvasGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CanvasGameObject_8;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraControl
struct CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraControl::m_DampTime
	float ___m_DampTime_4;
	// System.Single CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_5;
	// System.Single CameraControl::m_MinSize
	float ___m_MinSize_6;
	// UnityEngine.Transform[] CameraControl::m_Targets
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Targets_7;
	// UnityEngine.Camera CameraControl::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_8;
	// System.Single CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_9;
	// UnityEngine.Vector3 CameraControl::m_MoveVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveVelocity_10;
	// UnityEngine.Vector3 CameraControl::m_DesiredPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DesiredPosition_11;
};

// Complete.CameraControl
struct CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Complete.CameraControl::m_DampTime
	float ___m_DampTime_4;
	// System.Single Complete.CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_5;
	// System.Single Complete.CameraControl::m_MinSize
	float ___m_MinSize_6;
	// UnityEngine.Transform[] Complete.CameraControl::m_Targets
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Targets_7;
	// UnityEngine.Camera Complete.CameraControl::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_8;
	// System.Single Complete.CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_9;
	// UnityEngine.Vector3 Complete.CameraControl::m_MoveVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveVelocity_10;
	// UnityEngine.Vector3 Complete.CameraControl::m_DesiredPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DesiredPosition_11;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_4;
	// System.Single GameManager::m_StartDelay
	float ___m_StartDelay_5;
	// System.Single GameManager::m_EndDelay
	float ___m_EndDelay_6;
	// CameraControl GameManager::m_CameraControl
	CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* ___m_CameraControl_7;
	// UnityEngine.UI.Text GameManager::m_MessageText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_MessageText_8;
	// UnityEngine.GameObject GameManager::tank1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank1_9;
	// UnityEngine.GameObject GameManager::tank2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank2_10;
	// TankManager[] GameManager::m_Tanks
	TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* ___m_Tanks_11;
	// System.Int32 GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_12;
	// UnityEngine.WaitForSeconds GameManager::m_StartWait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_StartWait_13;
	// UnityEngine.WaitForSeconds GameManager::m_EndWait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_EndWait_14;
	// TankManager GameManager::m_RoundWinner
	TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* ___m_RoundWinner_15;
	// TankManager GameManager::m_GameWinner
	TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* ___m_GameWinner_16;
};

// Complete.GameManager
struct GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Complete.GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_4;
	// System.Single Complete.GameManager::m_StartDelay
	float ___m_StartDelay_5;
	// System.Single Complete.GameManager::m_EndDelay
	float ___m_EndDelay_6;
	// Complete.CameraControl Complete.GameManager::m_CameraControl
	CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* ___m_CameraControl_7;
	// UnityEngine.UI.Text Complete.GameManager::m_MessageText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_MessageText_8;
	// UnityEngine.GameObject Complete.GameManager::m_TankPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TankPrefab_9;
	// Complete.TankManager[] Complete.GameManager::m_Tanks
	TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* ___m_Tanks_10;
	// System.Int32 Complete.GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_11;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_StartWait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_StartWait_12;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_EndWait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_EndWait_13;
	// Complete.TankManager Complete.GameManager::m_RoundWinner
	TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* ___m_RoundWinner_14;
	// Complete.TankManager Complete.GameManager::m_GameWinner
	TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* ___m_GameWinner_15;
};

// InputController
struct InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform InputController::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_4;
	// Joystick InputController::joystickMove
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___joystickMove_5;
	// Joystick InputController::joystickGiro
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___joystickGiro_6;
	// UnityEngine.Rigidbody InputController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// System.Boolean InputController::shoot
	bool ___shoot_8;
	// System.Single InputController::rotateV
	float ___rotateV_9;
	// System.Single InputController::rotateH
	float ___rotateH_10;
	// System.Single InputController::speed
	float ___speed_11;
	// System.Single InputController::speedGiro
	float ___speedGiro_12;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// Move
struct Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Move::isPressed
	bool ___isPressed_4;
	// UnityEngine.GameObject Move::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_5;
	// System.Single Move::Force
	float ___Force_6;
};

// Reverse
struct Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Reverse::isPressed
	bool ___isPressed_4;
	// UnityEngine.GameObject Reverse::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_5;
	// System.Single Reverse::Force
	float ___Force_6;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Rotate::isPressed
	bool ___isPressed_4;
	// UnityEngine.GameObject Rotate::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_5;
	// System.Single Rotate::Force
	float ___Force_6;
};

// ShellExplosion
struct ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask ShellExplosion::m_TankMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_TankMask_4;
	// UnityEngine.ParticleSystem ShellExplosion::m_ExplosionParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ExplosionParticles_5;
	// UnityEngine.AudioSource ShellExplosion::m_ExplosionAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ExplosionAudio_6;
	// System.Single ShellExplosion::m_MaxDamage
	float ___m_MaxDamage_7;
	// System.Single ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_8;
	// System.Single ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_9;
	// System.Single ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_10;
};

// Complete.ShellExplosion
struct ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask Complete.ShellExplosion::m_TankMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_TankMask_4;
	// UnityEngine.ParticleSystem Complete.ShellExplosion::m_ExplosionParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ExplosionParticles_5;
	// UnityEngine.AudioSource Complete.ShellExplosion::m_ExplosionAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ExplosionAudio_6;
	// System.Single Complete.ShellExplosion::m_MaxDamage
	float ___m_MaxDamage_7;
	// System.Single Complete.ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_8;
	// System.Single Complete.ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_9;
	// System.Single Complete.ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_10;
};

// TankHealth
struct TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TankHealth::m_StartingHealth
	float ___m_StartingHealth_4;
	// UnityEngine.UI.Slider TankHealth::m_Slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_Slider_5;
	// UnityEngine.UI.Image TankHealth::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_6;
	// UnityEngine.Color TankHealth::m_FullHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FullHealthColor_7;
	// UnityEngine.Color TankHealth::m_ZeroHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ZeroHealthColor_8;
	// UnityEngine.GameObject TankHealth::m_ExplosionPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ExplosionPrefab_9;
	// UnityEngine.AudioSource TankHealth::m_ExplosionAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ExplosionAudio_10;
	// UnityEngine.ParticleSystem TankHealth::m_ExplosionParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ExplosionParticles_11;
	// System.Single TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_12;
	// System.Boolean TankHealth::m_Dead
	bool ___m_Dead_13;
};

// Complete.TankHealth
struct TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Complete.TankHealth::m_StartingHealth
	float ___m_StartingHealth_4;
	// UnityEngine.UI.Slider Complete.TankHealth::m_Slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_Slider_5;
	// UnityEngine.UI.Image Complete.TankHealth::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_6;
	// UnityEngine.Color Complete.TankHealth::m_FullHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FullHealthColor_7;
	// UnityEngine.Color Complete.TankHealth::m_ZeroHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ZeroHealthColor_8;
	// UnityEngine.GameObject Complete.TankHealth::m_ExplosionPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ExplosionPrefab_9;
	// UnityEngine.AudioSource Complete.TankHealth::m_ExplosionAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ExplosionAudio_10;
	// UnityEngine.ParticleSystem Complete.TankHealth::m_ExplosionParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ExplosionParticles_11;
	// System.Single Complete.TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_12;
	// System.Boolean Complete.TankHealth::m_Dead
	bool ___m_Dead_13;
};

// TankMovement
struct TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// System.Single TankMovement::m_Speed
	float ___m_Speed_5;
	// System.Single TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_6;
	// UnityEngine.AudioSource TankMovement::m_MovementAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_MovementAudio_7;
	// UnityEngine.AudioClip TankMovement::m_EngineIdling
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_EngineIdling_8;
	// UnityEngine.AudioClip TankMovement::m_EngineDriving
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_EngineDriving_9;
	// System.Single TankMovement::m_PitchRange
	float ___m_PitchRange_10;
	// System.String TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_11;
	// System.String TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_12;
	// UnityEngine.Rigidbody TankMovement::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_13;
	// System.Single TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_14;
	// System.Single TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_15;
	// System.Single TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_16;
};

// Complete.TankMovement
struct TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Complete.TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// System.Single Complete.TankMovement::m_Speed
	float ___m_Speed_5;
	// System.Single Complete.TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_6;
	// UnityEngine.AudioSource Complete.TankMovement::m_MovementAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_MovementAudio_7;
	// UnityEngine.AudioClip Complete.TankMovement::m_EngineIdling
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_EngineIdling_8;
	// UnityEngine.AudioClip Complete.TankMovement::m_EngineDriving
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_EngineDriving_9;
	// System.Single Complete.TankMovement::m_PitchRange
	float ___m_PitchRange_10;
	// System.String Complete.TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_11;
	// System.String Complete.TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_12;
	// UnityEngine.Rigidbody Complete.TankMovement::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_13;
	// System.Single Complete.TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_14;
	// System.Single Complete.TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_15;
	// System.Single Complete.TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_16;
	// UnityEngine.ParticleSystem[] Complete.TankMovement::m_particleSystems
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___m_particleSystems_17;
};

// TankShooting
struct TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// UnityEngine.Rigidbody TankShooting::m_Shell
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Shell_5;
	// UnityEngine.Transform TankShooting::m_FireTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FireTransform_6;
	// UnityEngine.UI.Slider TankShooting::m_AimSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_AimSlider_7;
	// UnityEngine.AudioSource TankShooting::m_ShootingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ShootingAudio_8;
	// UnityEngine.AudioClip TankShooting::m_ChargingClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_ChargingClip_9;
	// UnityEngine.AudioClip TankShooting::m_FireClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_FireClip_10;
	// System.Single TankShooting::m_MinLaunchForce
	float ___m_MinLaunchForce_11;
	// System.Single TankShooting::m_MaxLaunchForce
	float ___m_MaxLaunchForce_12;
	// System.Single TankShooting::m_MaxChargeTime
	float ___m_MaxChargeTime_13;
	// System.String TankShooting::m_FireButton
	String_t* ___m_FireButton_14;
	// System.Single TankShooting::m_CurrentLaunchForce
	float ___m_CurrentLaunchForce_15;
	// System.Single TankShooting::m_ChargeSpeed
	float ___m_ChargeSpeed_16;
	// System.Boolean TankShooting::m_Fired
	bool ___m_Fired_17;
};

// Complete.TankShooting
struct TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Complete.TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// UnityEngine.Rigidbody Complete.TankShooting::m_Shell
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Shell_5;
	// UnityEngine.Transform Complete.TankShooting::m_FireTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FireTransform_6;
	// UnityEngine.UI.Slider Complete.TankShooting::m_AimSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___m_AimSlider_7;
	// UnityEngine.AudioSource Complete.TankShooting::m_ShootingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_ShootingAudio_8;
	// UnityEngine.AudioClip Complete.TankShooting::m_ChargingClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_ChargingClip_9;
	// UnityEngine.AudioClip Complete.TankShooting::m_FireClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_FireClip_10;
	// System.Single Complete.TankShooting::m_MinLaunchForce
	float ___m_MinLaunchForce_11;
	// System.Single Complete.TankShooting::m_MaxLaunchForce
	float ___m_MaxLaunchForce_12;
	// System.Single Complete.TankShooting::m_MaxChargeTime
	float ___m_MaxChargeTime_13;
	// System.String Complete.TankShooting::m_FireButton
	String_t* ___m_FireButton_14;
	// System.Single Complete.TankShooting::m_CurrentLaunchForce
	float ___m_CurrentLaunchForce_15;
	// System.Single Complete.TankShooting::m_ChargeSpeed
	float ___m_ChargeSpeed_16;
	// System.Boolean Complete.TankShooting::m_Fired
	bool ___m_Fired_17;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIDirectionControl
struct UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UIDirectionControl::m_UseRelativeRotation
	bool ___m_UseRelativeRotation_4;
	// UnityEngine.Quaternion UIDirectionControl::m_RelativeRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RelativeRotation_5;
};

// Complete.UIDirectionControl
struct UIDirectionControl_t2A8F33103425708E58A800F9D50F589F087832AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Complete.UIDirectionControl::m_UseRelativeRotation
	bool ___m_UseRelativeRotation_4;
	// UnityEngine.Quaternion Complete.UIDirectionControl::m_RelativeRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RelativeRotation_5;
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
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
// TankManager[]
struct TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1  : public RuntimeArray
{
	ALIGN_FIELD (8) TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* m_Items[1];

	inline TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* value)
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Complete.TankManager[]
struct TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787  : public RuntimeArray
{
	ALIGN_FIELD (8) TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* m_Items[1];

	inline TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_mDFE52889A57055DA1585B0D16B5ADB85928CA448 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) ;
// System.Void CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_m453BC77F9D8D37FCF1C8A409C83E0E3418EE57D3 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) ;
// System.Void CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m0389AFAF378C0C61CE788241138437425699BE58 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m57B711D7054C94D235FA9ADDD106274515A5018F (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_m29FC0F7778BB28F255D5A98803BADF89D01D8B53 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mD90A550B680FDA6DD69E86821FFE19CE6E2D6AEE (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_m575555FB3D794E54633B99EBAB7F7E745EA979C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_mB04B602CF19E2586C4639F2D447F5DB7BFADFA61 (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<GameLoop>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__16__ctor_mBB320C31E905EDE01FD4F87FCD98EE4B0C4919FE (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<RoundStarting>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__17__ctor_m724CA9C091DEB3EE186939B749ADECD1121EABEF (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<RoundPlaying>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__18__ctor_mF02B397A4ACC344EF23E491E723B3918842C2BD2 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<RoundEnding>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__19__ctor_m3D71FFF5B6DA05EA9EE6D28113C1FD6EB9F1B7F9 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_m19518A6C076FAE055061BEA50001EF2130E38594 (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) ;
// System.Void TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mBF147ACF91E062B63C82086DA058B146AFD7569B (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) ;
// System.Void TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mCF6A44C93E6513A55FA3E3BF443907FC412F926C (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_m45C89C2CEE4FB8EBBD1E67267A594B1FC854C459 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_m7CEB7480557247A21D4CE2099524D1871CC470D9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m67345CE55DCDA4E83D2861AD65011CF8EB0766C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m5E36A11F5D9636AFE8358DE10409D7520A2A5EA3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_mD1CC2239B11F143F268445442D9CC49349BC8906 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_m0A7C18620E3E14ED46ED26799D4A8A10EB42C5B7 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) ;
// System.Void GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m89550A716558A3BC593FB3F784EB13643DFE40C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_m530BBD4E7CB327C3225B2526D684E68935691917 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// TankManager GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GameManager_GetRoundWinner_m98105978595A72CB760254D40B13E9CCAFEC8E88 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// TankManager GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GameManager_GetGameWinner_m8E74C2DA4CB0BD6EBD9FD29E2E69188400C1AB04 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_mD284E583BF4525156BB530841D49A119EF7B1197 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TankMovement>()
inline TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* GameObject_GetComponent_TisTankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55_m07E7FAFCF86B05CF1419950E6FE30D47EC97F929 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TankShooting>()
inline TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* GameObject_GetComponent_TisTankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8_m1A62EA61B4A6574AEAC080A803E4E751826D5E55 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.String UnityEngine.ColorUtility::ToHtmlStringRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TankHealth>()
inline TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* Component_GetComponent_TisTankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1_m4331DDED79CB2A7595DBCE02CA181916946538E1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_m57005D1D48E2F5A7E897CE1B10A2C1AFD63C7AD0 (ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// System.Void TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m0893E1AE80CA4E9980DF095B1C9D95FC9E44C744 (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, float ___amount0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_duration_mE505BA9F6867A9C7FFBCF0F917E389F58C83624F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void InputController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Move_mC5A038BC63996D0AFF1F5D4D7BEC1C8297611268 (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) ;
// System.Void InputController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Rotate_mF26C26A0C1F16D72438760F68C02D7010A92FA0E (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_m87D375622277A86032BD31536B9F72046EA143F5 (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) ;
// System.Void TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_m8F31A3DA972D7BE4D6CF49E4A4B4795762AA124F (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_m3DC514D4A7FE505CC1E68DDD1F6EDAACEDBE9260 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_mC4D97E545D74A6759B164C3D43198FAF6664AD42 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) ;
// System.Void TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_m28D9A276F43972E817712C65D470B4BC4B9C0973 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) ;
// System.Void TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_m58FA687C0D5C121A8A6249141AAD09B09F859CF3 (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Rigidbody>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Single Complete.CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_m13BE6D15B3E4201A7E86928C07FB8F5471BE74A7 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mD2B1A59D952AA57B1BB15FE175DF681CCFC15BF9 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Complete.GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_m2CE5B0E616781684D30970A6BDCDB20FE5950264 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Complete.TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_m1CD60D9AEAA66BE38C919DE098277B9EAF799816 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager/<GameLoop>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15__ctor_m808C54787749FE1E7A7BC0918E90BDA07847312E (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Complete.GameManager/<RoundStarting>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16__ctor_mCE6BED4425A3C55966B355E0B34223361753A608 (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Complete.GameManager/<RoundPlaying>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17__ctor_m23E6A9A12480DBFEBD9D40C12E2441484FFC00D9 (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Complete.GameManager/<RoundEnding>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18__ctor_m9E9C7A3AEF94DCE03B73CBF63138177B3EFEF730 (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Complete.TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_m5FBAF81B7367D3A130F29AC087B31CA8E8DC41C5 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mC5A3BB345E0FB0CBF59CFA0881D752AABC128523 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mA44FE6C113305AC849DCB6883421DF495125CF6F (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Complete.GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_mBA131EFE10A2D679173B1C3DB105B5FA0442B993 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Complete.GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_mCADB4F5AEEA297E0AA1A8EDC6C6DD11DEDD4E21E (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Complete.GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m1A0BA69960329F8ACF5D7C7C0355BC9BFA8F3D7D (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m112905166139D4EA103699DBDFEA430B9448C8CD (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_m674293C21161BDCAAACF1FCC07CAF7006376BA37 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_mE3A45587A839D7D2B01261C4F70F4AD8C2E1CCD7 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m51CAE77182D5995BDE7468E9961B05B2CB021B43 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.Boolean Complete.GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_mBF1365221AF19325118EA914CE34437C54B6EACF (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// Complete.TankManager Complete.GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GameManager_GetRoundWinner_m22EC25343499DC97180EC607C140F78A5A015BB1 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// Complete.TankManager Complete.GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GameManager_GetGameWinner_mF24C5519AA94F98203EE9CC28309412EE28064F9 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// System.String Complete.GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_mAE8A4933EE9C0F03BBF7E2551B2F7BF5FC3CBD0B (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Complete.TankMovement>()
inline TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* GameObject_GetComponent_TisTankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A_m6971FD55B8E6A1CF2E52C4670D4C06FE187F90FE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Complete.TankShooting>()
inline TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* GameObject_GetComponent_TisTankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1_m30D52907C1A638D60E5DBB6FAF5343ACBCCD5FEC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Complete.TankHealth>()
inline TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* Component_GetComponent_TisTankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A_m2849F5EF655DF777A480DCC70A1E1F18A4969DF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Complete.ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_mE63A470C1A057BE49F73E7E9028EA0A1266D6E49 (ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) ;
// System.Void Complete.TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m241E8094DD7695F0450FE373ADAB279655DF0248 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, float ___amount0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_m473B25E8F5EEB3B634A3D6DE23188F470DCB9434 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_mAF724DE7C2A745FEC3334B60C3BAB925160C27A5 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_mB886853EF6395C0A89C4252CB4B9341219544EBA (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_m63E38FC5F84B3EB8FAF12E18B080371AFF5F2227 (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_m0DA8FD441737181443D3C0CEB5C33B9344F7F334 (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) ;
// System.Void Complete.TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_m08945B074FBD6588BB94BAD61A3E35EF0C67741E (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_1, 0, NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_2 = __this->___variableJoystick_4;
		NullCheck(L_2);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_2, 1, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_1, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___axisSprites_7;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_6, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_7 = __this->___variableJoystick_4;
		NullCheck(L_7);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_7, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___axisSprites_7;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_12, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_13 = __this->___variableJoystick_4;
		NullCheck(L_13);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_13, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___axisSprites_7;
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void CameraControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Awake_m0606DF07D4779B0B9FFA4B88668C2E4D73F4A4C9 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Camera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___m_Camera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FixedUpdate_m90E27C52B1DD17B58A8FAEE162D6B1BEE8F1FB7C (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		CameraControl_Move_mDFE52889A57055DA1585B0D16B5ADB85928CA448(__this, NULL);
		// Zoom();
		CameraControl_Zoom_m453BC77F9D8D37FCF1C8A409C83E0E3418EE57D3(__this, NULL);
		// }
		return;
	}
}
// System.Void CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_mDFE52889A57055DA1585B0D16B5ADB85928CA448 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition();
		CameraControl_FindAveragePosition_m0389AFAF378C0C61CE788241138437425699BE58(__this, NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_DesiredPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___m_MoveVelocity_10);
		float L_5 = __this->___m_DampTime_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_2, L_3, L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m0389AFAF378C0C61CE788241138437425699BE58 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 averagePos = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// int numTargets = 0;
		V_1 = 0;
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_Targets_7;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// averagePos += m_Targets[i].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___m_Targets_7;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		V_0 = L_12;
		// numTargets++;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_15 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16 = __this->___m_Targets_7;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (numTargets > 0)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// averagePos /= numTargets;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		int32_t L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_18, ((float)L_19), NULL);
		V_0 = L_20;
	}

IL_0056:
	{
		// averagePos.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		(&V_0)->___y_3 = L_23;
		// m_DesiredPosition = averagePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		__this->___m_DesiredPosition_11 = L_24;
		// }
		return;
	}
}
// System.Void CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_m453BC77F9D8D37FCF1C8A409C83E0E3418EE57D3 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float requiredSize = FindRequiredSize();
		float L_0;
		L_0 = CameraControl_FindRequiredSize_m57B711D7054C94D235FA9ADDD106274515A5018F(__this, NULL);
		V_0 = L_0;
		// m_Camera.orthographicSize = Mathf.SmoothDamp(m_Camera.orthographicSize, requiredSize, ref m_ZoomSpeed, m_DampTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_Camera_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_2, NULL);
		float L_4 = V_0;
		float* L_5 = (&__this->___m_ZoomSpeed_9);
		float L_6 = __this->___m_DampTime_4;
		float L_7;
		L_7 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_3, L_4, L_5, L_6, NULL);
		NullCheck(L_1);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Single CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m57B711D7054C94D235FA9ADDD106274515A5018F (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredLocalPos = transform.InverseTransformPoint(m_DesiredPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		V_0 = L_2;
		// float size = 0f;
		V_1 = (0.0f);
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___m_Targets_7;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// Vector3 targetLocalPos = transform.InverseTransformPoint(m_Targets[i].position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___m_Targets_7;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_9, L_14, NULL);
		// Vector3 desiredPosToTarget = targetLocalPos - desiredLocalPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_3 = L_17;
		// size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.y));
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = fabsf(L_20);
		float L_22;
		L_22 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, L_21, NULL);
		V_1 = L_22;
		// size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.x) / m_Camera.aspect);
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		float L_25 = L_24.___x_2;
		float L_26;
		L_26 = fabsf(L_25);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___m_Camera_8;
		NullCheck(L_27);
		float L_28;
		L_28 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_27, NULL);
		float L_29;
		L_29 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, ((float)(L_26/L_28)), NULL);
		V_1 = L_29;
	}

IL_007f:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_31 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___m_Targets_7;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// size += m_ScreenEdgeBuffer;
		float L_33 = V_1;
		float L_34 = __this->___m_ScreenEdgeBuffer_5;
		V_1 = ((float)il2cpp_codegen_add(L_33, L_34));
		// size = Mathf.Max(size, m_MinSize);
		float L_35 = V_1;
		float L_36 = __this->___m_MinSize_6;
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_35, L_36, NULL);
		V_1 = L_37;
		// return size;
		float L_38 = V_1;
		return L_38;
	}
}
// System.Void CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_m0A7C18620E3E14ED46ED26799D4A8A10EB42C5B7 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition();
		CameraControl_FindAveragePosition_m0389AFAF378C0C61CE788241138437425699BE58(__this, NULL);
		// transform.position = m_DesiredPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// m_Camera.orthographicSize = FindRequiredSize();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		float L_3;
		L_3 = CameraControl_FindRequiredSize_m57B711D7054C94D235FA9ADDD106274515A5018F(__this, NULL);
		NullCheck(L_2);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl__ctor_m8D3F1A9A5BB984EA7F1EF2423818739A5083BE03 (CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* __this, const RuntimeMethod* method) 
{
	{
		// public float m_DampTime = 0.2f;
		__this->___m_DampTime_4 = (0.200000003f);
		// public float m_ScreenEdgeBuffer = 4f;
		__this->___m_ScreenEdgeBuffer_5 = (4.0f);
		// public float m_MinSize = 6.5f;
		__this->___m_MinSize_6 = (6.5f);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_StartWait = new WaitForSeconds(m_StartDelay);
		float L_0 = __this->___m_StartDelay_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		__this->___m_StartWait_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StartWait_13), (void*)L_1);
		// m_EndWait = new WaitForSeconds(m_EndDelay);
		float L_2 = __this->___m_EndDelay_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, L_2, NULL);
		__this->___m_EndWait_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EndWait_14), (void*)L_3);
		// SpawnAllTanks();
		GameManager_SpawnAllTanks_m29FC0F7778BB28F255D5A98803BADF89D01D8B53(__this, NULL);
		// SetCameraTargets();
		GameManager_SetCameraTargets_mD90A550B680FDA6DD69E86821FFE19CE6E2D6AEE(__this, NULL);
		// StartCoroutine(GameLoop());
		RuntimeObject* L_4;
		L_4 = GameManager_GameLoop_m575555FB3D794E54633B99EBAB7F7E745EA979C2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_m29FC0F7778BB28F255D5A98803BADF89D01D8B53 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0071;
	}

IL_0004:
	{
		// if(i == 0){
		int32_t L_0 = V_0;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// m_Tanks[i].m_Instance = tank1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_1 = __this->___m_Tanks_11;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___tank1_9;
		NullCheck(L_4);
		L_4->___m_Instance_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Instance_4), (void*)L_5);
		// m_Tanks[i].m_PlayerNumber = i + 1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		NullCheck(L_9);
		L_9->___m_PlayerNumber_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// m_Tanks[i].Setup();
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_11 = __this->___m_Tanks_11;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		TankManager_Setup_mB04B602CF19E2586C4639F2D447F5DB7BFADFA61(L_14, NULL);
		goto IL_006d;
	}

IL_0039:
	{
		// else if(i == 1){
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		// m_Tanks[i].m_Instance = tank2;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_16 = __this->___m_Tanks_11;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___tank2_10;
		NullCheck(L_19);
		L_19->___m_Instance_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___m_Instance_4), (void*)L_20);
		// m_Tanks[i].m_PlayerNumber = i + 1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_21 = __this->___m_Tanks_11;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_0;
		NullCheck(L_24);
		L_24->___m_PlayerNumber_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// m_Tanks[i].Setup();
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_26 = __this->___m_Tanks_11;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		TankManager_Setup_mB04B602CF19E2586C4639F2D447F5DB7BFADFA61(L_29, NULL);
	}

IL_006d:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_31 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_32 = __this->___m_Tanks_11;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mD90A550B680FDA6DD69E86821FFE19CE6E2D6AEE (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Transform[] targets = new Transform[m_Tanks.Length];
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < targets.Length; i++)
		V_1 = 0;
		goto IL_002b;
	}

IL_0012:
	{
		// targets[i] = m_Tanks[i].m_Instance.transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = V_0;
		int32_t L_3 = V_1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_4 = __this->___m_Tanks_11;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___m_Instance_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_9);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_9);
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_11 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// m_CameraControl.m_Targets = targets;
		CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* L_13 = __this->___m_CameraControl_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = V_0;
		NullCheck(L_13);
		L_13->___m_Targets_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___m_Targets_7), (void*)L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_m575555FB3D794E54633B99EBAB7F7E745EA979C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* L_0 = (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8*)il2cpp_codegen_object_new(U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameLoopU3Ed__16__ctor_mBB320C31E905EDE01FD4F87FCD98EE4B0C4919FE(L_0, 0, NULL);
		U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_m45C89C2CEE4FB8EBBD1E67267A594B1FC854C459 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* L_0 = (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F*)il2cpp_codegen_object_new(U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundStartingU3Ed__17__ctor_m724CA9C091DEB3EE186939B749ADECD1121EABEF(L_0, 0, NULL);
		U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_m7CEB7480557247A21D4CE2099524D1871CC470D9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* L_0 = (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B*)il2cpp_codegen_object_new(U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundPlayingU3Ed__18__ctor_mF02B397A4ACC344EF23E491E723B3918842C2BD2(L_0, 0, NULL);
		U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m67345CE55DCDA4E83D2861AD65011CF8EB0766C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* L_0 = (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77*)il2cpp_codegen_object_new(U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundEndingU3Ed__19__ctor_m3D71FFF5B6DA05EA9EE6D28113C1FD6EB9F1B7F9(L_0, 0, NULL);
		U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_m530BBD4E7CB327C3225B2526D684E68935691917 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numTanksLeft = 0;
		V_0 = 0;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_0006:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___m_Instance_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// numTanksLeft++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_8 = V_1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_9 = __this->___m_Tanks_11;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return numTanksLeft <= 1;
		int32_t L_10 = V_0;
		return (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// TankManager GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GameManager_GetRoundWinner_m98105978595A72CB760254D40B13E9CCAFEC8E88 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___m_Instance_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0021:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_12 = __this->___m_Tanks_11;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF*)NULL;
	}
}
// TankManager GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* GameManager_GetGameWinner_m8E74C2DA4CB0BD6EBD9FD29E2E69188400C1AB04 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Wins == m_NumRoundsToWin)
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_Wins_5;
		int32_t L_5 = __this->___m_NumRoundsToWin_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_12 = __this->___m_Tanks_11;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF*)NULL;
	}
}
// System.String GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_mD284E583BF4525156BB530841D49A119EF7B1197 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B91FF744F525ABB88D3B74A29B82B3461601889);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB27A6CC0206AE51F39F86F2C522F7CB8C768B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E11E375E33878494B9015A6937D5A5A032D9962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2085729353EAEB87B3AB05409A69B023603596C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0316CC057E4784984E4D9497F8C2EEAF7793307);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA992D14278C34E0419012B69CF439462A590A46);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string message = "?EMPATE!";
		V_0 = _stringLiteralB0316CC057E4784984E4D9497F8C2EEAF7793307;
		// if (m_RoundWinner != null)
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_0 = __this->___m_RoundWinner_15;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// message = "?" + m_RoundWinner.m_ColoredPlayerText + " GANA LA RONDA!";
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_1 = __this->___m_RoundWinner_15;
		NullCheck(L_1);
		String_t* L_2 = L_1->___m_ColoredPlayerText_3;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0B91FF744F525ABB88D3B74A29B82B3461601889, L_2, _stringLiteral7E11E375E33878494B9015A6937D5A5A032D9962, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		// message += "\n\n\n\n";
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralA2085729353EAEB87B3AB05409A69B023603596C, NULL);
		V_0 = L_5;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_0082;
	}

IL_0039:
	{
		// message += m_Tanks[i].m_ColoredPlayerText + ": " + m_Tanks[i].m_Wins + " VICTORIAS\n";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_10 = __this->___m_Tanks_11;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14 = L_13->___m_ColoredPlayerText_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_9;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_17 = __this->___m_Tanks_11;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t* L_21 = (&L_20->___m_Wins_5);
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_21, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_16;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral6FB27A6CC0206AE51F39F86F2C522F7CB8C768B1);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6FB27A6CC0206AE51F39F86F2C522F7CB8C768B1);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		V_0 = L_24;
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_26 = V_1;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_27 = __this->___m_Tanks_11;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		// if (m_GameWinner != null)
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_28 = __this->___m_GameWinner_16;
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// message = "?" + m_GameWinner.m_ColoredPlayerText + " GANA EL JUEGO!";
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_29 = __this->___m_GameWinner_16;
		NullCheck(L_29);
		String_t* L_30 = L_29->___m_ColoredPlayerText_3;
		String_t* L_31;
		L_31 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0B91FF744F525ABB88D3B74A29B82B3461601889, L_30, _stringLiteralBA992D14278C34E0419012B69CF439462A590A46, NULL);
		V_0 = L_31;
	}

IL_00b0:
	{
		// return message;
		String_t* L_32 = V_0;
		return L_32;
	}
}
// System.Void GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m5E36A11F5D9636AFE8358DE10409D7520A2A5EA3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].Reset();
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_Reset_m19518A6C076FAE055061BEA50001EF2130E38594(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m89550A716558A3BC593FB3F784EB13643DFE40C2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].EnableControl();
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_EnableControl_mBF147ACF91E062B63C82086DA058B146AFD7569B(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_mD1CC2239B11F143F268445442D9CC49349BC8906 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].DisableControl();
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_0 = __this->___m_Tanks_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_DisableControl_mCF6A44C93E6513A55FA3E3BF443907FC412F926C(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tF16F5AA9B609F680CC5D9C480E2C05CB050022E1* L_6 = __this->___m_Tanks_11;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int m_NumRoundsToWin = 5;
		__this->___m_NumRoundsToWin_4 = 5;
		// public float m_StartDelay = 3f;
		__this->___m_StartDelay_5 = (3.0f);
		// public float m_EndDelay = 3f;
		__this->___m_EndDelay_6 = (3.0f);
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
// System.Void GameManager/<GameLoop>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__16__ctor_mBB320C31E905EDE01FD4F87FCD98EE4B0C4919FE (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<GameLoop>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__16_System_IDisposable_Dispose_m0576DC6813FCC0DB1B17F88DE1821DF0002696D9 (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameLoop>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameLoopU3Ed__16_MoveNext_mA82A835760A3B2184D76AAA55759C3A766B40349 (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
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
				goto IL_0048;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(RoundStarting());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = GameManager_RoundStarting_m45C89C2CEE4FB8EBBD1E67267A594B1FC854C459(L_4, NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(RoundPlaying());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = GameManager_RoundPlaying_m7CEB7480557247A21D4CE2099524D1871CC470D9(L_8, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(RoundEnding());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = GameManager_RoundEnding_m67345CE55DCDA4E83D2861AD65011CF8EB0766C2(L_12, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (m_GameWinner != null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		NullCheck(L_15);
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_16 = L_15->___m_GameWinner_16;
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		goto IL_00b0;
	}

IL_00a3:
	{
		// StartCoroutine(GameLoop());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = GameManager_GameLoop_m575555FB3D794E54633B99EBAB7F7E745EA979C2(L_18, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_19, NULL);
	}

IL_00b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameLoop>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameLoopU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m944E369694CD4686A6CC99157AFA09183369FA97 (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<GameLoop>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__16_System_Collections_IEnumerator_Reset_m2D4396004A3ED9F93600F79DA68CF71C50795FCA (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameLoopU3Ed__16_System_Collections_IEnumerator_Reset_m2D4396004A3ED9F93600F79DA68CF71C50795FCA_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameLoop>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameLoopU3Ed__16_System_Collections_IEnumerator_get_Current_m11A1A169AB86169FD44A4FDD8C4470D82ECA2E8B (U3CGameLoopU3Ed__16_t2E9E089165127597A10EC52CBD0652FFD690CDC8* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<RoundStarting>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__17__ctor_m724CA9C091DEB3EE186939B749ADECD1121EABEF (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<RoundStarting>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__17_System_IDisposable_Dispose_m60B11E903E0709D6B4891CF390B197568C4E6390 (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundStarting>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundStartingU3Ed__17_MoveNext_mDFA43974ABC3FBE1F6B98C6F5E80E24944ADEA9E (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A78859121D68B22A32F6F0DA04A7DDD4BC5E27C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ResetAllTanks();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		GameManager_ResetAllTanks_m5E36A11F5D9636AFE8358DE10409D7520A2A5EA3(L_4, NULL);
		// DisableTankControl();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		GameManager_DisableTankControl_mD1CC2239B11F143F268445442D9CC49349BC8906(L_5, NULL);
		// m_CameraControl.SetStartPositionAndSize();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		NullCheck(L_6);
		CameraControl_t09E601D2B49C96754BE5AE22FCFFB94F7F4C06DE* L_7 = L_6->___m_CameraControl_7;
		NullCheck(L_7);
		CameraControl_SetStartPositionAndSize_m0A7C18620E3E14ED46ED26799D4A8A10EB42C5B7(L_7, NULL);
		// m_RoundNumber++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___m_RoundNumber_12;
		NullCheck(L_8);
		L_8->___m_RoundNumber_12 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// m_MessageText.text = "RONDA " + m_RoundNumber;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___m_MessageText_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___m_RoundNumber_12);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A78859121D68B22A32F6F0DA04A7DDD4BC5E27C, L_15, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		// yield return m_StartWait;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		NullCheck(L_17);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = L_17->___m_StartWait_13;
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundStarting>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundStartingU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m88A0AA3E430408BD9D61FD64D862B49F07AA2E7B (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<RoundStarting>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__17_System_Collections_IEnumerator_Reset_m9435D4290B8B4B978A276545BC7C6D2D2F568AD3 (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundStartingU3Ed__17_System_Collections_IEnumerator_Reset_m9435D4290B8B4B978A276545BC7C6D2D2F568AD3_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundStarting>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundStartingU3Ed__17_System_Collections_IEnumerator_get_Current_m252EADBCA09AA29A42D483D8D5C7187918954DF1 (U3CRoundStartingU3Ed__17_tF08DDB3F544807AD0F805F70C3784553B6970A3F* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<RoundPlaying>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__18__ctor_mF02B397A4ACC344EF23E491E723B3918842C2BD2 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<RoundPlaying>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__18_System_IDisposable_Dispose_mF17155BC60BD7E50390DF251F8BC94C730C31910 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundPlaying>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundPlayingU3Ed__18_MoveNext_mFEE39C0A1CBF055EE2436ADD3764BB10E3A1981B (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// EnableTankControl();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		GameManager_EnableTankControl_m89550A716558A3BC593FB3F784EB13643DFE40C2(L_4, NULL);
		// m_MessageText.text = string.Empty;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___m_MessageText_8;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		goto IL_004d;
	}

IL_0036:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004d:
	{
		// while(!OneTankLeft())
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameManager_OneTankLeft_m530BBD4E7CB327C3225B2526D684E68935691917(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundPlaying>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundPlayingU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9678F23D7F87442EA3CF538A9F5469F288FA38C3 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<RoundPlaying>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__18_System_Collections_IEnumerator_Reset_m9EF00C229529AD0E6773290C11DB63B86EC904F6 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundPlayingU3Ed__18_System_Collections_IEnumerator_Reset_m9EF00C229529AD0E6773290C11DB63B86EC904F6_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundPlaying>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundPlayingU3Ed__18_System_Collections_IEnumerator_get_Current_m2B008EFAFC6E2D50315347764199649074DCAE95 (U3CRoundPlayingU3Ed__18_t7CFFFA323E110CE0EE40C6B9C50EADA2E1FB244B* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<RoundEnding>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__19__ctor_m3D71FFF5B6DA05EA9EE6D28113C1FD6EB9F1B7F9 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<RoundEnding>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__19_System_IDisposable_Dispose_m67BEE9EEF494F3B209E4815368CEA280FE9B7535 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundEnding>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundEndingU3Ed__19_MoveNext_mBD6914E4D988624E68AE83D6780FE4BCDAFB0373 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DisableTankControl();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		GameManager_DisableTankControl_mD1CC2239B11F143F268445442D9CC49349BC8906(L_4, NULL);
		// m_RoundWinner = null;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		L_5->___m_RoundWinner_15 = (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___m_RoundWinner_15), (void*)(TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF*)NULL);
		// m_RoundWinner = GetRoundWinner();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		NullCheck(L_7);
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_8;
		L_8 = GameManager_GetRoundWinner_m98105978595A72CB760254D40B13E9CCAFEC8E88(L_7, NULL);
		NullCheck(L_6);
		L_6->___m_RoundWinner_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_RoundWinner_15), (void*)L_8);
		// if(m_RoundWinner != null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		NullCheck(L_9);
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_10 = L_9->___m_RoundWinner_15;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// m_RoundWinner.m_Wins++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		NullCheck(L_11);
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_12 = L_11->___m_RoundWinner_15;
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_Wins_5;
		NullCheck(L_13);
		L_13->___m_Wins_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		// m_GameWinner = GetGameWinner();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = V_1;
		NullCheck(L_16);
		TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* L_17;
		L_17 = GameManager_GetGameWinner_m8E74C2DA4CB0BD6EBD9FD29E2E69188400C1AB04(L_16, NULL);
		NullCheck(L_15);
		L_15->___m_GameWinner_16 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___m_GameWinner_16), (void*)L_17);
		// string message = EndMessage();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = GameManager_EndMessage_mD284E583BF4525156BB530841D49A119EF7B1197(L_18, NULL);
		V_2 = L_19;
		// m_MessageText.text = message;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = V_1;
		NullCheck(L_20);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = L_20->___m_MessageText_8;
		String_t* L_22 = V_2;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// yield return m_EndWait;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = L_23->___m_EndWait_14;
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundEnding>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundEndingU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m284F67FD8FC6D7A769C650DA7FB61A577E8B1BE7 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<RoundEnding>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__19_System_Collections_IEnumerator_Reset_mDCBF3096946E2973E21BF047270D637C513450ED (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundEndingU3Ed__19_System_Collections_IEnumerator_Reset_mDCBF3096946E2973E21BF047270D637C513450ED_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundEnding>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundEndingU3Ed__19_System_Collections_IEnumerator_get_Current_m8143259A6E8513CE52DB3883D321FF1E39C182E3 (U3CRoundEndingU3Ed__19_t90B4BD5F569E4595FB037FBEC5C7AD7AB9495B77* __this, const RuntimeMethod* method) 
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
// System.Void TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_mB04B602CF19E2586C4639F2D447F5DB7BFADFA61 (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55_m07E7FAFCF86B05CF1419950E6FE30D47EC97F929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8_m1A62EA61B4A6574AEAC080A803E4E751826D5E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// m_Movement = m_Instance.GetComponent<TankMovement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Instance_4;
		NullCheck(L_0);
		TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* L_1;
		L_1 = GameObject_GetComponent_TisTankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55_m07E7FAFCF86B05CF1419950E6FE30D47EC97F929(L_0, GameObject_GetComponent_TisTankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55_m07E7FAFCF86B05CF1419950E6FE30D47EC97F929_RuntimeMethod_var);
		__this->___m_Movement_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Movement_6), (void*)L_1);
		// m_Shooting = m_Instance.GetComponent<TankShooting>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_Instance_4;
		NullCheck(L_2);
		TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* L_3;
		L_3 = GameObject_GetComponent_TisTankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8_m1A62EA61B4A6574AEAC080A803E4E751826D5E55(L_2, GameObject_GetComponent_TisTankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8_m1A62EA61B4A6574AEAC080A803E4E751826D5E55_RuntimeMethod_var);
		__this->___m_Shooting_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Shooting_7), (void*)L_3);
		// m_CanvasGameObject = m_Instance.GetComponentInChildren<Canvas>().gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_Instance_4;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A(L_4, GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___m_CanvasGameObject_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CanvasGameObject_8), (void*)L_6);
		// m_Movement.m_PlayerNumber = m_PlayerNumber;
		TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* L_7 = __this->___m_Movement_6;
		int32_t L_8 = __this->___m_PlayerNumber_2;
		NullCheck(L_7);
		L_7->___m_PlayerNumber_4 = L_8;
		// m_Shooting.m_PlayerNumber = m_PlayerNumber;
		TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* L_9 = __this->___m_Shooting_7;
		int32_t L_10 = __this->___m_PlayerNumber_2;
		NullCheck(L_9);
		L_9->___m_PlayerNumber_4 = L_10;
		// m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(m_PlayerColor) + ">PLAYER " + m_PlayerNumber + "</color>";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___m_PlayerColor_0;
		String_t* L_15;
		L_15 = ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (&__this->___m_PlayerNumber_2);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		__this->___m_ColoredPlayerText_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ColoredPlayerText_3), (void*)L_21);
		// MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_Instance_4;
		NullCheck(L_22);
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_23;
		L_23 = GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702(L_22, GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		V_0 = L_23;
		// for (int i = 0; i < renderers.Length; i++)
		V_1 = 0;
		goto IL_00c6;
	}

IL_00af:
	{
		// renderers[i].material.color = m_PlayerColor;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_27, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___m_PlayerColor_0;
		NullCheck(L_28);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_28, L_29, NULL);
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_31 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00af;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mCF6A44C93E6513A55FA3E3BF443907FC412F926C (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) 
{
	{
		// m_Movement.enabled = false;
		TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* L_0 = __this->___m_Movement_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// m_Shooting.enabled = false;
		TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* L_1 = __this->___m_Shooting_7;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// m_CanvasGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_CanvasGameObject_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mBF147ACF91E062B63C82086DA058B146AFD7569B (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) 
{
	{
		// m_Movement.enabled = true;
		TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* L_0 = __this->___m_Movement_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// m_Shooting.enabled = true;
		TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* L_1 = __this->___m_Shooting_7;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// m_CanvasGameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_CanvasGameObject_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_m19518A6C076FAE055061BEA50001EF2130E38594 (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) 
{
	{
		// m_Instance.transform.position = m_SpawnPoint.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Instance_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_SpawnPoint_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// m_Instance.transform.rotation = m_SpawnPoint.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_Instance_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_SpawnPoint_1;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
		// m_Instance.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_Instance_4;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// m_Instance.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_Instance_4;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TankManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager__ctor_mDC70E284C9D8EF1819EB6225F2D724CAEB79FED4 (TankManager_t7A7982C80735B810B3DB15849DBCCC406FD839AF* __this, const RuntimeMethod* method) 
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
// System.Void ShellExplosion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_Start_m400574D0796780D024D421311B46C3F771AFC516 (ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, m_MaxLifeTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___m_MaxLifeTime_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_OnTriggerEnter_mEC976C85C36049D0036ACA8F1EB8D6139E6FAA94 (ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1_m4331DDED79CB2A7595DBCE02CA181916946538E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// Collider[] colliders = Physics.OverlapSphere(transform.position, m_ExplosionRadius, m_TankMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___m_ExplosionRadius_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___m_TankMask_4;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE(L_1, L_2, L_4, NULL);
		V_0 = L_5;
		// for(int i = 0; i < colliders.Length; i++)
		V_1 = 0;
		goto IL_007d;
	}

IL_0026:
	{
		// Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_9, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_2 = L_10;
		// if(!targetRigidbody)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// targetRigidbody.AddExplosionForce(m_ExplosionForce, transform.position, m_ExplosionRadius);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = V_2;
		float L_14 = __this->___m_ExplosionForce_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = __this->___m_ExplosionRadius_10;
		NullCheck(L_13);
		Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1(L_13, L_14, L_16, L_17, NULL);
		// TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = V_2;
		NullCheck(L_18);
		TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* L_19;
		L_19 = Component_GetComponent_TisTankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1_m4331DDED79CB2A7595DBCE02CA181916946538E1(L_18, Component_GetComponent_TisTankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1_m4331DDED79CB2A7595DBCE02CA181916946538E1_RuntimeMethod_var);
		V_3 = L_19;
		// if(!targetHealth)
		TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		// float damage = CalculateDamage(targetRigidbody.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = V_2;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_22, NULL);
		float L_24;
		L_24 = ShellExplosion_CalculateDamage_m57005D1D48E2F5A7E897CE1B10A2C1AFD63C7AD0(__this, L_23, NULL);
		V_4 = L_24;
		// targetHealth.TakeDamage(damage);
		TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* L_25 = V_3;
		float L_26 = V_4;
		NullCheck(L_25);
		TankHealth_TakeDamage_m0893E1AE80CA4E9980DF095B1C9D95FC9E44C744(L_25, L_26, NULL);
	}

IL_0079:
	{
		// for(int i = 0; i < colliders.Length; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007d:
	{
		// for(int i = 0; i < colliders.Length; i++)
		int32_t L_28 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// m_ExplosionParticles.transform.parent = null;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = __this->___m_ExplosionParticles_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// m_ExplosionParticles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_32 = __this->___m_ExplosionParticles_5;
		NullCheck(L_32);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_32, NULL);
		// m_ExplosionAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = __this->___m_ExplosionAudio_6;
		NullCheck(L_33);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_33, NULL);
		// Destroy(m_ExplosionParticles.gameObject, m_ExplosionParticles.duration);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_34 = __this->___m_ExplosionParticles_5;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_36 = __this->___m_ExplosionParticles_5;
		NullCheck(L_36);
		float L_37;
		L_37 = ParticleSystem_get_duration_mE505BA9F6867A9C7FFBCF0F917E389F58C83624F(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_35, L_37, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_38, NULL);
		// }
		return;
	}
}
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_m57005D1D48E2F5A7E897CE1B10A2C1AFD63C7AD0 (ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 explosionToTarget = targetPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// float explosionDistance = explosionToTarget.magnitude;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_4;
		// float relativeDistance = (m_ExplosionRadius - explosionDistance) / m_ExplosionRadius;
		float L_5 = __this->___m_ExplosionRadius_10;
		float L_6 = V_1;
		float L_7 = __this->___m_ExplosionRadius_10;
		// float damage = relativeDistance * m_MaxDamage;
		float L_8 = __this->___m_MaxDamage_7;
		V_2 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_5, L_6))/L_7)), L_8));
		// damage = Mathf.Max(0f, damage);
		float L_9 = V_2;
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_9, NULL);
		V_2 = L_10;
		// return damage;
		float L_11 = V_2;
		return L_11;
	}
}
// System.Void ShellExplosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion__ctor_m5BDB3470CE20511B7696C871913FD49836DD2CA5 (ShellExplosion_tCDD926310CA02750BE7A57F924F2C8296325B348* __this, const RuntimeMethod* method) 
{
	{
		// public float m_MaxDamage = 100f;
		__this->___m_MaxDamage_7 = (100.0f);
		// public float m_ExplosionForce = 1000f;
		__this->___m_ExplosionForce_8 = (1000.0f);
		// public float m_MaxLifeTime = 2f;
		__this->___m_MaxLifeTime_9 = (2.0f);
		// public float m_ExplosionRadius = 5f;
		__this->___m_ExplosionRadius_10 = (5.0f);
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
// System.Void InputController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Start_mC887BF47D15F6F54A07FCE6717EBB85DFBDEE479 (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	{
		// cam = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void InputController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Move_mC5A038BC63996D0AFF1F5D4D7BEC1C8297611268 (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.velocity = new Vector3(joystickMove.Horizontal * speed + Input.GetAxis("Horizontal"), rb.velocity.y, joystickMove.Vertical * speed + Input.GetAxis("Vertical"));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_7;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_1 = __this->___joystickMove_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_1, NULL);
		float L_3 = __this->___speed_11;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		float L_7 = L_6.___y_3;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_8 = __this->___joystickMove_5;
		NullCheck(L_8);
		float L_9;
		L_9 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_8, NULL);
		float L_10 = __this->___speed_11;
		float L_11;
		L_11 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_7, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_12, NULL);
		// }
		return;
	}
}
// System.Void InputController::ShootBt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_ShootBt_m16ADC9A2B893EF1032972E4D6D8F69828E398CCA (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Rotate_mF26C26A0C1F16D72438760F68C02D7010A92FA0E (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	{
		// rotateH = joystickGiro.Horizontal * speedGiro;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystickGiro_6;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_0, NULL);
		float L_2 = __this->___speedGiro_12;
		__this->___rotateH_10 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// rotateV = -(joystickGiro.Vertical * speedGiro);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_3 = __this->___joystickGiro_6;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_3, NULL);
		float L_5 = __this->___speedGiro_12;
		__this->___rotateV_9 = ((-((float)il2cpp_codegen_multiply(L_4, L_5))));
		// cam.Rotate(rotateV, rotateH, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___cam_4;
		float L_7 = __this->___rotateV_9;
		float L_8 = __this->___rotateH_10;
		NullCheck(L_6);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_6, L_7, L_8, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void InputController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController_Update_mE06250661752A777E36B045F124B6E47E9209BD2 (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		InputController_Move_mC5A038BC63996D0AFF1F5D4D7BEC1C8297611268(__this, NULL);
		// Rotate();
		InputController_Rotate_mF26C26A0C1F16D72438760F68C02D7010A92FA0E(__this, NULL);
		// }
		return;
	}
}
// System.Void InputController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputController__ctor_m0EDBE66635C62BD8D770DC8E9C8D90BECD52A00D (InputController_t030FD70C1AC8A859A327A88EB89D1D720ACCC912* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_11 = (10.0f);
		// public float speedGiro = 0.2f;
		__this->___speedGiro_12 = (0.200000003f);
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
// System.Void Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Update_mA8230EF12ABFDB1275E464746004DD9E8DCBB444 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
{
	{
		// if(isPressed) {
		bool L_0 = __this->___isPressed_4;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// Player.transform.Translate(0, 0, Force*Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Player_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		float L_3 = __this->___Force_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_2);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_2, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Move::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_OnPointerDown_mB355665EE129E565CCFA38A28CC044EB2BC653AF (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = true;
		__this->___isPressed_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Move::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_OnPointerUp_m29B202BBD84C1A55FC4525F253E42C0CFA4A8C6F (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = false;
		__this->___isPressed_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move__ctor_mB2C06FD84ADF53D6C062FD9230344443C0ACF7A1 (Move_t854202AD2D0D0CBADCAA68583489F1054C5BC0E4* __this, const RuntimeMethod* method) 
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
// System.Void Reverse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reverse_Update_mAFD114577353BB338D85546E2F007A33FAB81C6A (Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E* __this, const RuntimeMethod* method) 
{
	{
		// if(isPressed) {
		bool L_0 = __this->___isPressed_4;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// Player.transform.Translate(0, 0, -Force*Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Player_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		float L_3 = __this->___Force_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_2);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_2, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((-L_3)), L_4)), NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Reverse::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reverse_OnPointerDown_m3B7110798F6888EAE84399C661453EC4BEDE445C (Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = true;
		__this->___isPressed_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Reverse::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reverse_OnPointerUp_m7C7B8233CD8867B1F18846C2D95871DC1230F2A7 (Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = false;
		__this->___isPressed_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Reverse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reverse__ctor_mABD7C3340E60DFB4C878973AAFEFC278BCE70AA2 (Reverse_tBED967227FD816264A9655A2C79A45E43D4AE19E* __this, const RuntimeMethod* method) 
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
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m73D585515036D9B7AAD8336BFB8567283CE4C7E7 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// if(isPressed) {
		bool L_0 = __this->___isPressed_4;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// Player.transform.Rotate(0, 3, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Player_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_2, (0.0f), (3.0f), (0.0f), NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Rotate::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_OnPointerDown_m8EED56E602412B904656630232A0C453779638F2 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = true;
		__this->___isPressed_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Rotate::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_OnPointerUp_m082E835DDF13A028028C853509724ED7CA972115 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressed = false;
		__this->___isPressed_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
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
// System.Void TankHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_Awake_m948265ADC790FBB30D6C4B7E62590D87DA374C9F (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ExplosionParticles = Instantiate(m_ExplosionPrefab).GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ExplosionPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
		L_2 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_1, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		__this->___m_ExplosionParticles_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplosionParticles_11), (void*)L_2);
		// m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___m_ExplosionParticles_11;
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_3, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_ExplosionAudio_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplosionAudio_10), (void*)L_4);
		// m_ExplosionParticles.gameObject.SetActive(false);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___m_ExplosionParticles_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TankHealth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnEnable_mA5DFDC6AA85B4BF50E35D5BE77CDE0D3CAE9823D (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) 
{
	{
		// m_CurrentHealth = m_StartingHealth;
		float L_0 = __this->___m_StartingHealth_4;
		__this->___m_CurrentHealth_12 = L_0;
		// m_Dead = false;
		__this->___m_Dead_13 = (bool)0;
		// SetHealthUI();
		TankHealth_SetHealthUI_m87D375622277A86032BD31536B9F72046EA143F5(__this, NULL);
		// }
		return;
	}
}
// System.Void TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m0893E1AE80CA4E9980DF095B1C9D95FC9E44C744 (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, float ___amount0, const RuntimeMethod* method) 
{
	{
		// m_CurrentHealth -= amount;
		float L_0 = __this->___m_CurrentHealth_12;
		float L_1 = ___amount0;
		__this->___m_CurrentHealth_12 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// SetHealthUI();
		TankHealth_SetHealthUI_m87D375622277A86032BD31536B9F72046EA143F5(__this, NULL);
		// if(m_CurrentHealth <= 0f && !m_Dead)
		float L_2 = __this->___m_CurrentHealth_12;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		bool L_3 = __this->___m_Dead_13;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// OnDeath();
		TankHealth_OnDeath_m8F31A3DA972D7BE4D6CF49E4A4B4795762AA124F(__this, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_m87D375622277A86032BD31536B9F72046EA143F5 (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) 
{
	{
		// m_Slider.value = m_CurrentHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___m_Slider_5;
		float L_1 = __this->___m_CurrentHealth_12;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// m_FillImage.color = Color.Lerp(m_ZeroHealthColor, m_FullHealthColor, m_CurrentHealth / m_StartingHealth);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_FillImage_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_ZeroHealthColor_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_FullHealthColor_7;
		float L_5 = __this->___m_CurrentHealth_12;
		float L_6 = __this->___m_StartingHealth_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_3, L_4, ((float)(L_5/L_6)), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_7);
		// }
		return;
	}
}
// System.Void TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_m8F31A3DA972D7BE4D6CF49E4A4B4795762AA124F (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) 
{
	{
		// m_Dead = true;
		__this->___m_Dead_13 = (bool)1;
		// m_ExplosionParticles.transform.position = transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___m_ExplosionParticles_11;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// m_ExplosionParticles.gameObject.SetActive(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___m_ExplosionParticles_11;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// m_ExplosionParticles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___m_ExplosionParticles_11;
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
		// m_ExplosionAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___m_ExplosionAudio_10;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TankHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth__ctor_mB9EFCAE70789B880CB3EA0447ADA702767B6B95A (TankHealth_tA9397DC332DD1D5241CCB901BE67D202568819B1* __this, const RuntimeMethod* method) 
{
	{
		// public float m_StartingHealth = 100f;
		__this->___m_StartingHealth_4 = (100.0f);
		// public Color m_FullHealthColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___m_FullHealthColor_7 = L_0;
		// public Color m_ZeroHealthColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___m_ZeroHealthColor_8 = L_1;
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
// System.Void TankMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Awake_m54E18855E0512D9224913EA789AAA887C961EDE3 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void TankMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnEnable_m64CCC01F504511E889FC6292987090CC68A9BA3A (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	{
		// m_Rigidbody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Rigidbody_13;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// m_MovementInputValue = 0f;
		__this->___m_MovementInputValue_14 = (0.0f);
		// m_TurnInputValue = 0f;
		__this->___m_TurnInputValue_15 = (0.0f);
		// }
		return;
	}
}
// System.Void TankMovement::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnDisable_mEB4364DED2A976A50797E35A7932D7D0027EE174 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	{
		// m_Rigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Rigidbody_13;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Start_mA51CC5355A13C4940B8EF0A5ADC697D3579DDC47 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MovementAxisName = "Vertical" + m_PlayerNumber;
		int32_t* L_0 = (&__this->___m_PlayerNumber_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, L_1, NULL);
		__this->___m_MovementAxisName_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MovementAxisName_11), (void*)L_2);
		// m_TurnAxisName = "Horizontal" + m_PlayerNumber;
		int32_t* L_3 = (&__this->___m_PlayerNumber_4);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, L_4, NULL);
		__this->___m_TurnAxisName_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TurnAxisName_12), (void*)L_5);
		// m_OriginalPitch = m_MovementAudio.pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___m_MovementAudio_7;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_6, NULL);
		__this->___m_OriginalPitch_16 = L_7;
		// }
		return;
	}
}
// System.Void TankMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Update_mF6DC074CAEF3D466488B5CF5777EEDE4AB251BD9 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	{
		// m_MovementInputValue = Input.GetAxis(m_MovementAxisName);
		String_t* L_0 = __this->___m_MovementAxisName_11;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_0, NULL);
		__this->___m_MovementInputValue_14 = L_1;
		// m_TurnInputValue = Input.GetAxis(m_TurnAxisName);
		String_t* L_2 = __this->___m_TurnAxisName_12;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_2, NULL);
		__this->___m_TurnInputValue_15 = L_3;
		// EngineAudio();
		TankMovement_EngineAudio_m3DC514D4A7FE505CC1E68DDD1F6EDAACEDBE9260(__this, NULL);
		// }
		return;
	}
}
// System.Void TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_m3DC514D4A7FE505CC1E68DDD1F6EDAACEDBE9260 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Mathf.Abs(m_MovementInputValue) < 0.1f && Mathf.Abs(m_TurnInputValue) < 0.1f)
		float L_0 = __this->___m_MovementInputValue_14;
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_2 = __this->___m_TurnInputValue_15;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if(m_MovementAudio.clip == m_EngineDriving)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___m_MovementAudio_7;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___m_EngineDriving_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineIdling;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___m_MovementAudio_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___m_EngineIdling_8;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		// m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_MovementAudio_7;
		float L_11 = __this->___m_OriginalPitch_16;
		float L_12 = __this->___m_PitchRange_10;
		float L_13 = __this->___m_OriginalPitch_16;
		float L_14 = __this->___m_PitchRange_10;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract(L_11, L_12)), ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		NullCheck(L_10);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_10, L_15, NULL);
		// m_MovementAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___m_MovementAudio_7;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
		return;
	}

IL_0086:
	{
		// if(m_MovementAudio.clip == m_EngineDriving)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___m_MovementAudio_7;
		NullCheck(L_17);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18;
		L_18 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_17, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___m_EngineDriving_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineIdling;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___m_MovementAudio_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = __this->___m_EngineIdling_8;
		NullCheck(L_21);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_21, L_22, NULL);
		// m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___m_MovementAudio_7;
		float L_24 = __this->___m_OriginalPitch_16;
		float L_25 = __this->___m_PitchRange_10;
		float L_26 = __this->___m_OriginalPitch_16;
		float L_27 = __this->___m_PitchRange_10;
		float L_28;
		L_28 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract(L_24, L_25)), ((float)il2cpp_codegen_add(L_26, L_27)), NULL);
		NullCheck(L_23);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_23, L_28, NULL);
		// m_MovementAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->___m_MovementAudio_7;
		NullCheck(L_29);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_29, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void TankMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_FixedUpdate_m9762BE5D9CBF22497522187CFE9ABE7221DE40BE (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		TankMovement_Move_mC4D97E545D74A6759B164C3D43198FAF6664AD42(__this, NULL);
		// Turn();
		TankMovement_Turn_m28D9A276F43972E817712C65D470B4BC4B9C0973(__this, NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_mC4D97E545D74A6759B164C3D43198FAF6664AD42 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 movement = transform.forward * m_MovementInputValue * m_Speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___m_MovementInputValue_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4 = __this->___m_Speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// m_Rigidbody.MovePosition(m_Rigidbody.position + movement);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___m_Rigidbody_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___m_Rigidbody_13;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		NullCheck(L_8);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_8, L_12, NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_m28D9A276F43972E817712C65D470B4BC4B9C0973 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;
		float L_0 = __this->___m_TurnInputValue_15;
		float L_1 = __this->___m_TurnSpeed_6;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// Quaternion turnRotation = Quaternion.Euler(0f, turn, 0f);
		float L_3 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_3, (0.0f), NULL);
		V_1 = L_4;
		// m_Rigidbody.MoveRotation(m_Rigidbody.rotation * turnRotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___m_Rigidbody_13;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_8, NULL);
		NullCheck(L_5);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void TankMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement__ctor_m3DF1C924587B87C6E4CDF4459593850BD7DF33E1 (TankMovement_t7C7B41941202EA17ACE06EDDB6008BF0CB2C5A55* __this, const RuntimeMethod* method) 
{
	{
		// public int m_PlayerNumber = 1;
		__this->___m_PlayerNumber_4 = 1;
		// public float m_Speed = 12f;
		__this->___m_Speed_5 = (12.0f);
		// public float m_TurnSpeed = 180f;
		__this->___m_TurnSpeed_6 = (180.0f);
		// public float m_PitchRange = 0.2f;
		__this->___m_PitchRange_10 = (0.200000003f);
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
// System.Void TankShooting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_OnEnable_mECF04F38D5317B5050704F33054CBE58A8A4288F (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) 
{
	{
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_0 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_0;
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___m_AimSlider_7;
		float L_2 = __this->___m_MinLaunchForce_11;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void TankShooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Start_m78AD86835FA7CF6044B96F5D6CF6A48772777DAF (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FireButton = "Fire" + m_PlayerNumber;
		int32_t* L_0 = (&__this->___m_PlayerNumber_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, L_1, NULL);
		__this->___m_FireButton_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FireButton_14), (void*)L_2);
		// m_ChargeSpeed = (m_MaxLaunchForce - m_MinLaunchForce) / m_MaxChargeTime;
		float L_3 = __this->___m_MaxLaunchForce_12;
		float L_4 = __this->___m_MinLaunchForce_11;
		float L_5 = __this->___m_MaxChargeTime_13;
		__this->___m_ChargeSpeed_16 = ((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/L_5));
		// }
		return;
	}
}
// System.Void TankShooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Update_m3D5F6BDC771A5363C17194B267E58C120D044E87 (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) 
{
	{
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___m_AimSlider_7;
		float L_1 = __this->___m_MinLaunchForce_11;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// if(m_CurrentLaunchForce >= m_MaxLaunchForce && !m_Fired)
		float L_2 = __this->___m_CurrentLaunchForce_15;
		float L_3 = __this->___m_MaxLaunchForce_12;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		bool L_4 = __this->___m_Fired_17;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_CurrentLaunchForce = m_MaxLaunchForce;
		float L_5 = __this->___m_MaxLaunchForce_12;
		__this->___m_CurrentLaunchForce_15 = L_5;
		// Fire();
		TankShooting_Fire_m58FA687C0D5C121A8A6249141AAD09B09F859CF3(__this, NULL);
		return;
	}

IL_003a:
	{
		// else if(Input.GetButtonDown(m_FireButton))
		String_t* L_6 = __this->___m_FireButton_14;
		bool L_7;
		L_7 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_6, NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// m_Fired = false;
		__this->___m_Fired_17 = (bool)0;
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_8 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_8;
		// m_ShootingAudio.clip = m_ChargingClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___m_ShootingAudio_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___m_ChargingClip_9;
		NullCheck(L_9);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_9, L_10, NULL);
		// m_ShootingAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___m_ShootingAudio_8;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		return;
	}

IL_0077:
	{
		// else if(Input.GetButton(m_FireButton) && !m_Fired)
		String_t* L_12 = __this->___m_FireButton_14;
		bool L_13;
		L_13 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_12, NULL);
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_14 = __this->___m_Fired_17;
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// m_CurrentLaunchForce += m_ChargeSpeed * Time.deltaTime;
		float L_15 = __this->___m_CurrentLaunchForce_15;
		float L_16 = __this->___m_ChargeSpeed_16;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___m_CurrentLaunchForce_15 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// m_AimSlider.value = m_CurrentLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___m_AimSlider_7;
		float L_19 = __this->___m_CurrentLaunchForce_15;
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		return;
	}

IL_00b7:
	{
		// else if(Input.GetButtonUp(m_FireButton) && !m_Fired)
		String_t* L_20 = __this->___m_FireButton_14;
		bool L_21;
		L_21 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_20, NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_22 = __this->___m_Fired_17;
		if (L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// Fire();
		TankShooting_Fire_m58FA687C0D5C121A8A6249141AAD09B09F859CF3(__this, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_m58FA687C0D5C121A8A6249141AAD09B09F859CF3 (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Fired = true;
		__this->___m_Fired_17 = (bool)1;
		// Rigidbody shellInstance = Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Shell_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_FireTransform_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_FireTransform_6;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2(L_0, L_2, L_4, Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2_RuntimeMethod_var);
		// shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;
		float L_6 = __this->___m_CurrentLaunchForce_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___m_FireTransform_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_6, L_8, NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_9, NULL);
		// m_ShootingAudio.clip = m_FireClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_ShootingAudio_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___m_FireClip_10;
		NullCheck(L_10);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_10, L_11, NULL);
		// m_ShootingAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___m_ShootingAudio_8;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_13 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_13;
		// }
		return;
	}
}
// System.Void TankShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting__ctor_m842DB99D444A3847CDF54D21BA25DB8CE54D934F (TankShooting_tAD2EF080A37B127E64AFA72523C4994C017B48F8* __this, const RuntimeMethod* method) 
{
	{
		// public int m_PlayerNumber = 1;
		__this->___m_PlayerNumber_4 = 1;
		// public float m_MinLaunchForce = 15f;
		__this->___m_MinLaunchForce_11 = (15.0f);
		// public float m_MaxLaunchForce = 30f;
		__this->___m_MaxLaunchForce_12 = (30.0f);
		// public float m_MaxChargeTime = 0.75f;
		__this->___m_MaxChargeTime_13 = (0.75f);
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
// System.Void UIDirectionControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Start_m65D2950489864CF8340EFB1A8F2139EFD29A900B (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		// m_RelativeRotation = transform.parent.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		__this->___m_RelativeRotation_5 = L_2;
		// }
		return;
	}
}
// System.Void UIDirectionControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Update_m63D25FB201A8A1F266C566D696DA1450610C1E9F (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		// if (m_UseRelativeRotation)
		bool L_0 = __this->___m_UseRelativeRotation_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// transform.rotation = m_RelativeRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___m_RelativeRotation_5;
		NullCheck(L_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UIDirectionControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl__ctor_m6FE5D7698E4081816839646A8889BA7C6A5D02AC (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		// public bool m_UseRelativeRotation = true;
		__this->___m_UseRelativeRotation_4 = (bool)1;
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
// System.Void Complete.CameraControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Awake_m0E98AADB7068F752436CE9A6F794D9E5EA11AF9C (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Camera = GetComponentInChildren<Camera> ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___m_Camera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FixedUpdate_mD7231A423DD8C6EF08F2F8DE836493B1ABD06800 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// Move ();
		CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47(__this, NULL);
		// Zoom ();
		CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737(__this, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition ();
		CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5(__this, NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_DesiredPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___m_MoveVelocity_10);
		float L_5 = __this->___m_DampTime_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_2, L_3, L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 averagePos = new Vector3 ();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// int numTargets = 0;
		V_1 = 0;
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_Targets_7;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// averagePos += m_Targets[i].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___m_Targets_7;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		V_0 = L_12;
		// numTargets++;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_15 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16 = __this->___m_Targets_7;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (numTargets > 0)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// averagePos /= numTargets;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		int32_t L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_18, ((float)L_19), NULL);
		V_0 = L_20;
	}

IL_0056:
	{
		// averagePos.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		(&V_0)->___y_3 = L_23;
		// m_DesiredPosition = averagePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		__this->___m_DesiredPosition_11 = L_24;
		// }
		return;
	}
}
// System.Void Complete.CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float requiredSize = FindRequiredSize();
		float L_0;
		L_0 = CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3(__this, NULL);
		V_0 = L_0;
		// m_Camera.orthographicSize = Mathf.SmoothDamp (m_Camera.orthographicSize, requiredSize, ref m_ZoomSpeed, m_DampTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_Camera_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_2, NULL);
		float L_4 = V_0;
		float* L_5 = (&__this->___m_ZoomSpeed_9);
		float L_6 = __this->___m_DampTime_4;
		float L_7;
		L_7 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_3, L_4, L_5, L_6, NULL);
		NullCheck(L_1);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Single Complete.CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredLocalPos = transform.InverseTransformPoint(m_DesiredPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		V_0 = L_2;
		// float size = 0f;
		V_1 = (0.0f);
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___m_Targets_7;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// Vector3 targetLocalPos = transform.InverseTransformPoint(m_Targets[i].position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___m_Targets_7;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_9, L_14, NULL);
		// Vector3 desiredPosToTarget = targetLocalPos - desiredLocalPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_3 = L_17;
		// size = Mathf.Max(size, Mathf.Abs(desiredPosToTarget.y));
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = fabsf(L_20);
		float L_22;
		L_22 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, L_21, NULL);
		V_1 = L_22;
		// size = Mathf.Max(size, Mathf.Abs(desiredPosToTarget.x) / m_Camera.aspect);
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		float L_25 = L_24.___x_2;
		float L_26;
		L_26 = fabsf(L_25);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___m_Camera_8;
		NullCheck(L_27);
		float L_28;
		L_28 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_27, NULL);
		float L_29;
		L_29 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, ((float)(L_26/L_28)), NULL);
		V_1 = L_29;
	}

IL_007f:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_31 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___m_Targets_7;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// size += m_ScreenEdgeBuffer;
		float L_33 = V_1;
		float L_34 = __this->___m_ScreenEdgeBuffer_5;
		V_1 = ((float)il2cpp_codegen_add(L_33, L_34));
		// size = Mathf.Max (size, m_MinSize);
		float L_35 = V_1;
		float L_36 = __this->___m_MinSize_6;
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_35, L_36, NULL);
		V_1 = L_37;
		// return size;
		float L_38 = V_1;
		return L_38;
	}
}
// System.Void Complete.CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_mE3A45587A839D7D2B01261C4F70F4AD8C2E1CCD7 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition ();
		CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5(__this, NULL);
		// transform.position = m_DesiredPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// m_Camera.orthographicSize = FindRequiredSize ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		float L_3;
		L_3 = CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3(__this, NULL);
		NullCheck(L_2);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl__ctor_m69942BC70513E06D5D6091A0BDFA6EE720327FA9 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// public float m_DampTime = 0.2f;                 // Approximate time for the camera to refocus.
		__this->___m_DampTime_4 = (0.200000003f);
		// public float m_ScreenEdgeBuffer = 4f;           // Space between the top/bottom most target and the screen edge.
		__this->___m_ScreenEdgeBuffer_5 = (4.0f);
		// public float m_MinSize = 6.5f;                  // The smallest orthographic size the camera can be.
		__this->___m_MinSize_6 = (6.5f);
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
// System.Void Complete.GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m0110EDE0025B92256B8A1D30DAE7A2FFCB2694C9 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_StartWait = new WaitForSeconds (m_StartDelay);
		float L_0 = __this->___m_StartDelay_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		__this->___m_StartWait_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StartWait_12), (void*)L_1);
		// m_EndWait = new WaitForSeconds (m_EndDelay);
		float L_2 = __this->___m_EndDelay_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, L_2, NULL);
		__this->___m_EndWait_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EndWait_13), (void*)L_3);
		// SpawnAllTanks();
		GameManager_SpawnAllTanks_m13BE6D15B3E4201A7E86928C07FB8F5471BE74A7(__this, NULL);
		// SetCameraTargets();
		GameManager_SetCameraTargets_mD2B1A59D952AA57B1BB15FE175DF681CCFC15BF9(__this, NULL);
		// StartCoroutine (GameLoop ());
		RuntimeObject* L_4;
		L_4 = GameManager_GameLoop_m2CE5B0E616781684D30970A6BDCDB20FE5950264(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Complete.GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_m13BE6D15B3E4201A7E86928C07FB8F5471BE74A7 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// m_Tanks[i].m_Instance =
		//     Instantiate(m_TankPrefab, m_Tanks[i].m_SpawnPoint.position, m_Tanks[i].m_SpawnPoint.rotation) as GameObject;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_TankPrefab_9;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_5 = __this->___m_Tanks_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___m_SpawnPoint_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_11 = __this->___m_Tanks_10;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14->___m_SpawnPoint_1;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_10, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___m_Instance_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___m_Instance_4), (void*)L_17);
		// m_Tanks[i].m_PlayerNumber = i + 1;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_18 = __this->___m_Tanks_10;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_0;
		NullCheck(L_21);
		L_21->___m_PlayerNumber_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// m_Tanks[i].Setup();
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_23 = __this->___m_Tanks_10;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		TankManager_Setup_m1CD60D9AEAA66BE38C919DE098277B9EAF799816(L_26, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_28 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_29 = __this->___m_Tanks_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mD2B1A59D952AA57B1BB15FE175DF681CCFC15BF9 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Transform[] targets = new Transform[m_Tanks.Length];
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < targets.Length; i++)
		V_1 = 0;
		goto IL_002b;
	}

IL_0012:
	{
		// targets[i] = m_Tanks[i].m_Instance.transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = V_0;
		int32_t L_3 = V_1;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_4 = __this->___m_Tanks_10;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___m_Instance_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_9);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_9);
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_11 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// m_CameraControl.m_Targets = targets;
		CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* L_13 = __this->___m_CameraControl_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = V_0;
		NullCheck(L_13);
		L_13->___m_Targets_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___m_Targets_7), (void*)L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator Complete.GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_m2CE5B0E616781684D30970A6BDCDB20FE5950264 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* L_0 = (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0*)il2cpp_codegen_object_new(U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameLoopU3Ed__15__ctor_m808C54787749FE1E7A7BC0918E90BDA07847312E(L_0, 0, NULL);
		U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Complete.GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_mBA131EFE10A2D679173B1C3DB105B5FA0442B993 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* L_0 = (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C*)il2cpp_codegen_object_new(U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundStartingU3Ed__16__ctor_mCE6BED4425A3C55966B355E0B34223361753A608(L_0, 0, NULL);
		U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Complete.GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_mCADB4F5AEEA297E0AA1A8EDC6C6DD11DEDD4E21E (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* L_0 = (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8*)il2cpp_codegen_object_new(U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundPlayingU3Ed__17__ctor_m23E6A9A12480DBFEBD9D40C12E2441484FFC00D9(L_0, 0, NULL);
		U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Complete.GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m1A0BA69960329F8ACF5D7C7C0355BC9BFA8F3D7D (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* L_0 = (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627*)il2cpp_codegen_object_new(U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoundEndingU3Ed__18__ctor_m9E9C7A3AEF94DCE03B73CBF63138177B3EFEF730(L_0, 0, NULL);
		U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Complete.GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_mBF1365221AF19325118EA914CE34437C54B6EACF (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numTanksLeft = 0;
		V_0 = 0;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_0006:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___m_Instance_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// numTanksLeft++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_8 = V_1;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_9 = __this->___m_Tanks_10;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return numTanksLeft <= 1;
		int32_t L_10 = V_0;
		return (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Complete.TankManager Complete.GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GameManager_GetRoundWinner_m22EC25343499DC97180EC607C140F78A5A015BB1 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___m_Instance_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_6 = __this->___m_Tanks_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0021:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_12 = __this->___m_Tanks_10;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A*)NULL;
	}
}
// Complete.TankManager Complete.GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* GameManager_GetGameWinner_mF24C5519AA94F98203EE9CC28309412EE28064F9 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Wins == m_NumRoundsToWin)
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_Wins_5;
		int32_t L_5 = __this->___m_NumRoundsToWin_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_6 = __this->___m_Tanks_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_12 = __this->___m_Tanks_10;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A*)NULL;
	}
}
// System.String Complete.GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_mAE8A4933EE9C0F03BBF7E2551B2F7BF5FC3CBD0B (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2085729353EAEB87B3AB05409A69B023603596C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string message = "DRAW!";
		V_0 = _stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9;
		// if (m_RoundWinner != null)
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_0 = __this->___m_RoundWinner_14;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// message = m_RoundWinner.m_ColoredPlayerText + " WINS THE ROUND!";
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_1 = __this->___m_RoundWinner_14;
		NullCheck(L_1);
		String_t* L_2 = L_1->___m_ColoredPlayerText_3;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC, NULL);
		V_0 = L_3;
	}

IL_0024:
	{
		// message += "\n\n\n\n";
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralA2085729353EAEB87B3AB05409A69B023603596C, NULL);
		V_0 = L_5;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_007d;
	}

IL_0034:
	{
		// message += m_Tanks[i].m_ColoredPlayerText + ": " + m_Tanks[i].m_Wins + " WINS\n";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_10 = __this->___m_Tanks_10;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14 = L_13->___m_ColoredPlayerText_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_9;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_17 = __this->___m_Tanks_10;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t* L_21 = (&L_20->___m_Wins_5);
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_21, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_16;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		V_0 = L_24;
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_26 = V_1;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_27 = __this->___m_Tanks_10;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// if (m_GameWinner != null)
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_28 = __this->___m_GameWinner_15;
		if (!L_28)
		{
			goto IL_00a6;
		}
	}
	{
		// message = m_GameWinner.m_ColoredPlayerText + " WINS THE GAME!";
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_29 = __this->___m_GameWinner_15;
		NullCheck(L_29);
		String_t* L_30 = L_29->___m_ColoredPlayerText_3;
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_30, _stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E, NULL);
		V_0 = L_31;
	}

IL_00a6:
	{
		// return message;
		String_t* L_32 = V_0;
		return L_32;
	}
}
// System.Void Complete.GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m112905166139D4EA103699DBDFEA430B9448C8CD (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].Reset();
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_Reset_m5FBAF81B7367D3A130F29AC087B31CA8E8DC41C5(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_6 = __this->___m_Tanks_10;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m51CAE77182D5995BDE7468E9961B05B2CB021B43 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].EnableControl();
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_EnableControl_mC5A3BB345E0FB0CBF59CFA0881D752AABC128523(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_6 = __this->___m_Tanks_10;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_m674293C21161BDCAAACF1FCC07CAF7006376BA37 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].DisableControl();
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_0 = __this->___m_Tanks_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TankManager_DisableControl_mA44FE6C113305AC849DCB6883421DF495125CF6F(L_3, NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_t508C5CC4404BE7BCC56FCD03A1C247FF99167787* L_6 = __this->___m_Tanks_10;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m8B27C4A3EBBEC557B702D139C705DB16AD391E41 (GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* __this, const RuntimeMethod* method) 
{
	{
		// public int m_NumRoundsToWin = 5;            // The number of rounds a single player has to win to win the game.
		__this->___m_NumRoundsToWin_4 = 5;
		// public float m_StartDelay = 3f;             // The delay between the start of RoundStarting and RoundPlaying phases.
		__this->___m_StartDelay_5 = (3.0f);
		// public float m_EndDelay = 3f;               // The delay between the end of RoundPlaying and RoundEnding phases.
		__this->___m_EndDelay_6 = (3.0f);
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
// System.Void Complete.GameManager/<GameLoop>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15__ctor_m808C54787749FE1E7A7BC0918E90BDA07847312E (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Complete.GameManager/<GameLoop>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15_System_IDisposable_Dispose_m80C58E0E031F152EE60EED42A357207DCF9D2113 (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Complete.GameManager/<GameLoop>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameLoopU3Ed__15_MoveNext_mE184B4C6DFFA323641C525951B9C5A33D6A2851A (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0048;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine (RoundStarting ());
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_3 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = GameManager_RoundStarting_mBA131EFE10A2D679173B1C3DB105B5FA0442B993(L_4, NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine (RoundPlaying());
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_7 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = GameManager_RoundPlaying_mCADB4F5AEEA297E0AA1A8EDC6C6DD11DEDD4E21E(L_8, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine (RoundEnding());
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_11 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = GameManager_RoundEnding_m1A0BA69960329F8ACF5D7C7C0355BC9BFA8F3D7D(L_12, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (m_GameWinner != null)
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_15 = V_1;
		NullCheck(L_15);
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_16 = L_15->___m_GameWinner_15;
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		// SceneManager.LoadScene (0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		goto IL_00b0;
	}

IL_00a3:
	{
		// StartCoroutine (GameLoop ());
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_17 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = GameManager_GameLoop_m2CE5B0E616781684D30970A6BDCDB20FE5950264(L_18, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_19, NULL);
	}

IL_00b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object Complete.GameManager/<GameLoop>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameLoopU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2FEBD990DA33D9657B2C537DDBB9FCC0B7CF31D5 (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Complete.GameManager/<GameLoop>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_mCFE3FE3CDBBA0F66DBD7A99ED276992E0D670FB2 (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_mCFE3FE3CDBBA0F66DBD7A99ED276992E0D670FB2_RuntimeMethod_var)));
	}
}
// System.Object Complete.GameManager/<GameLoop>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameLoopU3Ed__15_System_Collections_IEnumerator_get_Current_m481BD183613F13F5CDF5BF3C6A2FD99E97669173 (U3CGameLoopU3Ed__15_tA2892BCC1ED693C1746A1B2466E30C1A3C4B5FA0* __this, const RuntimeMethod* method) 
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
// System.Void Complete.GameManager/<RoundStarting>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16__ctor_mCE6BED4425A3C55966B355E0B34223361753A608 (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Complete.GameManager/<RoundStarting>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16_System_IDisposable_Dispose_m23C1F44121C1D681859DA32FAE1C6A2188C9C513 (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Complete.GameManager/<RoundStarting>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundStartingU3Ed__16_MoveNext_mAEB01F6B4CDCFB9CBA161F28DE39D55A4E7011A0 (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ResetAllTanks ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_4 = V_1;
		NullCheck(L_4);
		GameManager_ResetAllTanks_m112905166139D4EA103699DBDFEA430B9448C8CD(L_4, NULL);
		// DisableTankControl ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_5 = V_1;
		NullCheck(L_5);
		GameManager_DisableTankControl_m674293C21161BDCAAACF1FCC07CAF7006376BA37(L_5, NULL);
		// m_CameraControl.SetStartPositionAndSize ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_6 = V_1;
		NullCheck(L_6);
		CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* L_7 = L_6->___m_CameraControl_7;
		NullCheck(L_7);
		CameraControl_SetStartPositionAndSize_mE3A45587A839D7D2B01261C4F70F4AD8C2E1CCD7(L_7, NULL);
		// m_RoundNumber++;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_8 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___m_RoundNumber_11;
		NullCheck(L_8);
		L_8->___m_RoundNumber_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// m_MessageText.text = "ROUND " + m_RoundNumber;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_11 = V_1;
		NullCheck(L_11);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11->___m_MessageText_8;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_13 = V_1;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___m_RoundNumber_11);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46, L_15, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		// yield return m_StartWait;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_17 = V_1;
		NullCheck(L_17);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = L_17->___m_StartWait_12;
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Complete.GameManager/<RoundStarting>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundStartingU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mABA66207366B6308C9967E5F2C6AFCE95BC47AD3 (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Complete.GameManager/<RoundStarting>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m83C27E621BE79CDDB7AB992C42A323D4F90E7C6B (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m83C27E621BE79CDDB7AB992C42A323D4F90E7C6B_RuntimeMethod_var)));
	}
}
// System.Object Complete.GameManager/<RoundStarting>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_get_Current_mFF9A41F43DAB783F66A63C40583545AA27F586EF (U3CRoundStartingU3Ed__16_tDC3F694B153AA2F46374A1B1A27E84D8F5B2B99C* __this, const RuntimeMethod* method) 
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
// System.Void Complete.GameManager/<RoundPlaying>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17__ctor_m23E6A9A12480DBFEBD9D40C12E2441484FFC00D9 (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Complete.GameManager/<RoundPlaying>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17_System_IDisposable_Dispose_m77C34881EF7B37C2C473341DEC393D7F1B446F98 (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Complete.GameManager/<RoundPlaying>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundPlayingU3Ed__17_MoveNext_m093A7B583A9669740F807B2164D1EF48B4B95CCD (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// EnableTankControl ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_4 = V_1;
		NullCheck(L_4);
		GameManager_EnableTankControl_m51CAE77182D5995BDE7468E9961B05B2CB021B43(L_4, NULL);
		// m_MessageText.text = string.Empty;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_5 = V_1;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___m_MessageText_8;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		goto IL_004d;
	}

IL_0036:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004d:
	{
		// while (!OneTankLeft())
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameManager_OneTankLeft_mBF1365221AF19325118EA914CE34437C54B6EACF(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Complete.GameManager/<RoundPlaying>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundPlayingU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82839105A693ED1368B01CAB076395169999245C (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Complete.GameManager/<RoundPlaying>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_mFC481FB780F4A778D17660216435C6C633228E1F (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_mFC481FB780F4A778D17660216435C6C633228E1F_RuntimeMethod_var)));
	}
}
// System.Object Complete.GameManager/<RoundPlaying>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_get_Current_m1E848F2B83CE58A9AE4FD516053C6F97834C0E0F (U3CRoundPlayingU3Ed__17_t198659A737D19C01A5759DC211C6796E998004B8* __this, const RuntimeMethod* method) 
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
// System.Void Complete.GameManager/<RoundEnding>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18__ctor_m9E9C7A3AEF94DCE03B73CBF63138177B3EFEF730 (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Complete.GameManager/<RoundEnding>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18_System_IDisposable_Dispose_mC2C5E28DE0E801737167A000988F876DDDAB6D98 (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Complete.GameManager/<RoundEnding>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundEndingU3Ed__18_MoveNext_m9EA53E6D8C337FCBD7258EAD46394CF8406D9091 (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DisableTankControl ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_4 = V_1;
		NullCheck(L_4);
		GameManager_DisableTankControl_m674293C21161BDCAAACF1FCC07CAF7006376BA37(L_4, NULL);
		// m_RoundWinner = null;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_5 = V_1;
		NullCheck(L_5);
		L_5->___m_RoundWinner_14 = (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___m_RoundWinner_14), (void*)(TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A*)NULL);
		// m_RoundWinner = GetRoundWinner ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_6 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_7 = V_1;
		NullCheck(L_7);
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_8;
		L_8 = GameManager_GetRoundWinner_m22EC25343499DC97180EC607C140F78A5A015BB1(L_7, NULL);
		NullCheck(L_6);
		L_6->___m_RoundWinner_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_RoundWinner_14), (void*)L_8);
		// if (m_RoundWinner != null)
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_9 = V_1;
		NullCheck(L_9);
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_10 = L_9->___m_RoundWinner_14;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// m_RoundWinner.m_Wins++;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_11 = V_1;
		NullCheck(L_11);
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_12 = L_11->___m_RoundWinner_14;
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_Wins_5;
		NullCheck(L_13);
		L_13->___m_Wins_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		// m_GameWinner = GetGameWinner ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_15 = V_1;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_16 = V_1;
		NullCheck(L_16);
		TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* L_17;
		L_17 = GameManager_GetGameWinner_mF24C5519AA94F98203EE9CC28309412EE28064F9(L_16, NULL);
		NullCheck(L_15);
		L_15->___m_GameWinner_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___m_GameWinner_15), (void*)L_17);
		// string message = EndMessage ();
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = GameManager_EndMessage_mAE8A4933EE9C0F03BBF7E2551B2F7BF5FC3CBD0B(L_18, NULL);
		V_2 = L_19;
		// m_MessageText.text = message;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_20 = V_1;
		NullCheck(L_20);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = L_20->___m_MessageText_8;
		String_t* L_22 = V_2;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// yield return m_EndWait;
		GameManager_t015B1CE795945953BDF60E3BB76C2E43DB4E22B2* L_23 = V_1;
		NullCheck(L_23);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = L_23->___m_EndWait_13;
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Complete.GameManager/<RoundEnding>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundEndingU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC99CA1717074B60A7F0176A59C2E5BD99D9CA65E (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Complete.GameManager/<RoundEnding>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_m79E995BE1659D9EFA172EB0335247F68034C8FBC (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_m79E995BE1659D9EFA172EB0335247F68034C8FBC_RuntimeMethod_var)));
	}
}
// System.Object Complete.GameManager/<RoundEnding>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_get_Current_mD1EF3F74076AC14D80638BAC471A93D0E74A04C0 (U3CRoundEndingU3Ed__18_t787D91F6BA026D3929B4175FEFF68D5ED0104627* __this, const RuntimeMethod* method) 
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
// System.Void Complete.TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_m1CD60D9AEAA66BE38C919DE098277B9EAF799816 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A_m6971FD55B8E6A1CF2E52C4670D4C06FE187F90FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1_m30D52907C1A638D60E5DBB6FAF5343ACBCCD5FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// m_Movement = m_Instance.GetComponent<TankMovement> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Instance_4;
		NullCheck(L_0);
		TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* L_1;
		L_1 = GameObject_GetComponent_TisTankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A_m6971FD55B8E6A1CF2E52C4670D4C06FE187F90FE(L_0, GameObject_GetComponent_TisTankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A_m6971FD55B8E6A1CF2E52C4670D4C06FE187F90FE_RuntimeMethod_var);
		__this->___m_Movement_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Movement_6), (void*)L_1);
		// m_Shooting = m_Instance.GetComponent<TankShooting> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_Instance_4;
		NullCheck(L_2);
		TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* L_3;
		L_3 = GameObject_GetComponent_TisTankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1_m30D52907C1A638D60E5DBB6FAF5343ACBCCD5FEC(L_2, GameObject_GetComponent_TisTankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1_m30D52907C1A638D60E5DBB6FAF5343ACBCCD5FEC_RuntimeMethod_var);
		__this->___m_Shooting_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Shooting_7), (void*)L_3);
		// m_CanvasGameObject = m_Instance.GetComponentInChildren<Canvas> ().gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_Instance_4;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A(L_4, GameObject_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m44A443BC662567EDD4AFFC5AF24B3B4E189C139A_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___m_CanvasGameObject_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CanvasGameObject_8), (void*)L_6);
		// m_Movement.m_PlayerNumber = m_PlayerNumber;
		TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* L_7 = __this->___m_Movement_6;
		int32_t L_8 = __this->___m_PlayerNumber_2;
		NullCheck(L_7);
		L_7->___m_PlayerNumber_4 = L_8;
		// m_Shooting.m_PlayerNumber = m_PlayerNumber;
		TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* L_9 = __this->___m_Shooting_7;
		int32_t L_10 = __this->___m_PlayerNumber_2;
		NullCheck(L_9);
		L_9->___m_PlayerNumber_4 = L_10;
		// m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(m_PlayerColor) + ">PLAYER " + m_PlayerNumber + "</color>";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___m_PlayerColor_0;
		String_t* L_15;
		L_15 = ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (&__this->___m_PlayerNumber_2);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		__this->___m_ColoredPlayerText_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ColoredPlayerText_3), (void*)L_21);
		// MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_Instance_4;
		NullCheck(L_22);
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_23;
		L_23 = GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702(L_22, GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		V_0 = L_23;
		// for (int i = 0; i < renderers.Length; i++)
		V_1 = 0;
		goto IL_00c6;
	}

IL_00af:
	{
		// renderers[i].material.color = m_PlayerColor;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_27, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___m_PlayerColor_0;
		NullCheck(L_28);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_28, L_29, NULL);
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_31 = V_1;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00af;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mA44FE6C113305AC849DCB6883421DF495125CF6F (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) 
{
	{
		// m_Movement.enabled = false;
		TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* L_0 = __this->___m_Movement_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// m_Shooting.enabled = false;
		TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* L_1 = __this->___m_Shooting_7;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// m_CanvasGameObject.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_CanvasGameObject_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mC5A3BB345E0FB0CBF59CFA0881D752AABC128523 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) 
{
	{
		// m_Movement.enabled = true;
		TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* L_0 = __this->___m_Movement_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// m_Shooting.enabled = true;
		TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* L_1 = __this->___m_Shooting_7;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// m_CanvasGameObject.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_CanvasGameObject_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_m5FBAF81B7367D3A130F29AC087B31CA8E8DC41C5 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) 
{
	{
		// m_Instance.transform.position = m_SpawnPoint.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Instance_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_SpawnPoint_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// m_Instance.transform.rotation = m_SpawnPoint.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_Instance_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___m_SpawnPoint_1;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
		// m_Instance.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_Instance_4;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// m_Instance.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_Instance_4;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager__ctor_m1A0843822262C7AA32BFA82ACB5FC222382C2B94 (TankManager_tCB003C04CC1E63A6CA2E73A0758B08E07173EE0A* __this, const RuntimeMethod* method) 
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
// System.Void Complete.ShellExplosion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_Start_mFDE26A39B90BDF9D15411CB48EF18C6B233A80C0 (ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy (gameObject, m_MaxLifeTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___m_MaxLifeTime_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Complete.ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_OnTriggerEnter_mBA26A59E6A8A8BFEBE3A03EF1AF1195810D2BEFF (ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A_m2849F5EF655DF777A480DCC70A1E1F18A4969DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_3 = NULL;
	TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* V_4 = NULL;
	float V_5 = 0.0f;
	{
		// Collider[] colliders = Physics.OverlapSphere (transform.position, m_ExplosionRadius, m_TankMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___m_ExplosionRadius_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___m_TankMask_4;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE(L_1, L_2, L_4, NULL);
		V_0 = L_5;
		// for (int i = 0; i < colliders.Length; i++)
		V_2 = 0;
		goto IL_0080;
	}

IL_0026:
	{
		// Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody> ();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_9, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_3 = L_10;
		// if (!targetRigidbody)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		// targetRigidbody.AddExplosionForce (m_ExplosionForce, transform.position, m_ExplosionRadius);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = V_3;
		float L_14 = __this->___m_ExplosionForce_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = __this->___m_ExplosionRadius_10;
		NullCheck(L_13);
		Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1(L_13, L_14, L_16, L_17, NULL);
		// TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth> ();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = V_3;
		NullCheck(L_18);
		TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* L_19;
		L_19 = Component_GetComponent_TisTankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A_m2849F5EF655DF777A480DCC70A1E1F18A4969DF4(L_18, Component_GetComponent_TisTankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A_m2849F5EF655DF777A480DCC70A1E1F18A4969DF4_RuntimeMethod_var);
		V_4 = L_19;
		// if (!targetHealth)
		TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* L_20 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		// float damage = CalculateDamage (targetRigidbody.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = V_3;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_22, NULL);
		float L_24;
		L_24 = ShellExplosion_CalculateDamage_mE63A470C1A057BE49F73E7E9028EA0A1266D6E49(__this, L_23, NULL);
		V_5 = L_24;
		// targetHealth.TakeDamage (damage);
		TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* L_25 = V_4;
		float L_26 = V_5;
		NullCheck(L_25);
		TankHealth_TakeDamage_m241E8094DD7695F0450FE373ADAB279655DF0248(L_25, L_26, NULL);
	}

IL_007c:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0080:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_28 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// m_ExplosionParticles.transform.parent = null;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = __this->___m_ExplosionParticles_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// m_ExplosionParticles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_32 = __this->___m_ExplosionParticles_5;
		NullCheck(L_32);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_32, NULL);
		// m_ExplosionAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = __this->___m_ExplosionAudio_6;
		NullCheck(L_33);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_33, NULL);
		// ParticleSystem.MainModule mainModule = m_ExplosionParticles.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_34 = __this->___m_ExplosionParticles_5;
		NullCheck(L_34);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_35;
		L_35 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_34, NULL);
		V_1 = L_35;
		// Destroy (m_ExplosionParticles.gameObject, mainModule.duration);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_36 = __this->___m_ExplosionParticles_5;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		float L_38;
		L_38 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_37, L_38, NULL);
		// Destroy (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_39, NULL);
		// }
		return;
	}
}
// System.Single Complete.ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_mE63A470C1A057BE49F73E7E9028EA0A1266D6E49 (ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 explosionToTarget = targetPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// float explosionDistance = explosionToTarget.magnitude;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = L_4;
		// float relativeDistance = (m_ExplosionRadius - explosionDistance) / m_ExplosionRadius;
		float L_5 = __this->___m_ExplosionRadius_10;
		float L_6 = V_1;
		float L_7 = __this->___m_ExplosionRadius_10;
		// float damage = relativeDistance * m_MaxDamage;
		float L_8 = __this->___m_MaxDamage_7;
		V_2 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_5, L_6))/L_7)), L_8));
		// damage = Mathf.Max (0f, damage);
		float L_9 = V_2;
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_9, NULL);
		V_2 = L_10;
		// return damage;
		float L_11 = V_2;
		return L_11;
	}
}
// System.Void Complete.ShellExplosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion__ctor_mDF6D2FAD7FB76C9605B89897F887C20C904A9B69 (ShellExplosion_t2466201A5490F54FA5E6A6F28AB14E80F6F9EF99* __this, const RuntimeMethod* method) 
{
	{
		// public float m_MaxDamage = 100f;                    // The amount of damage done if the explosion is centred on a tank.
		__this->___m_MaxDamage_7 = (100.0f);
		// public float m_ExplosionForce = 1000f;              // The amount of force added to a tank at the centre of the explosion.
		__this->___m_ExplosionForce_8 = (1000.0f);
		// public float m_MaxLifeTime = 2f;                    // The time in seconds before the shell is removed.
		__this->___m_MaxLifeTime_9 = (2.0f);
		// public float m_ExplosionRadius = 5f;                // The maximum distance away from the explosion tanks can be and are still affected.
		__this->___m_ExplosionRadius_10 = (5.0f);
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
// System.Void Complete.TankHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_Awake_m286CE89BB019CB1FBE9567A3895D16576C16B9CC (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ExplosionParticles = Instantiate (m_ExplosionPrefab).GetComponent<ParticleSystem> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ExplosionPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
		L_2 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_1, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		__this->___m_ExplosionParticles_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplosionParticles_11), (void*)L_2);
		// m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource> ();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___m_ExplosionParticles_11;
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_3, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_ExplosionAudio_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplosionAudio_10), (void*)L_4);
		// m_ExplosionParticles.gameObject.SetActive (false);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = __this->___m_ExplosionParticles_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankHealth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnEnable_m9E1C612CAD6C2495A96FA9C6F386AB0EEBF9CE06 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) 
{
	{
		// m_CurrentHealth = m_StartingHealth;
		float L_0 = __this->___m_StartingHealth_4;
		__this->___m_CurrentHealth_12 = L_0;
		// m_Dead = false;
		__this->___m_Dead_13 = (bool)0;
		// SetHealthUI();
		TankHealth_SetHealthUI_m473B25E8F5EEB3B634A3D6DE23188F470DCB9434(__this, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m241E8094DD7695F0450FE373ADAB279655DF0248 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, float ___amount0, const RuntimeMethod* method) 
{
	{
		// m_CurrentHealth -= amount;
		float L_0 = __this->___m_CurrentHealth_12;
		float L_1 = ___amount0;
		__this->___m_CurrentHealth_12 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// SetHealthUI ();
		TankHealth_SetHealthUI_m473B25E8F5EEB3B634A3D6DE23188F470DCB9434(__this, NULL);
		// if (m_CurrentHealth <= 0f && !m_Dead)
		float L_2 = __this->___m_CurrentHealth_12;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		bool L_3 = __this->___m_Dead_13;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// OnDeath ();
		TankHealth_OnDeath_mAF724DE7C2A745FEC3334B60C3BAB925160C27A5(__this, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Complete.TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_m473B25E8F5EEB3B634A3D6DE23188F470DCB9434 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) 
{
	{
		// m_Slider.value = m_CurrentHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___m_Slider_5;
		float L_1 = __this->___m_CurrentHealth_12;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// m_FillImage.color = Color.Lerp (m_ZeroHealthColor, m_FullHealthColor, m_CurrentHealth / m_StartingHealth);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_FillImage_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_ZeroHealthColor_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_FullHealthColor_7;
		float L_5 = __this->___m_CurrentHealth_12;
		float L_6 = __this->___m_StartingHealth_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_3, L_4, ((float)(L_5/L_6)), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_7);
		// }
		return;
	}
}
// System.Void Complete.TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_mAF724DE7C2A745FEC3334B60C3BAB925160C27A5 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) 
{
	{
		// m_Dead = true;
		__this->___m_Dead_13 = (bool)1;
		// m_ExplosionParticles.transform.position = transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___m_ExplosionParticles_11;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// m_ExplosionParticles.gameObject.SetActive (true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___m_ExplosionParticles_11;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// m_ExplosionParticles.Play ();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___m_ExplosionParticles_11;
		NullCheck(L_6);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_6, NULL);
		// m_ExplosionAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___m_ExplosionAudio_10;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// gameObject.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth__ctor_mA02F811C3A151984F3CCC03E840F77446DAC1F53 (TankHealth_t16F91E86D7C988C042C45FA6673996ADB8F6996A* __this, const RuntimeMethod* method) 
{
	{
		// public float m_StartingHealth = 100f;               // The amount of health each tank starts with.
		__this->___m_StartingHealth_4 = (100.0f);
		// public Color m_FullHealthColor = Color.green;       // The color the health bar will be when on full health.
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___m_FullHealthColor_7 = L_0;
		// public Color m_ZeroHealthColor = Color.red;         // The color the health bar will be when on no health.
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___m_ZeroHealthColor_8 = L_1;
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
// System.Void Complete.TankMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Awake_m440545615A191C39D5A18C8BD2E8D108B2F5C681 (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody> ();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void Complete.TankMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnEnable_mE1858DED43800F81B62C3AC4A98CF60169511AAF (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_Rigidbody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Rigidbody_13;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// m_MovementInputValue = 0f;
		__this->___m_MovementInputValue_14 = (0.0f);
		// m_TurnInputValue = 0f;
		__this->___m_TurnInputValue_15 = (0.0f);
		// m_particleSystems = GetComponentsInChildren<ParticleSystem>();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1;
		L_1 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(__this, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		__this->___m_particleSystems_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_particleSystems_17), (void*)L_1);
		// for (int i = 0; i < m_particleSystems.Length; ++i)
		V_0 = 0;
		goto IL_0043;
	}

IL_0032:
	{
		// m_particleSystems[i].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_2 = __this->___m_particleSystems_17;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
		// for (int i = 0; i < m_particleSystems.Length; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < m_particleSystems.Length; ++i)
		int32_t L_7 = V_0;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = __this->___m_particleSystems_17;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.TankMovement::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnDisable_mA4594497F132972C3A1BED99E828C4E2E35C518A (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_Rigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Rigidbody_13;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)1, NULL);
		// for(int i = 0; i < m_particleSystems.Length; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		// m_particleSystems[i].Stop();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = __this->___m_particleSystems_17;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_4, NULL);
		// for(int i = 0; i < m_particleSystems.Length; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		// for(int i = 0; i < m_particleSystems.Length; ++i)
		int32_t L_6 = V_0;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_7 = __this->___m_particleSystems_17;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Complete.TankMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Start_m01C5EFEEEEBCB23FE3432C13332FF7906FF43EFC (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MovementAxisName = "Vertical" + m_PlayerNumber;
		int32_t* L_0 = (&__this->___m_PlayerNumber_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, L_1, NULL);
		__this->___m_MovementAxisName_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MovementAxisName_11), (void*)L_2);
		// m_TurnAxisName = "Horizontal" + m_PlayerNumber;
		int32_t* L_3 = (&__this->___m_PlayerNumber_4);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, L_4, NULL);
		__this->___m_TurnAxisName_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TurnAxisName_12), (void*)L_5);
		// m_OriginalPitch = m_MovementAudio.pitch;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___m_MovementAudio_7;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_6, NULL);
		__this->___m_OriginalPitch_16 = L_7;
		// }
		return;
	}
}
// System.Void Complete.TankMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Update_m9BE8D73C2FFFBFA4A1185E5958F221D75B764ECC (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	{
		// m_MovementInputValue = Input.GetAxis (m_MovementAxisName);
		String_t* L_0 = __this->___m_MovementAxisName_11;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_0, NULL);
		__this->___m_MovementInputValue_14 = L_1;
		// m_TurnInputValue = Input.GetAxis (m_TurnAxisName);
		String_t* L_2 = __this->___m_TurnAxisName_12;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_2, NULL);
		__this->___m_TurnInputValue_15 = L_3;
		// EngineAudio ();
		TankMovement_EngineAudio_mB886853EF6395C0A89C4252CB4B9341219544EBA(__this, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_mB886853EF6395C0A89C4252CB4B9341219544EBA (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mathf.Abs (m_MovementInputValue) < 0.1f && Mathf.Abs (m_TurnInputValue) < 0.1f)
		float L_0 = __this->___m_MovementInputValue_14;
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_2 = __this->___m_TurnInputValue_15;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if (m_MovementAudio.clip == m_EngineDriving)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___m_MovementAudio_7;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___m_EngineDriving_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineIdling;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___m_MovementAudio_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___m_EngineIdling_8;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		// m_MovementAudio.pitch = Random.Range (m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_MovementAudio_7;
		float L_11 = __this->___m_OriginalPitch_16;
		float L_12 = __this->___m_PitchRange_10;
		float L_13 = __this->___m_OriginalPitch_16;
		float L_14 = __this->___m_PitchRange_10;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract(L_11, L_12)), ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		NullCheck(L_10);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_10, L_15, NULL);
		// m_MovementAudio.Play ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___m_MovementAudio_7;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
		return;
	}

IL_0086:
	{
		// if (m_MovementAudio.clip == m_EngineIdling)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___m_MovementAudio_7;
		NullCheck(L_17);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18;
		L_18 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_17, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___m_EngineIdling_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineDriving;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___m_MovementAudio_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = __this->___m_EngineDriving_9;
		NullCheck(L_21);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_21, L_22, NULL);
		// m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___m_MovementAudio_7;
		float L_24 = __this->___m_OriginalPitch_16;
		float L_25 = __this->___m_PitchRange_10;
		float L_26 = __this->___m_OriginalPitch_16;
		float L_27 = __this->___m_PitchRange_10;
		float L_28;
		L_28 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract(L_24, L_25)), ((float)il2cpp_codegen_add(L_26, L_27)), NULL);
		NullCheck(L_23);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_23, L_28, NULL);
		// m_MovementAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->___m_MovementAudio_7;
		NullCheck(L_29);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_29, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void Complete.TankMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_FixedUpdate_m4B7CF1A9BA09DEEB6F45C78D7687A34565F71B6A (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	{
		// Move ();
		TankMovement_Move_m63E38FC5F84B3EB8FAF12E18B080371AFF5F2227(__this, NULL);
		// Turn ();
		TankMovement_Turn_m0DA8FD441737181443D3C0CEB5C33B9344F7F334(__this, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_m63E38FC5F84B3EB8FAF12E18B080371AFF5F2227 (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 movement = transform.forward * m_MovementInputValue * m_Speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___m_MovementInputValue_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4 = __this->___m_Speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// m_Rigidbody.MovePosition(m_Rigidbody.position + movement);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___m_Rigidbody_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___m_Rigidbody_13;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		NullCheck(L_8);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_8, L_12, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_m0DA8FD441737181443D3C0CEB5C33B9344F7F334 (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;
		float L_0 = __this->___m_TurnInputValue_15;
		float L_1 = __this->___m_TurnSpeed_6;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// Quaternion turnRotation = Quaternion.Euler (0f, turn, 0f);
		float L_3 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_3, (0.0f), NULL);
		V_1 = L_4;
		// m_Rigidbody.MoveRotation (m_Rigidbody.rotation * turnRotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___m_Rigidbody_13;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_8, NULL);
		NullCheck(L_5);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void Complete.TankMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement__ctor_m20626E2AA06716A543EED6C728C0DA1A5FDEC19F (TankMovement_tB04016BAECC882705FD95C7AFD671C75003FDB7A* __this, const RuntimeMethod* method) 
{
	{
		// public int m_PlayerNumber = 1;              // Used to identify which tank belongs to which player.  This is set by this tank's manager.
		__this->___m_PlayerNumber_4 = 1;
		// public float m_Speed = 12f;                 // How fast the tank moves forward and back.
		__this->___m_Speed_5 = (12.0f);
		// public float m_TurnSpeed = 180f;            // How fast the tank turns in degrees per second.
		__this->___m_TurnSpeed_6 = (180.0f);
		// public float m_PitchRange = 0.2f;           // The amount by which the pitch of the engine noises can vary.
		__this->___m_PitchRange_10 = (0.200000003f);
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
// System.Void Complete.TankShooting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_OnEnable_m19BC70325BA6B449116B6F63C2DFB06B75C25BE8 (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) 
{
	{
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_0 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_0;
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___m_AimSlider_7;
		float L_2 = __this->___m_MinLaunchForce_11;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Complete.TankShooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Start_m36818FB901D524CC8B9987C49938A613D87A6863 (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FireButton = "Fire" + m_PlayerNumber;
		int32_t* L_0 = (&__this->___m_PlayerNumber_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, L_1, NULL);
		__this->___m_FireButton_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FireButton_14), (void*)L_2);
		// m_ChargeSpeed = (m_MaxLaunchForce - m_MinLaunchForce) / m_MaxChargeTime;
		float L_3 = __this->___m_MaxLaunchForce_12;
		float L_4 = __this->___m_MinLaunchForce_11;
		float L_5 = __this->___m_MaxChargeTime_13;
		__this->___m_ChargeSpeed_16 = ((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/L_5));
		// }
		return;
	}
}
// System.Void Complete.TankShooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Update_m31F9244987881F31B654780A5B36517ECCF6C006 (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) 
{
	{
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___m_AimSlider_7;
		float L_1 = __this->___m_MinLaunchForce_11;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// if (m_CurrentLaunchForce >= m_MaxLaunchForce && !m_Fired)
		float L_2 = __this->___m_CurrentLaunchForce_15;
		float L_3 = __this->___m_MaxLaunchForce_12;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		bool L_4 = __this->___m_Fired_17;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_CurrentLaunchForce = m_MaxLaunchForce;
		float L_5 = __this->___m_MaxLaunchForce_12;
		__this->___m_CurrentLaunchForce_15 = L_5;
		// Fire ();
		TankShooting_Fire_m08945B074FBD6588BB94BAD61A3E35EF0C67741E(__this, NULL);
		return;
	}

IL_003a:
	{
		// else if (Input.GetButtonDown (m_FireButton))
		String_t* L_6 = __this->___m_FireButton_14;
		bool L_7;
		L_7 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_6, NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// m_Fired = false;
		__this->___m_Fired_17 = (bool)0;
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_8 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_8;
		// m_ShootingAudio.clip = m_ChargingClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___m_ShootingAudio_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___m_ChargingClip_9;
		NullCheck(L_9);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_9, L_10, NULL);
		// m_ShootingAudio.Play ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___m_ShootingAudio_8;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		return;
	}

IL_0077:
	{
		// else if (Input.GetButton (m_FireButton) && !m_Fired)
		String_t* L_12 = __this->___m_FireButton_14;
		bool L_13;
		L_13 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_12, NULL);
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_14 = __this->___m_Fired_17;
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// m_CurrentLaunchForce += m_ChargeSpeed * Time.deltaTime;
		float L_15 = __this->___m_CurrentLaunchForce_15;
		float L_16 = __this->___m_ChargeSpeed_16;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___m_CurrentLaunchForce_15 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// m_AimSlider.value = m_CurrentLaunchForce;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___m_AimSlider_7;
		float L_19 = __this->___m_CurrentLaunchForce_15;
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		return;
	}

IL_00b7:
	{
		// else if (Input.GetButtonUp (m_FireButton) && !m_Fired)
		String_t* L_20 = __this->___m_FireButton_14;
		bool L_21;
		L_21 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_20, NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_22 = __this->___m_Fired_17;
		if (L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// Fire ();
		TankShooting_Fire_m08945B074FBD6588BB94BAD61A3E35EF0C67741E(__this, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Complete.TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_m08945B074FBD6588BB94BAD61A3E35EF0C67741E (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Fired = true;
		__this->___m_Fired_17 = (bool)1;
		// Rigidbody shellInstance =
		//     Instantiate (m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Shell_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_FireTransform_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_FireTransform_6;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2(L_0, L_2, L_4, Object_Instantiate_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m156FAC4850C7738CFC53E365D32C72C4D7B66EA2_RuntimeMethod_var);
		// shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;
		float L_6 = __this->___m_CurrentLaunchForce_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___m_FireTransform_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_6, L_8, NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_9, NULL);
		// m_ShootingAudio.clip = m_FireClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_ShootingAudio_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___m_FireClip_10;
		NullCheck(L_10);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_10, L_11, NULL);
		// m_ShootingAudio.Play ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___m_ShootingAudio_8;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_13 = __this->___m_MinLaunchForce_11;
		__this->___m_CurrentLaunchForce_15 = L_13;
		// }
		return;
	}
}
// System.Void Complete.TankShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting__ctor_mEE82CE4E0B58BCE6DF7651F83743084BB98C1D76 (TankShooting_tF4661A636DE5CA1110553C28360B9E447B0C7CD1* __this, const RuntimeMethod* method) 
{
	{
		// public int m_PlayerNumber = 1;              // Used to identify the different players.
		__this->___m_PlayerNumber_4 = 1;
		// public float m_MinLaunchForce = 15f;        // The force given to the shell if the fire button is not held.
		__this->___m_MinLaunchForce_11 = (15.0f);
		// public float m_MaxLaunchForce = 30f;        // The force given to the shell if the fire button is held for the max charge time.
		__this->___m_MaxLaunchForce_12 = (30.0f);
		// public float m_MaxChargeTime = 0.75f;       // How long the shell can charge for before it is fired at max force.
		__this->___m_MaxChargeTime_13 = (0.75f);
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
// System.Void Complete.UIDirectionControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Start_m4BB1B343907A0886FC25023F2C30779A1AE7CE0B (UIDirectionControl_t2A8F33103425708E58A800F9D50F589F087832AC* __this, const RuntimeMethod* method) 
{
	{
		// m_RelativeRotation = transform.parent.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		__this->___m_RelativeRotation_5 = L_2;
		// }
		return;
	}
}
// System.Void Complete.UIDirectionControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Update_m3FEBA7637EABC324454BA3BE5FBE18CDA9BC9F9D (UIDirectionControl_t2A8F33103425708E58A800F9D50F589F087832AC* __this, const RuntimeMethod* method) 
{
	{
		// if (m_UseRelativeRotation)
		bool L_0 = __this->___m_UseRelativeRotation_4;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// transform.rotation = m_RelativeRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___m_RelativeRotation_5;
		NullCheck(L_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Complete.UIDirectionControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl__ctor_mA26CDB6CB9B196BFBB1E60CA49E04FC1C8D0BE00 (UIDirectionControl_t2A8F33103425708E58A800F9D50F589F087832AC* __this, const RuntimeMethod* method) 
{
	{
		// public bool m_UseRelativeRotation = true;       // Use relative rotation should be used for this gameobject?
		__this->___m_UseRelativeRotation_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
