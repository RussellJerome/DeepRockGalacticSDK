// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_SideBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogDataAsset**       ShoutUpgradePurchased          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_C::SetUpgradePurchasedShout(class UDialogDataAsset** ShoutUpgradePurchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout");

	UITM_UpgGear_SideBar_C_SetUpgradePurchasedShout_Params params;
	params.ShoutUpgradePurchased = ShoutUpgradePurchased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EItemCategory                  InCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UITM_UpgGear_SideBar_C::SetItem(class UClass** InCharacterClass, class UClass** InItemClass, EItemCategory* InCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem");

	UITM_UpgGear_SideBar_C_SetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCharacterClass != nullptr)
		*InCharacterClass = params.InCharacterClass;
	if (InItemClass != nullptr)
		*InItemClass = params.InItemClass;
	if (InCategory != nullptr)
		*InCategory = params.InCategory;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Popup_YesNoPrompt_C** Prompt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_C::SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt");

	UITM_UpgGear_SideBar_C_SetYesNoPrompt_Params params;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C**    Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_C::BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_UpgGear_SideBar_C_BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_C::BuyConfirmation(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation");

	UITM_UpgGear_SideBar_C_BuyConfirmation_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_UpgGear_TierRow_C** Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_UpgGear_SideBar_C::UpgradePurchased(class UITM_UpgGear_TierRow_C** Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased");

	UITM_UpgGear_SideBar_C_UpgradePurchased_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct");

	UITM_UpgGear_SideBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_SideBar_C::ExecuteUbergraph_ITM_UpgGear_SideBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar");

	UITM_UpgGear_SideBar_C_ExecuteUbergraph_ITM_UpgGear_SideBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_UpgGear_SideBar_C::OnItemPurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature");

	UITM_UpgGear_SideBar_C_OnItemPurchased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
