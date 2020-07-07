// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_SchematicList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Forge_SchematicList_C::AddSeparator(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator");

	UUI_Forge_SchematicList_C_AddSeparator_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_SchematicList_C::PopulateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList");

	UUI_Forge_SchematicList_C_PopulateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InNextSchematic                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_C::TryAddSeparator(class USchematic** InNextSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator");

	UUI_Forge_SchematicList_C_TryAddSeparator_Params params;
	params.InNextSchematic = InNextSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USchematic**             Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutOrder                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutName                        (Parm, OutParm)

void UUI_Forge_SchematicList_C::GetCategoryOrder(class USchematic** Schematic, int* OutOrder, struct FText* OutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder");

	UUI_Forge_SchematicList_C_GetCategoryOrder_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOrder != nullptr)
		*OutOrder = params.OutOrder;
	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Forge_SchematicList_C::AddNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext");

	UUI_Forge_SchematicList_C_AddNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_SchematicList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh");

	UUI_Forge_SchematicList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.SortMethod
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Schematic1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USchematic**             Schematic2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FirstIsLarger                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_C::SortMethod(class USchematic** Schematic1, class USchematic** Schematic2, bool* FirstIsLarger)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.SortMethod");

	UUI_Forge_SchematicList_C_SortMethod_Params params;
	params.Schematic1 = Schematic1;
	params.Schematic2 = Schematic2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstIsLarger != nullptr)
		*FirstIsLarger = params.FirstIsLarger;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Forge_SchematicList_C::ItemClicked(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked");

	UUI_Forge_SchematicList_C_ItemClicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_C::AddSchematic(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic");

	UUI_Forge_SchematicList_C_AddSchematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_SchematicList_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear");

	UUI_Forge_SchematicList_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_SchematicList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct");

	UUI_Forge_SchematicList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_C::ExecuteUbergraph_UI_Forge_SchematicList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList");

	UUI_Forge_SchematicList_C_ExecuteUbergraph_UI_Forge_SchematicList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Forge_SchematicList_C::OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature");

	UUI_Forge_SchematicList_C_OnItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
