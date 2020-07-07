// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CabinOwnerSign_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_CabinOwnerSign_C::SetPlayerName(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName");

	ABP_CabinOwnerSign_C_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CabinOwnerSign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript");

	ABP_CabinOwnerSign_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CabinOwnerSign_C::SetCabinOwner(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner");

	ABP_CabinOwnerSign_C_SetCabinOwner_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_CabinOwnerSign_C::ChangeName(class FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName");

	ABP_CabinOwnerSign_C_ChangeName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CabinOwnerSign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay");

	ABP_CabinOwnerSign_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CabinOwnerSign_C::ExecuteUbergraph_BP_CabinOwnerSign(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign");

	ABP_CabinOwnerSign_C_ExecuteUbergraph_BP_CabinOwnerSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
