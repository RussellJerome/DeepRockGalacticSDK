// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DiscordRpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiscordRpc.DiscordRpc.UpdatePresence
// (Final, Native, Public, BlueprintCallable)

void UDiscordRpc::UpdatePresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.UpdatePresence");

	UDiscordRpc_UpdatePresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscordRpc.DiscordRpc.Shutdown
// (Final, Native, Public, BlueprintCallable)

void UDiscordRpc::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Shutdown");

	UDiscordRpc_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscordRpc.DiscordRpc.RunCallbacks
// (Final, Native, Public, BlueprintCallable)

void UDiscordRpc::RunCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.RunCallbacks");

	UDiscordRpc_RunCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscordRpc.DiscordRpc.Respond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 userId                         (Parm, ZeroConstructor)
// int*                           Reply                          (Parm, ZeroConstructor, IsPlainOldData)

void UDiscordRpc::Respond(class FString* userId, int* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Respond");

	UDiscordRpc_Respond_Params params;
	params.userId = userId;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscordRpc.DiscordRpc.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString*                 applicationId                  (Parm, ZeroConstructor)
// bool*                          autoRegister                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 optionalSteamId                (Parm, ZeroConstructor)

void UDiscordRpc::Initialize(class FString* applicationId, bool* autoRegister, class FString* optionalSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Initialize");

	UDiscordRpc_Initialize_Params params;
	params.applicationId = applicationId;
	params.autoRegister = autoRegister;
	params.optionalSteamId = optionalSteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscordRpc.DiscordRpc.ClearPresence
// (Final, Native, Public, BlueprintCallable)

void UDiscordRpc::ClearPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.ClearPresence");

	UDiscordRpc_ClearPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
