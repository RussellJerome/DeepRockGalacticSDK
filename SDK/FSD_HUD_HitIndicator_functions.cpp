// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_HitIndicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowKillImage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitIndicator_C::StartAnimation(int* Priority, float* Scale, struct FLinearColor* Color, bool* ShowKillImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation");

	UHUD_HitIndicator_C_StartAnimation_Params params;
	params.Priority = Priority;
	params.Scale = Scale;
	params.Color = Color;
	params.ShowKillImage = ShowKillImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth>* EnemyHealth                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitIndicator_C::OnDamagedEnemy_Event(TScriptInterface<class UHealth>* EnemyHealth, float* Damage, float* DamageModifier, float* HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event");

	UHUD_HitIndicator_C_OnDamagedEnemy_Event_Params params;
	params.EnemyHealth = EnemyHealth;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_HitIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.Construct");

	UHUD_HitIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimStarted
// (BlueprintCallable, BlueprintEvent)

void UHUD_HitIndicator_C::OnHitAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimStarted");

	UHUD_HitIndicator_C_OnHitAnimStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_HitIndicator_C::OnHitAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.OnHitAnimFinished");

	UHUD_HitIndicator_C_OnHitAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitIndicator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.PreConstruct");

	UHUD_HitIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_HitIndicator_C::ExecuteUbergraph_HUD_HitIndicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator");

	UHUD_HitIndicator_C_ExecuteUbergraph_HUD_HitIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
