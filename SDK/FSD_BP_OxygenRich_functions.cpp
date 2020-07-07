// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_OxygenRich_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OxygenRich.BP_OxygenRich_C.StartLogic
// (Event, Protected, BlueprintEvent)

void UBP_OxygenRich_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.StartLogic");

	UBP_OxygenRich_C_StartLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OxygenRich_C::PlayerSpawned(class APlayerCharacter** PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned");

	UBP_OxygenRich_C_PlayerSpawned_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OxygenRich_C::ExecuteUbergraph_BP_OxygenRich(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich");

	UBP_OxygenRich_C_ExecuteUbergraph_BP_OxygenRich_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
