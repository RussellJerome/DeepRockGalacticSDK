// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_VanityList.Cheat_VanityList_C.Set Vanity List
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UVanityItem*>*    vanityItems                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EVanitySlot*                   Vanity_Class_type              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityList_C::Set_Vanity_List(TArray<class UVanityItem*>* vanityItems, EVanitySlot* Vanity_Class_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityList.Cheat_VanityList_C.Set Vanity List");

	UCheat_VanityList_C_Set_Vanity_List_Params params;
	params.vanityItems = vanityItems;
	params.Vanity_Class_type = Vanity_Class_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityList.Cheat_VanityList_C.On State change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVanityItem**            Vanity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVanitySlot*                   Vanity_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityList_C::On_State_change(bool* Is_Checked, class UVanityItem** Vanity, EVanitySlot* Vanity_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityList.Cheat_VanityList_C.On State change");

	UCheat_VanityList_C_On_State_change_Params params;
	params.Is_Checked = Is_Checked;
	params.Vanity = Vanity;
	params.Vanity_Type = Vanity_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_VanityList.Cheat_VanityList_C.ExecuteUbergraph_Cheat_VanityList
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_VanityList_C::ExecuteUbergraph_Cheat_VanityList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_VanityList.Cheat_VanityList_C.ExecuteUbergraph_Cheat_VanityList");

	UCheat_VanityList_C_ExecuteUbergraph_Cheat_VanityList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
