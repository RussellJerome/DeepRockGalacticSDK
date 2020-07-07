// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_ItemBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::FreeRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget");

	UITM_Craft_ItemBox_C_FreeRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemBox_C::CreateResources(TScriptInterface<class UCraftable>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources");

	UITM_Craft_ItemBox_C_CreateResources_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::SetCostColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor");

	UITM_Craft_ItemBox_C_SetCostColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::SetRankRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements");

	UITM_Craft_ItemBox_C_SetRankRequirements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::SetTextAndIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon");

	UITM_Craft_ItemBox_C_SetTextAndIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::SetCanUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock");

	UITM_Craft_ItemBox_C_SetCanUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable>* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemBox_C::SetData(TScriptInterface<class UCraftable>* Item, class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData");

	UITM_Craft_ItemBox_C_SetData_Params params;
	params.Item = Item;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct");

	UITM_Craft_ItemBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UITM_Craft_ItemBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITM_Craft_ItemBox_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update");

	UITM_Craft_ItemBox_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ItemBox_C::ExecuteUbergraph_ITM_Craft_ItemBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox");

	UITM_Craft_ItemBox_C_ExecuteUbergraph_ITM_Craft_ItemBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
