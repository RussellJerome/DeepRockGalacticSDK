// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_Flea_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Flea.AIC_Flea_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIC_Flea_C::ReceivePossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Flea.AIC_Flea_C.ReceivePossess");

	AAIC_Flea_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIC_Flea.AIC_Flea_C.ExecuteUbergraph_AIC_Flea
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIC_Flea_C::ExecuteUbergraph_AIC_Flea(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Flea.AIC_Flea_C.ExecuteUbergraph_AIC_Flea");

	AAIC_Flea_C_ExecuteUbergraph_AIC_Flea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
