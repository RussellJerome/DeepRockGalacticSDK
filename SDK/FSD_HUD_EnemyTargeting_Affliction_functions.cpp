// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_Affliction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent** InPawnAfflictions              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_EnemyTargeting_Affliction_C::UpdateTarget(class UPawnAfflictionComponent** InPawnAfflictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget");

	UHUD_EnemyTargeting_Affliction_C_UpdateTarget_Params params;
	params.InPawnAfflictions = InPawnAfflictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Inactive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Affliction_C::SetActive(bool* Inactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive");

	UHUD_EnemyTargeting_Affliction_C_SetActive_Params params;
	params.Inactive = Inactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_EnemyTargeting_Affliction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct");

	UHUD_EnemyTargeting_Affliction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Affliction_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct");

	UHUD_EnemyTargeting_Affliction_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_EnemyTargeting_Affliction_C::OnFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished");

	UHUD_EnemyTargeting_Affliction_C_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Affliction_C::ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction");

	UHUD_EnemyTargeting_Affliction_C_ExecuteUbergraph_HUD_EnemyTargeting_Affliction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
