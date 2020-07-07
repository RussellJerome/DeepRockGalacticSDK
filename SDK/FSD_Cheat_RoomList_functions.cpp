// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_RoomList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_RoomList.Cheat_RoomList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_RoomList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_RoomList.Cheat_RoomList_C.Construct");

	UCheat_RoomList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_RoomList.Cheat_RoomList_C.BP_OnRefresh
// (Event, Protected, BlueprintEvent)

void UCheat_RoomList_C::BP_OnRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_RoomList.Cheat_RoomList_C.BP_OnRefresh");

	UCheat_RoomList_C_BP_OnRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_RoomList.Cheat_RoomList_C.ExecuteUbergraph_Cheat_RoomList
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_RoomList_C::ExecuteUbergraph_Cheat_RoomList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_RoomList.Cheat_RoomList_C.ExecuteUbergraph_Cheat_RoomList");

	UCheat_RoomList_C_ExecuteUbergraph_Cheat_RoomList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
