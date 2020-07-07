// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_BeerBuff_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BeerBuff_Spacerig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct");

	UUI_BeerBuff_Spacerig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BeerBuff_Spacerig_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct");

	UUI_BeerBuff_Spacerig_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTemporaryBuff**         buff                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BeerBuff_Spacerig_C::On_Buff_Changed(class UTemporaryBuff** buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed");

	UUI_BeerBuff_Spacerig_C_On_Buff_Changed_Params params;
	params.buff = buff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BeerBuff_Spacerig_C::ExecuteUbergraph_UI_BeerBuff_Spacerig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig");

	UUI_BeerBuff_Spacerig_C_ExecuteUbergraph_UI_BeerBuff_Spacerig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
