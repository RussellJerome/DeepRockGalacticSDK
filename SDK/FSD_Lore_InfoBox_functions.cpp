// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_InfoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_InfoBox.Lore_InfoBox_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FObjectiveMissionIcon*  Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  GrayText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_InfoBox_C::SetData(struct FText* Text, struct FObjectiveMissionIcon* Icon, struct FText* GrayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBox.Lore_InfoBox_C.SetData");

	ULore_InfoBox_C_SetData_Params params;
	params.Text = Text;
	params.Icon = Icon;
	params.GrayText = GrayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct");

	ULore_InfoBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBox.Lore_InfoBox_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBox_C::SetColor(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBox.Lore_InfoBox_C.SetColor");

	ULore_InfoBox_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBox_C::ExecuteUbergraph_Lore_InfoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox");

	ULore_InfoBox_C_ExecuteUbergraph_Lore_InfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
