// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_View_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMissionStat*>    InStats                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      Categories                     (Parm, OutParm, ZeroConstructor)
// TArray<class UMissionStat*>    Sorted_Stats                   (Parm, OutParm, ZeroConstructor)

void UUI_MissionStats_View_C::SortStats(TArray<class UMissionStat*>* InStats, TArray<class UTexture2D*>* Categories, TArray<class UMissionStat*>* Sorted_Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats");

	UUI_MissionStats_View_C_SortStats_Params params;

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


// Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UMissionStat*>    Assets                         (Parm, OutParm, ZeroConstructor)

void UUI_MissionStats_View_C::GetMissionStats(TArray<class UMissionStat*>* Assets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats");

	UUI_MissionStats_View_C_GetMissionStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Assets != nullptr)
		*Assets = params.Assets;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_View_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct");

	UUI_MissionStats_View_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionStats_View_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Construct");

	UUI_MissionStats_View_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.Store Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_View_C::Store_Mode(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Store Mode");

	UUI_MissionStats_View_C_Store_Mode_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** SelectedLine                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_View_C::Set_Selected_Item(class UUI_MissionStats_Item_C** SelectedLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item");

	UUI_MissionStats_View_C_Set_Selected_Item_Params params;
	params.SelectedLine = SelectedLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_View_C::OnHoverBegin_Event(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event");

	UUI_MissionStats_View_C_OnHoverBegin_Event_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_View_C::OnHoverEnd_Event(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event");

	UUI_MissionStats_View_C_OnHoverEnd_Event_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection
// (BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_View_C::Setup_Category_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection");

	UUI_MissionStats_View_C_Setup_Category_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged
// (BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_View_C::OnCategorySelectionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged");

	UUI_MissionStats_View_C_OnCategorySelectionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_View_C::ExecuteUbergraph_UI_MissionStats_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View");

	UUI_MissionStats_View_C_ExecuteUbergraph_UI_MissionStats_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
