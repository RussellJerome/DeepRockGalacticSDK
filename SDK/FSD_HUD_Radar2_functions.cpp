// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Radar2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Radar2.HUD_Radar2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Radar2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.PreConstruct");

	UHUD_Radar2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Radar2.HUD_Radar2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Radar2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.Construct");

	UHUD_Radar2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Radar2.HUD_Radar2_C.ExecuteUbergraph_HUD_Radar2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Radar2_C::ExecuteUbergraph_HUD_Radar2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.ExecuteUbergraph_HUD_Radar2");

	UHUD_Radar2_C_ExecuteUbergraph_HUD_Radar2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
