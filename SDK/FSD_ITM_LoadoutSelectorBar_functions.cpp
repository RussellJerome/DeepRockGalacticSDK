// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadoutSelectorBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_LoadoutSelectorBar_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget");

	UITM_LoadoutSelectorBar_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::SetData(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData");

	UITM_LoadoutSelectorBar_C_SetData_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::SetSelected(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected");

	UITM_LoadoutSelectorBar_C_SetSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_LoadoutSelectorBar_C_BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ImageIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(class UTexture2D** Texture, int* ImageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature");

	UITM_LoadoutSelectorBar_C_BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature_Params params;
	params.Texture = Texture;
	params.ImageIndex = ImageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::SelectPressed(class UITM_LoadoutSelectButton_C** Button, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed");

	UITM_LoadoutSelectorBar_C_SelectPressed_Params params;
	params.Button = Button;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::SetLoadoutIcon(class UITM_LoadoutSelectButton_C** Button, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon");

	UITM_LoadoutSelectorBar_C_SetLoadoutIcon_Params params;
	params.Button = Button;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout
// (BlueprintCallable, BlueprintEvent)

void UITM_LoadoutSelectorBar_C::RefreshLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout");

	UITM_LoadoutSelectorBar_C_RefreshLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::SetSelectorVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible");

	UITM_LoadoutSelectorBar_C_SetSelectorVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectorBar_C::ExecuteUbergraph_ITM_LoadoutSelectorBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar");

	UITM_LoadoutSelectorBar_C_ExecuteUbergraph_ITM_LoadoutSelectorBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_LoadoutSelectorBar_C::NewLoadoutSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature");

	UITM_LoadoutSelectorBar_C_NewLoadoutSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
