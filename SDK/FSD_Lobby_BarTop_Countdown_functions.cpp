// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lobby_BarTop_Countdown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobby_BarTop_Countdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct");

	ULobby_BarTop_Countdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::CountDownChanged(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged");

	ULobby_BarTop_Countdown_C_CountDownChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::TimerChanged(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged");

	ULobby_BarTop_Countdown_C_TimerChanged_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::HostCoundownChanged(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged");

	ULobby_BarTop_Countdown_C_HostCoundownChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::CustomEvent(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent");

	ULobby_BarTop_Countdown_C_CustomEvent_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct");

	ULobby_BarTop_Countdown_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobby_BarTop_Countdown_C::ExecuteUbergraph_Lobby_BarTop_Countdown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown");

	ULobby_BarTop_Countdown_C_ExecuteUbergraph_Lobby_BarTop_Countdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
