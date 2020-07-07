// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Directional_Damage_IndicatorV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Directional_Damage_IndicatorV2_C::UpdatePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints");

	UHUD_Directional_Damage_IndicatorV2_C_UpdatePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         TimeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHUD_Directional_Damage_IndicatorV2_C::CalcFadeStrength(float* TimeLeft, float* HitSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength");

	UHUD_Directional_Damage_IndicatorV2_C_CalcFadeStrength_Params params;
	params.TimeLeft = TimeLeft;
	params.HitSize = HitSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          anyHealthLost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_IndicatorV2_C::OnHit(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit");

	UHUD_Directional_Damage_IndicatorV2_C_OnHit_Params params;
	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_IndicatorV2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick");

	UHUD_Directional_Damage_IndicatorV2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Directional_Damage_IndicatorV2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct");

	UHUD_Directional_Damage_IndicatorV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_IndicatorV2_C::ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2");

	UHUD_Directional_Damage_IndicatorV2_C_ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
