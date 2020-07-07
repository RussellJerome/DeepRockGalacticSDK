// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoAmmoRefillsLable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAmmoRefillsLable_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.PreConstruct");

	UHUD_BoscoAmmoRefillsLable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_BoscoAmmoRefillsLable_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.Construct");

	UHUD_BoscoAmmoRefillsLable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.ExecuteUbergraph_HUD_BoscoAmmoRefillsLable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_BoscoAmmoRefillsLable_C::ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C.ExecuteUbergraph_HUD_BoscoAmmoRefillsLable");

	UHUD_BoscoAmmoRefillsLable_C_ExecuteUbergraph_HUD_BoscoAmmoRefillsLable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
