// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LowGravity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LowGravity.BP_LowGravity_C.StartLogic
// (Event, Protected, BlueprintEvent)

void UBP_LowGravity_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.StartLogic");

	UBP_LowGravity_C_StartLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LowGravity_C::ExecuteUbergraph_BP_LowGravity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity");

	UBP_LowGravity_C_ExecuteUbergraph_BP_LowGravity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
