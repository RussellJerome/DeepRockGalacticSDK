// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_PatchNotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_PatchNotes.MENU_PatchNotes_C.OnClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_PatchNotes_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_PatchNotes.MENU_PatchNotes_C.OnClosed");

	UMENU_PatchNotes_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_PatchNotes.MENU_PatchNotes_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_PatchNotes_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_PatchNotes.MENU_PatchNotes_C.OnShown");

	UMENU_PatchNotes_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_PatchNotes.MENU_PatchNotes_C.EnableMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ModActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_PatchNotes_C::EnableMod(class UClass** ModActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_PatchNotes.MENU_PatchNotes_C.EnableMod");

	UMENU_PatchNotes_C_EnableMod_Params params;
	params.ModActor = ModActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_PatchNotes.MENU_PatchNotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_PatchNotes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_PatchNotes.MENU_PatchNotes_C.Construct");

	UMENU_PatchNotes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_PatchNotes.MENU_PatchNotes_C.ExecuteUbergraph_MENU_PatchNotes
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_PatchNotes_C::ExecuteUbergraph_MENU_PatchNotes(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_PatchNotes.MENU_PatchNotes_C.ExecuteUbergraph_MENU_PatchNotes");

	UMENU_PatchNotes_C_ExecuteUbergraph_MENU_PatchNotes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
