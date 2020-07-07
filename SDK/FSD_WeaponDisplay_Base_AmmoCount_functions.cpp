// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_Base_AmmoCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetMaxAmmo(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo");

	UWeaponDisplay_Base_AmmoCount_C_SetMaxAmmo_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::RequestRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw");

	UWeaponDisplay_Base_AmmoCount_C_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetTotalCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount");

	UWeaponDisplay_Base_AmmoCount_C_SetTotalCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetClipCount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount");

	UWeaponDisplay_Base_AmmoCount_C_SetClipCount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChanged(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged");

	UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChanged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnClipEmountChanged(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged");

	UWeaponDisplay_Base_AmmoCount_C_OnClipEmountChanged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnCarriedAmountChanged(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged");

	UWeaponDisplay_Base_AmmoCount_C_OnCarriedAmountChanged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChange(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange");

	UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChange_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  OwningItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetComponent**       WidgetComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Initialize(class AItem** OwningItem, class UWidgetComponent** WidgetComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize");

	UWeaponDisplay_Base_AmmoCount_C_Initialize_Params params;
	params.OwningItem = OwningItem;
	params.WidgetComp = WidgetComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted");

	UWeaponDisplay_Base_AmmoCount_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
// (BlueprintCallable, BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete");

	UWeaponDisplay_Base_AmmoCount_C_OnReloadComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Max_Ammo_Changed(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed");

	UWeaponDisplay_Base_AmmoCount_C_Max_Ammo_Changed_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Total_Ammo_left_changed(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed");

	UWeaponDisplay_Base_AmmoCount_C_Total_Ammo_left_changed_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Reload_Time_Tick(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick");

	UWeaponDisplay_Base_AmmoCount_C_Reload_Time_Tick_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount");

	UWeaponDisplay_Base_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Base_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
