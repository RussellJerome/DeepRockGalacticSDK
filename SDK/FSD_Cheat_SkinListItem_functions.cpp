// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SkinListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SkinListItem.Cheat_SkinListItem_C.BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheat_SkinListItem_C::BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SkinListItem.Cheat_SkinListItem_C.BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCheat_SkinListItem_C_BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SkinListItem.Cheat_SkinListItem_C.Setup Skin Selection Widget
// (BlueprintCallable, BlueprintEvent)

void UCheat_SkinListItem_C::Setup_Skin_Selection_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SkinListItem.Cheat_SkinListItem_C.Setup Skin Selection Widget");

	UCheat_SkinListItem_C_Setup_Skin_Selection_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SkinListItem.Cheat_SkinListItem_C.ExecuteUbergraph_Cheat_SkinListItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SkinListItem_C::ExecuteUbergraph_Cheat_SkinListItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SkinListItem.Cheat_SkinListItem_C.ExecuteUbergraph_Cheat_SkinListItem");

	UCheat_SkinListItem_C_ExecuteUbergraph_Cheat_SkinListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SkinListItem.Cheat_SkinListItem_C.OnSkinEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SkinListItem_C::OnSkinEquipped__DelegateSignature(EItemCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SkinListItem.Cheat_SkinListItem_C.OnSkinEquipped__DelegateSignature");

	UCheat_SkinListItem_C_OnSkinEquipped__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
