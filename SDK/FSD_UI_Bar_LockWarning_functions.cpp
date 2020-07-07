// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_LockWarning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_LockWarning_C::AnimStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop");

	UUI_Bar_LockWarning_C_AnimStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_LockWarning_C::AnimPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay");

	UUI_Bar_LockWarning_C_AnimPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_LockWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct");

	UUI_Bar_LockWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_LockWarning_C::SetPrice(class UDrinkableDataAsset** Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice");

	UUI_Bar_LockWarning_C_SetPrice_Params params;
	params.Drinkable = Drinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UResourceData*, int>* Cost                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Bar_LockWarning_C::SetFixedPrice(TMap<class UResourceData*, int>* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice");

	UUI_Bar_LockWarning_C_SetFixedPrice_Params params;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_LockWarning_C::ExecuteUbergraph_UI_Bar_LockWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning");

	UUI_Bar_LockWarning_C_ExecuteUbergraph_UI_Bar_LockWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
