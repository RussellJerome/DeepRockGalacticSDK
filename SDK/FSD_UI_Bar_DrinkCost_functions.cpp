// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_DrinkCost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UResourceData*, int>* TargetMap                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Bar_DrinkCost_C::SetCostWidgets(TMap<class UResourceData*, int>* TargetMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets");

	UUI_Bar_DrinkCost_C_SetCostWidgets_Params params;
	params.TargetMap = TargetMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowUnlockPrice                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_DrinkCost_C::ShowCost(class UDrinkableDataAsset** Drinkable, bool* ShowUnlockPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost");

	UUI_Bar_DrinkCost_C_ShowCost_Params params;
	params.Drinkable = Drinkable;
	params.ShowUnlockPrice = ShowUnlockPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_DrinkCost_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct");

	UUI_Bar_DrinkCost_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsBeersFree                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_DrinkCost_C::OnFreeBeerRewardChanged(bool* IsBeersFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged");

	UUI_Bar_DrinkCost_C_OnFreeBeerRewardChanged_Params params;
	params.IsBeersFree = IsBeersFree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UResourceData*, int>* Cost                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Bar_DrinkCost_C::ShowFixedCost(TMap<class UResourceData*, int>* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost");

	UUI_Bar_DrinkCost_C_ShowFixedCost_Params params;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_DrinkCost_C::ExecuteUbergraph_UI_Bar_DrinkCost(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost");

	UUI_Bar_DrinkCost_C_ExecuteUbergraph_UI_Bar_DrinkCost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
