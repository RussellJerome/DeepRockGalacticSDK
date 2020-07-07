// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ObjectiveBox_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.UpdateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  InCounterText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             InCounterIcon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::UpdateText(struct FText* InText, struct FText* InCounterText, class UTexture2D** InCounterIcon, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.UpdateText");

	UHUD_ObjectiveBox_Item_C_UpdateText_Params params;
	params.InText = InText;
	params.InCounterText = InCounterText;
	params.InCounterIcon = InCounterIcon;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.Set Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsPrimary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::Set_Objective(class UObjective** Objective, bool* IsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.Set Objective");

	UHUD_ObjectiveBox_Item_C_Set_Objective_Params params;
	params.Objective = Objective;
	params.IsPrimary = IsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.OnObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::OnObjectiveUpdated(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.OnObjectiveUpdated");

	UHUD_ObjectiveBox_Item_C_OnObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct");

	UHUD_ObjectiveBox_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.SetCustom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::SetCustom(struct FText* Text, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.SetCustom");

	UHUD_ObjectiveBox_Item_C_SetCustom_Params params;
	params.Text = Text;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::ExecuteUbergraph_HUD_ObjectiveBox_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item");

	UHUD_ObjectiveBox_Item_C_ExecuteUbergraph_HUD_ObjectiveBox_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
