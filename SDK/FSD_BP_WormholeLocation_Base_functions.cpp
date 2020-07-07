// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_WormholeLocation_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerEnterLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_Base_C::OnPlayerEnterLocation(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerEnterLocation");

	ABP_WormholeLocation_Base_C_OnPlayerEnterLocation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerLeaveLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_Base_C::OnPlayerLeaveLocation(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerLeaveLocation");

	ABP_WormholeLocation_Base_C_OnPlayerLeaveLocation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.ExecuteUbergraph_BP_WormholeLocation_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WormholeLocation_Base_C::ExecuteUbergraph_BP_WormholeLocation_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.ExecuteUbergraph_BP_WormholeLocation_Base");

	ABP_WormholeLocation_Base_C_ExecuteUbergraph_BP_WormholeLocation_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
