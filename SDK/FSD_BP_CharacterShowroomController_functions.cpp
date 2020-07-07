// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CharacterShowroomController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown
// (Event, Protected, BlueprintEvent)

void UBP_CharacterShowroomController_C::Receive_CharacterShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown");

	UBP_CharacterShowroomController_C_Receive_CharacterShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterShowroomController_C::EquipWeapon(EItemCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon");

	UBP_CharacterShowroomController_C_EquipWeapon_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterShowroomController_C::ExecuteUbergraph_BP_CharacterShowroomController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController");

	UBP_CharacterShowroomController_C_ExecuteUbergraph_BP_CharacterShowroomController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
