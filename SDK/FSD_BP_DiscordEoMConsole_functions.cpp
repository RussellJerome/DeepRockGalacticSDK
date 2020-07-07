// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DiscordEoMConsole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DiscordEoMConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay");

	ABP_DiscordEoMConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordEoMConsole_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick");

	ABP_DiscordEoMConsole_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasEoM                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordEoMConsole_C::RecieveEoMData(bool* HasEoM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData");

	ABP_DiscordEoMConsole_C_RecieveEoMData_Params params;
	params.HasEoM = HasEoM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordEoMConsole_C::ExecuteUbergraph_BP_DiscordEoMConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole");

	ABP_DiscordEoMConsole_C_ExecuteUbergraph_BP_DiscordEoMConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
