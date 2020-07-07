// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Hoop_History_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            History_Count                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Hoop_History_C::GetHistoryCount(int* History_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount");

	UUI_Hoop_History_C_GetHistoryCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (History_Count != nullptr)
		*History_Count = params.History_Count;
}


// Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
// (BlueprintCallable, BlueprintEvent)

void UUI_Hoop_History_C::OnRep_Scores()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores");

	UUI_Hoop_History_C_OnRep_Scores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hoop_History.UI_Hoop_History_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Hoop_History_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.Construct");

	UUI_Hoop_History_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>*                   Scores                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Hoop_History_C::UpdateScores(TArray<int>* Scores)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores");

	UUI_Hoop_History_C_UpdateScores_Params params;
	params.Scores = Scores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hoop_History_C::ExecuteUbergraph_UI_Hoop_History(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History");

	UUI_Hoop_History_C_ExecuteUbergraph_UI_Hoop_History_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
