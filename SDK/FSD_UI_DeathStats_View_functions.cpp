// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_DeathStats_View_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMissionStat*>    InStats                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      Categories                     (Parm, OutParm, ZeroConstructor)
// TArray<class UMissionStat*>    Sorted_Stats                   (Parm, OutParm, ZeroConstructor)

void UUI_DeathStats_View_C::SortStats(TArray<class UMissionStat*>* InStats, TArray<class UTexture2D*>* Categories, TArray<class UMissionStat*>* Sorted_Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats");

	UUI_DeathStats_View_C_SortStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InStats != nullptr)
		*InStats = params.InStats;
	if (Categories != nullptr)
		*Categories = params.Categories;
	if (Sorted_Stats != nullptr)
		*Sorted_Stats = params.Sorted_Stats;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UMissionStat*>    Assets                         (Parm, OutParm, ZeroConstructor)

void UUI_DeathStats_View_C::GetMissionStats(TArray<class UMissionStat*>* Assets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats");

	UUI_DeathStats_View_C_GetMissionStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Assets != nullptr)
		*Assets = params.Assets;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathStats_View_C::Store_Mode(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode");

	UUI_DeathStats_View_C_Store_Mode_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_InfirmaryStats_Item_C** SelectedLine                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_DeathStats_View_C::Set_Selected_Item(class UUI_InfirmaryStats_Item_C** SelectedLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item");

	UUI_DeathStats_View_C_Set_Selected_Item_Params params;
	params.SelectedLine = SelectedLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathStats_View_C::SetStatsOwner(class AFSDPlayerState** Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner");

	UUI_DeathStats_View_C_SetStatsOwner_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_DeathStats_View_C::ChangeName(class FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName");

	UUI_DeathStats_View_C_ChangeName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Rebuild
// (BlueprintCallable, BlueprintEvent)

void UUI_DeathStats_View_C::Rebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Rebuild");

	UUI_DeathStats_View_C_Rebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathStats_View_C::ExecuteUbergraph_UI_DeathStats_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View");

	UUI_DeathStats_View_C_ExecuteUbergraph_UI_DeathStats_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
