// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Trading_Selling_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SellSelectedItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Minerals_Sold                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Selling_C::SellSelectedItems(bool* Minerals_Sold)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SellSelectedItems");

	U_MENU_Trading_Selling_C_SellSelectedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minerals_Sold != nullptr)
		*Minerals_Sold = params.Minerals_Sold;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.UpdateValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Selling_C::UpdateValue(int* CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.UpdateValue");

	U_MENU_Trading_Selling_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SetResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UResourceData*>   Resources                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTrading_Selling_Item_C*> Items                          (Parm, OutParm, ZeroConstructor)

void U_MENU_Trading_Selling_C::SetResources(TArray<class UResourceData*>* Resources, TArray<class UTrading_Selling_Item_C*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SetResources");

	U_MENU_Trading_Selling_C_SetResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resources != nullptr)
		*Resources = params.Resources;
	if (Items != nullptr)
		*Items = params.Items;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Selling_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.PreConstruct");

	U_MENU_Trading_Selling_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.OnAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Selling_C::OnAmountChanged(class UTrading_Selling_Item_C** Item, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.OnAmountChanged");

	U_MENU_Trading_Selling_C_OnAmountChanged_Params params;
	params.Item = Item;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Trading_Selling_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	U_MENU_Trading_Selling_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Trading_Selling_C::BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	U_MENU_Trading_Selling_C_BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_MENU_Trading_Selling_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.Construct");

	U_MENU_Trading_Selling_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.ExecuteUbergraph__MENU_Trading_Selling
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Selling_C::ExecuteUbergraph__MENU_Trading_Selling(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.ExecuteUbergraph__MENU_Trading_Selling");

	U_MENU_Trading_Selling_C_ExecuteUbergraph__MENU_Trading_Selling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
