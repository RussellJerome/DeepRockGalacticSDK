// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_Bosco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::SetVisibilityIfVisibleMode(ESlateVisibility* InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode");

	UHUD_TeamDisplay_Bosco_C_SetVisibilityIfVisibleMode_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentCharges                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxCharges                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::UpdateReviveCharges(int* CurrentCharges, int* MaxCharges)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges");

	UHUD_TeamDisplay_Bosco_C_UpdateReviveCharges_Params params;
	params.CurrentCharges = CurrentCharges;
	params.MaxCharges = MaxCharges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct");

	UHUD_TeamDisplay_Bosco_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TeamDisplay_Bosco_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct");

	UHUD_TeamDisplay_Bosco_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco**                 Bosco                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnBoscoChanged(class ABosco** Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged");

	UHUD_TeamDisplay_Bosco_C_OnBoscoChanged_Params params;
	params.Bosco = Bosco;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDroneAIState*                 aCurrentState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnStateChanged(EDroneAIState* aCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged");

	UHUD_TeamDisplay_Bosco_C_OnStateChanged_Params params;
	params.aCurrentState = aCurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::Update_State_Icon(class UTexture2D** Texture, struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon");

	UHUD_TeamDisplay_Bosco_C_Update_State_Icon_Params params;
	params.Texture = Texture;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ReviveCount                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnReviveused(int* ReviveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused");

	UHUD_TeamDisplay_Bosco_C_OnReviveused_Params params;
	params.ReviveCount = ReviveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_Bosco_C::UpdateHUDVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility");

	UHUD_TeamDisplay_Bosco_C_UpdateHUDVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_Bosco_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed");

	UHUD_TeamDisplay_Bosco_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased
// (BlueprintCallable, BlueprintEvent)

void UHUD_TeamDisplay_Bosco_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased");

	UHUD_TeamDisplay_Bosco_C_OnLaserPointerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EHUDVisibilityMode*            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, EHUDVisibilityMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature");

	UHUD_TeamDisplay_Bosco_C_BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::ExecuteUbergraph_HUD_TeamDisplay_Bosco(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco");

	UHUD_TeamDisplay_Bosco_C_ExecuteUbergraph_HUD_TeamDisplay_Bosco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
