// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SpaceRig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.Construct");

	UHUD_SpaceRig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1
// (BlueprintCallable, BlueprintEvent)

void UHUD_SpaceRig_C::OnCountdownCompleted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1");

	UHUD_SpaceRig_C_OnCountdownCompleted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_C::OnCameraModeChanged_Event(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event");

	UHUD_SpaceRig_C_OnCameraModeChanged_Event_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       AffectedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_C::OnTemporaryBuffChanged(class UTemporaryBuff** buff, class APlayerCharacter** AffectedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged");

	UHUD_SpaceRig_C_OnTemporaryBuffChanged_Params params;
	params.buff = buff;
	params.AffectedPlayer = AffectedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SpaceRig_C::ExecuteUbergraph_HUD_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig");

	UHUD_SpaceRig_C_ExecuteUbergraph_HUD_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
