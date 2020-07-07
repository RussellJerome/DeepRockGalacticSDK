// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Reward_Background_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematicCategory**     InSchematicCategory            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::SetCategory(class USchematicCategory** InSchematicCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetCategory");

	UUI_CoreInfuser_Reward_Background_C_SetCategory_Params params;
	params.InSchematicCategory = InSchematicCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::SetSize(float* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetSize");

	UUI_CoreInfuser_Reward_Background_C_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::SetHovered(bool* InHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetHovered");

	UUI_CoreInfuser_Reward_Background_C_SetHovered_Params params;
	params.InHovering = InHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetAngled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Angled                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::SetAngled(bool* Angled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.SetAngled");

	UUI_CoreInfuser_Reward_Background_C_SetAngled_Params params;
	params.Angled = Angled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.PreConstruct");

	UUI_CoreInfuser_Reward_Background_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Background
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Background_C::ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Background");

	UUI_CoreInfuser_Reward_Background_C_ExecuteUbergraph_UI_CoreInfuser_Reward_Background_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
