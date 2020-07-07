// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FlameThrower_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8
// (BlueprintEvent)

void UABP_FlameThrower_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8");

	UABP_FlameThrower_A_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.ExecuteUbergraph_ABP_FlameThrower_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FlameThrower_A_C::ExecuteUbergraph_ABP_FlameThrower_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FlameThrower_A.ABP_FlameThrower_A_C.ExecuteUbergraph_ABP_FlameThrower_A");

	UABP_FlameThrower_A_C_ExecuteUbergraph_ABP_FlameThrower_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
