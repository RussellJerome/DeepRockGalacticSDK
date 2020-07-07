// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SimulatePlayerCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C.BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SimulatePlayerCount_C::BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C.BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature");

	UCheat_SimulatePlayerCount_C_BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C.ExecuteUbergraph_Cheat_SimulatePlayerCount
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SimulatePlayerCount_C::ExecuteUbergraph_Cheat_SimulatePlayerCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SimulatePlayerCount.Cheat_SimulatePlayerCount_C.ExecuteUbergraph_Cheat_SimulatePlayerCount");

	UCheat_SimulatePlayerCount_C_ExecuteUbergraph_Cheat_SimulatePlayerCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
