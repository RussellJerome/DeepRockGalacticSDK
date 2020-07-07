#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_MiniMule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_MiniMule.ABP_MiniMule_C
// 0x080C (0x0AFC - 0x02F0)
class UABP_MiniMule_C : public USimpleMovingEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0BA742242B8C1372015DDB2416B0910;      // 0x02F8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7405A8154A544084A023AD9F445A3F2A;// 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85C001CE42A8AA0722A483A34FA6D550;// 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34CD39DE40ABABE192C5138CCEE0816E;// 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C32A3A94978AEF082102B888E5DB3E0;// 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19E656D143BE44BBA89C8F9F137BC6BF;// 0x03B8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8219616141383B4DA5A893BAB5420886;// 0x03E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D057A16C491442997BFD0F8A6886330B;// 0x04E8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3C6E473B4EB3B6209183858D1FE395D0;// 0x05F0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E2B807C04A579CF342B5D7AB52B71A5B;// 0x0610(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_908019DB473C01DE5DC3B4B9537D7905;// 0x0718(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3CAF6CD42100CB50D9403BC842BAEBA;// 0x0738(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0A60A4B04A7E050F98B0C4B29BC2A555;// 0x07B0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F9DD77B410727D3F212D1A6A6EFA2DE;// 0x07D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C525A7A6430A7EDAC4456AB1539C23BD;// 0x0848(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E29B2C2742374B8E47954981B9C15CA5;// 0x0868(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F9F0839F47C82BC02476008014841799;// 0x08E0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FDCE6A64E44850FB917EB996F2B0B52;// 0x0900(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3568F60E414B7F4CD4DB3AA8B01BD789;// 0x0978(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6281EAEB40FD509E7CD5F5B4DC2BA6BA;// 0x0998(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_05E550954AF6C318E2CFD8A42D84483A;// 0x0A10(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1CADE8DD460469C5BBD7519045FD9F61;// 0x0A30(0x00B0)
	class ABP_MiniMule_Salvage_C*                      MULE;                                                     // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LegTwist;                                                 // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDown;                                                   // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRepaired;                                               // 0x0AED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AEE(0x0002) MISSED OFFSET
	struct FRotator                                    Progress;                                                 // 0x0AF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniMule.ABP_MiniMule_C");
		return ptr;
	}


	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_MiniMule(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
