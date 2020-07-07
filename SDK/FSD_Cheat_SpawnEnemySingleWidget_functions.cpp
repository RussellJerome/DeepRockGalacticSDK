// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SpawnEnemySingleWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCheat_SpawnEnemySingleWidget_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetListItemObject");

	UCheat_SpawnEnemySingleWidget_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetBrushColor_BG
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UCheat_SpawnEnemySingleWidget_C::GetBrushColor_BG()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.GetBrushColor_BG");

	UCheat_SpawnEnemySingleWidget_C_GetBrushColor_BG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UCheat_SpawnEnemySingleWidget_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnEntryReleased");

	UCheat_SpawnEnemySingleWidget_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnEnemySingleWidget_C::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemExpansionChanged");

	UCheat_SpawnEnemySingleWidget_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnEnemySingleWidget_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.OnListItemObjectSet");

	UCheat_SpawnEnemySingleWidget_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnEnemySingleWidget_C::BP_OnItemSelectionChanged(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.BP_OnItemSelectionChanged");

	UCheat_SpawnEnemySingleWidget_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.ExecuteUbergraph_Cheat_SpawnEnemySingleWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnEnemySingleWidget_C::ExecuteUbergraph_Cheat_SpawnEnemySingleWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnEnemySingleWidget.Cheat_SpawnEnemySingleWidget_C.ExecuteUbergraph_Cheat_SpawnEnemySingleWidget");

	UCheat_SpawnEnemySingleWidget_C_ExecuteUbergraph_Cheat_SpawnEnemySingleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
