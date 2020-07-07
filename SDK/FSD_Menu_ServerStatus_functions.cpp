// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_ServerStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_ServerStatus.Menu_ServerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenu_ServerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.Construct");

	UMenu_ServerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_ServerStatus_C::OnPlayerJoined(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined");

	UMenu_ServerStatus_C_OnPlayerJoined_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_ServerStatus_C::OnMissionSelected(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected");

	UMenu_ServerStatus_C_OnMissionSelected_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_ServerStatus_C::ExecuteUbergraph_Menu_ServerStatus(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus");

	UMenu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
