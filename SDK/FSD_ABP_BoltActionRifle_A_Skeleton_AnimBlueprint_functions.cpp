// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint");

	UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C_ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
