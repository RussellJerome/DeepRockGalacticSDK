// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_InfoBoxAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDamageTypeDescription* Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  GrayText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULore_InfoBoxAttack_C::SetData(struct FText* Text, struct FDamageTypeDescription* Icon, struct FText* GrayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData");

	ULore_InfoBoxAttack_C_SetData_Params params;
	params.Text = Text;
	params.Icon = Icon;
	params.GrayText = GrayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBoxAttack_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct");

	ULore_InfoBoxAttack_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBoxAttack_C::SetColor(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor");

	ULore_InfoBoxAttack_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_InfoBoxAttack_C::ExecuteUbergraph_Lore_InfoBoxAttack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack");

	ULore_InfoBoxAttack_C_ExecuteUbergraph_Lore_InfoBoxAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
