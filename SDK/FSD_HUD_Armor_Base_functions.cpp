// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Armor_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Base_C::ArmorChanged(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged");

	UHUD_Armor_Base_C_ArmorChanged_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponent**       HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Armor_Base_C::Bind_To_Health_Component(class UHealthComponent** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component");

	UHUD_Armor_Base_C_Bind_To_Health_Component_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct");

	UHUD_Armor_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component
// (BlueprintCallable, BlueprintEvent)

void UHUD_Armor_Base_C::Unbind_Health_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component");

	UHUD_Armor_Base_C_Unbind_Health_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Base_C::Set_Armor_Pct(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct");

	UHUD_Armor_Base_C_Set_Armor_Pct_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Base_C::Bind_To_Player(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player");

	UHUD_Armor_Base_C_Bind_To_Player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Base_C::ExecuteUbergraph_HUD_Armor_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base");

	UHUD_Armor_Base_C_ExecuteUbergraph_HUD_Armor_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
