// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_Overclock_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_Overclock_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct");

	UTOOLTIP_Overclock_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           Overclock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_Overclock_Item_C::SetOverclock(class UItemUpgrade** Overclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock");

	UTOOLTIP_Overclock_Item_C_SetOverclock_Params params;
	params.Overclock = Overclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_Overclock_Item_C::ExecuteUbergraph_TOOLTIP_Overclock_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item");

	UTOOLTIP_Overclock_Item_C_ExecuteUbergraph_TOOLTIP_Overclock_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
