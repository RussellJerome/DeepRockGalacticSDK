// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EquipItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EquipItem_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnInitialized");

	UTutorial_Hint_EquipItem_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_EquipItem_C::ItemEquipped(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ItemEquipped");

	UTutorial_Hint_EquipItem_C_ItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EquipItem_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ReceiveOnHidden");

	UTutorial_Hint_EquipItem_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ExecuteUbergraph_Tutorial_Hint_EquipItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_EquipItem_C::ExecuteUbergraph_Tutorial_Hint_EquipItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipItem.Tutorial_Hint_EquipItem_C.ExecuteUbergraph_Tutorial_Hint_EquipItem");

	UTutorial_Hint_EquipItem_C_ExecuteUbergraph_Tutorial_Hint_EquipItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
