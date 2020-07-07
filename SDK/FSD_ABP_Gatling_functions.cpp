// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Gatling_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C
// (BlueprintEvent)

void UABP_Gatling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C");

	UABP_Gatling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Gatling_C::ExecuteUbergraph_ABP_Gatling(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling");

	UABP_Gatling_C_ExecuteUbergraph_ABP_Gatling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
