// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_WeaponName_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_WeaponName_C::UpdateLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel");

	UHUD_WeaponName_C_UpdateLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_WeaponName.HUD_WeaponName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_WeaponName_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.Construct");

	UHUD_WeaponName_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_WeaponName_C::OnItemEquipped(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped");

	UHUD_WeaponName_C_OnItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_WeaponName_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct");

	UHUD_WeaponName_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_WeaponName_C::ExecuteUbergraph_HUD_WeaponName(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName");

	UHUD_WeaponName_C_ExecuteUbergraph_HUD_WeaponName_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
