// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_LineCutter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_LineCutter.ABP_LineCutter_C.ExecuteUbergraph_ABP_LineCutter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_LineCutter_C::ExecuteUbergraph_ABP_LineCutter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_LineCutter.ABP_LineCutter_C.ExecuteUbergraph_ABP_LineCutter");

	UABP_LineCutter_C_ExecuteUbergraph_ABP_LineCutter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
