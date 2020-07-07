#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Bosco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Bosco.ABP_Bosco_C
// 0x0D48 (0x0FE8 - 0x02A0)
class UABP_Bosco_C : public UBoscoAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_43A38FED4F0935AB0ABBCCBAF4C43417;      // 0x02A8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BC97AA548F061CEEB3D6E958CD60993;// 0x02C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B887A71A4C919634FAA3AEB90E9EA573;// 0x02F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC2AE612476801E34EF4CFB592BB9207;// 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC6E7F4141767F676AB4B7ABB9BCF08B;// 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F213095948256C66FC68D88039633985;// 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF39724E49D37DABD1F3DF9169C87044;// 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32DBAC2B4BEC6B9BEFBB4CBA515DE84C;// 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1A8FFEA489FD58DA662CBAA66CBAC5F;// 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E18237243C9202EC107779D568A07CF;// 0x0408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E393F0194FCE38452A8905B4D30BB79F;// 0x0430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B6595CBA4FDBE71FD6B6BA81CEB5A56D;// 0x0458(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41E16860408AC6C966BA7293316AABA7;// 0x0480(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB0AEAE041731E2530174F9A50C01C30;// 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1485C9AC435D7BA9A30D90BBFAC98642;// 0x04D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D42714B4E07EE59C224B6AA5BA921EE;// 0x04F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4210E8D0438F626F0E4D59B0905F0238;// 0x0520(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04B9AA044BFCD2D3A65EA48C52F85AEA;// 0x0548(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEE9FCD1470CCB102ED91EA81D4E7E1E;// 0x0570(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75C3D5C7470125FA4872B3AD8DB4D54C;// 0x0598(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AF1EEDA4CD3921F861148AA81890ACB;// 0x05C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C87CB004D2625203839959DD2898B0F;// 0x05E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59DF0194464CA14AE6D2C5AD31812489;// 0x0610(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FE9ECF6C4EA96079EFF19EAD1D880F3C;// 0x0688(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_378EF5C74BD7C5F7385EC381FC63C90A;// 0x06A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BD38957D4647EE0102EA5C9A9999EE86;// 0x0720(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB3AB8354799293218406F956ED0061C;// 0x0740(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67283EED4386EF09D98F86B93E5E0DE6;// 0x07B8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CED00AE24F4DEE5355E20B81DDD82D5C;// 0x07D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_89196F6B4DE95AEE59AC27BCEBF3699D;// 0x0850(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0AE090434AB7E2621FFF01BFAD83A881;// 0x0870(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2E29A82B47E70BF8EB2509A0AC4C06FB;// 0x08E8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CA731EE49EF7B61A2D5998C1821719C;// 0x0908(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9E9B97B94CAAF1037243818755076F52;// 0x0980(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F8A49CE4DDD8C54A7F477A7D69C17D7;// 0x09A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_980478914DC8CB6E7F18F8BFF524EE99;// 0x0A18(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5660E45D4D9D3699FD1DAFB1653CEC90;// 0x0A38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A730F0F8477BF09966B05C915AC0AAF7;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A563406C4B70C83D31904B8D64AC03FE;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7AB823754900CD555028D3A24BEA66DD;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D8FA96041D29B8D871DF1B4A97855AA;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4804CC87469609B36E887DB45577E3BA;// 0x0BE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC7FF82D40C7F5F6B846F9A3E6E914E8;// 0x0C00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8AD5961A404C2A45BF6C7D989EE7AB8C;// 0x0C78(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF4D088F45049597BC86558ED69A925F;// 0x0C98(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_34209AD248F6DE75A2CD2D80063CA7EE;// 0x0D10(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2AFAD274A0FA4AAB03B1AA9FE5AE1B0;// 0x0D30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1ADD738E4DC9F31952BBF9B8825CF811;// 0x0DA8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53A2D72F40618C69E1D081871463B57B;// 0x0DC8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D757D69348C33EED09698A9F18E310E9;// 0x0E40(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_83C85D684B476291AD422A836AD9DD32;// 0x0E60(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1BEC5B684BD0026BB34A2C98B2A1E9DB;      // 0x0F10(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_816974EB48202426BAED0A939F0272C2;      // 0x0F58(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_52D5985A43EA7479A0401D813311BE13;      // 0x0FA0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Bosco.ABP_Bosco_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_DEE9FCD1470CCB102ED91EA81D4E7E1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_4210E8D0438F626F0E4D59B0905F0238();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_2C87CB004D2625203839959DD2898B0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_41E16860408AC6C966BA7293316AABA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_E393F0194FCE38452A8905B4D30BB79F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_AC6E7F4141767F676AB4B7ABB9BCF08B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bosco_AnimGraphNode_TransitionResult_0D42714B4E07EE59C224B6AA5BA921EE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Bosco(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
