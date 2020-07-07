// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateScreenPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_EnemyTargeting_C::UpdateScreenPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateScreenPosition");

	UHUD_EnemyTargeting_C_UpdateScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ClampToScreenHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         CoordinateY                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Bound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampedY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::ClampToScreenHeight(float* CoordinateY, float* Bound, float* ClampedY)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ClampToScreenHeight");

	UHUD_EnemyTargeting_C_ClampToScreenHeight_Params params;
	params.CoordinateY = CoordinateY;
	params.Bound = Bound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampedY != nullptr)
		*ClampedY = params.ClampedY;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateHealthBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::UpdateHealthBars(bool* Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateHealthBars");

	UHUD_EnemyTargeting_C_UpdateHealthBars_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth>* Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::HandleTargetDamaged(TScriptInterface<class UHealth>* Health, float* Damage, float* DamageModifier, float* HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged");

	UHUD_EnemyTargeting_C_HandleTargetDamaged_Params params;
	params.Health = Health;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateCurrentTarget
// (BlueprintCallable, BlueprintEvent)

void UHUD_EnemyTargeting_C::UpdateCurrentTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateCurrentTarget");

	UHUD_EnemyTargeting_C_UpdateCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::SetIsVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible");

	UHUD_EnemyTargeting_C_SetIsVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost
// (Event, Protected, BlueprintEvent)

void UHUD_EnemyTargeting_C::ReceiveTargetLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost");

	UHUD_EnemyTargeting_C_ReceiveTargetLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InCurrentTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::ReceiveUpdateTarget(class AActor** InCurrentTarget, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget");

	UHUD_EnemyTargeting_C_ReceiveUpdateTarget_Params params;
	params.InCurrentTarget = InCurrentTarget;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InCurrentTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::ReceiveNewTarget(class AActor** InCurrentTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget");

	UHUD_EnemyTargeting_C_ReceiveNewTarget_Params params;
	params.InCurrentTarget = InCurrentTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_EnemyTargeting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct");

	UHUD_EnemyTargeting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth>* EnemyHealth                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthRemaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::OnDamagedEnemy(TScriptInterface<class UHealth>* EnemyHealth, float* Damage, float* DamageModifier, float* HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy");

	UHUD_EnemyTargeting_C_OnDamagedEnemy_Params params;
	params.EnemyHealth = EnemyHealth;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct");

	UHUD_EnemyTargeting_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnWeakPointHitFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_EnemyTargeting_C::OnWeakPointHitFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnWeakPointHitFinished");

	UHUD_EnemyTargeting_C_OnWeakPointHitFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_C::ExecuteUbergraph_HUD_EnemyTargeting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting");

	UHUD_EnemyTargeting_C_ExecuteUbergraph_HUD_EnemyTargeting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
