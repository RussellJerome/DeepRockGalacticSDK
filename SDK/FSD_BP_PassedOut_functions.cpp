// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PassedOut_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllPassedOut                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PassedOut_C::AllPassedOut(bool* AllPassedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.AllPassedOut");

	UBP_PassedOut_C_AllPassedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllPassedOut != nullptr)
		*AllPassedOut = params.AllPassedOut;
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PassedOut_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay");

	UBP_PassedOut_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_PassedOut_C::BeginFadeToBlack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack");

	UBP_PassedOut_C_BeginFadeToBlack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
// (Event, Protected, BlueprintEvent)

void UBP_PassedOut_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter");

	UBP_PassedOut_C_ReceiveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
// (Event, Protected, BlueprintEvent)

void UBP_PassedOut_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit");

	UBP_PassedOut_C_ReceiveStateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
// (BlueprintCallable, BlueprintEvent)

void UBP_PassedOut_C::Turn_Off_Juke_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box");

	UBP_PassedOut_C_Turn_Off_Juke_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
// (BlueprintCallable, BlueprintEvent)

void UBP_PassedOut_C::Remove_Drinking_Mugs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs");

	UBP_PassedOut_C_Remove_Drinking_Mugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
// (Event, Protected, BlueprintEvent)

void UBP_PassedOut_C::ReceiveTeamPassedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut");

	UBP_PassedOut_C_ReceiveTeamPassedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PassedOut_C::ExecuteUbergraph_BP_PassedOut(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut");

	UBP_PassedOut_C_ExecuteUbergraph_BP_PassedOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
