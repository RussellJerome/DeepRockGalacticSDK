// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Beard_Rig_A.ABP_Beard_Rig_A_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Beard_Rig_A_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Beard_Rig_A.ABP_Beard_Rig_A_C.BlueprintUpdateAnimation");

	UABP_Beard_Rig_A_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Beard_Rig_A.ABP_Beard_Rig_A_C.ExecuteUbergraph_ABP_Beard_Rig_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Beard_Rig_A_C::ExecuteUbergraph_ABP_Beard_Rig_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Beard_Rig_A.ABP_Beard_Rig_A_C.ExecuteUbergraph_ABP_Beard_Rig_A");

	UABP_Beard_Rig_A_C_ExecuteUbergraph_ABP_Beard_Rig_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
