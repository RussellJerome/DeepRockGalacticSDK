// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CroNew_GrapplingGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_CroNew_GrapplingGun_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessage");

	UHUD_CroNew_GrapplingGun_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Dist                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CroNew_GrapplingGun_C::DistanceMessage(float* Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage");

	UHUD_CroNew_GrapplingGun_C_DistanceMessage_Params params;
	params.Dist = Dist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Msg                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_CroNew_GrapplingGun_C::FailMessage(struct FText* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage");

	UHUD_CroNew_GrapplingGun_C_FailMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;
}


// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.SetText
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CroNew_GrapplingGun_C::SetText(struct FLinearColor* Color, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.SetText");

	UHUD_CroNew_GrapplingGun_C_SetText_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
