// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Trading_Buying_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.GetCurrentCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentCost                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::GetCurrentCost(int* CurrentCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.GetCurrentCost");

	U_MENU_Trading_Buying_C_GetCurrentCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCost != nullptr)
		*CurrentCost = params.CurrentCost;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BuySelected
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MineralsBought                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::BuySelected(bool* MineralsBought)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BuySelected");

	U_MENU_Trading_Buying_C_BuySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MineralsBought != nullptr)
		*MineralsBought = params.MineralsBought;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.UpdateCost
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TotalCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::UpdateCost(int* TotalCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.UpdateCost");

	U_MENU_Trading_Buying_C_UpdateCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalCost != nullptr)
		*TotalCost = params.TotalCost;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.PreConstruct");

	U_MENU_Trading_Buying_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Trading_Buying_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	U_MENU_Trading_Buying_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_MENU_Trading_Buying_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	U_MENU_Trading_Buying_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Clear
// (BlueprintCallable, BlueprintEvent)

void U_MENU_Trading_Buying_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Clear");

	U_MENU_Trading_Buying_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_MENU_Trading_Buying_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Construct");

	U_MENU_Trading_Buying_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::OnCreditsChanged_Event(int* Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnCreditsChanged_Event");

	U_MENU_Trading_Buying_C_OnCreditsChanged_Event_Params params;
	params.Credits = Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::OnAmountChanged(class UTrading_Buying_Item_C** Item, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnAmountChanged");

	U_MENU_Trading_Buying_C_OnAmountChanged_Params params;
	params.Item = Item;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.ExecuteUbergraph__MENU_Trading_Buying
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_Trading_Buying_C::ExecuteUbergraph__MENU_Trading_Buying(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.ExecuteUbergraph__MENU_Trading_Buying");

	U_MENU_Trading_Buying_C_ExecuteUbergraph__MENU_Trading_Buying_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
