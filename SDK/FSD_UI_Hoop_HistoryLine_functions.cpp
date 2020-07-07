// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Hoop_HistoryLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hoop_HistoryLine_C::SetScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore");

	UUI_Hoop_HistoryLine_C_SetScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Hoop_HistoryLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct");

	UUI_Hoop_HistoryLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hoop_HistoryLine_C::ExecuteUbergraph_UI_Hoop_HistoryLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine");

	UUI_Hoop_HistoryLine_C_ExecuteUbergraph_UI_Hoop_HistoryLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
