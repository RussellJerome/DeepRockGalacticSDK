// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Health_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Health_Base.HUD_Health_Base_C.SetHealthBarAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::SetHealthBarAlpha(float* alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.SetHealthBarAlpha");

	UHUD_Health_Base_C_SetHealthBarAlpha_Params params;
	params.alpha = alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_Health_Base_C::HasLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth");

	UHUD_Health_Base_C_HasLowHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::HealthChanged(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged");

	UHUD_Health_Base_C_HealthChanged_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerHealthComponent** HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Health_Base_C::Bind_Health_Component(class UPlayerHealthComponent** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component");

	UHUD_Health_Base_C_Bind_Health_Component_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct");

	UHUD_Health_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::Set_Health_Pct(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct");

	UHUD_Health_Base_C_Set_Health_Pct_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component
// (BlueprintCallable, BlueprintEvent)

void UHUD_Health_Base_C::Unbind_Health_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component");

	UHUD_Health_Base_C_Unbind_Health_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::Bind_To_Player(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player");

	UHUD_Health_Base_C_Bind_To_Player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isRegenerating                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::OnHealthRegeneratingChanged_Event(bool* isRegenerating)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event");

	UHUD_Health_Base_C_OnHealthRegeneratingChanged_Event_Params params;
	params.isRegenerating = isRegenerating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged
// (BlueprintCallable, BlueprintEvent)

void UHUD_Health_Base_C::Unbind_HealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged");

	UHUD_Health_Base_C_Unbind_HealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed
// (BlueprintCallable, BlueprintEvent)

void UHUD_Health_Base_C::Unbind_Regenerating_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed");

	UHUD_Health_Base_C_Unbind_Regenerating_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Tick");

	UHUD_Health_Base_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Health_Base_C::ExecuteUbergraph_HUD_Health_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base");

	UHUD_Health_Base_C_ExecuteUbergraph_HUD_Health_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
