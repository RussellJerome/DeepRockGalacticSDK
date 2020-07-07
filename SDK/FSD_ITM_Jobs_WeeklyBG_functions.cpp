// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Jobs_WeeklyBG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Jobs_WeeklyBG_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.PreConstruct");

	UITM_Jobs_WeeklyBG_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.ExecuteUbergraph_ITM_Jobs_WeeklyBG
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Jobs_WeeklyBG_C::ExecuteUbergraph_ITM_Jobs_WeeklyBG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.ExecuteUbergraph_ITM_Jobs_WeeklyBG");

	UITM_Jobs_WeeklyBG_C_ExecuteUbergraph_ITM_Jobs_WeeklyBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
