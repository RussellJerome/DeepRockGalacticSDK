// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_GeneratedIcon_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_GeneratedIcon_Item_C::GetIconToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip");

	UITM_GeneratedIcon_Item_C_GetIconToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InBackgroundVisible            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetShowBackground(bool* InBackgroundVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground");

	UITM_GeneratedIcon_Item_C_SetShowBackground_Params params;
	params.InBackgroundVisible = InBackgroundVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D** InTexture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetRenderTarget(class UTextureRenderTarget2D** InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget");

	UITM_GeneratedIcon_Item_C_SetRenderTarget_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_GeneratedIcon_Item_C::ReleaseRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget");

	UITM_GeneratedIcon_Item_C_ReleaseRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InBorderVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetShowBorders(bool* InBorderVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders");

	UITM_GeneratedIcon_Item_C_SetShowBorders_Params params;
	params.InBorderVisible = InBorderVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetIconSize(int* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize");

	UITM_GeneratedIcon_Item_C_SetIconSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetShowPadlock(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock");

	UITM_GeneratedIcon_Item_C_SetShowPadlock_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::SetBorderColor(TEnumAsByte<ENUM_MenuColors>* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor");

	UITM_GeneratedIcon_Item_C_SetBorderColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct");

	UITM_GeneratedIcon_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ShowAsItem(class UVanityItem** Item, class UPlayerCharacterID** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem");

	UITM_GeneratedIcon_Item_C_ShowAsItem_Params params;
	params.Item = Item;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickaxePart**           part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPickaxePartLocation*          PickaxePartLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ShowAsPickAxePart(class UPickaxePart** part, EPickaxePartLocation* PickaxePartLocation, class UPlayerCharacterID** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart");

	UITM_GeneratedIcon_Item_C_ShowAsPickAxePart_Params params;
	params.part = part;
	params.PickaxePartLocation = PickaxePartLocation;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ShowAsTexture(class UTexture2D** Texture, struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture");

	UITM_GeneratedIcon_Item_C_ShowAsTexture_Params params;
	params.Texture = Texture;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface**     Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ShowAsMaterial(class UMaterialInterface** Material, struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial");

	UITM_GeneratedIcon_Item_C_ShowAsMaterial_Params params;
	params.Material = Material;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                AndSwitchTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::HideIcon(class UWidget** AndSwitchTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon");

	UITM_GeneratedIcon_Item_C_HideIcon_Params params;
	params.AndSwitchTo = AndSwitchTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>* Material                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ShowAsSoftMaterial(TSoftObjectPtr<class UMaterialInterface>* Material, struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial");

	UITM_GeneratedIcon_Item_C_ShowAsSoftMaterial_Params params;
	params.Material = Material;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_GeneratedIcon_Item_C::ExecuteUbergraph_ITM_GeneratedIcon_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item");

	UITM_GeneratedIcon_Item_C_ExecuteUbergraph_ITM_GeneratedIcon_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
