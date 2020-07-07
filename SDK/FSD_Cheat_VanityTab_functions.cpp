// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityTab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_VanityTab.Cheat_VanityTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_VanityTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityTab.Cheat_VanityTab_C.Construct");

	UCheat_VanityTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityTab.Cheat_VanityTab_C.Fill vanity List By Class
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityTab_C::Fill_vanity_List_By_Class(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityTab.Cheat_VanityTab_C.Fill vanity List By Class");

	UCheat_VanityTab_C_Fill_vanity_List_By_Class_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityTab.Cheat_VanityTab_C.Set Vanity List From slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EVanitySlot*                   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Player_class                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCheat_VanityList_C**    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCheat_VanityTab_C::Set_Vanity_List_From_slot(EVanitySlot* Slot, class UClass** Player_class, class UCheat_VanityList_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityTab.Cheat_VanityTab_C.Set Vanity List From slot");

	UCheat_VanityTab_C_Set_Vanity_List_From_slot_Params params;
	params.Slot = Slot;
	params.Player_class = Player_class;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityTab.Cheat_VanityTab_C.ExecuteUbergraph_Cheat_VanityTab
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityTab_C::ExecuteUbergraph_Cheat_VanityTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityTab.Cheat_VanityTab_C.ExecuteUbergraph_Cheat_VanityTab");

	UCheat_VanityTab_C_ExecuteUbergraph_Cheat_VanityTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
