// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_AdvancedLabel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  PreviewAs                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::SetPreviewAs(EInputSource* PreviewAs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs");

	UUI_AdvancedLabel_C_SetPreviewAs_Params params;
	params.PreviewAs = PreviewAs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Text_Tint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Key_Name_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           PC__Icon_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Controller_Icon_Tint           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::SetTints(struct FLinearColor* Text_Tint, struct FLinearColor* Key_Name_Tint, struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints");

	UUI_AdvancedLabel_C_SetTints_Params params;
	params.Text_Tint = Text_Tint;
	params.Key_Name_Tint = Key_Name_Tint;
	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Key_Name_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::SetKeyNameTint(struct FLinearColor* Key_Name_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint");

	UUI_AdvancedLabel_C_SetKeyNameTint_Params params;
	params.Key_Name_Tint = Key_Name_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PC__Icon_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Controller_Icon_Tint           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::SetIconTint(struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint");

	UUI_AdvancedLabel_C_SetIconTint_Params params;
	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Text_Tint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::SetTextTint(struct FLinearColor* Text_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint");

	UUI_AdvancedLabel_C_SetTextTint_Params params;
	params.Text_Tint = Text_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::OnNewLine(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine");

	UUI_AdvancedLabel_C_OnNewLine_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FActionIconMapping*     Icon                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_AdvancedLabel_C::OnAddIcon(class FString* Name, struct FActionIconMapping* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon");

	UUI_AdvancedLabel_C_OnAddIcon_Params params;
	params.Name = Name;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_AdvancedLabel_C::OnAddKeyName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName");

	UUI_AdvancedLabel_C_OnAddKeyName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString*                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_AdvancedLabel_C::OnAddString(class FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString");

	UUI_AdvancedLabel_C_OnAddString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
// (Event, Protected, BlueprintEvent)

void UUI_AdvancedLabel_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset");

	UUI_AdvancedLabel_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdvancedLabel_C::ExecuteUbergraph_UI_AdvancedLabel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel");

	UUI_AdvancedLabel_C_ExecuteUbergraph_UI_AdvancedLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
