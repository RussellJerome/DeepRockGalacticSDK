// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Promotion_Console_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C** InPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Promotion_Console_C::OnOpenConsole(class ABP_PlayerController_SpaceRig_C** InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole");

	ABP_Promotion_Console_C_OnOpenConsole_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Promotion_Console_C::ExecuteUbergraph_BP_Promotion_Console(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console");

	ABP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
