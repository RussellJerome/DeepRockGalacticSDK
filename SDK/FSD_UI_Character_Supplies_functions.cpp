// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Character_Supplies_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Character_Supplies_C::HandleVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity");

	UUI_Character_Supplies_C_HandleVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Supplies.UI_Character_Supplies_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Supplies_C::SetData(class AFSDPlayerState** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.SetData");

	UUI_Character_Supplies_C_SetData_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ammoStatus01                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         healthStatus01                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Supplies_C::OnSupplyStatusChangedEvent(float* ammoStatus01, float* healthStatus01)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent");

	UUI_Character_Supplies_C_OnSupplyStatusChangedEvent_Params params;
	params.ammoStatus01 = ammoStatus01;
	params.healthStatus01 = healthStatus01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Supplies_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct");

	UUI_Character_Supplies_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Supplies_C::ExecuteUbergraph_UI_Character_Supplies(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies");

	UUI_Character_Supplies_C_ExecuteUbergraph_UI_Character_Supplies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
