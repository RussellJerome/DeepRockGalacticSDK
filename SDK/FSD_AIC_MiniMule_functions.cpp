// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AIC_MiniMule_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_MiniMule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay");

	AAIC_MiniMule_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AAIC_MiniMule_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1");

	AAIC_MiniMule_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAIC_MiniMule_C::ExecuteUbergraph_AIC_MiniMule(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule");

	AAIC_MiniMule_C_ExecuteUbergraph_AIC_MiniMule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
