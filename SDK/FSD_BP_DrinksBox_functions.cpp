// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DrinksBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
// (BlueprintCallable, BlueprintEvent)

void ABP_DrinksBox_C::OnRep_DrinkableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor");

	ABP_DrinksBox_C_OnRep_DrinkableActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::IsAvailable(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable");

	ABP_DrinksBox_C_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void ABP_DrinksBox_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State");

	ABP_DrinksBox_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset**    Drinkable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::Spawn_Drink(class UDrinkableDataAsset** Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink");

	ABP_DrinksBox_C_Spawn_Drink_Params params;
	params.Drinkable = Drinkable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::OnDrinkableDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed");

	ABP_DrinksBox_C_OnDrinkableDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
// (BlueprintCallable, BlueprintEvent)

void ABP_DrinksBox_C::Fill_DrinkableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor");

	ABP_DrinksBox_C_Fill_DrinkableActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::ExecuteUbergraph_BP_DrinksBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox");

	ABP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::OnStateChanged__DelegateSignature(unsigned char* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature");

	ABP_DrinksBox_C_OnStateChanged__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C** DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature");

	ABP_DrinksBox_C_OnDrinkReady__DelegateSignature_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C**        DrinkBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DrinksBox_C::OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C** DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature");

	ABP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature_Params params;
	params.DrinkBox = DrinkBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
