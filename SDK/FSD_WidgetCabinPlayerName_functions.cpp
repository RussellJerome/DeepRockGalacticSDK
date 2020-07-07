// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WidgetCabinPlayerName_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidgetCabinPlayerName_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor");

	UWidgetCabinPlayerName_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidgetCabinPlayerName_C::SetPlayerName(struct FText* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName");

	UWidgetCabinPlayerName_C_SetPlayerName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
