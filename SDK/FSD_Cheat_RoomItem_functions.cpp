// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_RoomItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_RoomItem.Cheat_RoomItem_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCheat_RoomItem_C::SetName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_RoomItem.Cheat_RoomItem_C.SetName");

	UCheat_RoomItem_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
