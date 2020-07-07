// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Altimeter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Altimeter.HUD_Altimeter_C.SetDepth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewDepth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Altimeter_C::SetDepth(int* NewDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.SetDepth");

	UHUD_Altimeter_C_SetDepth_Params params;
	params.NewDepth = NewDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Altimeter.HUD_Altimeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Altimeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.Construct");

	UHUD_Altimeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Depth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Altimeter_C::DepthChanged(int* Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged");

	UHUD_Altimeter_C_DepthChanged_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Altimeter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct");

	UHUD_Altimeter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Altimeter_C::ExecuteUbergraph_HUD_Altimeter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter");

	UHUD_Altimeter_C_ExecuteUbergraph_HUD_Altimeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
