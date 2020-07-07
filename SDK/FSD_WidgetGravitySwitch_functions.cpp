// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WidgetGravitySwitch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetGravitySwitch_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetColor");

	UWidgetGravitySwitch_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidgetGravitySwitch_C::SetPlayerName(struct FText* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetPlayerName");

	UWidgetGravitySwitch_C_SetPlayerName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
