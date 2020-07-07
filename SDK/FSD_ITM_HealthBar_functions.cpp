// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_HealthBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_HealthBar.ITM_HealthBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HealthBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HealthBar.ITM_HealthBar_C.PreConstruct");

	UITM_HealthBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_HealthBar.ITM_HealthBar_C.SetHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HealthBar_C::SetHealth(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HealthBar.ITM_HealthBar_C.SetHealth");

	UITM_HealthBar_C_SetHealth_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_HealthBar.ITM_HealthBar_C.ExecuteUbergraph_ITM_HealthBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_HealthBar_C::ExecuteUbergraph_ITM_HealthBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_HealthBar.ITM_HealthBar_C.ExecuteUbergraph_ITM_HealthBar");

	UITM_HealthBar_C_ExecuteUbergraph_ITM_HealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
