// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Crosshair_ZiplineGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::SetMinMaxAngle(float* Min, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle");

	UHUD_Crosshair_ZiplineGun_C_SetMinMaxAngle_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Crosshair_ZiplineGun_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage");

	UHUD_Crosshair_ZiplineGun_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Dist                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::DistanceMessage(float* Dist, bool* InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage");

	UHUD_Crosshair_ZiplineGun_C_DistanceMessage_Params params;
	params.Dist = Dist;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Msg                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Crosshair_ZiplineGun_C::FailMessage(struct FText* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage");

	UHUD_Crosshair_ZiplineGun_C_FailMessage_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Crosshair_ZiplineGun_C::SetText(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText");

	UHUD_Crosshair_ZiplineGun_C_SetText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct");

	UHUD_Crosshair_ZiplineGun_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun");

	UHUD_Crosshair_ZiplineGun_C_ExecuteUbergraph_HUD_Crosshair_ZiplineGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
