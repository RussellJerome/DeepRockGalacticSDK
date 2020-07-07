// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Schematic_OwnerIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::FromActorClass(class UClass** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass");

	UUI_Forge_Schematic_OwnerIcon_C_FromActorClass_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemID**                ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::FromItemID(class UItemID** ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID");

	UUI_Forge_Schematic_OwnerIcon_C_FromItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::SetIconAndVisibility(class UTexture2D** Texture, struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility");

	UUI_Forge_Schematic_OwnerIcon_C_SetIconAndVisibility_Params params;
	params.Texture = Texture;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::FromSchematic(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic");

	UUI_Forge_Schematic_OwnerIcon_C_FromSchematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InHeight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::SetMaxSize(int* InWidth, int* InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize");

	UUI_Forge_Schematic_OwnerIcon_C_SetMaxSize_Params params;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct");

	UUI_Forge_Schematic_OwnerIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Schematic_OwnerIcon_C::ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon");

	UUI_Forge_Schematic_OwnerIcon_C_ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
