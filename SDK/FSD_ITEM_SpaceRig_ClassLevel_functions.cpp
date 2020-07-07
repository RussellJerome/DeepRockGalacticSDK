// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_ClassLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITEM_SpaceRig_ClassLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct");

	UITEM_SpaceRig_ClassLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct");

	UITEM_SpaceRig_ClassLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::SetLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel");

	UITEM_SpaceRig_ClassLevel_C_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel");

	UITEM_SpaceRig_ClassLevel_C_ExecuteUbergraph_ITEM_SpaceRig_ClassLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
