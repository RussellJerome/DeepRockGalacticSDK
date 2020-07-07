// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerClass_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         Buf                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetBuf(class UTemporaryBuff** Buf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf");

	UHUD_PlayerClass_Icon_C_SetBuf_Params params;
	params.Buf = Buf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsServer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetIsServer(bool* IsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer");

	UHUD_PlayerClass_Icon_C_SetIsServer_Params params;
	params.IsServer = IsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 playerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TimesRetired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsServer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTemporaryBuff**         Buf                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetData(class UClass** playerClass, int* TimesRetired, bool* IsServer, class UTemporaryBuff** Buf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData");

	UHUD_PlayerClass_Icon_C_SetData_Params params;
	params.playerClass = playerClass;
	params.TimesRetired = TimesRetired;
	params.IsServer = IsServer;
	params.Buf = Buf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerClass_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct");

	UHUD_PlayerClass_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 playerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::FromPlayerState(class APlayerState** PlayerState, class UClass** playerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState");

	UHUD_PlayerClass_Icon_C_FromPlayerState_Params params;
	params.PlayerState = PlayerState;
	params.playerClass = playerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCharacter**       AffectedPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::OnTemporaryBuffChanged(class UTemporaryBuff** buff, class APlayerCharacter** AffectedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged");

	UHUD_PlayerClass_Icon_C_OnTemporaryBuffChanged_Params params;
	params.buff = buff;
	params.AffectedPlayer = AffectedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerClass_Icon_C::ExecuteUbergraph_HUD_PlayerClass_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon");

	UHUD_PlayerClass_Icon_C_ExecuteUbergraph_HUD_PlayerClass_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
