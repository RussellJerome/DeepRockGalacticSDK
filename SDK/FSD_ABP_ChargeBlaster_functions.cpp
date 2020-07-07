// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_ChargeBlaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_ChargeBlaster.ABP_ChargeBlaster_C.ExecuteUbergraph_ABP_ChargeBlaster
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_ChargeBlaster_C::ExecuteUbergraph_ABP_ChargeBlaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_ChargeBlaster.ABP_ChargeBlaster_C.ExecuteUbergraph_ABP_ChargeBlaster");

	UABP_ChargeBlaster_C_ExecuteUbergraph_ABP_ChargeBlaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
