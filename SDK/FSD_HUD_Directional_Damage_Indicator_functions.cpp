// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Directional_Damage_Indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::UpdatePosition(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition");

	UHUD_Directional_Damage_Indicator_C_UpdatePosition_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::SetAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle");

	UHUD_Directional_Damage_Indicator_C_SetAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::MoveTowards(float* Value, float* End, float* Delta, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards");

	UHUD_Directional_Damage_Indicator_C_MoveTowards_Params params;
	params.Value = Value;
	params.End = End;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::Hit(float* Damage, class AActor** DamageCauser, class APlayerCharacter** Victim, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit");

	UHUD_Directional_Damage_Indicator_C_Hit_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick");

	UHUD_Directional_Damage_Indicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Directional_Damage_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct");

	UHUD_Directional_Damage_Indicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::ExecuteUbergraph_HUD_Directional_Damage_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator");

	UHUD_Directional_Damage_Indicator_C_ExecuteUbergraph_HUD_Directional_Damage_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
