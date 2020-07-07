// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Schematic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_Schematic.UI_Forge_Schematic_C.ReleaseRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Schematic_C::ReleaseRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.ReleaseRenderTarget");

	UUI_Forge_Schematic_C_ReleaseRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PrepareRevealAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Schematic_C::PrepareRevealAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.PrepareRevealAnim");

	UUI_Forge_Schematic_C_PrepareRevealAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PlayRevealAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::PlayRevealAnim(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.PlayRevealAnim");

	UUI_Forge_Schematic_C_PlayRevealAnim_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USchematicCategory*      Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::GetCategory(class USchematicCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetCategory");

	UUI_Forge_Schematic_C_GetCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemReset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::OnItemReset(class USchematic** Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemReset");

	UUI_Forge_Schematic_C_OnItemReset_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetHovering
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::SetHovering(bool* InHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetHovering");

	UUI_Forge_Schematic_C_SetHovering_Params params;
	params.InHovering = InHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.TryBuildSchematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::TryBuildSchematic(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.TryBuildSchematic");

	UUI_Forge_Schematic_C_TryBuildSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::OnItemChanged(class USchematic** Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemChanged");

	UUI_Forge_Schematic_C_OnItemChanged_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetSchematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USchematic*              Schematic                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::GetSchematic(class USchematic** Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.GetSchematic");

	UUI_Forge_Schematic_C_GetSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Schematic != nullptr)
		*Schematic = params.Schematic;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RefreshImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::Refresh(bool* RefreshImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.Refresh");

	UUI_Forge_Schematic_C_Refresh_Params params;
	params.RefreshImage = RefreshImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::SetSchematic(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.SetSchematic");

	UUI_Forge_Schematic_C_SetSchematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Schematic_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Schematic_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Schematic_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_Forge_Schematic_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_Schematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.Construct");

	UUI_Forge_Schematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.PreConstruct");

	UUI_Forge_Schematic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.GenerateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::GenerateIcon(class UVanityItem** Item, class UPlayerCharacterID** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.GenerateIcon");

	UUI_Forge_Schematic_C_GenerateIcon_Params params;
	params.Item = Item;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.ExecuteUbergraph_UI_Forge_Schematic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_C::ExecuteUbergraph_UI_Forge_Schematic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.ExecuteUbergraph_UI_Forge_Schematic");

	UUI_Forge_Schematic_C_ExecuteUbergraph_UI_Forge_Schematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Forge_Schematic_C::OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemClicked__DelegateSignature");

	UUI_Forge_Schematic_C_OnItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Forge_Schematic_C::OnItemUnhovered__DelegateSignature(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemUnhovered__DelegateSignature");

	UUI_Forge_Schematic_C_OnItemUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Forge_Schematic_C::OnItemHovered__DelegateSignature(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic.UI_Forge_Schematic_C.OnItemHovered__DelegateSignature");

	UUI_Forge_Schematic_C_OnItemHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
