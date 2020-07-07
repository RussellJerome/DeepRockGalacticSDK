// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SupplyBar.ITM_SupplyBar_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress__0_1_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBar_C::SetProgress(float* Progress__0_1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBar.ITM_SupplyBar_C.SetProgress");

	UITM_SupplyBar_C_SetProgress_Params params;
	params.Progress__0_1_ = Progress__0_1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBar.ITM_SupplyBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBar.ITM_SupplyBar_C.PreConstruct");

	UITM_SupplyBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyBar.ITM_SupplyBar_C.ExecuteUbergraph_ITM_SupplyBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_SupplyBar_C::ExecuteUbergraph_ITM_SupplyBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyBar.ITM_SupplyBar_C.ExecuteUbergraph_ITM_SupplyBar");

	UITM_SupplyBar_C_ExecuteUbergraph_ITM_SupplyBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
