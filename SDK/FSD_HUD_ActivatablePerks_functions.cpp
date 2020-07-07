// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActivatablePerks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.SetPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPerkAsset*>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUD_ActivatablePerks_C::SetPerks(TArray<class UPerkAsset*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.SetPerks");

	UHUD_ActivatablePerks_C_SetPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ActivatablePerks_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.Construct");

	UHUD_ActivatablePerks_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActivatablePerks_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.PreConstruct");

	UHUD_ActivatablePerks_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.ExecuteUbergraph_HUD_ActivatablePerks
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ActivatablePerks_C::ExecuteUbergraph_HUD_ActivatablePerks(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.ExecuteUbergraph_HUD_ActivatablePerks");

	UHUD_ActivatablePerks_C_ExecuteUbergraph_HUD_ActivatablePerks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
